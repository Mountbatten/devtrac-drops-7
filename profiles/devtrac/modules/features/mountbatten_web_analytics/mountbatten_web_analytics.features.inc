<?php
/**
 * @file
 * mountbatten_web_analytics.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mountbatten_web_analytics_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
