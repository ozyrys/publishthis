<?php

/**
 * @file
 * "Install Complete" step.
 */

/**
 * Complete the set-up.
 */
function openfed_install_complete() {
  // Grant permissions.
  _openfed_install_complete_grant_permissions();

  // Set theme variables.
  $enable = array(
    'theme_default' => _openfed_get_theme_frontend(),
    'admin_theme' => _openfed_get_theme_backend(),
    'admin_theme_base' => 'adminimal',
    'maintenance_theme' => _openfed_get_theme_maintenance(),
  );
  theme_enable($enable);
  foreach ($enable as $var => $theme) {
    if (!is_numeric($var)) {
      variable_set($var, $theme);
    }
  }

  // Disable the default drupal themes.
  theme_disable(array('bartik', 'seven'));

  // Set up node edit screen to use the admin screen.
  variable_set('node_admin_theme', '1');

  // Disable admin theme for batch action.
  variable_set('admin_theme_admin_theme_batch', '0');

  // Disable cron on launch.
  variable_set('cron_safe_threshold', '0');

  // Set menu options for content type.
  $menu_options_ofed_page = variable_get('menu_options_ofed_page', array());
  $menu_options_webform = variable_get('menu_options_webform', array());

  // Add menu list where menu can be attach to content.
  $menus = menu_get_menus(FALSE);
  $menu_list = _openfed_get_menus_list();
  foreach ($menu_list as $key => $desc) {
    if (array_key_exists($key, $menus)) {
      if (!in_array($key, $menu_options_ofed_page)) $menu_options_ofed_page[] = $key;
      if (!in_array($key, $menu_options_webform)) $menu_options_webform[] = $key;
    }
  }
  foreach (language_list() as $lang) {
    $name = strtolower('main-' . $lang->name . '-menu');
    if (array_key_exists($name, $menus)) {
      if (!in_array($key, $menu_options_ofed_page)) $menu_options_ofed_page[] = $name;
      if (!in_array($key, $menu_options_webform)) $menu_options_webform[] = $name;
    }
  }
  variable_set('menu_options_ofed_page', $menu_options_ofed_page);
  variable_set('menu_options_webform', $menu_options_webform);

  // Rebuild access to node.
  node_access_rebuild(FALSE);

  // Enable caching.
  variable_set('cache', TRUE);

  // Enable preprocessing styles.
  variable_set('preprocess_css', TRUE);

  // Enable preprocessing scripts.
  variable_set('preprocess_js', TRUE);

  // Set up default site slogan (used on front page title).
  variable_set('site_slogan', 'OpenFed - General-purpose, multilingual Drupal distribution');

  // Set default for "Who can register accounts?" to Admin only
  variable_get('user_register', USER_REGISTER_ADMINISTRATORS_ONLY);
}

/**
 * Sets up node permissions at end of install.
 */
function _openfed_install_complete_grant_permissions() {
  // Content related roles.
  $roles = array(
    'Administrator',
    'Builder',
    'Configurator',
    'Content Manager',
  );

  // Retrieve node permissions.
  $permissions = module_invoke('node', 'permission');
  $permissions = array_keys($permissions);
  // Retrieve override node permissions.
  $override_permissions = module_invoke('override_node_options', 'permission');
  $override_permissions = array_keys($override_permissions);
  // Merge both
  $perms = array_merge($permissions, $override_permissions);

  // Set up permissions to revoke.
  $revoke = array();
  $revoke['Content Manager'] = array(
    'bypass node access',
    'administer content types',
    'administer nodes',
    'create ofed_banner content',
    'create ofed_slider content',
    'create ofed_slideshow content',
    'delete any webform content',
    'override webform authored by option',
  );
  $revoke['Builder'] = array(
    'bypass node access',
    'administer nodes',
    'delete revisions',
    'delete any webform content',
  );
  $revoke['Configurator'] = array(
    'delete revisions',
    'delete any webform content',
  );

  foreach ($roles as $role_name) {
    $role = user_role_load_by_name($role_name);
    if (!empty($role->rid)) {
      user_role_grant_permissions($role->rid, $perms);
      if (!empty($revoke[$role_name])) {
        user_role_revoke_permissions($role->rid, $revoke[$role_name]);
      }
    }
  }

  // Enable module filter module.
  module_enable(array('module_filter'));
  // Enable 403 to 404 module.
  module_enable(array('m4032404'));
  variable_set('site_403', 'm4032404');

  // Set up workbench moderation.
  require_once(DRUPAL_ROOT . '/' . drupal_get_path('profile', 'openfed') . '/includes/misc/openfed_functions.inc');
  _openfed_workbench_moderation_setup();

  // Set up admin language.
  variable_set('admin_language_pages', 'admin_menu/*\nfile/ajax/*\nsystem/ajax\nmedia/ajax/*');
}
