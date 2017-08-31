<?php

/**
 * @file
 * Needs to be documented.
 */

/**
 * Needs to be documented.
 */
function ofed_requirements_drush_command() {
  // Initialize.
  $items = array();

  // Build array.
  $items['check-requirements'] = array(
    'description' => "Check OpenFed requirements.",
    'arguments' => array(
      'type' => 'The type of check you want to complete (',
    ),
    'options' => array(
      'list' => "Display a full list of differences."
    ),
    'examples' => array(
      'drush oreq' => 'Displays a list of overriden permissions/roles/features/... if any.',
    ),
    'drupal dependencies' => array('ofed_requirements'),
    'aliases' => array('oreq'),
  );

  // Return.
  return $items;
}

/**
 * This function will revert the Display Suite settings
 * fot the desired content types (specified by the type
 * variable).
 *
 * @param string $type : One of several content type
 * separated by a space
 */
function drush_ofed_requirements_check_requirements() {
  global $base_path;
  $output = '';
  $list = (drush_get_option('list')) ? TRUE : FALSE;
  $options = array(
    'list' => $list,
  );

  require_once('includes/ofed_requirements.admin.inc');

  $output = ofed_requirements_admin_requirements_notes_export($options);

  return $output;
}
