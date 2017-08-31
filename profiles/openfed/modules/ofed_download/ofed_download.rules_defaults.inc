<?php
/**
 * @file
 * ofed_download.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ofed_download_default_rules_configuration() {
  $items = array();
  $items['rules_force_update_download_content'] = entity_import('rules_config', '{ "rules_force_update_download_content" : {
      "LABEL" : "Force update download content",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_presave" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "ofed_download" : "ofed_download" } }
          }
        },
        { "AND" : [] },
        { "data_is" : {
            "data" : [ "node:field-ofed-download-update-force" ],
            "value" : [ "node:field-ofed-download-update-force" ]
          }
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-ofed-download-update" ], "value" : "now" } }
      ]
    }
  }');
  return $items;
}
