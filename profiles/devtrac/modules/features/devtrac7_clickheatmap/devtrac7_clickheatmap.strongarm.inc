<?php
/**
 * @file
 * devtrac7_clickheatmap.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function devtrac7_clickheatmap_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'click_heatmap_admin_password';
  $strongarm->value = 'admin';
  $export['click_heatmap_admin_password'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'click_heatmap_admin_username';
  $strongarm->value = 'admin';
  $export['click_heatmap_admin_username'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'click_heatmap_change_login';
  $strongarm->value = 0;
  $export['click_heatmap_change_login'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'click_heatmap_pages';
  $strongarm->value = '';
  $export['click_heatmap_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'click_heatmap_scope';
  $strongarm->value = 'all';
  $export['click_heatmap_scope'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'click_heatmap_visibility';
  $strongarm->value = '0';
  $export['click_heatmap_visibility'] = $strongarm;

  return $export;
}
