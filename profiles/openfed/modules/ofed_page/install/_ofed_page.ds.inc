<?php
/**
 * @file
 * ofed_page.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ofed_page_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ofed_page|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ofed_page';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_ofed_page_docs' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_page_pubdate' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
          'lb' => 'Published date',
        ),
      ),
    ),
    'field_ofed_page_summary' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block headline',
        ),
      ),
    ),
    'field_ofed_page_update' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
          'lb' => 'Updated date',
        ),
      ),
    ),
  );
  $export['node|ofed_page|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ofed_page|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ofed_page';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'field_ofed_page_docs' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_page_pubdate' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
          'lb' => 'Published date',
        ),
      ),
    ),
    'field_ofed_page_summary' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block headline',
        ),
      ),
    ),
    'field_ofed_page_update' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
          'lb' => 'Updated date',
        ),
      ),
    ),
  );
  $export['node|ofed_page|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ofed_page|rss';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ofed_page';
  $ds_fieldsetting->view_mode = 'rss';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'node_link' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_ofed_page_pubdate' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => ' clear-block',
          'lb' => 'Published date',
        ),
      ),
    ),
    'field_ofed_page_update' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
          'lb' => 'Updated date',
        ),
      ),
    ),
  );
  $export['node|ofed_page|rss'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ofed_page|search_result';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ofed_page';
  $ds_fieldsetting->view_mode = 'search_result';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h3',
        'class' => '',
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'node_link' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read more',
        'wrapper' => '',
        'ft' => array(
          'classes' => 'clear-block more',
        ),
      ),
    ),
    'field_ofed_page_pubdate' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
          'lb' => 'Published date',
        ),
      ),
    ),
    'field_ofed_page_summary' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_page_update' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
          'lb' => 'Updated date',
        ),
      ),
    ),
  );
  $export['node|ofed_page|search_result'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ofed_page|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ofed_page';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h3',
        'class' => '',
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'node_link' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read more',
        'wrapper' => '',
        'ft' => array(
          'classes' => 'clear-block more',
        ),
      ),
    ),
    'field_ofed_page_pubdate' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
          'lb' => 'Published date',
        ),
      ),
    ),
    'field_ofed_page_summary' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_page_update' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
          'lb' => 'Updated date',
        ),
      ),
    ),
  );
  $export['node|ofed_page|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ofed_page_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ofed_page|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ofed_page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_ofed_page_summary',
        1 => 'field_ofed_page_body',
        2 => 'field_ofed_page_docs',
        3 => 'field_ofed_page_pubdate',
        4 => 'field_ofed_page_update',
      ),
    ),
    'fields' => array(
      'field_ofed_page_summary' => 'ds_content',
      'field_ofed_page_body' => 'ds_content',
      'field_ofed_page_docs' => 'ds_content',
      'field_ofed_page_pubdate' => 'ds_content',
      'field_ofed_page_update' => 'ds_content',
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
  $export['node|ofed_page|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ofed_page|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ofed_page';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_ofed_page_summary',
        1 => 'field_ofed_page_body',
        2 => 'field_ofed_page_docs',
        3 => 'field_ofed_page_pubdate',
        4 => 'field_ofed_page_update',
      ),
    ),
    'fields' => array(
      'field_ofed_page_summary' => 'ds_content',
      'field_ofed_page_body' => 'ds_content',
      'field_ofed_page_docs' => 'ds_content',
      'field_ofed_page_pubdate' => 'ds_content',
      'field_ofed_page_update' => 'ds_content',
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
  $export['node|ofed_page|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ofed_page|rss';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ofed_page';
  $ds_layout->view_mode = 'rss';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_ofed_page_summary',
        2 => 'field_ofed_page_pubdate',
        3 => 'field_ofed_page_update',
        4 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_ofed_page_summary' => 'ds_content',
      'field_ofed_page_pubdate' => 'ds_content',
      'field_ofed_page_update' => 'ds_content',
      'node_link' => 'ds_content',
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
  $export['node|ofed_page|rss'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ofed_page|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ofed_page';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_ofed_page_summary',
        2 => 'field_ofed_page_pubdate',
        3 => 'field_ofed_page_update',
        4 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_ofed_page_summary' => 'ds_content',
      'field_ofed_page_pubdate' => 'ds_content',
      'field_ofed_page_update' => 'ds_content',
      'node_link' => 'ds_content',
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
  $export['node|ofed_page|search_result'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ofed_page|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ofed_page';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_ofed_page_summary',
        2 => 'field_ofed_page_pubdate',
        3 => 'field_ofed_page_update',
        4 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_ofed_page_summary' => 'ds_content',
      'field_ofed_page_pubdate' => 'ds_content',
      'field_ofed_page_update' => 'ds_content',
      'node_link' => 'ds_content',
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
  $export['node|ofed_page|teaser'] = $ds_layout;

  return $export;
}
