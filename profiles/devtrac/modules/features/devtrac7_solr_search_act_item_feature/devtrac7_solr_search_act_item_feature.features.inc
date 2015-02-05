<?php
/**
 * @file
 * devtrac7_solr_search_act_item_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function devtrac7_solr_search_act_item_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "current_search" && $api == "current_search") {
    return array("version" => "1");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
  if ($module == "pane" && $api == "pane") {
    return array("version" => "2");
  }
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function devtrac7_solr_search_act_item_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_autocomplete_search().
 */
function devtrac7_solr_search_act_item_feature_default_search_api_autocomplete_search() {
  $items = array();
  $items['search_api_views_devtrac_solr_view_actionitems'] = entity_import('search_api_autocomplete_search', '{
    "machine_name" : "search_api_views_devtrac_solr_view_actionitems",
    "name" : "devtrac_solr_view_actionitems",
    "index_id" : "devtrac_solr_action_items_index",
    "type" : "search_api_views",
    "enabled" : "1",
    "options" : {
      "result count" : true,
      "fields" : [ "search_api_aggregation_1" ],
      "results" : 0,
      "custom" : { "display" : "default" }
    }
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_index().
 */
function devtrac7_solr_search_act_item_feature_default_search_api_index() {
  $items = array();
  $items['devtrac_solr_action_items_index'] = entity_import('search_api_index', '{
    "name" : "Devtrac Solr Action Items Index",
    "machine_name" : "devtrac_solr_action_items_index",
    "description" : "All Solr searches related to Action Items.",
    "server" : "devtrac_search_server",
    "item_type" : "node",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "author:field_user_superior" : { "type" : "integer", "entity_type" : "user" },
        "author:name" : { "type" : "text" },
        "created" : { "type" : "date" },
        "field_action_items_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_actionitem_due_date" : { "type" : "date" },
        "field_actionitem_followuptask:value" : { "type" : "text" },
        "field_actionitem_ftreportitem:uuid" : { "type" : "string" },
        "field_actionitem_resp_place:nid" : { "type" : "integer" },
        "field_actionitem_resp_place:taxonomy_vocabulary_1" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_actionitem_resp_place:title" : { "type" : "text" },
        "field_actionitem_resp_place:uuid" : { "type" : "string" },
        "field_actionitem_responsible" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "user" },
        "field_actionitem_responsible:field_user_superior" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "user" },
        "field_actionitem_severity" : { "type" : "integer" },
        "field_actionitem_status" : { "type" : "string" },
        "field_fieldtrip_user:field_user_superior" : { "type" : "integer", "entity_type" : "user" },
        "nid" : { "type" : "integer" },
        "search_api_access_node" : { "type" : "list\\u003Cstring\\u003E" },
        "search_api_aggregation_1" : { "type" : "text" },
        "search_api_language" : { "type" : "string" },
        "search_api_viewed" : { "type" : "text" },
        "status" : { "type" : "boolean" },
        "taxonomy_vocabulary_6" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "taxonomy_vocabulary_6:field_district_category" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "taxonomy_vocabulary_8" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "title" : { "type" : "text" },
        "type" : { "type" : "string" },
        "uuid" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : { "default" : "0", "bundles" : { "actionitem" : "actionitem" } }
        },
        "search_api_alter_node_access" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "taxonomy_vocabulary_6:parents_all" : "taxonomy_vocabulary_6:parents_all",
              "taxonomy_vocabulary_8:parents_all" : "taxonomy_vocabulary_8:parents_all"
            }
          }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 1, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "search_api_aggregation_1" : {
                "name" : "Full text search",
                "type" : "fulltext",
                "fields" : [ "title", "field_actionitem_followuptask:value" ],
                "description" : "A Fulltext aggregation of the following fields: Title, Follow-up Task \\u00bb Text."
              }
            }
          }
        }
      },
      "processors" : {
        "date_processor" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "default" : "0", "fields" : { "created" : true, "field_actionitem_due_date" : true } }
        },
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "search_api_aggregation_1" : true, "search_api_viewed" : true } }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : { "search_api_viewed" : true },
            "title" : 0,
            "alt" : 0,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_transliteration" : {
          "status" : 0,
          "weight" : "15",
          "settings" : { "fields" : {
              "title" : true,
              "search_api_aggregation_1" : true,
              "search_api_viewed" : true,
              "author:name" : true,
              "field_actionitem_followuptask:value" : true,
              "field_actionitem_resp_place:title" : true
            }
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : {
            "fields" : { "search_api_aggregation_1" : true, "search_api_viewed" : true },
            "spaces" : "[^\\\\p{L}\\\\p{N}^\\u0027]",
            "ignorable" : "[-][(][)][,][:][;]:"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "title" : true, "field_actionitem_followuptask:value" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0"
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_saved_searches_settings().
 */
function devtrac7_solr_search_act_item_feature_default_search_api_saved_searches_settings() {
  $items = array();
  $items['devtrac_solr_action_items_index'] = entity_import('search_api_saved_searches_settings', '{
    "delta" : "devtrac_solr_action_items_index",
    "index_id" : "devtrac_solr_action_items_index",
    "enabled" : "1",
    "options" : {
      "date_field" : "",
      "description" : "Click the button to email me new Action Items every week",
      "default_true" : "1",
      "ids_list" : [],
      "registered_choose_mail" : 0,
      "choose_name" : 0,
      "registered_user_delete_key" : 0,
      "show_empty_list" : 0,
      "user_select_interval" : 0,
      "interval_options" : { "86400" : "Daily", "604800" : "Weekly" },
      "set_interval" : "604800",
      "mail" : {
        "activate" : {
          "send" : 1,
          "title" : "Your email notifications for Action Items at [site:name]",
          "body" : "Dear [site:name] user,\\r\\n\\r\\nEmail notifications for Action Items on [site:name] with this e-mail address was enabled.\\r\\n\\r\\n--Regards,\\r\\n[site:name]\\r\\n\\r\\nThis is an automated message from [site:name]. Please do not reply to this address. If you have a question, please email help@devtrac.ug."
        },
        "notify" : {
          "title" : "Your updated Action Items at [site:name]",
          "body" : "Dear [site:name] user,\\r\\n\\r\\nThe following Action Items are present in your DevTrac Inbox and require your attention:\\r\\n\\r\\n[search-api-saved-searches:results]\\r\\n\\r\\nYou can configure this message at the following address:\\r\\n[user:search-api-saved-searches-url]\\r\\n\\r\\nRegards,\\r\\n[site:name]\\r\\n\\r\\nThis is an automated message from [site:name]. Please do not reply to this address. If you have a question, please email help@devtrac.ug.",
          "results" : "[search-api-saved-search:name]:\\r\\n[search-api-saved-search:items]",
          "result" : "[search-api-saved-search-result:label] ([search-api-saved-search-result:url])",
          "max_results" : "0",
          "results_capped" : "\\u2026\\r\\nView all results: [search-api-saved-search:view-url]"
        }
      },
      "manual" : {
        "allow" : 0,
        "fulltext" : 0,
        "fields" : [],
        "page" : { "path" : "", "fulltext" : "", "direct_filter_params" : "0" }
      },
      "mode" : { "filter" : "1", "allow" : 0 }
    }
  }');
  return $items;
}
