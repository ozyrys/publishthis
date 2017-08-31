<?php
/**
 * @file
 * ofed_download.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ofed_download_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create ofed_download content'.
  $permissions['create ofed_download content'] = array(
    'name' => 'create ofed_download content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ofed_download content'.
  $permissions['delete any ofed_download content'] = array(
    'name' => 'delete any ofed_download content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ofed_download content'.
  $permissions['delete own ofed_download content'] = array(
    'name' => 'delete own ofed_download content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ofed_download content'.
  $permissions['edit any ofed_download content'] = array(
    'name' => 'edit any ofed_download content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ofed_download content'.
  $permissions['edit own ofed_download content'] = array(
    'name' => 'edit own ofed_download content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'enter ofed_download revision log entry'.
  $permissions['enter ofed_download revision log entry'] = array(
    'name' => 'enter ofed_download revision log entry',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_download authored by option'.
  $permissions['override ofed_download authored by option'] = array(
    'name' => 'override ofed_download authored by option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_download authored on option'.
  $permissions['override ofed_download authored on option'] = array(
    'name' => 'override ofed_download authored on option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_download promote to front page option'.
  $permissions['override ofed_download promote to front page option'] = array(
    'name' => 'override ofed_download promote to front page option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_download published option'.
  $permissions['override ofed_download published option'] = array(
    'name' => 'override ofed_download published option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_download revision option'.
  $permissions['override ofed_download revision option'] = array(
    'name' => 'override ofed_download revision option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_download sticky option'.
  $permissions['override ofed_download sticky option'] = array(
    'name' => 'override ofed_download sticky option',
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
