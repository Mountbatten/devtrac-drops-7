<?php
/**
 * @file
 * devtrac7_theme_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function devtrac7_theme_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "delta" && $api == "delta") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
