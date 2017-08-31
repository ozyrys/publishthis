<?php

/**
 * @file
 * Sets up Easy Breadcrumb during install.
 */

variable_set('easy_breadcrumb-capitalizator_ignored_words', array(
  'of' => 'of',
  'and' => 'and',
  'or' => 'or',
  'de' => 'de',
  'del' => 'del',
  'y' => 'y',
  'o' => 'o',
));
variable_set('easy_breadcrumb-capitalizator_mode', 'ucwords');
variable_set('easy_breadcrumb-disable_drupal_breadcrumb', TRUE);
variable_set('easy_breadcrumb-excluded_paths', array(
  'search' => 'search',
  'search/node' => 'search/node',
));
variable_set('easy_breadcrumb-home_segment_title', 'Home');
variable_set('easy_breadcrumb-include_home_segment', TRUE);
variable_set('easy_breadcrumb-include_invalid_paths', TRUE);
variable_set('easy_breadcrumb-include_title_segment', TRUE);
variable_set('easy_breadcrumb-segments_separator', '/');
variable_set('easy_breadcrumb-title_from_page_when_available', TRUE);
variable_set('easy_breadcrumb-title_segment_as_link', FALSE);
