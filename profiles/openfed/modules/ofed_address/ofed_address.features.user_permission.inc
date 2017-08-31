<?php
/**
 * @file
 * ofed_address.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ofed_address_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create ofed_address content'.
  $permissions['create ofed_address content'] = array(
    'name' => 'create ofed_address content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ofed_address content'.
  $permissions['delete any ofed_address content'] = array(
    'name' => 'delete any ofed_address content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ofed_address content'.
  $permissions['delete own ofed_address content'] = array(
    'name' => 'delete own ofed_address content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ofed_address content'.
  $permissions['edit any ofed_address content'] = array(
    'name' => 'edit any ofed_address content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ofed_address content'.
  $permissions['edit own ofed_address content'] = array(
    'name' => 'edit own ofed_address content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'enter ofed_address revision log entry'.
  $permissions['enter ofed_address revision log entry'] = array(
    'name' => 'enter ofed_address revision log entry',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_address authored by option'.
  $permissions['override ofed_address authored by option'] = array(
    'name' => 'override ofed_address authored by option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_address authored on option'.
  $permissions['override ofed_address authored on option'] = array(
    'name' => 'override ofed_address authored on option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_address promote to front page option'.
  $permissions['override ofed_address promote to front page option'] = array(
    'name' => 'override ofed_address promote to front page option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_address published option'.
  $permissions['override ofed_address published option'] = array(
    'name' => 'override ofed_address published option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_address revision option'.
  $permissions['override ofed_address revision option'] = array(
    'name' => 'override ofed_address revision option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_address sticky option'.
  $permissions['override ofed_address sticky option'] = array(
    'name' => 'override ofed_address sticky option',
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
