<?php

/**
 * @file
 * Sets up text formats during install.
 */

$filtered_html_format = array(
  'format' => 'filtered_html',
  'name' => 'Filtered HTML',
  'status' => 1,
  'weight' => -8,
  'filters' => array(
    // URL filter.
    'filter_url' => array(
      'weight' => 0,
      'status' => 1,
    ),
    // HTML filter.
    'filter_html' => array(
      'weight' => 1,
      'status' => 1,
    ),
    // Line break filter.
    'filter_autop' => array(
      'weight' => 2,
      'status' => 1,
    ),
    // HTML corrector filter.
    'filter_htmlcorrector' => array(
      'weight' => 10,
      'status' => 1,
    ),
  ),
);
if (module_exists('ckeditor_link')) {
  // HTML corrector filter.
  $filtered_html_format['filters']['ckeditor_link_filter'] = array(
    'weight' => 8,
    'status' => 1,
  );
}
if (module_exists('table_altrow')) {
  // Add odd/even on table row
  $filtered_html_format['filters']['table_altrow'] = array(
    'weight' => 9,
    'status' => 1,
  );
}
$filtered_html_format = (object) $filtered_html_format;
filter_format_save($filtered_html_format);

$arr = array();
$arr['allowed_html'] = "<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <h2> <h3> <h4> <h5> <h6> <div> <p> <u>";
$arr['filter_html_help'] = 1;
$arr['filter_html_nofollow'] = 0;
db_update('filter')
->fields(array(
  'settings' => serialize($arr),
))
->condition('format', 'filtered_html', '=')
->condition('module', 'filter', '=')
->condition('name', 'filter_html', '=')
->execute();

$full_html_format = array(
  'format' => 'full_html',
  'name' => 'Full HTML',
  'status' => 1,
  'weight' => -10,
  'filters' => array(
    // URL filter.
    'filter_url' => array(
      'weight' => 0,
      'status' => 1,
    ),
    // Line break filter.
    'filter_autop' => array(
      'weight' => 1,
      'status' => 1,
    ),
    // HTML corrector filter.
    'filter_htmlcorrector' => array(
      'weight' => 10,
      'status' => 1,
    ),
  ),
);
if (module_exists('ckeditor_link')) {
  // HTML corrector filter.
  $full_html_format['filters']['ckeditor_link_filter'] = array(
    'weight' => 8,
    'status' => 1,
  );
}
if (module_exists('table_altrow')) {
  // Add odd/even on table row
  $full_html_format['filters']['table_altrow'] = array(
    'weight' => 9,
    'status' => 1,
  );
}
$full_html_format = (object) $full_html_format;
filter_format_save($full_html_format);
