<?php
/**
 * @file
 * ofed_job.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ofed_job_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ofed_job|block_column';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ofed_job';
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
        'ft' => array(),
      ),
    ),
    'node_link' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read more',
        'wrapper' => '',
        'class' => '',
        'ft' => array(
          'classes' => 'clear-block more',
        ),
      ),
    ),
    'field_ofed_job_pubdate' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Published date',
        ),
      ),
    ),
    'field_ofed_job_summary' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_job_update' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Updated date',
        ),
      ),
    ),
  );
  $export['node|ofed_job|block_column'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ofed_job|block_element';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ofed_job';
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
        'ft' => array(),
      ),
    ),
    'node_link' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read more',
        'wrapper' => '',
        'class' => '',
        'ft' => array(
          'classes' => 'clear-block more',
        ),
      ),
    ),
    'field_ofed_job_pubdate' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Published date',
        ),
      ),
    ),
    'field_ofed_job_summary' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_job_update' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Updated date',
        ),
      ),
    ),
  );
  $export['node|ofed_job|block_element'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ofed_job|block_list';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ofed_job';
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
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read more',
        'wrapper' => '',
        'class' => '',
        'ft' => array(
          'classes' => 'clear-block more',
        ),
      ),
    ),
    'field_ofed_job_pubdate' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Published date',
        ),
      ),
    ),
    'field_ofed_job_update' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Updated date',
        ),
      ),
    ),
  );
  $export['node|ofed_job|block_list'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ofed_job|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ofed_job';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_ofed_job_body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_job_description' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_job_docs' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_job_experience' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_job_languages' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_job_process' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_job_profile' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_job_pubdate' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Published date',
        ),
      ),
    ),
    'field_ofed_job_reference' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_job_sector' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_job_study_level' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_job_summary' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_job_thumb' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'float-left',
        ),
      ),
    ),
    'field_ofed_job_update' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Updated date',
        ),
      ),
    ),
    'field_ofed_job_work_location' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
  );
  $export['node|ofed_job|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ofed_job|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ofed_job';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'field_ofed_job_description' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_job_docs' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_job_experience' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_job_languages' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_job_process' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_job_profile' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
          'func' => 'theme_ds_field_expert',
          'lb' => 'Profile',
          'lb-el' => 'h2',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field field-name-field-ofed-job-profile clear-block',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_ofed_job_pubdate' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Published date',
        ),
      ),
    ),
    'field_ofed_job_reference' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_job_sector' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_job_study_level' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_job_summary' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'headline',
        ),
      ),
    ),
    'field_ofed_job_thumb' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_ofed_job_update' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Updated date',
        ),
      ),
    ),
    'field_ofed_job_work_location' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
  );
  $export['node|ofed_job|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ofed_job|page_list';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ofed_job';
  $ds_fieldsetting->view_mode = 'page_list';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h3',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'node_link' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read more',
        'wrapper' => '',
        'class' => '',
        'ft' => array(
          'classes' => 'clear-block more',
        ),
      ),
    ),
    'field_ofed_job_pubdate' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Published date',
        ),
      ),
    ),
    'field_ofed_job_update' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Updated date',
        ),
      ),
    ),
  );
  $export['node|ofed_job|page_list'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ofed_job|print';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ofed_job';
  $ds_fieldsetting->view_mode = 'print';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_ofed_job_pubdate' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Published date',
        ),
      ),
    ),
    'field_ofed_job_update' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Updated date',
        ),
      ),
    ),
    'field_ofed_job_process' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_job_profile' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_job_description' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_job_study_level' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_job_experience' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_job_languages' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_job_sector' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_job_work_location' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_job_reference' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_job_docs' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_job_thumb' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'float-left',
        ),
      ),
    ),
    'field_ofed_job_body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_job_summary' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
  );
  $export['node|ofed_job|print'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ofed_job|rss';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ofed_job';
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
      'formatter_settings' => array(
        'link text' => 'Read more',
        'wrapper' => '',
        'class' => '',
        'ft' => array(
          'classes' => 'clear-block more',
        ),
      ),
    ),
    'field_ofed_job_pubdate' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Published date',
        ),
      ),
    ),
    'field_ofed_job_summary' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_job_update' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Updated date',
        ),
      ),
    ),
  );
  $export['node|ofed_job|rss'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ofed_job|search_result';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ofed_job';
  $ds_fieldsetting->view_mode = 'search_result';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
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
          'classes' => 'clear-block more',
        ),
      ),
    ),
    'field_ofed_job_pubdate' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Published date',
        ),
      ),
    ),
    'field_ofed_job_summary' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_job_thumb' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'float-left',
        ),
      ),
    ),
    'field_ofed_job_update' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Updated date',
        ),
      ),
    ),
  );
  $export['node|ofed_job|search_result'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ofed_job|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ofed_job';
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
        'ft' => array(),
      ),
    ),
    'node_link' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read more',
        'wrapper' => '',
        'class' => '',
        'ft' => array(
          'classes' => 'clear-block more',
        ),
      ),
    ),
    'field_ofed_job_pubdate' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Published date',
        ),
      ),
    ),
    'field_ofed_job_summary' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clear-block',
        ),
      ),
    ),
    'field_ofed_job_update' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Updated date',
        ),
      ),
    ),
  );
  $export['node|ofed_job|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ofed_job_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ofed_job|block_column';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ofed_job';
  $ds_layout->view_mode = 'block_column';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_ofed_job_pubdate',
        2 => 'field_ofed_job_update',
        3 => 'field_ofed_job_summary',
        4 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_ofed_job_pubdate' => 'ds_content',
      'field_ofed_job_update' => 'ds_content',
      'field_ofed_job_summary' => 'ds_content',
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
  $export['node|ofed_job|block_column'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ofed_job|block_element';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ofed_job';
  $ds_layout->view_mode = 'block_element';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_ofed_job_pubdate',
        2 => 'field_ofed_job_update',
        3 => 'field_ofed_job_summary',
        4 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_ofed_job_pubdate' => 'ds_content',
      'field_ofed_job_update' => 'ds_content',
      'field_ofed_job_summary' => 'ds_content',
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
  $export['node|ofed_job|block_element'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ofed_job|block_list';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ofed_job';
  $ds_layout->view_mode = 'block_list';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_ofed_job_pubdate',
        2 => 'field_ofed_job_update',
        3 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_ofed_job_pubdate' => 'ds_content',
      'field_ofed_job_update' => 'ds_content',
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
  $export['node|ofed_job|block_list'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ofed_job|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ofed_job';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_ofed_job_pubdate',
        2 => 'field_ofed_job_update',
        3 => 'field_ofed_job_summary',
        4 => 'field_ofed_job_thumb',
        5 => 'field_ofed_job_body',
        6 => 'field_ofed_job_reference',
        7 => 'field_ofed_job_occupation',
        8 => 'field_ofed_job_work_location',
        9 => 'field_ofed_job_sector',
        10 => 'field_ofed_job_languages',
        11 => 'field_ofed_job_experience',
        12 => 'field_ofed_job_study_level',
        13 => 'field_ofed_job_description',
        14 => 'field_ofed_job_profile',
        15 => 'field_ofed_job_process',
        16 => 'field_ofed_job_docs',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_ofed_job_pubdate' => 'ds_content',
      'field_ofed_job_update' => 'ds_content',
      'field_ofed_job_summary' => 'ds_content',
      'field_ofed_job_thumb' => 'ds_content',
      'field_ofed_job_body' => 'ds_content',
      'field_ofed_job_reference' => 'ds_content',
      'field_ofed_job_occupation' => 'ds_content',
      'field_ofed_job_work_location' => 'ds_content',
      'field_ofed_job_sector' => 'ds_content',
      'field_ofed_job_languages' => 'ds_content',
      'field_ofed_job_experience' => 'ds_content',
      'field_ofed_job_study_level' => 'ds_content',
      'field_ofed_job_description' => 'ds_content',
      'field_ofed_job_profile' => 'ds_content',
      'field_ofed_job_process' => 'ds_content',
      'field_ofed_job_docs' => 'ds_content',
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
  $export['node|ofed_job|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ofed_job|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ofed_job';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_ofed_job_pubdate',
        1 => 'field_ofed_job_update',
        2 => 'field_ofed_job_reference',
        3 => 'field_ofed_job_thumb',
        4 => 'field_ofed_job_summary',
        5 => 'field_ofed_job_body',
        6 => 'field_ofed_job_description',
        7 => 'field_ofed_job_profile',
        8 => 'field_ofed_job_process',
        9 => 'field_ofed_job_occupation',
        10 => 'field_ofed_job_sector',
        11 => 'field_ofed_job_languages',
        12 => 'field_ofed_job_experience',
        13 => 'field_ofed_job_study_level',
        14 => 'field_ofed_job_docs',
        15 => 'field_ofed_job_work_location',
      ),
    ),
    'fields' => array(
      'field_ofed_job_pubdate' => 'ds_content',
      'field_ofed_job_update' => 'ds_content',
      'field_ofed_job_reference' => 'ds_content',
      'field_ofed_job_thumb' => 'ds_content',
      'field_ofed_job_summary' => 'ds_content',
      'field_ofed_job_body' => 'ds_content',
      'field_ofed_job_description' => 'ds_content',
      'field_ofed_job_profile' => 'ds_content',
      'field_ofed_job_process' => 'ds_content',
      'field_ofed_job_occupation' => 'ds_content',
      'field_ofed_job_sector' => 'ds_content',
      'field_ofed_job_languages' => 'ds_content',
      'field_ofed_job_experience' => 'ds_content',
      'field_ofed_job_study_level' => 'ds_content',
      'field_ofed_job_docs' => 'ds_content',
      'field_ofed_job_work_location' => 'ds_content',
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
  $export['node|ofed_job|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ofed_job|page_list';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ofed_job';
  $ds_layout->view_mode = 'page_list';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_ofed_job_reference',
        2 => 'field_ofed_job_summary',
        3 => 'field_ofed_job_pubdate',
        4 => 'field_ofed_job_update',
        5 => 'field_ofed_job_languages',
        6 => 'field_ofed_job_diplomas',
        7 => 'field_ofed_job_study_level',
        8 => 'field_ofed_job_work_location',
        9 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_ofed_job_reference' => 'ds_content',
      'field_ofed_job_summary' => 'ds_content',
      'field_ofed_job_pubdate' => 'ds_content',
      'field_ofed_job_update' => 'ds_content',
      'field_ofed_job_languages' => 'ds_content',
      'field_ofed_job_diplomas' => 'ds_content',
      'field_ofed_job_study_level' => 'ds_content',
      'field_ofed_job_work_location' => 'ds_content',
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
  $export['node|ofed_job|page_list'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ofed_job|print';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ofed_job';
  $ds_layout->view_mode = 'print';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_ofed_job_pubdate',
        2 => 'field_ofed_job_update',
        3 => 'field_ofed_job_summary',
        4 => 'field_ofed_job_thumb',
        5 => 'field_ofed_job_body',
        6 => 'field_ofed_job_reference',
        7 => 'field_ofed_job_occupation',
        8 => 'field_ofed_job_work_location',
        9 => 'field_ofed_job_sector',
        10 => 'field_ofed_job_languages',
        11 => 'field_ofed_job_experience',
        12 => 'field_ofed_job_study_level',
        13 => 'field_ofed_job_description',
        14 => 'field_ofed_job_profile',
        15 => 'field_ofed_job_process',
        16 => 'field_ofed_job_docs',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_ofed_job_pubdate' => 'ds_content',
      'field_ofed_job_update' => 'ds_content',
      'field_ofed_job_summary' => 'ds_content',
      'field_ofed_job_thumb' => 'ds_content',
      'field_ofed_job_body' => 'ds_content',
      'field_ofed_job_reference' => 'ds_content',
      'field_ofed_job_occupation' => 'ds_content',
      'field_ofed_job_work_location' => 'ds_content',
      'field_ofed_job_sector' => 'ds_content',
      'field_ofed_job_languages' => 'ds_content',
      'field_ofed_job_experience' => 'ds_content',
      'field_ofed_job_study_level' => 'ds_content',
      'field_ofed_job_description' => 'ds_content',
      'field_ofed_job_profile' => 'ds_content',
      'field_ofed_job_process' => 'ds_content',
      'field_ofed_job_docs' => 'ds_content',
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
  $export['node|ofed_job|print'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ofed_job|rss';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ofed_job';
  $ds_layout->view_mode = 'rss';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_ofed_job_pubdate',
        2 => 'field_ofed_job_update',
        3 => 'field_ofed_job_summary',
        4 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_ofed_job_pubdate' => 'ds_content',
      'field_ofed_job_update' => 'ds_content',
      'field_ofed_job_summary' => 'ds_content',
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
  $export['node|ofed_job|rss'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ofed_job|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ofed_job';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_ofed_job_pubdate',
        2 => 'field_ofed_job_update',
        3 => 'field_ofed_job_summary',
        4 => 'field_ofed_job_thumb',
        5 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_ofed_job_pubdate' => 'ds_content',
      'field_ofed_job_update' => 'ds_content',
      'field_ofed_job_summary' => 'ds_content',
      'field_ofed_job_thumb' => 'ds_content',
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
  $export['node|ofed_job|search_result'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ofed_job|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ofed_job';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_ofed_job_pubdate',
        2 => 'field_ofed_job_update',
        3 => 'field_ofed_job_summary',
        4 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_ofed_job_pubdate' => 'ds_content',
      'field_ofed_job_update' => 'ds_content',
      'field_ofed_job_summary' => 'ds_content',
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
  $export['node|ofed_job|teaser'] = $ds_layout;

  return $export;
}
