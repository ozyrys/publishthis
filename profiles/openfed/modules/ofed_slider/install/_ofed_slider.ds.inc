<?php
/**
 * @file
 * ofed_slider.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function ofed_slider_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ofed_slider|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ofed_slider';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_ofed_slider_image_collec',
      ),
    ),
    'fields' => array(
      'field_ofed_slider_image_collec' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|ofed_slider|default'] = $ds_layout;

  return $export;
}
