<?php

/**
 * Implements hook_views_data_alter().
 */
function combined_termref_field_views_data_alter(&$data) {

  foreach (field_info_fields() as $field_name => $field) {
    // Skip field if it's not a taxonomy_term_reference field.
    if ($field['type'] != 'taxonomy_term_reference') {
      continue;
    }

    // Check if the field is a taxonomy field
    if (isset($data['field_data_' . $field_name])) {

      // Override the filter handler class
      $data['field_data_' . $field_name][$field_name . '_tid']['filter']['handler'] = 'combined_termref_handler_filter_term_node_tid';

      // Add all defined vocabularies, instead of the default single one.
      $data['field_data_' . $field_name][$field_name . '_tid']['filter']['vocabulary'] = array();
      foreach ($field['settings']['allowed_values'] as $item) {
        if (!empty($item['vocabulary'])) {
          $data['field_data_' . $field_name][$field_name . '_tid']['filter']['vocabulary'][] = $item['vocabulary'];
        }
      }
      break;
    }
  }
}
