<?php
/**
 * @file
 * ofed_job.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ofed_job_default_rules_configuration() {
  $items = array();
  $items['rules_force_update_job_content'] = entity_import('rules_config', '{ "rules_force_update_job_content" : {
      "LABEL" : "Force update job content",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_presave" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "ofed_job" : "ofed_job" } }
          }
        },
        { "AND" : [] },
        { "data_is" : {
            "data" : [ "node:field-ofed-job-update-force" ],
            "value" : [ "node:field-ofed-job-update-force" ]
          }
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-ofed-job-update" ], "value" : "now" } }
      ]
    }
  }');
  return $items;
}
