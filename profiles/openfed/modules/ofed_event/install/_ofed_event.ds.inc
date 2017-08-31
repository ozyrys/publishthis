<?php
/**
 * @file
 * ofed_event.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ofed_event_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ofed_event|block_column';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ofed_event';
  $ds_fieldsetting->view_mode = 'block_column';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'node_link' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read more',
        'wrapper' => '',
        'class' => '',
        'ft' => array(
          'classes' => 'more',
        ),
      ),
    ),
    'field_ofed_event_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
          'lb' => 'Date',
        ),
      ),
    ),
    'field_ofed_event_summary' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|ofed_event|block_column'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ofed_event|block_element';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ofed_event';
  $ds_fieldsetting->view_mode = 'block_element';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
        'ft' => array(
          'classes' => 'more',
        ),
      ),
    ),
    'node_link' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read more',
        'wrapper' => '',
        'class' => '',
        'ft' => array(
          'classes' => 'more',
        ),
      ),
    ),
    'field_ofed_event_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
          'lb' => 'Date',
        ),
      ),
    ),
    'field_ofed_event_summary' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
  );
  $export['node|ofed_event|block_element'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ofed_event|block_list';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ofed_event';
  $ds_fieldsetting->view_mode = 'block_list';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'node_link' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read more',
        'wrapper' => '',
        'class' => '',
        'ft' => array(
          'classes' => 'more',
        ),
      ),
    ),
    'field_ofed_event_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Date',
        ),
      ),
    ),
  );
  $export['node|ofed_event|block_list'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ofed_event|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ofed_event';
  $ds_fieldsetting->view_mode = 'default';
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
    'field_ofed_event_address' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_event_author' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_event_docs' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_event_links' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_event_organizer' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_event_pubdate' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Published date',
        ),
      ),
    ),
    'field_ofed_event_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
          'lb' => 'Date',
        ),
      ),
    ),
    'field_ofed_event_summary' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_event_thumb' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'float-left',
        ),
      ),
    ),
    'field_ofed_event_update' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Updated date',
        ),
      ),
    ),
  );
  $export['node|ofed_event|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ofed_event|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ofed_event';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'field_ofed_event_address' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_event_author' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_event_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
          'lb' => 'Date',
        ),
      ),
    ),
    'field_ofed_event_docs' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_event_links' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_event_organizer' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_event_pubdate' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Published date',
        ),
      ),
    ),
    'field_ofed_event_summary' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'headline',
        ),
      ),
    ),
    'field_ofed_event_thumb' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'float-left',
        ),
      ),
    ),
    'field_ofed_event_update' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Updated date',
        ),
      ),
    ),
  );
  $export['node|ofed_event|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ofed_event|page_list';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ofed_event';
  $ds_fieldsetting->view_mode = 'page_list';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
        'ft' => array(
          'classes' => ' clear-block',
        ),
      ),
    ),
    'node_link' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read more',
        'wrapper' => '',
        'class' => '',
        'ft' => array(
          'classes' => 'more',
        ),
      ),
    ),
    'field_ofed_event_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
          'lb' => 'Date',
        ),
      ),
    ),
    'field_ofed_event_thumb' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'float-left',
        ),
      ),
    ),
  );
  $export['node|ofed_event|page_list'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ofed_event|print';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ofed_event';
  $ds_fieldsetting->view_mode = 'print';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_event_address' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_event_author' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_event_organizer' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_event_pubdate' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Published date',
        ),
      ),
    ),
    'field_ofed_event_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
          'lb' => 'Date',
        ),
      ),
    ),
    'field_ofed_event_summary' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_event_thumb' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'float-left',
        ),
      ),
    ),
    'field_ofed_event_update' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Updated date',
        ),
      ),
    ),
  );
  $export['node|ofed_event|print'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ofed_event|references';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ofed_event';
  $ds_fieldsetting->view_mode = 'references';
  $ds_fieldsetting->settings = array(
    'field_ofed_event_address' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_event_author' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_event_docs' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_event_links' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_event_organizer' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_event_pubdate' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Published date',
        ),
      ),
    ),
    'field_ofed_event_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_event_summary' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_event_thumb' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'float-left',
        ),
      ),
    ),
    'field_ofed_event_update' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Updated date',
        ),
      ),
    ),
  );
  $export['node|ofed_event|references'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ofed_event|rss';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ofed_event';
  $ds_fieldsetting->view_mode = 'rss';
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
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read more',
        'wrapper' => '',
        'class' => '',
        'ft' => array(
          'classes' => 'more',
        ),
      ),
    ),
    'field_ofed_event_pubdate' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Published date',
        ),
      ),
    ),
    'field_ofed_event_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
          'lb' => 'Date',
        ),
      ),
    ),
    'field_ofed_event_summary' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_event_update' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Updated date',
        ),
      ),
    ),
  );
  $export['node|ofed_event|rss'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ofed_event|search_result';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ofed_event';
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
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read more',
        'wrapper' => '',
        'class' => '',
        'ft' => array(
          'classes' => 'more',
        ),
      ),
    ),
    'field_ofed_event_pubdate' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Published date',
        ),
      ),
    ),
    'field_ofed_event_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
          'lb' => 'Date',
        ),
      ),
    ),
    'field_ofed_event_summary' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_event_thumb' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'float-left',
        ),
      ),
    ),
    'field_ofed_event_update' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Updated date',
        ),
      ),
    ),
  );
  $export['node|ofed_event|search_result'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ofed_event|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ofed_event';
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
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read more',
        'wrapper' => '',
        'class' => '',
        'ft' => array(
          'classes' => 'more',
        ),
      ),
    ),
    'field_ofed_event_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
          'lb' => 'Date',
        ),
      ),
    ),
    'field_ofed_event_summary' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
  );
  $export['node|ofed_event|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ofed_event_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ofed_event|block_column';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ofed_event';
  $ds_layout->view_mode = 'block_column';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_ofed_event_date',
        2 => 'field_ofed_event_summary',
        3 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_ofed_event_date' => 'ds_content',
      'field_ofed_event_summary' => 'ds_content',
      'node_link' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|ofed_event|block_column'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ofed_event|block_element';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ofed_event';
  $ds_layout->view_mode = 'block_element';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_ofed_event_date',
        2 => 'field_ofed_event_summary',
        3 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_ofed_event_date' => 'ds_content',
      'field_ofed_event_summary' => 'ds_content',
      'node_link' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|ofed_event|block_element'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ofed_event|block_list';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ofed_event';
  $ds_layout->view_mode = 'block_list';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_ofed_event_date',
        2 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_ofed_event_date' => 'ds_content',
      'node_link' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|ofed_event|block_list'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ofed_event|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ofed_event';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_ofed_event_pubdate',
        2 => 'field_ofed_event_update',
        3 => 'field_ofed_event_author',
        4 => 'field_ofed_event_date',
        5 => 'field_ofed_event_summary',
        6 => 'field_ofed_event_thumb',
        7 => 'field_ofed_event_body',
        8 => 'field_ofed_event_organizer',
        9 => 'field_ofed_event_docs',
        10 => 'field_ofed_event_links',
        11 => 'field_ofed_event_address',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_ofed_event_pubdate' => 'ds_content',
      'field_ofed_event_update' => 'ds_content',
      'field_ofed_event_author' => 'ds_content',
      'field_ofed_event_date' => 'ds_content',
      'field_ofed_event_summary' => 'ds_content',
      'field_ofed_event_thumb' => 'ds_content',
      'field_ofed_event_body' => 'ds_content',
      'field_ofed_event_organizer' => 'ds_content',
      'field_ofed_event_docs' => 'ds_content',
      'field_ofed_event_links' => 'ds_content',
      'field_ofed_event_address' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|ofed_event|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ofed_event|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ofed_event';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_ofed_event_organizer',
        1 => 'field_ofed_event_date',
        2 => 'field_ofed_event_summary',
        3 => 'field_ofed_event_thumb',
        4 => 'field_ofed_event_body',
        5 => 'field_ofed_event_links',
        6 => 'field_ofed_event_docs',
        7 => 'field_ofed_event_address',
        8 => 'field_ofed_event_author',
        9 => 'field_ofed_event_pubdate',
        10 => 'field_ofed_event_update',
      ),
    ),
    'fields' => array(
      'field_ofed_event_organizer' => 'ds_content',
      'field_ofed_event_date' => 'ds_content',
      'field_ofed_event_summary' => 'ds_content',
      'field_ofed_event_thumb' => 'ds_content',
      'field_ofed_event_body' => 'ds_content',
      'field_ofed_event_links' => 'ds_content',
      'field_ofed_event_docs' => 'ds_content',
      'field_ofed_event_address' => 'ds_content',
      'field_ofed_event_author' => 'ds_content',
      'field_ofed_event_pubdate' => 'ds_content',
      'field_ofed_event_update' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|ofed_event|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ofed_event|page_list';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ofed_event';
  $ds_layout->view_mode = 'page_list';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_ofed_event_organizer',
        2 => 'field_ofed_event_date',
        3 => 'field_ofed_event_thumb',
        4 => 'field_ofed_event_summary',
        5 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_ofed_event_organizer' => 'ds_content',
      'field_ofed_event_date' => 'ds_content',
      'field_ofed_event_thumb' => 'ds_content',
      'field_ofed_event_summary' => 'ds_content',
      'node_link' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|ofed_event|page_list'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ofed_event|print';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ofed_event';
  $ds_layout->view_mode = 'print';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_ofed_event_pubdate',
        2 => 'field_ofed_event_update',
        3 => 'field_ofed_event_author',
        4 => 'field_ofed_event_date',
        5 => 'field_ofed_event_summary',
        6 => 'field_ofed_event_thumb',
        7 => 'field_ofed_event_body',
        8 => 'field_ofed_event_organizer',
        9 => 'field_ofed_event_address',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_ofed_event_pubdate' => 'ds_content',
      'field_ofed_event_update' => 'ds_content',
      'field_ofed_event_author' => 'ds_content',
      'field_ofed_event_date' => 'ds_content',
      'field_ofed_event_summary' => 'ds_content',
      'field_ofed_event_thumb' => 'ds_content',
      'field_ofed_event_body' => 'ds_content',
      'field_ofed_event_organizer' => 'ds_content',
      'field_ofed_event_address' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|ofed_event|print'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ofed_event|references';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ofed_event';
  $ds_layout->view_mode = 'references';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_ofed_event_pubdate',
        1 => 'field_ofed_event_update',
        2 => 'field_ofed_event_author',
        3 => 'field_ofed_event_date',
        4 => 'field_ofed_event_summary',
        5 => 'field_ofed_event_thumb',
        6 => 'field_ofed_event_body',
        7 => 'field_ofed_event_organizer',
        8 => 'field_ofed_event_docs',
        9 => 'field_ofed_event_links',
        10 => 'field_ofed_event_address',
      ),
    ),
    'fields' => array(
      'field_ofed_event_pubdate' => 'ds_content',
      'field_ofed_event_update' => 'ds_content',
      'field_ofed_event_author' => 'ds_content',
      'field_ofed_event_date' => 'ds_content',
      'field_ofed_event_summary' => 'ds_content',
      'field_ofed_event_thumb' => 'ds_content',
      'field_ofed_event_body' => 'ds_content',
      'field_ofed_event_organizer' => 'ds_content',
      'field_ofed_event_docs' => 'ds_content',
      'field_ofed_event_links' => 'ds_content',
      'field_ofed_event_address' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|ofed_event|references'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ofed_event|rss';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ofed_event';
  $ds_layout->view_mode = 'rss';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_ofed_event_pubdate',
        2 => 'field_ofed_event_update',
        3 => 'field_ofed_event_date',
        4 => 'field_ofed_event_summary',
        5 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_ofed_event_pubdate' => 'ds_content',
      'field_ofed_event_update' => 'ds_content',
      'field_ofed_event_date' => 'ds_content',
      'field_ofed_event_summary' => 'ds_content',
      'node_link' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|ofed_event|rss'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ofed_event|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ofed_event';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_ofed_event_pubdate',
        2 => 'field_ofed_event_update',
        3 => 'field_ofed_event_date',
        4 => 'field_ofed_event_summary',
        5 => 'field_ofed_event_thumb',
        6 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_ofed_event_pubdate' => 'ds_content',
      'field_ofed_event_update' => 'ds_content',
      'field_ofed_event_date' => 'ds_content',
      'field_ofed_event_summary' => 'ds_content',
      'field_ofed_event_thumb' => 'ds_content',
      'node_link' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|ofed_event|search_result'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ofed_event|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ofed_event';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_ofed_event_date',
        2 => 'field_ofed_event_summary',
        3 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_ofed_event_date' => 'ds_content',
      'field_ofed_event_summary' => 'ds_content',
      'node_link' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|ofed_event|teaser'] = $ds_layout;

  return $export;
}
