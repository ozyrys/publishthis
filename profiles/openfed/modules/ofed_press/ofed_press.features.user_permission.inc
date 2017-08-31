<?php
/**
 * @file
 * ofed_press.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ofed_press_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create ofed_press content'.
  $permissions['create ofed_press content'] = array(
    'name' => 'create ofed_press content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ofed_press content'.
  $permissions['delete any ofed_press content'] = array(
    'name' => 'delete any ofed_press content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ofed_press content'.
  $permissions['delete own ofed_press content'] = array(
    'name' => 'delete own ofed_press content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ofed_press content'.
  $permissions['edit any ofed_press content'] = array(
    'name' => 'edit any ofed_press content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ofed_press content'.
  $permissions['edit own ofed_press content'] = array(
    'name' => 'edit own ofed_press content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'enter ofed_press revision log entry'.
  $permissions['enter ofed_press revision log entry'] = array(
    'name' => 'enter ofed_press revision log entry',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_press authored by option'.
  $permissions['override ofed_press authored by option'] = array(
    'name' => 'override ofed_press authored by option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_press authored on option'.
  $permissions['override ofed_press authored on option'] = array(
    'name' => 'override ofed_press authored on option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_press promote to front page option'.
  $permissions['override ofed_press promote to front page option'] = array(
    'name' => 'override ofed_press promote to front page option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_press published option'.
  $permissions['override ofed_press published option'] = array(
    'name' => 'override ofed_press published option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_press revision option'.
  $permissions['override ofed_press revision option'] = array(
    'name' => 'override ofed_press revision option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_press sticky option'.
  $permissions['override ofed_press sticky option'] = array(
    'name' => 'override ofed_press sticky option',
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
