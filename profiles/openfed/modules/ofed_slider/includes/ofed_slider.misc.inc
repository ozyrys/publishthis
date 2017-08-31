<?php

/**
 * Return the list of custom menu + main menu.
 * @return array
 */
function _ofed_slider_list_options_menu() {
  $menus = menu_get_menus(FALSE);
  unset($menus['devel']);
  $menus['main-menu'] = 'Main menu';
  asort($menus);

  return $menus;
}

/**
 * Options callback for ofed_slider_menu field
 * @return - returns an indexed array as integer => string
 */
function _ofed_slider_options_list() {
  $menu_list = _ofed_slider_list_options_menu();
  $menu_array = menu_parent_options($menu_list, 0);
  $array_menu = array();
  $array_menu['-1'] = t('Generic Image');

  foreach ($menu_array as $key => $value) {
    $pos = strpos($key, ':');
    $id = substr($key, $pos + 1, strlen($key));
    $name = substr($key, 0, $pos);
    $menu_name = str_replace('<', '', $value);
    $menu_name = str_replace('>', '', $menu_name);

    if ($id == 0) {
      $array_menu[$name] = $menu_name;
    }
    else {
      $array_menu[$id] = $value;
    }
  }

  return $array_menu;
}