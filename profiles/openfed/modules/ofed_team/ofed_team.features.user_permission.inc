<?php
/**
 * @file
 * ofed_team.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ofed_team_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create ofed_team content'.
  $permissions['create ofed_team content'] = array(
    'name' => 'create ofed_team content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ofed_team content'.
  $permissions['delete any ofed_team content'] = array(
    'name' => 'delete any ofed_team content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ofed_team content'.
  $permissions['delete own ofed_team content'] = array(
    'name' => 'delete own ofed_team content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ofed_team content'.
  $permissions['edit any ofed_team content'] = array(
    'name' => 'edit any ofed_team content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ofed_team content'.
  $permissions['edit own ofed_team content'] = array(
    'name' => 'edit own ofed_team content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'enter ofed_team revision log entry'.
  $permissions['enter ofed_team revision log entry'] = array(
    'name' => 'enter ofed_team revision log entry',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_team authored by option'.
  $permissions['override ofed_team authored by option'] = array(
    'name' => 'override ofed_team authored by option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_team authored on option'.
  $permissions['override ofed_team authored on option'] = array(
    'name' => 'override ofed_team authored on option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_team promote to front page option'.
  $permissions['override ofed_team promote to front page option'] = array(
    'name' => 'override ofed_team promote to front page option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_team published option'.
  $permissions['override ofed_team published option'] = array(
    'name' => 'override ofed_team published option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_team revision option'.
  $permissions['override ofed_team revision option'] = array(
    'name' => 'override ofed_team revision option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_team sticky option'.
  $permissions['override ofed_team sticky option'] = array(
    'name' => 'override ofed_team sticky option',
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
