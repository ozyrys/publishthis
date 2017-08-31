<?php
/**
 * @file
 * ofed_slider.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ofed_slider_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create ofed_slider content'.
  $permissions['create ofed_slider content'] = array(
    'name' => 'create ofed_slider content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ofed_slider content'.
  $permissions['delete any ofed_slider content'] = array(
    'name' => 'delete any ofed_slider content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ofed_slider content'.
  $permissions['delete own ofed_slider content'] = array(
    'name' => 'delete own ofed_slider content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ofed_slider content'.
  $permissions['edit any ofed_slider content'] = array(
    'name' => 'edit any ofed_slider content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ofed_slider content'.
  $permissions['edit own ofed_slider content'] = array(
    'name' => 'edit own ofed_slider content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'enter ofed_slider revision log entry'.
  $permissions['enter ofed_slider revision log entry'] = array(
    'name' => 'enter ofed_slider revision log entry',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_slider authored by option'.
  $permissions['override ofed_slider authored by option'] = array(
    'name' => 'override ofed_slider authored by option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_slider authored on option'.
  $permissions['override ofed_slider authored on option'] = array(
    'name' => 'override ofed_slider authored on option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_slider promote to front page option'.
  $permissions['override ofed_slider promote to front page option'] = array(
    'name' => 'override ofed_slider promote to front page option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_slider published option'.
  $permissions['override ofed_slider published option'] = array(
    'name' => 'override ofed_slider published option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_slider revision option'.
  $permissions['override ofed_slider revision option'] = array(
    'name' => 'override ofed_slider revision option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_slider sticky option'.
  $permissions['override ofed_slider sticky option'] = array(
    'name' => 'override ofed_slider sticky option',
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
