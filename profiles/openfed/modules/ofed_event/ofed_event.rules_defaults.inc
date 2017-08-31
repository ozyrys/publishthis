<?php
/**
 * @file
 * ofed_event.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ofed_event_default_rules_configuration() {
  $items = array();
  $items['rules_force_update_event_content'] = entity_import('rules_config', '{ "rules_force_update_event_content" : {
      "LABEL" : "Force update event content",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_presave" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "ofed_event" : "ofed_event" } }
          }
        },
        { "AND" : [] },
        { "data_is" : {
            "data" : [ "node:field-ofed-event-update-force" ],
            "value" : [ "node:field-ofed-event-update-force" ]
          }
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-ofed-event-update" ], "value" : "now" } }
      ]
    }
  }');
  return $items;
}
