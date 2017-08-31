<?php
/**
 * @file
 * ofed_photogallery.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ofed_photogallery_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create ofed_photogallery content'.
  $permissions['create ofed_photogallery content'] = array(
    'name' => 'create ofed_photogallery content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ofed_photogallery content'.
  $permissions['delete any ofed_photogallery content'] = array(
    'name' => 'delete any ofed_photogallery content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ofed_photogallery content'.
  $permissions['delete own ofed_photogallery content'] = array(
    'name' => 'delete own ofed_photogallery content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ofed_photogallery content'.
  $permissions['edit any ofed_photogallery content'] = array(
    'name' => 'edit any ofed_photogallery content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ofed_photogallery content'.
  $permissions['edit own ofed_photogallery content'] = array(
    'name' => 'edit own ofed_photogallery content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'enter ofed_photogallery revision log entry'.
  $permissions['enter ofed_photogallery revision log entry'] = array(
    'name' => 'enter ofed_photogallery revision log entry',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_photogallery authored by option'.
  $permissions['override ofed_photogallery authored by option'] = array(
    'name' => 'override ofed_photogallery authored by option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_photogallery authored on option'.
  $permissions['override ofed_photogallery authored on option'] = array(
    'name' => 'override ofed_photogallery authored on option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_photogallery promote to front page option'.
  $permissions['override ofed_photogallery promote to front page option'] = array(
    'name' => 'override ofed_photogallery promote to front page option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_photogallery published option'.
  $permissions['override ofed_photogallery published option'] = array(
    'name' => 'override ofed_photogallery published option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_photogallery revision option'.
  $permissions['override ofed_photogallery revision option'] = array(
    'name' => 'override ofed_photogallery revision option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_photogallery sticky option'.
  $permissions['override ofed_photogallery sticky option'] = array(
    'name' => 'override ofed_photogallery sticky option',
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
