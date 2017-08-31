<?php
/**
 * @file
 * ofed_banner.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ofed_banner_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create ofed_banner content'.
  $permissions['create ofed_banner content'] = array(
    'name' => 'create ofed_banner content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ofed_banner content'.
  $permissions['delete any ofed_banner content'] = array(
    'name' => 'delete any ofed_banner content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ofed_banner content'.
  $permissions['delete own ofed_banner content'] = array(
    'name' => 'delete own ofed_banner content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ofed_banner content'.
  $permissions['edit any ofed_banner content'] = array(
    'name' => 'edit any ofed_banner content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ofed_banner content'.
  $permissions['edit own ofed_banner content'] = array(
    'name' => 'edit own ofed_banner content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'enter ofed_banner revision log entry'.
  $permissions['enter ofed_banner revision log entry'] = array(
    'name' => 'enter ofed_banner revision log entry',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_banner authored by option'.
  $permissions['override ofed_banner authored by option'] = array(
    'name' => 'override ofed_banner authored by option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_banner authored on option'.
  $permissions['override ofed_banner authored on option'] = array(
    'name' => 'override ofed_banner authored on option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_banner promote to front page option'.
  $permissions['override ofed_banner promote to front page option'] = array(
    'name' => 'override ofed_banner promote to front page option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_banner published option'.
  $permissions['override ofed_banner published option'] = array(
    'name' => 'override ofed_banner published option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_banner revision option'.
  $permissions['override ofed_banner revision option'] = array(
    'name' => 'override ofed_banner revision option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_banner sticky option'.
  $permissions['override ofed_banner sticky option'] = array(
    'name' => 'override ofed_banner sticky option',
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
