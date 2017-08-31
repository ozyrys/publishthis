<?php
/**
 * @file
 * ofed_press.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ofed_press_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ofed_press_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function ofed_press_image_default_styles() {
  $styles = array();

  // Exported image style: ofed_press_thumb.
  $styles['ofed_press_thumb'] = array(
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 150,
          'upscale' => 0,
        ),
        'weight' => -8,
      ),
    ),
    'label' => 'ofed_press_thumb',
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function ofed_press_node_info() {
  $items = array(
    'ofed_press' => array(
      'name' => t('Press'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
