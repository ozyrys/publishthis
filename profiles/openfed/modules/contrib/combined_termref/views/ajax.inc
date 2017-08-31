<?php

/**
 * Page callback for combined_termref taxonomy autocomplete.
 *
 * This is basically a copy of views_ajax_autocomplete_taxonomy(), with very
 * small changes to make it work with multiple vids.
 *
 * @param $vid
 *   The vocabulary ids of the tags which should be returned.
 *
 * @param $tags_entered
 *   The comma-separated string of tags entered by the user.
 *
 * @see taxonomy_autocomplete()
 * @see views_ajax_autocomplete_taxonomy()
 */
function combined_termref_ajax_autocomplete_taxonomy($vid, $tags_entered = '') {
  // The user enters a comma-separated list of tags. We only autocomplete the
  // last tag.
  $tags_entered = drupal_explode_tags($tags_entered);
  $tag_last = drupal_strtolower(array_pop($tags_entered));

  if ($tag_last != '') {

    $query = db_select('taxonomy_term_data', 't');
    $query->addTag('translatable');
    $query->addTag('term_access');

    // Do not select already entered terms.
    if (!empty($tags_entered)) {
      $query->condition('t.name', $tags_entered, 'NOT IN');
    }
    // Select rows that match by term name.
    $tags_return = $query
      ->fields('t', array('tid', 'name'))
      ->condition('t.vid', explode(',', $vid), 'IN')
      ->condition('t.name', '%' . db_like($tag_last) . '%', 'LIKE')
      ->range(0, 10)
      ->execute()
      ->fetchAllKeyed();

    $prefix = count($tags_entered) ? drupal_implode_tags($tags_entered) . ', ' : '';

    $term_matches = array();
    foreach ($tags_return as $tid => $name) {
      $n = $name;
      // Term names containing commas or quotes must be wrapped in quotes.
      if (strpos($name, ',') !== FALSE || strpos($name, '"') !== FALSE) {
        $n = '"' . str_replace('"', '""', $name) . '"';
      }
      // Add term name to list of matches.
      $term_matches[$prefix . $n] = check_plain($name);
    }
  }

  drupal_json_output($term_matches);
}
