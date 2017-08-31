<?php
/**
 * @file
 * ofed_page.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ofed_page_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create ofed_page content'.
  $permissions['create ofed_page content'] = array(
    'name' => 'create ofed_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ofed_page content'.
  $permissions['delete any ofed_page content'] = array(
    'name' => 'delete any ofed_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ofed_page content'.
  $permissions['delete own ofed_page content'] = array(
    'name' => 'delete own ofed_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ofed_page content'.
  $permissions['edit any ofed_page content'] = array(
    'name' => 'edit any ofed_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ofed_page content'.
  $permissions['edit own ofed_page content'] = array(
    'name' => 'edit own ofed_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'enter ofed_page revision log entry'.
  $permissions['enter ofed_page revision log entry'] = array(
    'name' => 'enter ofed_page revision log entry',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_page authored by option'.
  $permissions['override ofed_page authored by option'] = array(
    'name' => 'override ofed_page authored by option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_page authored on option'.
  $permissions['override ofed_page authored on option'] = array(
    'name' => 'override ofed_page authored on option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_page promote to front page option'.
  $permissions['override ofed_page promote to front page option'] = array(
    'name' => 'override ofed_page promote to front page option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_page published option'.
  $permissions['override ofed_page published option'] = array(
    'name' => 'override ofed_page published option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_page revision option'.
  $permissions['override ofed_page revision option'] = array(
    'name' => 'override ofed_page revision option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_page sticky option'.
  $permissions['override ofed_page sticky option'] = array(
    'name' => 'override ofed_page sticky option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  return $permissions;
}
