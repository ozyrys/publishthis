<?php
/**
 * @file
 * CMS theme template file
 */

/**
 * Register a theme implementations.
 */
function cms_theme_theme() {
  return array();
}

/**
 * Common Implementation.
 */
require_once 'template_generic.php';
require_once 'template_menu.php';
require_once 'template_view.php';
require_once 'template_module.php';
