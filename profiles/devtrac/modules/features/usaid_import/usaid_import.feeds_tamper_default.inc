<?php
/**
 * @file
 * usaid_import.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function usaid_import_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'iati_activity-districts-explode';
  $feeds_tamper->importer = 'iati_activity';
  $feeds_tamper->source = 'districts';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '|',
    'limit' => '',
    'real_separator' => '|',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['iati_activity-districts-explode'] = $feeds_tamper;

  return $export;
}
