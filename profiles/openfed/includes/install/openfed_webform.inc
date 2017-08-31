<?php

/**
 * @file
 * Sets up Webform during install.
 */

variable_set('addanother_button_webform', FALSE);
variable_set('addanother_message_webform', FALSE);
variable_set('addanother_tab_edit_webform', FALSE);
variable_set('addanother_tab_webform', FALSE);
variable_set('additional_settings__active_tab_webform', 'edit-workflow');
variable_set('diff_enable_revisions_page_node_webform', FALSE);
variable_set('diff_show_preview_changes_node_webform', FALSE);
variable_set('diff_view_mode_preview_node_webform', 'full');
variable_set('i18n_node_extended_webform', '4');
variable_set('i18n_node_options_webform', array(
  'current',
  'required',
));
variable_set('i18n_sync_node_type_webform', array());
variable_set('language_content_type_webform', '2');
variable_set('menu_options_webform', array(
  'main-menu',
));
variable_set('menu_parent_webform', 'main-menu:0');
variable_set('node_options_webform', array());
variable_set('node_preview_webform', '1');
variable_set('node_submitted_webform', TRUE);
variable_set('pathauto_node_webform_pattern', '[node:menu-link:parents:join-path]/[node:title]');
variable_set('print_display_urllist_webform', TRUE);
variable_set('print_display_webform', TRUE);
variable_set('scheduler_publish_enable_webform', FALSE);
variable_set('scheduler_publish_required_webform', FALSE);
variable_set('scheduler_publish_revision_webform', FALSE);
variable_set('scheduler_publish_touch_webform', FALSE);
variable_set('scheduler_unpublish_enable_webform', FALSE);
variable_set('scheduler_unpublish_required_webform', FALSE);
variable_set('scheduler_unpublish_revision_webform', FALSE);
variable_set('webform_node_types', array(
  'webform',
));
variable_set('xmlsitemap_settings_node_webform', array(
  'status' => '0',
  'priority' => '0.5',
));

$layout = array();
$layout['id'] = 'node|webform|default';
$layout['entity_type'] = 'node';
$layout['bundle'] = 'webform';
$layout['view_mode'] = 'default';
$layout['layout'] = 'ds_1col';
$layout['settings'] = serialize(
  array(
    'regions' => array(
      'ds_content' => array(
        '0' => 'body',
        '1' => 'webform',
      )
    ),
    'fields' => array(
      'body' => 'ds_content',
      'webform' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
    'hide_page_title' => 0,
    'page_option_title' => '',
    'hide_sidebars' => 0
  )
);
db_insert('ds_layout_settings')->fields($layout)->execute();
