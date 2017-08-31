<?php
/**
 * @file
 * ofed_job.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ofed_job_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ofed_job_page_meta|node|ofed_job|form';
  $field_group->group_name = 'group_ofed_job_page_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ofed_job';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Page metadata',
    'weight' => '17',
    'children' => array(
      0 => 'field_ofed_job_pubdate',
      1 => 'field_ofed_job_update',
      2 => 'field_ofed_job_update_force',
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
  t('Page metadata');

  return $field_groups;
}
