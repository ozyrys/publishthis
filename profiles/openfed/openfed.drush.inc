<?php

/**
 * @file
 * Needs to be documented.
 */

/**
 * Needs to be documented.
 */
function openfed_drush_command() {
  // Initialize.
  $items = array();

  // Build array.
  $items['revert-ds-settings'] = array(
    'description' => "Reverts the Display Suite settings to their feature state. Be carefull as it completely deletes existing settings.",
    'arguments' => array(
      'type' => 'The content types you want the Display Suite settings to be reverted. You can add more than one content type, just separate them with a space.',
    ),
    'examples' => array(
      'drush rdss ofed_page ofed_download' => 'Revert the Display Suite settings for the ofed_page and the ofed_download content types',
    ),
    'aliases' => array('rdss'),
  );

  $items['validate-openfed-permissions'] = array(
    'description' => "Validates permissions array hard-coded in openfed_functions.inc.",
  );


  // Return.
  return $items;
}

/**
 * This function will revert the Display Suite settings
 * fot the desired content types (specified by the type
 * variable).
 *
 * @param string $type : One of several content type
 * separated by a space
 */
function drush_openfed_revert_ds_settings($type = '') {
  $args = func_get_args();

  if (!empty($args)) {
    foreach ($args as $ct) {
      $available_ct = node_type_get_types();
      if (array_key_exists($ct, $available_ct)) {
        $file = drupal_get_path('module', $name) . '/install/_' . $name . '.ds.inc';
        if (file_exists($file)) {
          // Include it.
          include_once $file;

          $func_name = $name . '_ds_custom_fields_info';
          // Install ds customs fields.
          if (function_exists($func_name)) {
            $fields = $func_name();
            foreach ($fields as $id => $field) {
              // Remove one key.
              if (isset($field->api_version)) {
                unset($field->api_version);
              }
              // Serialize the entities.
              $field->entities = serialize($field->entities);
              // Serialize the ui_limit.
              $field->ui_limit = serialize($field->ui_limit);
              // Serialize the properties.
              $field->properties = serialize($field->properties);

              // Cast variable like an array.
              $field = (array) $field;

              // Delete from database as they might not be updated.
              db_delete('ds_fields')->condition('field', $field['field'], '=')->execute();

              // Save in database.
              db_insert('ds_fields')->fields($field)->execute();
            }
          }

          $func_name = $name . '_ds_field_settings_info';

          // Install ds fields settings.
          if (function_exists($func_name)) {
            $fields = $func_name();
            foreach ($fields as $id => $field) {
              // Remove one key.
              if (isset($field->api_version)) {
                unset($field->api_version);
              }
              // Serialize the settings.
              $field->settings = serialize($field->settings);

              // Cast variable like an array.
              $field = (array) $field;

              // Delete from database as they might not be updated.
              db_delete('ds_field_settings')->condition('id', $field['id'], '=')->execute();

              // Save in database.
              db_insert('ds_field_settings')->fields($field)->execute();
            }
          }

          $func_name = $name . '_ds_layout_settings_info';

          // Install ds fields settings.
          if (function_exists($func_name)) {
            $layouts = $func_name();
            foreach ($layouts as $id => $layout) {
              // Remove one key.
              if (isset($layout->api_version)) {
                unset($layout->api_version);
              }
              // Serialize the settings.
              $layout->settings = serialize($layout->settings);

              // Cast variable like an array.
              $layout = (array) $layout;

              // Delete from database as they might not be updated.
              db_delete('ds_layout_settings')->condition('id', $layout['id'], '=')->execute();

              // Save in database.
              db_insert('ds_layout_settings')->fields($layout)->execute();
            }
          }
        }
        drush_log('The content type "' . $ct . '" has been successfully updated!', 'success');
      }
      else {
        drush_log('The content type "' . $ct . '" does not exist!', 'warning');
      }
    }
  }
}

/**
 * Validates permissions array hard-coded in openfed_functions.inc.
 */
function drush_openfed_validate_openfed_permissions() {
  $permissions = _openfed_get_default_permissions();
  $default_roles = _openfed_get_roles_list_default();
  $modules = array_keys(user_permission_get_modules());

  // Check whether the permissions apply.
  foreach ($permissions as $permission_name => $roles) {
    if (!in_array($permission_name, $modules)) {
      drush_print(t('Invalid permission: "@permission_name"', array(
        '@permission_name' => $permission_name,
      )));
      continue;
    }
    // Iterate through roles array. Example: array('Builder', 'Configurator', 'Content Manager').
    foreach ($roles as $role) {
      // Check whether the defined roles exist and are spelled correctly.
      if (!in_array($role, $default_roles)) {
        drush_print(t('Invalid role for permission @permission_name: @role', array(
          '@permission_name' => $permission_name,
          '@role' => $role,
        )), 'warning');
      }
    }
  }
}
