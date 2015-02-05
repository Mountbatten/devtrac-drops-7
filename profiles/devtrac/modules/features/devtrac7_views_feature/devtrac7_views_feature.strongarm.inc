<?php
/**
 * @file
 * devtrac7_views_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function devtrac7_views_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ais_adaptive_styles';
  $strongarm->value = array(
    0 => array(
      'name' => 'threshold-480',
      'size' => '320',
    ),
    1 => array(
      'name' => 'threshold-768',
      'size' => '768',
    ),
    2 => array(
      'name' => 'threshold-992',
      'size' => '992',
    ),
    3 => array(
      'name' => 'threshold-1382',
      'size' => '1382',
    ),
    4 => array(
      'name' => 'gallery',
      'size' => '320',
    ),
  );
  $export['ais_adaptive_styles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filefield_paths_schema_version';
  $strongarm->value = 6103;
  $export['filefield_paths_schema_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_default_scheme';
  $strongarm->value = 'public';
  $export['file_default_scheme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_private_path';
  $strongarm->value = '';
  $export['file_private_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_public_path';
  $strongarm->value = 'sites/default/files';
  $export['file_public_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_temporary_path';
  $strongarm->value = '/tmp';
  $export['file_temporary_path'] = $strongarm;

  return $export;
}
