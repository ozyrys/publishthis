<?php

/**
 * @file
 * Sets up Sitemap during install.
 */

variable_set('site_map_categories_depth', 'all');
variable_set('site_map_css', TRUE);
variable_set('site_map_forum_threshold', '-1');
variable_set('site_map_message', array(
  'value' => '',
  'format' => 'filtered_html',
));
variable_set('site_map_page_title', 'Site map');
variable_set('site_map_rss_depth', 'all');
variable_set('site_map_rss_front', 'rss.xml');
variable_set('site_map_show_count', TRUE);
variable_set('site_map_show_front', TRUE);
variable_set('site_map_show_menus', array(
  'main-menu' => 'main-menu',
  'management' => 0,
  'navigation' => 0,
  'user-menu' => 0,
));
variable_set('site_map_show_rss_links', 1);
variable_set('site_map_show_vocabularies', array());
variable_set('site_map_term_threshold', 0);
