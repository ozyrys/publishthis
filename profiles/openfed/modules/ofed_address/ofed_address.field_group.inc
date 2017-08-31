<?php
/**
 * @file
 * ofed_address.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ofed_address_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_address_line_1|node|ofed_address|default';
  $field_group->group_name = 'group_address_line_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ofed_address';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Address line 1',
    'weight' => '1',
    'children' => array(
      0 => 'field_ofed_address_bus',
      1 => 'field_ofed_address_number',
      2 => 'field_ofed_address_street',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Address line 1',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_address_line_1|node|ofed_address|page_list';
  $field_group->group_name = 'group_address_line_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ofed_address';
  $field_group->mode = 'page_list';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Address line 1',
    'weight' => '1',
    'children' => array(
      0 => 'field_ofed_address_bus',
      1 => 'field_ofed_address_number',
      2 => 'field_ofed_address_street',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Address line 1',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_address_line_1|node|ofed_address|references';
  $field_group->group_name = 'group_address_line_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ofed_address';
  $field_group->mode = 'references';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Address line 1',
    'weight' => '1',
    'children' => array(
      0 => 'field_ofed_address_bus',
      1 => 'field_ofed_address_number',
      2 => 'field_ofed_address_street',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Address line 1',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_address_line_2|node|ofed_address|default';
  $field_group->group_name = 'group_address_line_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ofed_address';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Address line 2',
    'weight' => '2',
    'children' => array(
      0 => 'field_ofed_address_city',
      1 => 'field_ofed_address_zip',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Address line 2',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_address_line_2|node|ofed_address|page_list';
  $field_group->group_name = 'group_address_line_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ofed_address';
  $field_group->mode = 'page_list';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Address line 2',
    'weight' => '2',
    'children' => array(
      0 => 'field_ofed_address_city',
      1 => 'field_ofed_address_zip',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Address line 2',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_address_line_2|node|ofed_address|references';
  $field_group->group_name = 'group_address_line_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ofed_address';
  $field_group->mode = 'references';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Address line 2',
    'weight' => '5',
    'children' => array(
      0 => 'field_ofed_address_city',
      1 => 'field_ofed_address_zip',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Address line 2',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_address_line_3|node|ofed_address|default';
  $field_group->group_name = 'group_address_line_3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ofed_address';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Address line 3',
    'weight' => '3',
    'children' => array(
      0 => 'field_ofed_address_country',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Address line 3',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_address_line_3|node|ofed_address|page_list';
  $field_group->group_name = 'group_address_line_3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ofed_address';
  $field_group->mode = 'page_list';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Address line 3',
    'weight' => '3',
    'children' => array(
      0 => 'field_ofed_address_country',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Address line 3',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_address_line_3|node|ofed_address|references';
  $field_group->group_name = 'group_address_line_3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ofed_address';
  $field_group->mode = 'references';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Address line 3',
    'weight' => '8',
    'children' => array(
      0 => 'field_ofed_address_country',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Address line 3',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ofed_address_page_meta|node|ofed_address|form';
  $field_group->group_name = 'group_ofed_address_page_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ofed_address';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Page metadata',
    'weight' => '15',
    'children' => array(
      0 => 'field_ofed_address_pubdate',
      1 => 'field_ofed_address_update',
      2 => 'field_ofed_address_update_force',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Page metadata',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Address line 1');
  t('Address line 2');
  t('Address line 3');
  t('Page metadata');

  return $field_groups;
}
