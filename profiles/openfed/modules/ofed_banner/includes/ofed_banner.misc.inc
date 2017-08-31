<?php

/**
 * @file
 * Blocks for the OpenFed banner module.
 */

/**
 * Incrementation of the counter value.
 * @param type $nid The node id to display.
 */
function _ofed_banner_counter($nid) {
  $node = node_load($nid);
  if (!empty($node)) {
    $node->field_ofed_banner_click_count['und'][0]['value'] = $node->field_ofed_banner_click_count['und'][0]['value'] + 1;
    node_save($node);
  }
  exit();
}

