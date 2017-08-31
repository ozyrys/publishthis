<?php
/**
 * @file
 * ofed_job.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ofed_job_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create ofed_job content'.
  $permissions['create ofed_job content'] = array(
    'name' => 'create ofed_job content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ofed_job content'.
  $permissions['delete any ofed_job content'] = array(
    'name' => 'delete any ofed_job content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ofed_job content'.
  $permissions['delete own ofed_job content'] = array(
    'name' => 'delete own ofed_job content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ofed_job content'.
  $permissions['edit any ofed_job content'] = array(
    'name' => 'edit any ofed_job content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ofed_job content'.
  $permissions['edit own ofed_job content'] = array(
    'name' => 'edit own ofed_job content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'enter ofed_job revision log entry'.
  $permissions['enter ofed_job revision log entry'] = array(
    'name' => 'enter ofed_job revision log entry',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_job authored by option'.
  $permissions['override ofed_job authored by option'] = array(
    'name' => 'override ofed_job authored by option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_job authored on option'.
  $permissions['override ofed_job authored on option'] = array(
    'name' => 'override ofed_job authored on option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_job promote to front page option'.
  $permissions['override ofed_job promote to front page option'] = array(
    'name' => 'override ofed_job promote to front page option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_job published option'.
  $permissions['override ofed_job published option'] = array(
    'name' => 'override ofed_job published option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_job revision option'.
  $permissions['override ofed_job revision option'] = array(
    'name' => 'override ofed_job revision option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_job sticky option'.
  $permissions['override ofed_job sticky option'] = array(
    'name' => 'override ofed_job sticky option',
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
