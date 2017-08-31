<?php
/**
 * @file
 * ofed_news.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ofed_news_default_rules_configuration() {
  $items = array();
  $items['rules_force_update_new_content'] = entity_import('rules_config', '{ "rules_force_update_new_content" : {
      "LABEL" : "Force update news content",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_presave" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "ofed_news" : "ofed_news" } }
          }
        },
        { "AND" : [] },
        { "data_is" : {
            "data" : [ "node:field-ofed-news-update-force" ],
            "value" : [ "node:field-ofed-news-update-force" ]
          }
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-ofed-news-update" ], "value" : "now" } }
      ]
    }
  }');
  return $items;
}
