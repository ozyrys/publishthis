<?php

/**
 * @file
 * Sets up Menus during install.
 */

$menus = menu_get_menus(FALSE);
// Create a CMS Menu if it did not exist yet.
if (!isset($menus['menu-cms-menu'])) {
  menu_save(array(
    'menu_name' => 'menu-cms-menu',
    'title' => 'CMS Menu',
    'description' => '',
  ));
}

// Update the menu router information.
menu_rebuild();
