<?php
/**
 * @file
 * ofed_photogallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ofed_photogallery_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ofed_photogallery_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function ofed_photogallery_image_default_styles() {
  $styles = array();

  // Exported image style: ofed_photogallery_images.
  $styles['ofed_photogallery_images'] = array(
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 150,
          'height' => 150,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
    'label' => 'ofed_photogallery_images',
  );

  // Exported image style: ofed_photogallery_images_gallery_large.
  $styles['ofed_photogallery_images_gallery_large'] = array(
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 800,
          'height' => 600,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
    'label' => 'ofed_photogallery_images_gallery_large',
  );

  // Exported image style: ofed_photogallery_images_gallery_medium.
  $styles['ofed_photogallery_images_gallery_medium'] = array(
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 400,
          'height' => 300,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
    'label' => 'ofed_photogallery_images_gallery_medium',
  );

  // Exported image style: ofed_photogallery_images_slideshow_medium.
  $styles['ofed_photogallery_images_slideshow_medium'] = array(
    'effects' => array(
      6 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 400,
          'height' => 300,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
    'label' => 'ofed_photogallery_images_slideshow_medium',
  );

  // Exported image style: ofed_photogallery_images_slideshow_small.
  $styles['ofed_photogallery_images_slideshow_small'] = array(
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 92,
          'height' => 69,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
    'label' => 'ofed_photogallery_images_slideshow_small',
  );

  // Exported image style: ofed_photogallery_images_slideshow_thumb_block_column.
  $styles['ofed_photogallery_images_slideshow_thumb_block_column'] = array(
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 284,
          'height' => 213,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
    'label' => 'ofed_photogallery_images_slideshow_thumb_block_column',
  );

  // Exported image style: ofed_photogallery_images_slideshow_thumb_block_element.
  $styles['ofed_photogallery_images_slideshow_thumb_block_element'] = array(
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 192,
          'height' => 147,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
    'label' => 'ofed_photogallery_images_slideshow_thumb_block_element',
  );

  // Exported image style: ofed_photogallery_images_slideshow_thumb_page_list.
  $styles['ofed_photogallery_images_slideshow_thumb_page_list'] = array(
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 400,
          'height' => 300,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
    'label' => 'ofed_photogallery_images_slideshow_thumb_page_list',
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function ofed_photogallery_node_info() {
  $items = array(
    'ofed_photogallery' => array(
      'name' => t('Photo gallery'),
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
