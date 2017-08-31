<?php
/**
 * @file
 * ofed_banner.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ofed_banner_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ofed_banner_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function ofed_banner_image_default_styles() {
  $styles = array();

  // Exported image style: ofed_banner_button.
  $styles['ofed_banner_button'] = array(
    'label' => 'ofed_banner_button',
    'effects' => array(
      7 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 180,
          'height' => 150,
          'upscale' => 0,
        ),
        'weight' => -8,
      ),
    ),
  );

  // Exported image style: ofed_banner_full.
  $styles['ofed_banner_full'] = array(
    'label' => 'ofed_banner_full',
    'effects' => array(
      7 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 420,
          'height' => 60,
          'upscale' => 0,
        ),
        'weight' => -8,
      ),
    ),
  );

  // Exported image style: ofed_banner_leaderboard.
  $styles['ofed_banner_leaderboard'] = array(
    'label' => 'ofed_banner_leaderboard',
    'effects' => array(
      7 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 728,
          'height' => 90,
          'upscale' => 0,
        ),
        'weight' => -8,
      ),
    ),
  );

  // Exported image style: ofed_banner_medium_rectangle.
  $styles['ofed_banner_medium_rectangle'] = array(
    'label' => 'ofed_banner_medium_rectangle',
    'effects' => array(
      7 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 300,
          'height' => 250,
          'upscale' => 0,
        ),
        'weight' => -8,
      ),
    ),
  );

  // Exported image style: ofed_banner_square_rectangle.
  $styles['ofed_banner_square_rectangle'] = array(
    'label' => 'ofed_banner_square_rectangle',
    'effects' => array(
      7 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 250,
          'height' => 250,
          'upscale' => 0,
        ),
        'weight' => -8,
      ),
    ),
  );

  // Exported image style: ofed_banner_wide_skyscraper.
  $styles['ofed_banner_wide_skyscraper'] = array(
    'label' => 'ofed_banner_wide_skyscraper',
    'effects' => array(
      7 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 160,
          'height' => 600,
          'upscale' => 0,
        ),
        'weight' => -8,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function ofed_banner_node_info() {
  $items = array(
    'ofed_banner' => array(
      'name' => t('Banner'),
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
