<?php
/**
 * @file
 * ofed_photogallery.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ofed_photogallery_default_rules_configuration() {
  $items = array();
  $items['rules_force_update_photogallery_content'] = entity_import('rules_config', '{ "rules_force_update_photogallery_content" : {
      "LABEL" : "Force update photos gallery content",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_presave" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "ofed_photogallery" : "ofed_photogallery" } }
          }
        },
        { "AND" : [] },
        { "data_is" : {
            "data" : [ "node:field-ofed-photog-update-force" ],
            "value" : [ "node:field-ofed-photog-update-force" ]
          }
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-ofed-photog-update" ], "value" : "now" } }
      ]
    }
  }');
  return $items;
}
