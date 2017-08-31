<?php
/**
 * @file
 * ofed_page.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ofed_page_default_rules_configuration() {
  $items = array();
  $items['rules_force_update_page_content'] = entity_import('rules_config', '{ "rules_force_update_page_content" : {
      "LABEL" : "Force update page content",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_presave" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "ofed_page" : "ofed_page" } }
          }
        },
        { "AND" : [] },
        { "data_is" : {
            "data" : [ "node:field-ofed-page-update-force" ],
            "value" : [ "node:field-ofed-page-update-force" ]
          }
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-ofed-page-update" ], "value" : "now" } }
      ]
    }
  }');
  return $items;
}
