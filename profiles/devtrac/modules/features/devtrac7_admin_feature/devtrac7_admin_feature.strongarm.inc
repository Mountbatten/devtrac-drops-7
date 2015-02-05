<?php
/**
 * @file
 * devtrac7_admin_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function devtrac7_admin_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apps_allow_voting';
  $strongarm->value = 1;
  $export['apps_allow_voting'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apps_grouping_mode';
  $strongarm->value = 1;
  $export['apps_grouping_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apps_grouping_vertical';
  $strongarm->value = 1;
  $export['apps_grouping_vertical'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apps_install_path';
  $strongarm->value = 'sites/all/modules';
  $export['apps_install_path'] = $strongarm;

  return $export;
}
