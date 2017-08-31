<?php
/**
 * @file
 * ofed_video.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ofed_video_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create ofed_video content'.
  $permissions['create ofed_video content'] = array(
    'name' => 'create ofed_video content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ofed_video content'.
  $permissions['delete any ofed_video content'] = array(
    'name' => 'delete any ofed_video content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ofed_video content'.
  $permissions['delete own ofed_video content'] = array(
    'name' => 'delete own ofed_video content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ofed_video content'.
  $permissions['edit any ofed_video content'] = array(
    'name' => 'edit any ofed_video content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ofed_video content'.
  $permissions['edit own ofed_video content'] = array(
    'name' => 'edit own ofed_video content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'enter ofed_video revision log entry'.
  $permissions['enter ofed_video revision log entry'] = array(
    'name' => 'enter ofed_video revision log entry',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_video authored by option'.
  $permissions['override ofed_video authored by option'] = array(
    'name' => 'override ofed_video authored by option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_video authored on option'.
  $permissions['override ofed_video authored on option'] = array(
    'name' => 'override ofed_video authored on option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_video promote to front page option'.
  $permissions['override ofed_video promote to front page option'] = array(
    'name' => 'override ofed_video promote to front page option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_video published option'.
  $permissions['override ofed_video published option'] = array(
    'name' => 'override ofed_video published option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_video revision option'.
  $permissions['override ofed_video revision option'] = array(
    'name' => 'override ofed_video revision option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_video sticky option'.
  $permissions['override ofed_video sticky option'] = array(
    'name' => 'override ofed_video sticky option',
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
