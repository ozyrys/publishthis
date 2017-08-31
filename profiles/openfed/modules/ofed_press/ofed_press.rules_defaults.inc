<?php
/**
 * @file
 * ofed_press.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ofed_press_default_rules_configuration() {
  $items = array();
  $items['rules_force_update_press_content'] = entity_import('rules_config', '{ "rules_force_update_press_content" : {
      "LABEL" : "Force update press content",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_presave" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "ofed_press" : "ofed_press" } }
          }
        },
        { "AND" : [] },
        { "data_is" : {
            "data" : [ "node:field-ofed-press-update-force" ],
            "value" : [ "node:field-ofed-press-update-force" ]
          }
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-ofed-press-update" ], "value" : "now" } }
      ]
    }
  }');
  return $items;
}
