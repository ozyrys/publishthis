<?php

/**
 * Implements hook_block_info().
 */
function ofed_federalheader_block_info() {
  $blocks = array();
  $blocks['federalheader'] = array(
      'info' => t('Belgian Federal header'),
      'cache' => DRUPAL_NO_CACHE,//DRUPAL_CACHE_GLOBAL,
  );
  return $blocks;
}

/**
 * Implements hook_block_view().
 */
function ofed_federalheader_block_view($delta = '') {
  $block = array();
  switch ($delta) {
    case 'federalheader':
      $block['subject'] = t('Belgian Federal header');
      $block['content'] = _ofed_federalheader_render_content();
      break;
  }
  return $block;
}

/**
 * Return the content of the block.
 * 
 * @return string.
 */
function _ofed_federalheader_render_content() {
  // Load style.
  drupal_add_css(drupal_get_path('module', 'ofed_federalheader') . '/assets/styles/ofed_federalheader.css');

  // Initialize.
  $output = '';
  // Get theme.
  $output .= theme('ofed_federalheader_block', array());
  // Return.
  return $output;
}