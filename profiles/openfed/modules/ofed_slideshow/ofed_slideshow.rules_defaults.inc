<?php
/**
 * @file
 * ofed_slideshow.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ofed_slideshow_default_rules_configuration() {
  $items = array();
  $items['rules_force_update_slideshow_content'] = entity_import('rules_config', '{ "rules_force_update_slideshow_content" : {
      "LABEL" : "Force update slideshow content",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_presave" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "ofed_slideshow" : "ofed_slideshow" } }
          }
        },
        { "AND" : [] },
        { "data_is" : {
            "data" : [ "node:field-ofed-slideshow-update-force" ],
            "value" : [ "node:field-ofed-slideshow-update-force" ]
          }
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-ofed-slideshow-update" ], "value" : "now" } }
      ]
    }
  }');
  return $items;
}
