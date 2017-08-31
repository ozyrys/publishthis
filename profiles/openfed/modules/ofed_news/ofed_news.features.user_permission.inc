<?php
/**
 * @file
 * ofed_news.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ofed_news_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create ofed_news content'.
  $permissions['create ofed_news content'] = array(
    'name' => 'create ofed_news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ofed_news content'.
  $permissions['delete any ofed_news content'] = array(
    'name' => 'delete any ofed_news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ofed_news content'.
  $permissions['delete own ofed_news content'] = array(
    'name' => 'delete own ofed_news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ofed_news content'.
  $permissions['edit any ofed_news content'] = array(
    'name' => 'edit any ofed_news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ofed_news content'.
  $permissions['edit own ofed_news content'] = array(
    'name' => 'edit own ofed_news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'enter ofed_news revision log entry'.
  $permissions['enter ofed_news revision log entry'] = array(
    'name' => 'enter ofed_news revision log entry',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_news authored by option'.
  $permissions['override ofed_news authored by option'] = array(
    'name' => 'override ofed_news authored by option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_news authored on option'.
  $permissions['override ofed_news authored on option'] = array(
    'name' => 'override ofed_news authored on option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_news promote to front page option'.
  $permissions['override ofed_news promote to front page option'] = array(
    'name' => 'override ofed_news promote to front page option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_news published option'.
  $permissions['override ofed_news published option'] = array(
    'name' => 'override ofed_news published option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_news revision option'.
  $permissions['override ofed_news revision option'] = array(
    'name' => 'override ofed_news revision option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_news sticky option'.
  $permissions['override ofed_news sticky option'] = array(
    'name' => 'override ofed_news sticky option',
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
