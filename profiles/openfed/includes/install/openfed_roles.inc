<?php

/**
 * @file
 * Sets up roles during install.
 */

/**
 * Create a default role for site admnistrators, with all available permissions
 * assigned.
 */
$admin_role = new stdClass();
$admin_role->name = 'Administrator';
$admin_role->weight = 2;
user_role_save($admin_role);

$adm_role = user_role_load_by_name('Administrator');
$adm_role_rid = $adm_role->rid;
// Set this as the administrator role.
variable_set('user_admin_role', $adm_role_rid);

// Assign the "administrator" role to user 1.
db_insert('users_roles')->fields(array('uid' => 1, 'rid' => $adm_role_rid))->execute();

/**
 * Create default role for Builder.
 */
$web_role = new stdClass();
$web_role->name = 'Builder';
$web_role->weight = 4;
user_role_save($web_role);
