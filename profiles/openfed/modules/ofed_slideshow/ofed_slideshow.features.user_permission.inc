<?php
/**
 * @file
 * ofed_slideshow.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ofed_slideshow_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create ofed_slideshow content'.
  $permissions['create ofed_slideshow content'] = array(
    'name' => 'create ofed_slideshow content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ofed_slideshow content'.
  $permissions['delete any ofed_slideshow content'] = array(
    'name' => 'delete any ofed_slideshow content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ofed_slideshow content'.
  $permissions['delete own ofed_slideshow content'] = array(
    'name' => 'delete own ofed_slideshow content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ofed_slideshow content'.
  $permissions['edit any ofed_slideshow content'] = array(
    'name' => 'edit any ofed_slideshow content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ofed_slideshow content'.
  $permissions['edit own ofed_slideshow content'] = array(
    'name' => 'edit own ofed_slideshow content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'enter ofed_slideshow revision log entry'.
  $permissions['enter ofed_slideshow revision log entry'] = array(
    'name' => 'enter ofed_slideshow revision log entry',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_slideshow authored by option'.
  $permissions['override ofed_slideshow authored by option'] = array(
    'name' => 'override ofed_slideshow authored by option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_slideshow authored on option'.
  $permissions['override ofed_slideshow authored on option'] = array(
    'name' => 'override ofed_slideshow authored on option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_slideshow promote to front page option'.
  $permissions['override ofed_slideshow promote to front page option'] = array(
    'name' => 'override ofed_slideshow promote to front page option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_slideshow published option'.
  $permissions['override ofed_slideshow published option'] = array(
    'name' => 'override ofed_slideshow published option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_slideshow revision option'.
  $permissions['override ofed_slideshow revision option'] = array(
    'name' => 'override ofed_slideshow revision option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_slideshow sticky option'.
  $permissions['override ofed_slideshow sticky option'] = array(
    'name' => 'override ofed_slideshow sticky option',
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
