<?php

/**
 * Render of the slideshow block.
 * @param type $nid The node id to display.
 */
function _ofed_slideshow_block_render_slider($nid) {
  // Initialize.
  $output = '';

  // Load the node.
  $entity = entity_load('node', array($nid));

  // If node exists.
  if (!empty($entity)) {
    $output .= drupal_render(node_view(node_load($nid)));
  }
  
  // Return.
  return $output;
}