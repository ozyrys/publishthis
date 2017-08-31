<?php
/**
 * @file
 * ofed_meeting.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ofed_meeting_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create ofed_meeting content'.
  $permissions['create ofed_meeting content'] = array(
    'name' => 'create ofed_meeting content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ofed_meeting content'.
  $permissions['delete any ofed_meeting content'] = array(
    'name' => 'delete any ofed_meeting content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ofed_meeting content'.
  $permissions['delete own ofed_meeting content'] = array(
    'name' => 'delete own ofed_meeting content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ofed_meeting content'.
  $permissions['edit any ofed_meeting content'] = array(
    'name' => 'edit any ofed_meeting content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ofed_meeting content'.
  $permissions['edit own ofed_meeting content'] = array(
    'name' => 'edit own ofed_meeting content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'enter ofed_meeting revision log entry'.
  $permissions['enter ofed_meeting revision log entry'] = array(
    'name' => 'enter ofed_meeting revision log entry',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_meeting authored by option'.
  $permissions['override ofed_meeting authored by option'] = array(
    'name' => 'override ofed_meeting authored by option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_meeting authored on option'.
  $permissions['override ofed_meeting authored on option'] = array(
    'name' => 'override ofed_meeting authored on option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_meeting promote to front page option'.
  $permissions['override ofed_meeting promote to front page option'] = array(
    'name' => 'override ofed_meeting promote to front page option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_meeting published option'.
  $permissions['override ofed_meeting published option'] = array(
    'name' => 'override ofed_meeting published option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_meeting revision option'.
  $permissions['override ofed_meeting revision option'] = array(
    'name' => 'override ofed_meeting revision option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_meeting sticky option'.
  $permissions['override ofed_meeting sticky option'] = array(
    'name' => 'override ofed_meeting sticky option',
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
