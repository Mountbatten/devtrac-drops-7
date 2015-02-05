<?php
/**
 * @file
 * usaid_import.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function usaid_import_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'iati_activity';
  $feeds_importer->config = array(
    'name' => 'IATI Activity',
    'description' => 'Imports nodes of type activity from a .csv file.',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'iati_activity',
        'expire' => '-1',
        'author' => '3',
        'mappings' => array(
          0 => array(
            'source' => 'owner-ref',
            'target' => 'field_iati_owner_ref',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'owner-name',
            'target' => 'field_iati_owner_name',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'default-currency',
            'target' => 'field_iati_default_currency',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'description',
            'target' => 'field_iati_activity_description',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'status',
            'target' => 'field_iati_activity_status',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'collaboration-type',
            'target' => 'field_iati_activity_collabo_type',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'default-aid-type',
            'target' => 'field_iati_activity_aid_type',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'default-finance-type',
            'target' => 'field_iati_activity_finance_type',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'iati-identifier',
            'target' => 'field_iati_identifier',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'default-flow-type',
            'target' => 'field_iati_activity_flow_type',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'start-planned',
            'target' => 'field_iati_activity_planned_date:start',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'start-actual',
            'target' => 'field_iati_activity_actual_date:start',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'end-planned',
            'target' => 'field_iati_activity_planned_date:end',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'end-actual',
            'target' => 'field_iati_activity_actual_date:end',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'sectors',
            'target' => 'taxonomy_vocabulary_8',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'districts',
            'target' => 'taxonomy_vocabulary_6',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'activity-name',
            'target' => 'field_activity_name',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => '1',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['iati_activity'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'iati_organisation';
  $feeds_importer->config = array(
    'name' => 'IATI Organisation',
    'description' => 'Imports nodes of type organisation from a .csv file.',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'iati_organisation',
        'expire' => '-1',
        'author' => '3',
        'mappings' => array(
          0 => array(
            'source' => 'iati-identifier',
            'target' => 'field_iati_identifier',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'name-text',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'org-website',
            'target' => 'field_iati_org_url:url',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'default-language',
            'target' => 'field_langauge',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'default-currency',
            'target' => 'field_iati_default_currency',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'description',
            'target' => 'field_iati_org_description',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'org-type',
            'target' => 'field_iati_org_type',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'organisation-name',
            'target' => 'field_organisation_name',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => '1',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['iati_organisation'] = $feeds_importer;

  return $export;
}
