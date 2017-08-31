<?php

/**
 * @file
 * "Functionalities"/"Content types" step in installer.
 */

/**
 * Return the form for functionalities set-up.
 *
 * @return array The functionalities form.
 */
function openfed_install_functionalities_form() {
  // Set title.
  drupal_set_title(st('Enable content types'));

  // Set form.
  $form = array();

  $form['functionalities'] = array(
    '#type' => 'checkboxes',
    '#title' => st('Content types'),
    '#options' => _openfed_get_functionalities_list(),
    '#attributes' => array('class' => array('clearfix')),
    '#description' => '<p>' . st('Content types can also be enabled after installation (in the Features list).') . '</p>',
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => st('Continue'),
  );

  // Return form.
  return $form;
}

/**
 * Form submission handler for openfed_install_functionalities_form().
 */
function openfed_install_functionalities_form_submit($form, &$form_state) {
  $values = $form_state['values'];
  if (!empty($values['functionalities'])) {
    $functionalities = $values['functionalities'];
    // Clean functionalities array.
    $_functionalities = array();
    foreach ($functionalities as $key => $value) {
      if(!empty($value)) {
        $_functionalities[$key] = $value;
      }
    }
    $functionalities = $_functionalities;
    // If always functionalities...
    if (!empty($functionalities)) {
      // Enable modules (create array for batch process).
      $modules_list = array();
      foreach ($functionalities as $key => $name) {
        if ($key === $name) {
          $modules_list[] = $name;
        }
      }

      // Set variables.
      if (!empty($modules_list)) {
        variable_set('openfed_content_types_batch_run', TRUE);
        variable_set('openfed_content_types_batch_functionalities', $modules_list);
      }
    }
  }
}

/**
 * Batch function to enable content type.
 */
function openfed_install_functionalities_batch() {
  $modules = variable_get('openfed_content_types_batch_functionalities', array());
  if (!empty($modules)) {
    // Get modules infos.
    $files = system_rebuild_module_data();

    // Always install required modules first.
    // Respect the dependencies between the modules.
    $required = array();
    $non_required = array();

    // Add modules that other modules depend on.
    foreach ($modules as $module) {
      if ($files[$module]->requires) {
        $modules = array_merge($modules, array_keys($files[$module]->requires));
      }
    }
    $modules = array_unique($modules);
    foreach ($modules as $module) {
      if(!module_exists($module)) {
        if (!empty($files[$module]->info['required'])) {
          $required[$module] = $files[$module]->sort;
        }
        else {
          $non_required[$module] = $files[$module]->sort;
        }
      }
    }

    // Sort.
    arsort($required);
    arsort($non_required);

    // Merge.
    $modules = array_merge($non_required, $required);

    // Build operations array.
    $operations = array();
    foreach ($modules as $module => $weight) {
      $operations[] = array('_install_module_batch', array($module, $files[$module]->info['name']));
    }

    // Set batch.
    $batch = array(
      'operations' => $operations,
      'title' => st('Installing Content types'),
      'progress_message' => t('Completed @current of @total.'),
      'error_message' => st('The installation has encountered an error.'),
      'finished' => '_openfed_install_functionalities_batch_finished',
    );

    // Return.
    return $batch;
  }
  else {
    // Delete variables.
    variable_del('openfed_content_types_batch_run');
    variable_del('openfed_content_types_batch_functionalities');

    // Return.
    return array();
  }
}

/**
 * Declaration of batch finished function.
 */
function _openfed_install_functionalities_batch_finished($success, $results, $operations) {
  // If success...
  if ($success) {
    variable_del('openfed_content_types_batch_run');
    variable_del('openfed_content_types_batch_functionalities');
  }
  else {
    // An error occurred.
    $error_operation = reset($operations);
    $message = t('An error occurred while processing %error_operation with arguments: @arguments', array('%error_operation' => $error_operation[0], '@arguments' => print_r($error_operation[1], TRUE)));
    drupal_set_message($message, 'error');
  }

  // Flush all caches to complete the module installation process. Subsequent
  // installation tasks will now have full access to the profile's modules.
  drupal_flush_all_caches();
}
