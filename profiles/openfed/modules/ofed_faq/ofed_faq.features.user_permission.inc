<?php
/**
 * @file
 * ofed_faq.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ofed_faq_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create ofed_faq content'.
  $permissions['create ofed_faq content'] = array(
    'name' => 'create ofed_faq content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ofed_faq content'.
  $permissions['delete any ofed_faq content'] = array(
    'name' => 'delete any ofed_faq content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ofed_faq content'.
  $permissions['delete own ofed_faq content'] = array(
    'name' => 'delete own ofed_faq content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ofed_faq content'.
  $permissions['edit any ofed_faq content'] = array(
    'name' => 'edit any ofed_faq content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ofed_faq content'.
  $permissions['edit own ofed_faq content'] = array(
    'name' => 'edit own ofed_faq content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'enter ofed_faq revision log entry'.
  $permissions['enter ofed_faq revision log entry'] = array(
    'name' => 'enter ofed_faq revision log entry',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_faq authored by option'.
  $permissions['override ofed_faq authored by option'] = array(
    'name' => 'override ofed_faq authored by option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_faq authored on option'.
  $permissions['override ofed_faq authored on option'] = array(
    'name' => 'override ofed_faq authored on option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_faq promote to front page option'.
  $permissions['override ofed_faq promote to front page option'] = array(
    'name' => 'override ofed_faq promote to front page option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_faq published option'.
  $permissions['override ofed_faq published option'] = array(
    'name' => 'override ofed_faq published option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_faq revision option'.
  $permissions['override ofed_faq revision option'] = array(
    'name' => 'override ofed_faq revision option',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override ofed_faq sticky option'.
  $permissions['override ofed_faq sticky option'] = array(
    'name' => 'override ofed_faq sticky option',
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
