<?php
/**
 * @file
 * ofed_meeting.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ofed_meeting_default_rules_configuration() {
  $items = array();
  $items['rules_force_update_meeting_content'] = entity_import('rules_config', '{ "rules_force_update_meeting_content" : {
      "LABEL" : "Force update meeting content",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_presave" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "ofed_meeting" : "ofed_meeting" } }
          }
        },
        { "AND" : [] },
        { "data_is" : {
            "data" : [ "node:field-ofed-meeting-update-force" ],
            "value" : [ "node:field-ofed-meeting-update-force" ]
          }
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-ofed-meeting-update" ], "value" : "now" } }
      ]
    }
  }');
  return $items;
}
