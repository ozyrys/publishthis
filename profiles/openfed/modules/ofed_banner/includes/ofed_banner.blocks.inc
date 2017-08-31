<?php

/**
 * @file
 * Blocks for the OpenFed banner module.
 */

/**
 * Render of the banner block.
 * @param type $nid The node id to display.
 */
function _ofed_banner_block_render_banner($nid) {
  global $language;

  // Initialize.
  $output = '';

  // Load the node.
  $entity = entity_load('node', array($nid));
  // If node exists.
  if (!empty($entity)) {
    $entity = $entity[$nid];

    // Set the type of the banner.
    $type = strtolower($entity->field_ofed_banner_type['und'][0]['value']);
    $type_class = 'banner banner' . str_replace('_', '-', $type);

    // Get the image who be used.
    $image_field = 'field_ofed_banner_img_' . $type;
    $image_array = $entity->$image_field;
    $image_array = $image_array['und'][0];

    // Set the image.
    $image = theme('image', array(
      'path' => $image_array['uri'],
      'alt' => $image_array['alt'],
      'title' => $image_array['title'],
    ));

    // Set the link if exist.
    if (!empty($entity->field_ofed_banner_link['und'][0])) {
      // Get the link settings.
      $link_array = $entity->field_ofed_banner_link['und'][0];

      // Set the link attributes.
      $link_attributes = array(
        'attributes' => array(
          'class' => array('banner-count-click'),
          'title' => $link_array['title'],
          'nid' => $nid,
          ),
        'html' => TRUE,
        'language' => $language,
      );

      // Set the target.
      if (!empty($link_array['attributes']['target'])) {
        $link_attributes['attributes']['target'] = $link_array['attributes']['target'];
      }

      // Set the link.
      $banner = l($image, $link_array['url'], $link_attributes);
    }
    else {
      // Set the image.
      $banner = $image;
    }

    // Render the content.
    $output .= '<div class="banner banner-' . $type . '">';
    $output .= $banner;
    $output .= '</div>';
  }

  // Return.
  return $output;
}

