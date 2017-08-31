<?php
/**
 * @file
 * ofed_banner.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ofed_banner_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ofed_banner|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ofed_banner';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_ofed_banner_update' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
          'lb' => 'Updated date',
        ),
      ),
    ),
  );
  $export['node|ofed_banner|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ofed_banner_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ofed_banner|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ofed_banner';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_ofed_banner_img_leadboard',
        1 => 'field_ofed_banner_img_full',
        2 => 'field_ofed_banner_img_skyscraper',
        3 => 'field_ofed_banner_img_mrectangle',
        4 => 'field_ofed_banner_img_srectangle',
        5 => 'field_ofed_banner_img_button',
        6 => 'field_ofed_banner_link',
        7 => 'field_ofed_banner_click_count',
        8 => 'field_ofed_banner_update',
      ),
    ),
    'fields' => array(
      'field_ofed_banner_img_leadboard' => 'ds_content',
      'field_ofed_banner_img_full' => 'ds_content',
      'field_ofed_banner_img_skyscraper' => 'ds_content',
      'field_ofed_banner_img_mrectangle' => 'ds_content',
      'field_ofed_banner_img_srectangle' => 'ds_content',
      'field_ofed_banner_img_button' => 'ds_content',
      'field_ofed_banner_link' => 'ds_content',
      'field_ofed_banner_click_count' => 'ds_content',
      'field_ofed_banner_update' => 'ds_content',
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
  $export['node|ofed_banner|default'] = $ds_layout;

  return $export;
}
