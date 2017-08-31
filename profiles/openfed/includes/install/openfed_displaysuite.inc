<?php

/**
 * @file
 * Sets up Display Suite during install.
 */

/**
 * Variable for configuration page at 'admin/structure/ds/list/extras'.
 */
variable_set('ds_extras_fields_extra', FALSE);
variable_set('ds_extras_fields_extra_list', '');
variable_set('ds_extras_field_permissions', TRUE);
variable_set('ds_extras_field_template', TRUE);
variable_set('ds_extras_flag', TRUE);
variable_set('ds_extras_hidden_region', FALSE);
variable_set('ds_extras_hide_page_sidebars', TRUE);
variable_set('ds_extras_hide_page_title', TRUE);
variable_set('ds_extras_region_to_block', FALSE);
variable_set('ds_extras_switch_field', FALSE);
variable_set('ds_extras_switch_view_mode', TRUE);
variable_set('ds_extras_vd', TRUE);
variable_set('ft-default', 'theme_ds_field_minimal');

/**
 * Variable for configuration page at 'admin/structure/ds/list/search'.
 */
variable_set('ds_search_type', 'node');
variable_set('ds_search_path', 'content');
variable_set('ds_search_view_mode', 'search_result');
variable_set('ds_search_variables', 'search_totals_plus_keywords');
variable_set('ds_search_show_title', TRUE);
variable_set('ds_search_language', TRUE);
variable_set('ds_search_highlight', TRUE);
variable_set('ds_search_highlight_selector', '.view-mode-search_result');
variable_set('ds_search_group_by_type', FALSE);
variable_set('ds_search_group_by_type_other', 'Other');
variable_set('ds_search_group_by_type_other_wrapper', 'markup');
variable_set('ds_search_group_by_type_settings', array(
  'webform' => array(
    'status' => 1,
    'label' =>
    'Results for webform',
    'wrapper' => 'markup',
    'weight' => 0,
  ),
  )
);
variable_set('ds_search_node_form_alter', FALSE);
variable_set('ds_search_node_limit', '10');

/**
 * Variable for configuration page at 'admin/structure/ds/classes'.
 */
variable_set('ds_classes_fields', 'align-left|Align left
align-right|Align right
align-center|Align center
clear-block|Clear block
float-left|Float left
float-right|Float right
focus|Focus
headline|Headline
highlight-heavy|Highlight Heavy
highlight-medium|Highlight Medium
highlight-light|Highlight Light
more|More link
');
variable_set('ds_classes_regions', '');

/**
 * View modes.
 */
$view_mode = new stdClass();
$view_mode->view_mode = 'page_list';
$view_mode->label = 'Page list';
$view_mode->entities = array(
  'node' => 'node',
);
drupal_write_record('ds_view_modes', $view_mode);

$view_mode = new stdClass();
$view_mode->view_mode = 'block_list';
$view_mode->label = 'Block list';
$view_mode->entities = array(
  'node' => 'node',
);
drupal_write_record('ds_view_modes', $view_mode);

$view_mode = new stdClass();
$view_mode->view_mode = 'block_column';
$view_mode->label = 'Block column';
$view_mode->entities = array(
  'node' => 'node',
);
drupal_write_record('ds_view_modes', $view_mode);

$view_mode = new stdClass();
$view_mode->view_mode = 'block_element';
$view_mode->label = 'Block element';
$view_mode->entities = array(
  'node' => 'node',
);
drupal_write_record('ds_view_modes', $view_mode);

$view_mode = new stdClass();
$view_mode->view_mode = 'references';
$view_mode->label = 'References';
$view_mode->entities = array(
  'node' => 'node',
);
drupal_write_record('ds_view_modes', $view_mode);

$view_mode = new stdClass();
$view_mode->view_mode = 'short_references';
$view_mode->label = 'Short references';
$view_mode->entities = array(
  'node' => 'node',
);
drupal_write_record('ds_view_modes', $view_mode);
