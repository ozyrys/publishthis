<?php

/**
 * @file
 * Sets up Date types during install.
 */

// Adding custom format to list.
$date_formats = array();
$date_formats[] = 'd/m/Y';
$date_formats[] = 'm/d/Y';
foreach ($date_formats as $date_format) {
  // Create a date format
  $format = array();
  $format['format'] = $date_format;
  $format['type'] = 'custom';
  $format['locked'] = 0;

  $format['is_new'] = 1;
  system_date_format_save($format);
  drupal_set_message(t('Custom date format "%date_format" added.', array(
    '%date_format' => $date_format,
  )));
}

// Adding custom date type.
$date_types = array();
$date_types['date_only'] = 'd/m/Y';
foreach ($date_types as $date_key => $date_type) {
  // Create a date type
  $date_name = ucfirst(str_replace('_', ' ', $date_key));
  $format_type = array();
  $format_type['title'] = $date_name;
  $format_type['type'] = $date_key;
  $format_type['locked'] = 0;
  $format_type['is_new'] = 1;
  system_date_format_type_save($format_type);
  variable_set('date_format_' . $date_key, $date_type);
  drupal_set_message(t('New date type "%date_type" added successfully.', array(
    '%date_type' => $date_name,
  )));
}
