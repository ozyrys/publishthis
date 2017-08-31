<?php

/**
 * @file
 * "Roles" step in installer.
 */

/**
 * Form for roles set up.
 */
function openfed_install_role_form() {
  // Set title.
  drupal_set_title(st('Set up roles'));

  // Set form.
  $form = array();

  $form['role_list'] = array(
    '#type' => 'checkboxes',
    '#title' => st('Roles'),
    '#options' => _openfed_get_roles_list(),
    '#description' => st('By selecting the roles, the roles and their associated set of permissions will be automatically created.<br><br>
      They can also be created after the installation, but the set of permissions will have to be defined manually.'),
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => st('Continue'),
  );

  // Return form.
  return $form;
}

/**
 * Form submission handler for openfed_install_role_form().
 */
function openfed_install_role_form_submit($form, &$form_state) {
  $values = $form_state['values'];

  // Generate and set permissions for roles based on the user choice.
  if (!empty($values['role_list'])) {
    $permission_language = array();
    foreach (language_list() as $langcode => $langobject) {
      $permission_language['manage ' . $langcode . ' translation overview priorities'] = TRUE;
    }

    $permission_vocabularies = array();
    $vocabularies = taxonomy_vocabulary_machine_name_load('categories');
    if ($vocabularies != FALSE) {
      $permission_vocabularies['edit terms in ' . $vocabularies->vid] = TRUE;
      $permission_vocabularies['delete terms in ' . $vocabularies->vid] = TRUE;
    }

    // Configurator.
    if ($values['role_list']['configurator'] === 'configurator') {
      // Create role.
      $conf_role = new stdClass();
      $conf_role->name = 'Configurator';
      $conf_role->weight = 5;
      user_role_save($conf_role);
      // Assign permission to role.
      $conf_role = user_role_load_by_name('Configurator');
      $permission = array_merge(_openfed_get_permissions_for_role('Configurator'), $permission_language, $permission_vocabularies);
      user_role_change_permissions($conf_role->rid, $permission);
    }

    // Content Manager.
    if ($values['role_list']['content_manager'] === 'content_manager') {
      // Create role.
      $cm_role = new stdClass();
      $cm_role->name = 'Content Manager';
      $cm_role->weight = 6;
      user_role_save($cm_role);
      // Assign permission to role.
      $cm_role = user_role_load_by_name('Content Manager');
      $permission = array_merge(_openfed_get_permissions_for_role('Content Manager'), $permission_language, $permission_vocabularies);
      user_role_change_permissions($cm_role->rid, $permission);
    }

    // User manager.
    if ($values['role_list']['user_manager'] === 'user_manager') {
      // Create role.
      $um_role = new stdClass();
      $um_role->name = 'User Manager';
      $um_role->weight = 7;
      user_role_save($um_role);
      // Assign permission to role.
      $um_role = user_role_load_by_name('User Manager');
      user_role_change_permissions($um_role->rid, _openfed_get_permissions_for_role('User Manager'));
      // Create rule to warn "User Manager" when ther is a new user account created.
      if (module_exists('rules')) {
        $rule = '
        {
          "rules_ofed_warn_user_manager_of_pending_users" : {
            "LABEL" : "Warn User Manager of pending users",
            "PLUGIN" : "reaction rule",
            "REQUIRES" : [ "rules" ],
            "ON" : [ "user_insert" ],
            "IF" : [ { "user_is_blocked" : { "account" : [ "account" ] } } ],
            "DO" : [
              { "mail_to_users_of_role" : {
                  "roles" : { "value" : { "' . $um_role->rid . '" : "' . $um_role->rid . '" } },
                  "subject" : "A new user has registered on [site:name]",
                  "message" : "Hi,\r\n\r\nA new user has registered on [site:name]\r\n\r\nCheck its profile below to validate the account :\r\n\r\n[account:edit-url]\r\n\r\nThanks"
                }
              }
            ]
          }
        }';

        $rules_config = rules_import($rule, $error_msg);
        if (empty($error_msg)) {
          if ($existing_config = rules_config_load($rules_config->name)) {
            // Copy DB id and remove the new indicator to overwrite the existing record.
            $rules_config->id = $existing_config->id;
            unset($rules_config->is_new);
          }
          $rules_config->save();
        }
      }
    }

    // Authenticated Visitor.
    if ($values['role_list']['user_manager'] === 'authenticated_visitor') {
      // Create role.
      $av_role = new stdClass();
      $av_role->name = 'Authenticated Visitor';
      $av_role->weight = 8;
      user_role_save($av_role);
      // Assign permission to role.
      $av_role = user_role_load_by_name('Authenticated Visitor');
      user_role_change_permissions($av_role->rid, _openfed_get_permissions_for_role('Authenticated Visitor'));
    }
  }

  // Set roles permissions for default roles.
  // Administrator.
  $adm_role = user_role_load_by_name('Administrator');
  $adm_role_rid = $adm_role->rid;
  user_role_grant_permissions($adm_role_rid, array_keys(module_invoke_all('permission')));

  // Builder.
  $web_role = user_role_load_by_name('Builder');
  $web_role_rid = $web_role->rid;
  $permission = array_merge(_openfed_get_permissions_for_role('Builder'), $permission_language, $permission_vocabularies);
  user_role_change_permissions($web_role_rid, $permission);

  // Authenticated user.
  $auth_role = user_role_load_by_name('authenticated user');
  $auth_role_rid = $auth_role->rid;
  user_role_change_permissions($auth_role_rid, _openfed_get_permissions_for_role('authenticated user'));

  // Anonymous user.
  $ano_role = user_role_load_by_name('anonymous user');
  $ano_role_rid = $ano_role->rid;
  user_role_change_permissions($ano_role_rid, _openfed_get_permissions_for_role('anonymous user'));

  // Set up roles delegation module permission.
  if (module_enable(array('role_delegation'))) {
    $roles = _role_delegation_roles();
    $permissions = array();
    foreach ($roles as $rid => $role) {
      $permissions["assign $role role"] = TRUE;
    }

    $updated_roles = array('Builder', 'Configurator', 'User Manager');
    $updated_roles = array_intersect($updated_roles, array_map('ucfirst', array_values(array_filter($values['role_list']))));
    foreach ($updated_roles as $role) {
      $web_role = user_role_load_by_name($role);
      $permissions['administer permissions'] = FALSE;
      user_role_change_permissions($web_role->rid, $permissions);
    }
  }
}
