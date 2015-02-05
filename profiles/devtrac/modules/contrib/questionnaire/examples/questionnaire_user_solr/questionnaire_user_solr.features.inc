<?php
/**
 * @file
 * questionnaire_user_solr.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function questionnaire_user_solr_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function questionnaire_user_solr_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function questionnaire_user_solr_default_search_api_index() {
  $items = array();
  $items['user_answers'] = entity_import('search_api_index', '{
    "name" : "User answers",
    "machine_name" : "user_answers",
    "description" : null,
    "server" : "search_api_default_server",
    "item_type" : "user",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "uid" : { "type" : "integer" },
        "field_favourite_colour" : { "type" : "string" },
        "search_api_language" : { "type" : "string" },
        "field_campaign_questionnaire:context_combined" : { "type" : "list\\u003Cstring\\u003E" },
        "questionnaire_answers:answer" : { "type" : "list\\u003Ctext\\u003E" },
        "questionnaire_answers:question:title" : { "type" : "list\\u003Cstring\\u003E" }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_saved_searches_settings().
 */
function questionnaire_user_solr_default_search_api_saved_searches_settings() {
  $items = array();
  $items['user_answers'] = entity_import('search_api_saved_searches_settings', '{
    "delta" : "user_answers",
    "index_id" : "user_answers",
    "enabled" : "1",
    "options" : {
      "description" : "",
      "registered_choose_mail" : 0,
      "choose_name" : 1,
      "registered_user_delete_key" : 0,
      "default_true" : true,
      "ids_list" : [],
      "user_select_interval" : 0,
      "interval_options" : { "86400" : "Daily", "604800" : "Weekly" },
      "set_interval" : "86400",
      "mail" : {
        "activate" : {
          "send" : 0,
          "title" : "Activate your saved search at [site:name]",
          "body" : "A saved search on [site:name] with this e-mail address was created.\\r\\nTo activate this saved search, click the following link:\\r\\n\\r\\n[search-api-saved-search:activate-url]\\r\\n\\r\\nIf you didn\\u0027t create this saved search, just ignore this mail and it will be deleted.\\r\\n\\r\\n--  [site:name] team"
        },
        "notify" : {
          "title" : "New results for your saved search at [site:name]",
          "body" : "[user:name],\\r\\n\\r\\nThere are new results for your saved search on [site:name]:\\r\\n\\r\\n[search-api-saved-searches:results]\\r\\n\\r\\nYou can configure your saved searches at the following address:\\r\\n[user:search-api-saved-searches-url]\\r\\n\\r\\n--  [site:name] team",
          "results" : "New results for search \\u0022[search-api-saved-search:name]\\u0022:\\r\\n[search-api-saved-search:items]\\r\\n[search-api-saved-search:results-capped]",
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
      }
    },
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
/*function questionnaire_user_solr_default_search_api_server() {
  $items = array();
  $items['questionnaire_search_api_server'] = entity_import('search_api_server', '{
    "name" : "localhost",
    "machine_name" : "questionnaire_search_api_server",
    "description" : "This is a Sample DB SearchAPI server to test with. You want to use Solr if you scale this up.",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : 3,
    },
    "enabled" : "1",
  }');
  return $items;
}
*/