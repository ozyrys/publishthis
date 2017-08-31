<?php

/**
 * @file
 * Enables several standard blocks during install.
 */

// Set frontend blocks.
$frontend_blocks = array(
  // Tools.
  // Print.
  array(
    'module' => 'print',
    'delta' => 'print-links',
    'theme' => _openfed_get_theme_frontend(),
    'status' => 1,
    'weight' => 0,
    'region' => 'tools',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  ),
  // Resize.
  array(
    'module' => 'text_resize',
    'delta' => '0',
    'theme' => _openfed_get_theme_frontend(),
    'status' => 1,
    'weight' => 0,
    'region' => 'tools',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  ),
  // Header.
  // Navigation.
  // Main Menu.
  array(
    'module' => 'system',
    'delta' => 'main-menu',
    'theme' => _openfed_get_theme_frontend(),
    'status' => 1,
    'weight' => 0,
    'region' => 'navigation',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  ),
  // Top.
  // Breadcrumb.
  array(
    'module' => 'easy_breadcrumb',
    'delta' => 'easy_breadcrumb',
    'theme' => _openfed_get_theme_frontend(),
    'status' => 1,
    'weight' => 0,
    'region' => 'breadcrumb',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  ),
  // Sitebar first.
  // Content top.
  // Content.
  // System help.
  array(
    'module' => 'system',
    'delta' => 'help',
    'theme' => _openfed_get_theme_frontend(),
    'status' => 1,
    'weight' => 0,
    'region' => 'content',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  ),
  // Main page content.
  array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => _openfed_get_theme_frontend(),
    'status' => 1,
    'weight' => 1,
    'region' => 'content',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  ),
  // Content bottom.
  // Aside right.
  // User login.
  array(
    'module' => 'user',
    'delta' => 'login',
    'theme' => _openfed_get_theme_frontend(),
    'status' => 1,
    'weight' => 0,
    'region' => 'sidebar_second',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  ),
);

// Install frontend blocks.
foreach ($frontend_blocks as $block) {
  $exist = db_select('block', 'b')
    ->fields('b')
    ->condition('module', $block['module'])
    ->condition('delta', $block['delta'])
    ->condition('theme', $block['theme'])
    ->execute()
    ->fetchObject();

  if (empty($exist)) {
    $query = db_insert('block')
      ->fields($block);
  }
  else {
    $query = db_update('block')
      ->fields($block)
      ->condition('module', $block['module'])
      ->condition('delta', $block['delta'])
      ->condition('theme', $block['theme']);
  }
  $query->execute();
}

// Set backend blocks.
$backend_blocks = array(
  // Tools.
  array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => _openfed_get_theme_backend(),
    'status' => 1,
    'weight' => 0,
    'region' => 'content_before',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  ),
  // Sidebar first.
  // Content top.
  // Content.
  // System help.
  array(
    'module' => 'system',
    'delta' => 'help',
    'theme' => _openfed_get_theme_backend(),
    'status' => 1,
    'weight' => 0,
    'region' => 'content',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  ),
  // Main page content.
  array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => _openfed_get_theme_backend(),
    'status' => 1,
    'weight' => 1,
    'region' => 'content',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  ),
);

// Install backend blocks.
foreach ($backend_blocks as $block) {
  $exist = db_select('block', 'b')
    ->fields('b')
    ->condition('module', $block['module'])
    ->condition('delta', $block['delta'])
    ->condition('theme', $block['theme'])
    ->execute()
    ->fetchObject();

  if (empty($exist)) {
    $query = db_insert('block')
      ->fields($block);
  }
  else {
    $query = db_update('block')
      ->fields($block)
      ->condition('module', $block['module'])
      ->condition('delta', $block['delta'])
      ->condition('theme', $block['theme']);
  }
  $query->execute();
}
