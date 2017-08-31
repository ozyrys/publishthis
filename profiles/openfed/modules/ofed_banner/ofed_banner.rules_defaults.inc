<?php
/**
 * @file
 * ofed_banner.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ofed_banner_default_rules_configuration() {
  $items = array();
  $items['rules_force_update_banner_content'] = entity_import('rules_config', '{ "rules_force_update_banner_content" : {
      "LABEL" : "Force update banner content",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_presave" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "ofed_banner" : "ofed_banner" } }
          }
        },
        { "AND" : [] },
        { "data_is" : {
            "data" : [ "node:field-ofed-banner-update-force" ],
            "value" : [ "node:field-ofed-banner-update-force" ]
          }
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-ofed-banner-update" ], "value" : "now" } }
      ]
    }
  }');
  return $items;
}
