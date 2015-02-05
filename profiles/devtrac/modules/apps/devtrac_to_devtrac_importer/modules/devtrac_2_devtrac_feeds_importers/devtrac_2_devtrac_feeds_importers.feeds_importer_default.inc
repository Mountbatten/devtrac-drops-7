<?php
/**
 * @file
 * devtrac_2_devtrac_feeds_importers.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function devtrac_2_devtrac_feeds_importers_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'devtrac_2_devtrac_action_item_import';
  $feeds_importer->config = array(
    'name' => 'Devtrac 2 Devtrac Action Item Import',
    'description' => 'Imports Action Items from another Devtrac installation csv export',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
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
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'UUID',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => 0,
          ),
          2 => array(
            'source' => 'Sector',
            'target' => 'taxonomy_vocabulary_8',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          3 => array(
            'source' => 'Status',
            'target' => 'field_actionitem_status',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Due Date',
            'target' => 'field_actionitem_due_date:start',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Responsible',
            'target' => 'field_actionitem_responsible:label',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Follow-up Task',
            'target' => 'field_actionitem_followuptask',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Tags (Categories)',
            'target' => 'field_action_items_tags',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          8 => array(
            'source' => 'Location UUID',
            'target' => 'field_actionitem_resp_place',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Sitereport UUID',
            'target' => 'field_actionitem_ftreportitem',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'actionitem',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['devtrac_2_devtrac_action_item_import'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'devtrac_2_devtrac_field_trip_import';
  $feeds_importer->config = array(
    'name' => 'Devtrac 2 Devtrac Field Trip Import',
    'description' => 'Imports Field Trips from another Devtrac installation csv export',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
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
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'UUID',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => 0,
          ),
          2 => array(
            'source' => 'Narrative',
            'target' => 'field_fieldtrip_narrative',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Public Summary',
            'target' => 'field_fieldtrip_public_summary',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Approval Date',
            'target' => 'field_fieldtrip_approval_date:start',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Status',
            'target' => 'field_fieldtrip_status',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Start Date',
            'target' => 'field_fieldtrip_start_end_date:start',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'End Date',
            'target' => 'field_fieldtrip_start_end_date:end',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Locations',
            'target' => 'field_fieldtrip_places:label',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'fieldtrip',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['devtrac_2_devtrac_field_trip_import'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'devtrac_2_devtrac_location_import';
  $feeds_importer->config = array(
    'name' => 'Devtrac 2 Devtrac Location Import',
    'description' => 'Imports Locations from another Devtrac installation csv export',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
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
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'UUID',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => 0,
          ),
          2 => array(
            'source' => 'Location Types',
            'target' => 'taxonomy_vocabulary_1',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          3 => array(
            'source' => 'Lat',
            'target' => 'field_place_lat_long:lat',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Lon',
            'target' => 'field_place_lat_long:lon',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'place',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['devtrac_2_devtrac_location_import'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'devtrac_2_devtrac_site_reports_import';
  $feeds_importer->config = array(
    'name' => 'Devtrac 2 Devtrac Site Reports Import',
    'description' => 'Imports Site Reports from another Devtrac installation csv export',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
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
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'UUID',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Sector',
            'target' => 'taxonomy_vocabulary_8',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          3 => array(
            'source' => 'Status',
            'target' => 'field_ftritem_status',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Location Type',
            'target' => 'taxonomy_vocabulary_1',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          5 => array(
            'source' => 'Site Report Type',
            'target' => 'taxonomy_vocabulary_7',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          6 => array(
            'source' => 'Field Trip',
            'target' => 'entityreference:field_ftritem_field_trip',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Site Visit Lat',
            'target' => 'field_ftritem_lat_long:lat',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Site Visit Lon',
            'target' => 'field_ftritem_lat_long:lon',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Visited on',
            'target' => 'field_ftritem_date_visited:start',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Location UUID',
            'target' => 'field_ftritem_place',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Summary',
            'target' => 'field_ftritem_public_summary',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'Field Trip UUID',
            'target' => 'field_ftritem_field_trip',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'Full Report',
            'target' => 'field_ftritem_narrative',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'ftritem',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['devtrac_2_devtrac_site_reports_import'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'devtrac_2_devtrac_user_import';
  $feeds_importer->config = array(
    'name' => 'Devtrac 2 Devtrac User Import',
    'description' => 'Imports Users from another Devtrac installation csv export.',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
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
      'plugin_key' => 'FeedsUserProcessor',
      'config' => array(
        'roles' => array(
          5 => '5',
          3 => 0,
          4 => 0,
          6 => 0,
          7 => 0,
        ),
        'status' => '1',
        'defuse_mail' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'EMAIL',
            'target' => 'mail',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'USERNAME',
            'target' => 'name',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'user',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['devtrac_2_devtrac_user_import'] = $feeds_importer;

  return $export;
}
