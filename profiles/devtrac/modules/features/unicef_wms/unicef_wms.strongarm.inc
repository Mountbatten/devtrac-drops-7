<?php
/**
 * @file
 * unicef_wms.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function unicef_wms_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geocoder_wfs_geofield';
  $strongarm->value = 'ne:the_geom';
  $export['geocoder_wfs_geofield'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geocoder_wfs_layer';
  $strongarm->value = 'ne_10m_populated_places';
  $export['geocoder_wfs_layer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geocoder_wfs_namespace';
  $strongarm->value = 'ne';
  $export['geocoder_wfs_namespace'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geocoder_wfs_queryfield';
  $strongarm->value = 'NAME';
  $export['geocoder_wfs_queryfield'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geocoder_wfs_resultfields';
  $strongarm->value = 'ne:NAME,ne:ADM0NAME,ne:ADM1NAME';
  $export['geocoder_wfs_resultfields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geocoder_wfs_url';
  $strongarm->value = 'http://demo.opengeo.org/geoserver/wfs';
  $export['geocoder_wfs_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openlayers_geosearch_wfs_description';
  $strongarm->value = 'Clinics, Waterpoints and Healh Centres from the WHO in 2005. Contains all black & white Icons.';
  $export['openlayers_geosearch_wfs_description'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openlayers_geosearch_wfs_layer';
  $strongarm->value = 'HealthUnits';
  $export['openlayers_geosearch_wfs_layer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openlayers_geosearch_wfs_namespace';
  $strongarm->value = 'Devtrac';
  $export['openlayers_geosearch_wfs_namespace'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openlayers_geosearch_wfs_title';
  $strongarm->value = 'WHO';
  $export['openlayers_geosearch_wfs_title'] = $strongarm;

  return $export;
}
