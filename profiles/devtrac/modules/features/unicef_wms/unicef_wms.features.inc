<?php
/**
 * @file
 * unicef_wms.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function unicef_wms_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "openlayers" && $api == "openlayers_layers") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
