<?php
/**
 * @file
 * ofed_solr.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ofed_solr_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer facets'.
  $permissions['administer facets'] = array(
    'name' => 'administer facets',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'facetapi',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Configurator' => 'Configurator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Builder' => 'Builder',
      'Configurator' => 'Configurator',
      'Content Manager' => 'Content Manager',
      'User Manager' => 'User Manager',
    ),
    'module' => 'search',
  );

  // Exported permission: 'view search_info on node'.
  $permissions['view search_info on node'] = array(
    'name' => 'view search_info on node',
    'roles' => array(
      'Administrator' => 'Administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'ds_extras',
  );

  // Exported permission: 'view search_snippet on node'.
  $permissions['view search_snippet on node'] = array(
    'name' => 'view search_snippet on node',
    'roles' => array(
      'Administrator' => 'Administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'ds_extras',
  );

  return $permissions;
}
