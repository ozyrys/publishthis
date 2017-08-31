<?php
/**
 * @file
 * ofed_faq.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ofed_faq_default_rules_configuration() {
  $items = array();
  $items['rules_force_update_faq_content'] = entity_import('rules_config', '{ "rules_force_update_faq_content" : {
      "LABEL" : "Force update FAQ content",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_presave" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "ofed_faq" : "ofed_faq" } }
          }
        },
        { "AND" : [] },
        { "data_is" : {
            "data" : [ "node:field-ofed-faq-update-force" ],
            "value" : [ "node:field-ofed-faq-update-force" ]
          }
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-ofed-faq-update" ], "value" : "now" } }
      ]
    }
  }');
  return $items;
}
