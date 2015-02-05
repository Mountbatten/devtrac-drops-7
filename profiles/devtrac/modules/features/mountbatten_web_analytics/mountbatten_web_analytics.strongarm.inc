<?php
/**
 * @file
 * mountbatten_web_analytics.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mountbatten_web_analytics_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_cache';
  $strongarm->value = 0;
  $export['piwik_cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_site_search';
  $strongarm->value = 0;
  $export['piwik_site_search'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_track';
  $strongarm->value = 1;
  $export['piwik_track'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_trackmailto';
  $strongarm->value = 1;
  $export['piwik_trackmailto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_trackmessages';
  $strongarm->value = array(
    'status' => 0,
    'warning' => 0,
    'error' => 0,
  );
  $export['piwik_trackmessages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_url_http';
  $strongarm->value = 'http://piwik.mountbatten.net/';
  $export['piwik_url_http'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_url_https';
  $strongarm->value = '';
  $export['piwik_url_https'] = $strongarm;

  return $export;
}
