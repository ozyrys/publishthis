<?php
/**
 * @file
 * ofed_solr.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ofed_solr_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "apachesolr_search" && $api == "apachesolr_search_defaults") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
