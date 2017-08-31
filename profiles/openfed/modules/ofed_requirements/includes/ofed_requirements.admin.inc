<?php

/**
 * @file
 * Administrative page callbacks for the Administrative pages module.
 */

/**
 * Return the admin form to allow to display check the requirement.
 * @return void
 */
function ofed_requirements_admin_requirements_form() {
  // Initialize.
  $form = array();

  // Fieldset for the roles list.
  $errors = _ofed_requirements_check_roles();
  $remark = variable_get('ofed_requirements_remarks_roles', '');
  $form['checks']['roles'] = array(
    '#type' => 'fieldset',
    '#title' => t('Check the defined users roles'),
    '#collapsed' => (empty($errors) && empty($remark)) ? TRUE : FALSE,
    '#collapsible' => TRUE,
    '#attributes' => array(
      'class' => (empty($errors)) ? array('check-succeed') : array('check-failed'),
    ),
    '#description' => (!empty($errors)) ? '<ul class="check-errors"><li>' . implode($errors, '</li><li>') . '</u></li>' : '',
  );
  $form['checks']['roles']['ofed_requirements_remarks_roles'] = array(
    '#type' => 'textarea',
    '#title' => t('Add a remark / justification about this check:'),
    '#default_value' => variable_get('ofed_requirements_remarks_roles', ''),
    '#rows' => 10,
    '#required' => (empty($errors)) ? FALSE : TRUE,
  );

  // Fieldset for the permissions list.
  $errors = _ofed_requirements_check_perms();
  $remark = variable_get('ofed_requirements_remarks_perms', '');
  $form['checks']['permissions'] = array(
    '#type' => 'fieldset',
    '#title' => t('Check the permissions assigned to roles'),
    '#collapsed' => (empty($errors) && empty($remark)) ? TRUE : FALSE,
    '#collapsible' => TRUE,
    '#attributes' => array(
      'class' => (empty($errors)) ? array('check-succeed') : array('check-failed'),
    ),
    '#description' => (!empty($errors)) ? '<ul class="check-errors"><li>' . implode($errors, '</li><li>') . '</u></li>' : '',
  );
  $form['checks']['permissions']['ofed_requirements_remarks_perms'] = array(
    '#type' => 'textarea',
    '#title' => t('Add a remark / justification about this check:'),
    '#default_value' => variable_get('ofed_requirements_remarks_perms', ''),
    '#rows' => 10,
    '#required' => (empty($errors)) ? FALSE : TRUE,
  );

  // Fieldset for modules enabled list.
  $errors = _ofed_requirements_check_modules_enabled();
  $remark = variable_get('ofed_requirements_remarks_modules_enabled', '');
  $form['checks']['modules_enabled'] = array(
    '#type' => 'fieldset',
    '#title' => t('Check the enabled modules'),
    '#collapsed' => (empty($errors) && empty($remark)) ? TRUE : FALSE,
    '#collapsible' => TRUE,
    '#attributes' => array(
      'class' => (empty($errors)) ? array('check-succeed') : array('check-failed'),
    ),
    '#description' => (!empty($errors)) ? '<ul class="check-errors"><li>' . implode($errors, '</li><li>') . '</u></li>' : '',
  );
  $form['checks']['modules_enabled']['ofed_requirements_remarks_modules_enabled'] = array(
    '#type' => 'textarea',
    '#title' => t('Add a remark / justification about this check:'),
    '#default_value' => variable_get('ofed_requirements_remarks_modules_enabled', ''),
    '#rows' => 10,
    '#required' => (empty($errors)) ? FALSE : TRUE,
  );

  // Fieldset for modules version list.
  $errors = _ofed_requirements_check_modules_version();
  $remark = variable_get('ofed_requirements_remarks_modules_version', '');
  $form['checks']['modules_version'] = array(
    '#type' => 'fieldset',
    '#title' => t('Check the modules version'),
    '#collapsed' => (empty($errors) && empty($remark)) ? TRUE : FALSE,
    '#collapsible' => TRUE,
    '#attributes' => array(
      'class' => (empty($errors)) ? array('check-succeed') : array('check-failed'),
    ),
    '#description' => (!empty($errors)) ? '<ul class="check-errors"><li>' . implode($errors, '</li><li>') . '</u></li>' : '',
  );
  $form['checks']['modules_version']['ofed_requirements_remarks_modules_version'] = array(
    '#type' => 'textarea',
    '#title' => t('Add a remark / justification about this check:'),
    '#default_value' => variable_get('ofed_requirements_remarks_modules_version', ''),
    '#rows' => 10,
    '#required' => (empty($errors)) ? FALSE : TRUE,
  );

  // Fieldset for modules / variables list.
  $errors = _ofed_requirements_check_variables();
  $remark = variable_get('ofed_requirements_remarks_variables', '');
  $form['checks']['variables'] = array(
    '#type' => 'fieldset',
    '#title' => t('Check the settings variables'),
    '#collapsed' => (empty($errors) && empty($remark)) ? TRUE : FALSE,
    '#collapsible' => TRUE,
    '#attributes' => array(
      'class' => (empty($errors)) ? array('check-succeed') : array('check-failed'),
    ),
    '#description' => (!empty($errors)) ? '<ul class="check-errors"><li>' . implode($errors, '</li><li>') . '</u></li>' : '',
  );
  $form['checks']['variables']['ofed_requirements_remarks_variables'] = array(
    '#type' => 'textarea',
    '#title' => t('Add a remark / justification about this check:'),
    '#default_value' => variable_get('ofed_requirements_remarks_variables', ''),
    '#rows' => 10,
    '#required' => (empty($errors)) ? FALSE : TRUE,
  );

  // Fieldsets for each OpenFed features.
  $features = array(
    'ofed_address' => 'OpenFed "Address" feature',
    'ofed_banner' => 'OpenFed "Banners" feature',
    'ofed_download' => 'OpenFed "Downloads" feature',
    'ofed_event' => 'OpenFed "Events" feature',
    'ofed_faq' => 'OpenFed "FAQ\'s" feature',
    'ofed_job' => 'OpenFed "Jobs" feature',
    'ofed_meeting' => 'OpenFed "Meeting" feature',
    'ofed_news' => 'OpenFed "News" feature',
    'ofed_page' => 'OpenFed "Pages" feature',
    'ofed_photogallery' => 'OpenFed "Photos galeries" feature',
    'ofed_press' => 'OpenFed "Press" feature',
    'ofed_slider' => 'OpenFed "Slider" feature',
    'ofed_slideshow' => 'OpenFed "Slideshows" feature',
    'ofed_team' => 'OpenFed "Team members" feature',
    'ofed_video' => 'OpenFed "Videos" feature',
  );
  foreach ($features as $feature_key => $feature_name) {
    $errors = _ofed_requirements_check_feature($feature_key, $feature_name);
    $remark = variable_get('ofed_requirements_remarks_feature_' . $feature_key, '');
    $form['checks']['features' . $feature_key] = array(
      '#type' => 'fieldset',
      '#title' => t('Check the !feature', array('!feature' => $feature_name)),
      '#collapsed' => (empty($errors) && empty($remark)) ? TRUE : FALSE,
      '#collapsible' => TRUE,
      '#attributes' => array(
        'class' => (empty($errors)) ? array('check-succeed') : array('check-failed'),
      ),
      '#description' => (!empty($errors)) ? '<ul class="check-errors"><li>' . implode($errors, '</li><li>') . '</u></li>' : '',
    );
    $form['checks']['features' . $feature_key]['ofed_requirements_remarks_feature_' . $feature_key] = array(
      '#type' => 'textarea',
      '#title' => t('Add a remark / justification about this check:'),
      '#default_value' => variable_get('ofed_requirements_remarks_feature_' . $feature_key, ''),
      '#rows' => 10,
      '#required' => (empty($errors)) ? FALSE : TRUE,
    );
  }

  // Add the button to clear notes.
  $form['actions']['reset'] = array(
    '#type' => 'submit',
    '#value' => t('Clear notes'),
    '#weight' => 1,
    '#limit_validation_errors' => array(),
    '#submit' => array('ofed_requirements_admin_requirements_notes_reset_redirect'),
  );

  // Add the button to export notes.
  $form['actions']['export'] = array(
    '#type' => 'submit',
    '#value' => t('Export notes'),
    '#weight' => 2,
    '#submit' => array('ofed_requirements_admin_requirements_notes_export'),
  );

  // Return.
  return system_settings_form($form);
}

/**
 * Implements hook_form_alter().
 * @param type $form
 * @param type $form_state
 * @param type $form_id
 */
function ofed_requirements_form_alter(&$form, &$form_state, $form_id) {
  if ($form_id == 'ofed_requirements_admin_requirements_form') {
    $form['actions']['submit']['#value'] = t('Save notes');
    $form['actions']['submit']['#weight'] = 0;
  }
}

/**
 * Reditect to the confirm form.
 */
function ofed_requirements_admin_requirements_notes_reset_redirect() {
  drupal_goto('admin/openfed/requirements/reset');
}

/**
 * Form confirm for the reset button.
 */
function ofed_requirements_admin_requirements_notes_reset_confirm() {
  return confirm_form(
    array(), t('Are you sure you want to remove all notes ?'), 'admin/openfed/requirements', t('This action cannot be undone.'), t('Remove notes'), t('Cancel')
  );
}

/**
 * Form submit for the reset confirm.
 * @param type $form
 * @param type $form_state
 */
function ofed_requirements_admin_requirements_notes_reset_confirm_submit($form, &$form_state) {
  // Get all variables used for remarks and erase it.
  $result = db_select('variable', 'v')
    ->fields('v', array('name'))
    ->condition('name', 'ofed_requirements_remarks_%', 'LIKE')
    ->execute();

  foreach ($result as $record) {
    variable_set($record->name, '');
  }
  drupal_set_message('All notes has been deleted.');
  drupal_goto('admin/openfed/requirements');
}

/**
 * Build and return the report text for a specific test.
 * @param string $title  The title of the test.
 * @param array $errors The errors.
 * @param string $remark The remark.
 * @return string
 */
function ofed_requirements_admin_requirements_build_report_text_for_test($title, $errors, $remark, $drush_options = array()) {
  // Initialize.
  $output = '';

  if (empty($drush_options) || $drush_options['list'] || (!$drush_options['list'] && !empty($errors))) {
    // Build text.
    $status = (empty($errors)) ? 'Success' : 'Failed';
    $output .= 'TEST: ' . $title . ' (' . $status . ').' . "\n";

    $status = (empty($errors)) ? 'None' : array_shift($errors);
    $output .= 'Error(s): ' . $status . "\n";
    if (!empty($errors)) {

      if (empty($drush_options) || $drush_options['list']) {

        foreach ($errors as $error) {
          $output .= $error . "\n";
        }
      }
    }

    $status = (empty($remark)) ? 'None' : '';
    $output .= 'Remark(s): ' . $status . "\n";
    if (!empty($remark)) {
      $output .= '----------' . "\n";
      $output .= $remark . "\n";
    }
    else {
      $output .= "\n";
    }
  }

  // Return.
  return $output;
}

/**
 * Export file.
 */
function ofed_requirements_admin_requirements_notes_export($drush_options = array()) {
  // Initialize.
  $output = '';

  if (empty($drush_options)) {
    // Build the file content.
    $output .= 'FEDICT REQUIREMENT FILE REPORT.' . "\n";
    $output .= '-------------------------------' . "\n";
  }
  $output .= 'Report date: ' . date('d/m/Y H:i:s') . "\n\n";

  // Add roles infos.
  $title = 'Check the defined users roles';
  $errors = _ofed_requirements_check_roles();
  $remark = variable_get('ofed_requirements_remarks_roles', '');
  $output .= ofed_requirements_admin_requirements_build_report_text_for_test($title, $errors, $remark, $drush_options);

  // Add permissions infos.
  $title = 'Check the permissions assigned to roles';
  $errors = _ofed_requirements_check_perms();
  $remark = variable_get('ofed_requirements_remarks_perms', '');
  $output .= ofed_requirements_admin_requirements_build_report_text_for_test($title, $errors, $remark, $drush_options);

  // Add modules enabled list infos.
  $title = 'Check the enabled modules';
  $errors = _ofed_requirements_check_modules_enabled();
  $remark = variable_get('ofed_requirements_remarks_modules_enabled', '');
  $output .= ofed_requirements_admin_requirements_build_report_text_for_test($title, $errors, $remark, $drush_options);

  // Add modules versions list infos.
  $title = 'Check the modules version';
  $errors = _ofed_requirements_check_modules_version();
  $remark = variable_get('ofed_requirements_remarks_modules_version', '');
  $output .= ofed_requirements_admin_requirements_build_report_text_for_test($title, $errors, $remark, $drush_options);

  // Add variables infos.
  $title = 'Check the settings variables';
  $errors = _ofed_requirements_check_variables();
  $remark = variable_get('ofed_requirements_remarks_variables', '');
  $output .= ofed_requirements_admin_requirements_build_report_text_for_test($title, $errors, $remark, $drush_options);

  // Add feature infos.
  // Fieldsets for each OpenFed features.
  $features = array(
    'ofed_address' => 'OpenFed "Address" feature',
    'ofed_banner' => 'OpenFed "Banners" feature',
    'ofed_download' => 'OpenFed "Downloads" feature',
    'ofed_event' => 'OpenFed "Events" feature',
    'ofed_faq' => 'OpenFed "FAQ\'s" feature',
    'ofed_job' => 'OpenFed "Jobs" feature',
    'ofed_meeting' => 'OpenFed "Meeting" feature',
    'ofed_news' => 'OpenFed "News" feature',
    'ofed_page' => 'OpenFed "Pages" feature',
    'ofed_photogallery' => 'OpenFed "Photos galeries" feature',
    'ofed_press' => 'OpenFed "Press" feature',
    'ofed_slider' => 'OpenFed "Slider" feature',
    'ofed_slideshow' => 'OpenFed "Slideshows" feature',
    'ofed_team' => 'OpenFed "Team members" feature',
    'ofed_video' => 'OpenFed "Videos" feature',
  );
  foreach ($features as $feature_key => $feature_name) {
    $title = t('Check the !feature', array('!feature' => $feature_name));
    $errors = _ofed_requirements_check_feature($feature_key, $feature_name);
    $remark = variable_get('ofed_requirements_remarks_feature_' . $feature_key, '');
    $output .= ofed_requirements_admin_requirements_build_report_text_for_test($title, $errors, $remark, $drush_options);
  }

  if (!empty($drush_options)) {
    return $output;
  }
  else {
    // Set the file path.
    $filpath = drupal_realpath('private://') . '/fedict-requirement-report.log';

    // Save the temporary file content.
    file_unmanaged_save_data($output, $filpath, FILE_EXISTS_REPLACE);

    // Force the download of the file.
    if (file_exists($filpath)) {
      header('Content-Description: File Transfer');
      header('Content-Type: application/octet-stream');
      header('Content-Disposition: attachment; filename=' . basename($filpath));
      header('Content-Transfer-Encoding: binary');
      header('Expires: 0');
      header('Cache-Control: must-revalidate');
      header('Pragma: public');
      header('Content-Length: ' . filesize($filpath));
      ob_clean();
      flush();
      readfile($filpath);
      exit;
    }
    }
}

/**
 * Check the permissions.
 * @param none
 * @return $array
 */
function _ofed_requirements_check_perms() {
  // Initialize.
  $errors = array();

  // Load OpenFed function file.
  module_load_include('inc', 'openfed', 'openfed_functions');

  // Get the default roles names.
  $roles_default = _openfed_get_roles_list_default();
  // Get the current role names.
  $roles_currents = user_roles();

  $featured_default_perms = module_invoke_all('ofed_user_default_permissions');
  $featured_roles = array();

  foreach($featured_default_perms as $perm) {
    foreach($perm['roles'] as $role) {
      $featured_roles[$role][$perm['name']] = TRUE;
    }
  }

  $all_permissions = array_keys(module_invoke_all('permission'));
  // Check only for used roles included by default in the distribution.
  foreach ($roles_currents as $role_current_id => $role_current_name) {
    if (in_array($role_current_name, $roles_default)) {
      // Get the default perms for the current role.
      $perms_default = _openfed_get_permissions_for_role($role_current_name);

      if (!empty($featured_roles[$role_current_name])) {
        $perms_default = array_merge($perms_default, $featured_roles[$role_current_name]);
      }
      // Get currents perms.
      $perms_currents = user_role_permissions(array($role_current_id => $role_current_name));
      $perms_currents = $perms_currents[$role_current_id];

      // Hardcoded exceptions
      $added_permissions = array(
        // Added by media install script
        'view media' => array('anonymous user', 'authenticated user'),
        // Added in openfed_install_role_form_submit().
        'assign Builder role' => array('Configurator', 'Builder', 'User Manager'),
        'assign Configurator role' => array('Configurator', 'Builder', 'User Manager'),
        'assign Content Manager role' => array('Configurator', 'Builder', 'User Manager'),
        'assign User Manager role' => array('Configurator', 'Builder', 'User Manager'),
        'manage de translation overview priorities' => array('Builder', 'Configurator', 'Content Manager'),
        'manage en translation overview priorities' => array('Builder', 'Configurator', 'Content Manager'),
        'manage fr translation overview priorities' => array('Builder', 'Configurator', 'Content Manager'),
        'manage nl translation overview priorities' => array('Builder', 'Configurator', 'Content Manager'),
        'delete revisions' => array('Content Manager'),
      );
      $vocabularies = taxonomy_vocabulary_machine_name_load('categories');
      if ($vocabularies != FALSE) {
        $added_permissions['edit terms in ' . $vocabularies->vid] = array('Builder', 'Configurator', 'Content Manager');
        $added_permissions['delete terms in ' . $vocabularies->vid] = array('Builder', 'Configurator', 'Content Manager');
      }
      foreach ($added_permissions as $permission_name => $role_names) {
        if (in_array($role_current_name, $role_names) && in_array($permission_name, $all_permissions)) {
          $perms_default = array_merge($perms_default, array($permission_name => TRUE));
        }
      }

      // Compare the both perms list.
      if ($role_current_name != 'Administrator') {
        // Get the removed perms.
        foreach ($perms_default as $perm_default_key => $perm_default_value) {
          // Check if the perms is in the array.
          if (!in_array($perm_default_key, $perms_currents)) {
            $errors[] = t('The permission "!perm_name" was removed for the user role "!user_role".', array('!user_role' => strtolower($role_current_name), '!perm_name' => $perm_default_key));
          }

          // Get the difference by deliting exiting.
          if (isset($perms_currents[$perm_default_key])) {
            unset($perms_currents[$perm_default_key]);
          }
        }
        // Get the added perms.
        foreach ($perms_currents as $perm_current_key => $perm_current_value) {
          $errors[] = t('The permission "!perm_name" was added to the user role "!user_role".', array('!user_role' => strtolower($role_current_name), '!perm_name' => $perm_current_key));
        }
      }
    }
  }

  // Count errors.
  if (!empty($errors)) {
    array_unshift($errors, t('!count error(s) found!', array('!count' => count($errors))));
  }

  // Return.
  return $errors;
}

/**
 * Check the roles.
 * @param none
 * @return $array
 */
function _ofed_requirements_check_roles() {
  // Initialize.
  $errors = array();

  // Load OpenFed function file.
  module_load_include('inc', 'openfed', 'openfed_functions');

  // Get the default roles names.
  $roles_default = _openfed_get_roles_list_default();
  // Get the current role names.
  $roles_currents = user_roles();

  // Check which roles are not included by default in the distribution.
  foreach ($roles_currents as $role_current) {
    if (!in_array($role_current, $roles_default)) {
      $errors[] = t('The user role "!user_role" is not include by default.', array('!user_role' => $role_current));
    }
  }

  // Count errors.
  if (!empty($errors)) {
    array_unshift($errors, t('!count error(s) found!', array('!count' => count($errors))));
  }

  // Return.
  return $errors;
}

/**
 * Check the modules.
 * @param none
 * @return $array
 */
function _ofed_requirements_check_modules_enabled() {
  // Initialize.
  $errors = array();

  // Test to check if the php_filter is enabled.
  if (module_exists('php')) {
    $errors[] = t('The "PHP filter" module is enabled.');
  }

  // Count errors.
  if (!empty($errors)) {
    array_unshift($errors, t('!count error(s) found!', array('!count' => count($errors))));
  }

  // Return.
  return $errors;
}

/**
 * Check the modules version.
 * @param none
 * @return $array
 */
function _ofed_requirements_check_modules_version() {
  // Initialize.
  $errors = array();

  // Get the drupal.org.make file to fecth the default module versions.
  $infos = drupal_parse_info_file('profiles/openfed/drupal-org.make');
  foreach ($infos['projects'] as $project_name => $project_infos) {
    // Check only enabled module.
    if (module_exists($project_name)) {
      // Get inforamtion from the database.
      $result = db_select('system', 's')->fields('s', array('name', 'info'))->condition('name', $project_name)->execute();
      $result = $result->fetchAssoc();
      $info_base = unserialize($result['info']);

      // Get module versions.
      $info_version_base = $info_base['version'];

      // Check module versions.
      if ((!isset($project_infos['download']['type']) || $project_infos['download']['type'] != 'git') && $info_version_base != '7.x-' . $project_infos['version']) {
        $errors[] = t('The current version (!version_database) of module "!module_name" is not the same as the default version (!version_file) of this module.', array('!module_name' => $project_name, '!version_database' => $info_version_base, '!version_file' => '7.x-' . $project_infos['version']));
      }
    }
  }

  // Count errors.
  if (!empty($errors)) {
    array_unshift($errors, t('!count error(s) found!', array('!count' => count($errors))));
  }

  // Return.
  return $errors;
}

/**
 * Check the variables.
 * @param none
 * @return $array
 */
function _ofed_requirements_check_variables() {
  // Initialize.
  $errors = array();

  // Nothing for the moment because nothing to test :) but already ready to work... so be happy !
  // Smile :)
  // Count errors.
  if (!empty($errors)) {
    array_unshift($errors, t('!count error(s) found!', array('!count' => count($errors))));
  }

  // Return.
  return $errors;
}

/**
 * Check the feature.
 * @param string $feature_key  The technical name of the feature.
 * @param string $feature_name The human name of the feature.
 * @return $array
 */
function _ofed_requirements_check_feature($feature_key, $feature_name) {
  // Initialize.
  $errors = array();

  module_load_include('inc', 'features', 'features.export');
  $feature_status = features_get_storage($feature_key);
  // Switch on status.
  switch ($feature_status) {
    case FEATURES_NEEDS_REVIEW:
      // Actual code state != Database content != File content (see api.txt in feature module.)
      $errors[] = t('The !feature needs review. The feature does not match with its file content.', array('!feature' => $feature_name));
      break;

    case FEATURES_OVERRIDDEN:
      // Actual code state = Database content != File content (see api.txt in feature module.)
      $errors[] = t('The !feature is overriden. The feature does not match with its file content.', array('!feature' => $feature_name));
      break;

    default:
    case FEATURES_DEFAULT:
      // Do nothing :)
      break;
  }

  // If the feature needs review or is overriden;
  if ($feature_status == FEATURES_NEEDS_REVIEW || $feature_status == FEATURES_OVERRIDDEN) {
    // Define component names (used for message).
    $component_names = array(
      'ctools' => 'CTools API',
      'features_api' => 'Features API',
      'field' => 'Fields',
      'image' => 'Image styles',
      'metatag' => 'Meta tags',
      'node' => 'Content types',
      'rules_config' => 'Rules configuration',
      'taxonomy' => 'Taxonomy',
      'variable' => 'Strongarm',
      'views_view' => 'Views',
    );

    // Load feature.
    $feature = features_load_feature($feature_key);
    // Get component state.
    $states = features_get_component_states(array($feature->name), FALSE);
    foreach ($feature->info['features'] as $component => $items) {
      // Get the component status.
      $component_status = FEATURES_DEFAULT;
      if (array_key_exists($component, $states[$feature->name])) {
        $component_status = $states[$feature->name][$component];
      }

      // Get the component name.
      $component_name = t('Unknown component name');
      if (array_key_exists($component, $component_names)) {
        $component_name = $component_names[$component];
      }

      // Switch on status.
      switch ($component_status) {
        case FEATURES_NEEDS_REVIEW:
          // Actual code state != Database content != File content (see api.txt in feature module.)
          $errors[] = t('The component "!component" needs review.', array('!component' => $component_name));
          break;

        case FEATURES_OVERRIDDEN:
          // Actual code state = Database content != File content (see api.txt in feature module.)
          $errors[] = t('The component "!component" is overriden.', array('!component' => $component_name));
          break;

        default:
        case FEATURES_DEFAULT:
          // Do nothing :)
          break;
      }
    }
  }

  // Count errors.
  if (!empty($errors)) {
    array_unshift($errors, t('!count error(s) found!', array('!count' => count($errors))));
  }

  // Return.
  return $errors;
}

/**
 * Returns the required/default modules of the OpenFed profile
 */
function _ofed_requirements_get_profile_required_modules() {
  // Inspired by the system_rebuild_module_data function.
  // I removed the part that were interacting with the database so I just read
  // the info files here.
  $modules = _system_rebuild_module_data();
  $modules = _module_build_dependencies($modules);
  $functionalities = array_keys(_openfed_get_functionalities_list());
  $required = array_keys($modules['openfed']->requires);

  foreach ($functionalities as $functionality) {
    $required = array_merge($required, array_keys($modules[$functionality]->requires));
  }

  return array_unique($required);
}
