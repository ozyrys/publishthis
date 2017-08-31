<?php
/**
 * @file
 * ofed_team.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ofed_team_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ofed_team_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function ofed_team_image_default_styles() {
  $styles = array();

  // Exported image style: ofed_team_thumb.
  $styles['ofed_team_thumb'] = array(
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 125,
          'height' => 150,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
    'label' => 'ofed_team_thumb',
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function ofed_team_node_info() {
  $items = array(
    'ofed_team' => array(
      'name' => t('Team members'),
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
