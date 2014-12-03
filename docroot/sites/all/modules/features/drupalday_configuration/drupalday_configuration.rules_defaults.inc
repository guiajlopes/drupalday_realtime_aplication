<?php
/**
 * @file
 * drupalday_configuration.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function drupalday_configuration_default_rules_configuration() {
  $items = array();
  $items['rules_atualizar_articles_view'] = entity_import('rules_config', '{ "rules_atualizar_articles_view" : {
      "LABEL" : "Atualizar articles view",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "views_nodejs", "rules" ],
      "ON" : {
        "node_insert--article" : { "bundle" : "article" },
        "node_update--article" : { "bundle" : "article" },
        "node_delete--article" : { "bundle" : "article" }
      },
      "DO" : [
        { "views_nodejs" : { "views" : { "value" : { "a:2:{s:4:\\u0022name\\u0022;s:8:\\u0022articles\\u0022;s:10:\\u0022display_id\\u0022;s:4:\\u0022page\\u0022;}" : "a:2:{s:4:\\u0022name\\u0022;s:8:\\u0022articles\\u0022;s:10:\\u0022display_id\\u0022;s:4:\\u0022page\\u0022;}" } } } }
      ]
    }
  }');
  return $items;
}
