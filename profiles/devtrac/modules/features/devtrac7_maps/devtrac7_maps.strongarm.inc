<?php
/**
 * @file
 * devtrac7_maps.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function devtrac7_maps_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_geonames';
  $strongarm->value = 1386324827;
  $export['cache_flush_cache_geonames'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geocoder_country';
  $strongarm->value = 'none';
  $export['geocoder_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geocoder_geonames_class';
  $strongarm->value = 'none';
  $export['geocoder_geonames_class'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geocoder_geonames_maxresults';
  $strongarm->value = '5';
  $export['geocoder_geonames_maxresults'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geocoder_nominatim_limit';
  $strongarm->value = '3';
  $export['geocoder_nominatim_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geocoder_settings';
  $strongarm->value = array(
    'geocoder_apikey_yahoo' => '',
    'geocoder_apikey_yandex' => '',
    'geocoder_apikey_bing' => '',
    'geocoder_nominatim_limit' => '5',
    'geocoder_country' => 'none',
  );
  $export['geocoder_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geonames_cache';
  $strongarm->value = '1';
  $export['geonames_cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geonames_cache_limit';
  $strongarm->value = '14';
  $export['geonames_cache_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geonames_count_credits';
  $strongarm->value = '0';
  $export['geonames_count_credits'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geonames_docs_path';
  $strongarm->value = 'geonames/docs';
  $export['geonames_docs_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geonames_reveal_cache';
  $strongarm->value = '1';
  $export['geonames_reveal_cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geonames_server';
  $strongarm->value = 'http://api.geonames.org';
  $export['geonames_server'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openlayers_geosearch_formatting';
  $strongarm->value = 'panels';
  $export['openlayers_geosearch_formatting'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openlayers_geosearch_geocoders';
  $strongarm->value = array(
    'mapquest_nominatim' => 'mapquest_nominatim',
    'geonames' => 0,
    'bing' => 0,
    'google' => 0,
    'yahoo' => 0,
    'yandex' => 0,
    'wfs' => 0,
  );
  $export['openlayers_geosearch_geocoders'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openlayers_geosearch_geonames_description';
  $strongarm->value = 'Database with the whole world from trusted sources.';
  $export['openlayers_geosearch_geonames_description'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openlayers_geosearch_geonames_title';
  $strongarm->value = 'Geonames';
  $export['openlayers_geosearch_geonames_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openlayers_geosearch_hoover';
  $strongarm->value = 0;
  $export['openlayers_geosearch_hoover'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openlayers_geosearch_map';
  $strongarm->value = 'default';
  $export['openlayers_geosearch_map'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openlayers_geosearch_mapquest_nominatim_description';
  $strongarm->value = 'Open database with the whole world. If you miss something here, you can add it yourself.';
  $export['openlayers_geosearch_mapquest_nominatim_description'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openlayers_geosearch_mapquest_nominatim_title';
  $strongarm->value = 'OpenStreetMap';
  $export['openlayers_geosearch_mapquest_nominatim_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openlayers_geosearch_test';
  $strongarm->value = 1;
  $export['openlayers_geosearch_test'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openlayers_geosearch_zoomlevel';
  $strongarm->value = '14';
  $export['openlayers_geosearch_zoomlevel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openlayers_geosearch_zoomonselect';
  $strongarm->value = 1;
  $export['openlayers_geosearch_zoomonselect'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openlayers_source';
  $strongarm->value = 'http://u-map.mbcdn.net/scripts/OpenLayers-2.13.1/OpenLayers.js';
  $export['openlayers_source'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openlayers_source_internal_variant';
  $strongarm->value = 'devtrac';
  $export['openlayers_source_internal_variant'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openlayers_source_type';
  $strongarm->value = 'internal';
  $export['openlayers_source_type'] = $strongarm;

  return $export;
}
