<?php

/**
 * @file
 * Sets up Print during install.
 */

variable_set('print_display_sys_urllist', FALSE);
variable_set('print_html_book_link', 1);
variable_set('print_html_link_class', 'print-page');
variable_set('print_html_link_pos', array(
  'link' => 'link',
  'block' => 'block',
  'help' => 'help',
  'corner' => 0,
));
variable_set('print_html_link_teaser', FALSE);
variable_set('print_html_link_use_alias', TRUE);
variable_set('print_html_new_window', TRUE);
variable_set('print_html_node_link_pages', '');
variable_set('print_html_node_link_visibility', 0);
variable_set('print_html_sendtoprinter', TRUE);
variable_set('print_html_show_link', 3);
variable_set('print_html_sys_link_pages', '');
variable_set('print_html_sys_link_visibility', 1);
variable_set('print_html_windowclose', FALSE);
variable_set('print_robots_noarchive', FALSE);
variable_set('print_robots_nofollow', TRUE);
variable_set('print_robots_noindex', TRUE);
