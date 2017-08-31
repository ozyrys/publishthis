<?php

/**
 * @file
 * Sets up Views during install.
 */

variable_set('views_devel_output', FALSE);
variable_set('views_devel_region', 'watchdog');
variable_set('views_exposed_filter_any_label', 'new_any');
variable_set('views_field_rewrite_elements', array(
  '' => '- Use default -',
  '0' => '- None -',
  'div' => 'DIV',
  'span' => 'SPAN',
  'h1' => 'H1',
  'h2' => 'H2',
  'h3' => 'H3',
  'h4' => 'H4',
  'h5' => 'H5',
  'h6' => 'H6',
  'p' => 'P',
  'strong' => 'STRONG',
  'em' => 'EM',
  'article' => 'Article',
  'aside' => 'Aside',
  'footer' => 'Footer',
  'header' => 'Header',
  'menu' => 'Menu',
  'nav' => 'Nav',
));
variable_set('views_localization_plugin', 'core');
variable_set('views_no_javascript', FALSE);
variable_set('views_show_additional_queries', FALSE);
variable_set('views_skip_cache', FALSE);
variable_set('views_sql_signature', TRUE);
variable_set('views_ui_always_live_preview', TRUE);
variable_set('views_ui_custom_theme', '_default');
variable_set('views_ui_display_embed', TRUE);
variable_set('views_ui_show_advanced_column', TRUE);
variable_set('views_ui_show_advanced_help_warning', TRUE);
variable_set('views_ui_show_listing_filters', TRUE);
variable_set('views_ui_show_master_display', FALSE);
variable_set('views_ui_show_performance_statistics', TRUE);
variable_set('views_ui_show_preview_information', TRUE);
variable_set('views_ui_show_sql_query', TRUE);
variable_set('views_ui_show_sql_query_where', 'above');
