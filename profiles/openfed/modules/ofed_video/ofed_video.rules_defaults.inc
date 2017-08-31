<?php
/**
 * @file
 * ofed_video.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ofed_video_default_rules_configuration() {
  $items = array();
  $items['rules_force_update_video_content'] = entity_import('rules_config', '{ "rules_force_update_video_content" : {
      "LABEL" : "Force update video content",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_presave" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "ofed_video" : "ofed_video" } }
          }
        },
        { "AND" : [] },
        { "data_is" : {
            "data" : [ "node:field-ofed-video-update-force" ],
            "value" : [ "node:field-ofed-video-update-force" ]
          }
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-ofed-video-update" ], "value" : "now" } }
      ]
    }
  }');
  return $items;
}
