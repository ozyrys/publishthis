<?php
/**
 * @file
 * ofed_address.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ofed_address_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ofed_address|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ofed_address';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_ofed_address_bus' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_ofed_address_country' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_address_number' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'float-left',
        ),
      ),
    ),
    'field_ofed_address_phone' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'field-name-field-ofed-address-phone',
          'fis-at' => '',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'field-phone-item',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => TRUE,
        ),
      ),
    ),
    'field_ofed_address_street' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'float-left',
        ),
      ),
    ),
    'field_ofed_address_update' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
          'lb' => 'Updated date',
        ),
      ),
    ),
    'field_ofed_address_zip' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block float-left',
        ),
      ),
    ),
  );
  $export['node|ofed_address|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ofed_address|page_list';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ofed_address';
  $ds_fieldsetting->view_mode = 'page_list';
  $ds_fieldsetting->settings = array(
    'node_link' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_ofed_address_city' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'float-left',
        ),
      ),
    ),
    'field_ofed_address_country' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_address_number' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'float-left',
        ),
      ),
    ),
    'field_ofed_address_street' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'float-left',
        ),
      ),
    ),
    'field_ofed_address_zip' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block float-left',
        ),
      ),
    ),
  );
  $export['node|ofed_address|page_list'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ofed_address|references';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ofed_address';
  $ds_fieldsetting->view_mode = 'references';
  $ds_fieldsetting->settings = array(
    'field_ofed_address_bus' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_ofed_address_country' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_address_number' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'float-left',
        ),
      ),
    ),
    'field_ofed_address_street' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'float-left',
        ),
      ),
    ),
    'field_ofed_address_zip' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block float-left',
        ),
      ),
    ),
    'field_ofed_address_phone' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'field-name-field-ofed-address-phone',
          'fis-at' => '',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'field-phone-item',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => TRUE,
        ),
      ),
    ),
  );
  $export['node|ofed_address|references'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ofed_address|short_reference';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ofed_address';
  $ds_fieldsetting->view_mode = 'short_reference';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'div',
        'class' => 'field field-name-field-ofed-address-name',
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
  );
  $export['node|ofed_address|short_reference'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ofed_address_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ofed_address|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ofed_address';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_ofed_address_name',
        1 => 'group_address_line_1',
        2 => 'group_address_line_2',
        3 => 'field_ofed_address_street',
        4 => 'group_address_line_3',
        5 => 'field_ofed_address_zip',
        6 => 'field_ofed_address_number',
        7 => 'field_ofed_address_bus',
        8 => 'field_ofed_address_country',
        9 => 'field_ofed_address_city',
        10 => 'field_ofed_address_email',
        11 => 'field_ofed_address_phone',
        12 => 'field_ofed_address_opening_hours',
        13 => 'field_ofed_address_map',
        14 => 'field_ofed_address_directions',
        15 => 'field_ofed_address_update',
      ),
    ),
    'fields' => array(
      'field_ofed_address_name' => 'ds_content',
      'group_address_line_1' => 'ds_content',
      'group_address_line_2' => 'ds_content',
      'field_ofed_address_street' => 'ds_content',
      'group_address_line_3' => 'ds_content',
      'field_ofed_address_zip' => 'ds_content',
      'field_ofed_address_number' => 'ds_content',
      'field_ofed_address_bus' => 'ds_content',
      'field_ofed_address_country' => 'ds_content',
      'field_ofed_address_city' => 'ds_content',
      'field_ofed_address_email' => 'ds_content',
      'field_ofed_address_phone' => 'ds_content',
      'field_ofed_address_opening_hours' => 'ds_content',
      'field_ofed_address_map' => 'ds_content',
      'field_ofed_address_directions' => 'ds_content',
      'field_ofed_address_update' => 'ds_content',
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
  $export['node|ofed_address|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ofed_address|page_list';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ofed_address';
  $ds_layout->view_mode = 'page_list';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_ofed_address_name',
        1 => 'group_address_line_1',
        2 => 'group_address_line_2',
        3 => 'field_ofed_address_street',
        4 => 'field_ofed_address_zip',
        5 => 'group_address_line_3',
        6 => 'field_ofed_address_number',
        7 => 'field_ofed_address_city',
        8 => 'field_ofed_address_country',
        9 => 'field_ofed_address_bus',
        10 => 'node_link',
      ),
    ),
    'fields' => array(
      'field_ofed_address_name' => 'ds_content',
      'group_address_line_1' => 'ds_content',
      'group_address_line_2' => 'ds_content',
      'field_ofed_address_street' => 'ds_content',
      'field_ofed_address_zip' => 'ds_content',
      'group_address_line_3' => 'ds_content',
      'field_ofed_address_number' => 'ds_content',
      'field_ofed_address_city' => 'ds_content',
      'field_ofed_address_country' => 'ds_content',
      'field_ofed_address_bus' => 'ds_content',
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
  $export['node|ofed_address|page_list'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ofed_address|references';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ofed_address';
  $ds_layout->view_mode = 'references';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_ofed_address_name',
        1 => 'group_address_line_1',
        2 => 'field_ofed_address_street',
        3 => 'field_ofed_address_number',
        4 => 'field_ofed_address_bus',
        5 => 'group_address_line_2',
        6 => 'field_ofed_address_zip',
        7 => 'field_ofed_address_city',
        8 => 'group_address_line_3',
        9 => 'field_ofed_address_country',
        10 => 'field_ofed_address_email',
        11 => 'field_ofed_address_phone',
        12 => 'field_ofed_address_opening_hours',
        13 => 'field_ofed_address_map',
        14 => 'field_ofed_address_directions',
      ),
    ),
    'fields' => array(
      'field_ofed_address_name' => 'ds_content',
      'group_address_line_1' => 'ds_content',
      'field_ofed_address_street' => 'ds_content',
      'field_ofed_address_number' => 'ds_content',
      'field_ofed_address_bus' => 'ds_content',
      'group_address_line_2' => 'ds_content',
      'field_ofed_address_zip' => 'ds_content',
      'field_ofed_address_city' => 'ds_content',
      'group_address_line_3' => 'ds_content',
      'field_ofed_address_country' => 'ds_content',
      'field_ofed_address_email' => 'ds_content',
      'field_ofed_address_phone' => 'ds_content',
      'field_ofed_address_opening_hours' => 'ds_content',
      'field_ofed_address_map' => 'ds_content',
      'field_ofed_address_directions' => 'ds_content',
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
  $export['node|ofed_address|references'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ofed_address|short_reference';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ofed_address';
  $ds_layout->view_mode = 'short_reference';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
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
  $export['node|ofed_address|short_reference'] = $ds_layout;

  return $export;
}
