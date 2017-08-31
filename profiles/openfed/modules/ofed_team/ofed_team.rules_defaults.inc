<?php
/**
 * @file
 * ofed_team.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ofed_team_default_rules_configuration() {
  $items = array();
  $items['rules_force_update_team_content'] = entity_import('rules_config', '{ "rules_force_update_team_content" : {
      "LABEL" : "Force update team members content",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_presave" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "ofed_team" : "ofed_team" } }
          }
        },
        { "AND" : [] },
        { "data_is" : {
            "data" : [ "node:field-ofed-team-update-force" ],
            "value" : [ "node:field-ofed-team-update-force" ]
          }
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-ofed-team-update" ], "value" : "now" } }
      ]
    }
  }');
  return $items;
}
