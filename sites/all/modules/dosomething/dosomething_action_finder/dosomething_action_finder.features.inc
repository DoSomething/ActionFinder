<?php
/**
 * @file
 * dosomething_action_finder.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dosomething_action_finder_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function dosomething_action_finder_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function dosomething_action_finder_node_info() {
  $items = array(
    'action' => array(
      'name' => t('Action'),
      'base' => 'node_content',
      'description' => t('Actions that appear in the action finder.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_default_search_api_index().
 */
function dosomething_action_finder_default_search_api_index() {
  $items = array();
  $items['action_finder'] = entity_import('search_api_index', '{
    "name" : "Action Finder",
    "machine_name" : "action_finder",
    "description" : "Action Finder index.",
    "server" : "solr_dosomething",
    "item_type" : "node",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "title" : { "type" : "text" },
        "status" : { "type" : "boolean" },
        "author" : { "type" : "integer", "entity_type" : "user" },
        "field_staff_pick" : { "type" : "boolean", "boost" : "21.0" },
        "field_sponsored" : { "type" : "boolean", "boost" : "2.0" },
        "search_api_language" : { "type" : "string" },
        "search_api_access_node" : { "type" : "list\\u003Cstring\\u003E" },
        "body:value" : { "type" : "text" },
        "field_date_range:value" : { "type" : "date" },
        "field_date_range:value2" : { "type" : "date" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : { "default" : "0", "bundles" : { "action" : "action" } }
        },
        "search_api_alter_node_access" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "title" : true, "body:value" : true } }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : { "title" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "title" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "title" : true },
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
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_page().
 */
function dosomething_action_finder_default_search_api_page() {
  $items = array();
  $items['action_finder'] = entity_import('search_api_page', '{
    "index_id" : "action_finder",
    "path" : "action-finder",
    "name" : "Action Finder",
    "machine_name" : "action_finder",
    "description" : "Action Finder results.",
    "options" : {
      "mode" : "terms",
      "fields" : { "title" : "title", "body:value" : "body:value" },
      "per_page" : "10",
      "result_page_search_form" : 1,
      "get_per_page" : 0,
      "view_mode" : "search_api_page_result"
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function dosomething_action_finder_default_search_api_server() {
  $items = array();
  $items['solr_dosomething'] = entity_import('search_api_server', '{
    "name" : "Solr DoSomething",
    "machine_name" : "solr_dosomething",
    "description" : "Solr DoSomething",
    "class" : "search_api_solr_service",
    "options" : {
      "clean_ids" : true,
      "scheme" : "http",
      "host" : "localhost",
      "port" : "8983",
      "path" : "\\/solr",
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "http_method" : "POST"
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_sort().
 */
function dosomething_action_finder_default_search_api_sort() {
  $items = array();
  $items['action_finder__field_sponsored'] = entity_import('search_api_sort', '{
    "index_id" : "action_finder",
    "field" : "field_sponsored",
    "name" : "Sponsored",
    "enabled" : "1",
    "weight" : "-96",
    "identifier" : "action_finder__field_sponsored",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Sponsored" },
    "rdf_mapping" : []
  }');
  $items['action_finder__field_staff_pick'] = entity_import('search_api_sort', '{
    "index_id" : "action_finder",
    "field" : "field_staff_pick",
    "name" : "Staff pick",
    "enabled" : "1",
    "weight" : "-100",
    "identifier" : "action_finder__field_staff_pick",
    "default_sort" : "1",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Staff pick" },
    "rdf_mapping" : []
  }');
  return $items;
}
