<?php
/**
 * @file
 * ofed_event.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ofed_event_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create ofed_event content'.
  $permissions['create ofed_event content'] = array(
    'name' => 'create ofed_event content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ofed_event content'.
  $permissions['delete any ofed_event content'] = array(
    'name' => 'delete any ofed_event content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ofed_event content'.
  $permissions['delete own ofed_event content'] = array(
    'name' => 'delete own ofed_event content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ofed_event content'.
  $permissions['edit any ofed_event content'] = array(
    'name' => 'edit any ofed_event content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ofed_event content'.
  $permissions['edit own ofed_event content'] = array(
    'name' => 'edit own ofed_event content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'enter ofed_event revision log entry'.
  $permissions['enter ofed_event revision log entry'] = array(
    'name' => 'enter ofed_event revision log entry',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_event authored by option'.
  $permissions['override ofed_event authored by option'] = array(
    'name' => 'override ofed_event authored by option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_event authored on option'.
  $permissions['override ofed_event authored on option'] = array(
    'name' => 'override ofed_event authored on option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_event promote to front page option'.
  $permissions['override ofed_event promote to front page option'] = array(
    'name' => 'override ofed_event promote to front page option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_event published option'.
  $permissions['override ofed_event published option'] = array(
    'name' => 'override ofed_event published option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_event revision option'.
  $permissions['override ofed_event revision option'] = array(
    'name' => 'override ofed_event revision option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_event sticky option'.
  $permissions['override ofed_event sticky option'] = array(
    'name' => 'override ofed_event sticky option',
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
