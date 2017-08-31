<?php

/**
 * @file
 * "Taxonomy" step in installer.
 */

/**
 * Form for taxonomy set up.
 */
function openfed_install_taxonomy_form() {
  // Set title.
  drupal_set_title(st('Set up taxonomy'));

  // Set form.
  $form = array();

  $form['taxonomy_list'] = array(
    '#type' => 'checkboxes',
    '#title' => st('Taxonomy'),
    '#options' => _openfed_get_taxonomy_list(),
    '#description' => '<p>' . st('Select this option if there will be taxonomy vocabularies in the websites, that will be used to re-group items.') . '</p>',
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => st('Continue'),
  );

  // Return.
  return $form;
}

/**
 * Form submission handler for openfed_install_taxonomy_form().
 */
function openfed_install_taxonomy_form_submit($form, &$form_state) {
  $values = $form_state['values'];
  $blocks = array();
  if (!empty($values['taxonomy_list'])) {
    if ($values['taxonomy_list']['categories'] === 'categories') {
      // Create a default vocabulary named "Category".
      $vocabulary = (object) array(
          'name' => st('Categories'),
          'description' => st('Use tags to group content into categories.'),
          'machine_name' => 'categories',
          'help' => st('Enter a comma-separated list of words to categorise your content.'),
      );
      taxonomy_vocabulary_save($vocabulary);
    }
  }
}
