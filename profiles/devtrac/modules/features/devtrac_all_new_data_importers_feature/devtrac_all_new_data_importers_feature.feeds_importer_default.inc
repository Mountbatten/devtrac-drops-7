<?php
/**
 * @file
 * devtrac_all_new_data_importers_feature.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function devtrac_all_new_data_importers_feature_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'devtrac_action_items_importer';
  $feeds_importer->config = array(
    'name' => 'Devtrac Action Items Importer',
    'description' => 'Imports action items into a devtrac instance',
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
            'source' => 'Title',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Admin Units',
            'target' => 'taxonomy_vocabulary_6',
            'term_search' => '0',
            'autocreate' => 1,
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
            'source' => 'UUID',
            'target' => 'guid',
            'unique' => 0,
          ),
          9 => array(
            'source' => 'Location UUID',
            'target' => 'field_actionitem_resp_place',
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
  $export['devtrac_action_items_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'devtrac_districts_importer';
  $feeds_importer->config = array(
    'name' => 'Devtrac Districts Importer',
    'description' => 'Imports list of districts into a devtrac instance',
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
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Name',
            'target' => 'name',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Geo Information',
            'target' => 'field_district_geo:wkt',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Description',
            'target' => 'description',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'vocabulary_6',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['devtrac_districts_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'devtrac_fieldtrips_importer';
  $feeds_importer->config = array(
    'name' => 'Devtrac FieldTrips Importer',
    'description' => 'Imports Fieldtrips into a new devtrac instance',
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
            'source' => 'Title',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Narrative',
            'target' => 'field_fieldtrip_narrative',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'User',
            'target' => 'field_fieldtrip_user:label',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Approved By',
            'target' => 'field_fieldtrip_approved_by:label',
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
            'source' => 'Public Summary',
            'target' => 'field_fieldtrip_public_summary',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Admin Units',
            'target' => 'taxonomy_vocabulary_6',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          8 => array(
            'source' => 'Locations',
            'target' => 'field_fieldtrip_places:label',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Start Date',
            'target' => 'field_fieldtrip_start_end_date:start',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'End Date',
            'target' => 'field_fieldtrip_start_end_date:end',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
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
  $export['devtrac_fieldtrips_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'devtrac_locations_importer';
  $feeds_importer->config = array(
    'name' => 'Devtrac Locations Importer',
    'description' => 'Imports locations into a devtrac instance',
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
            'source' => 'Lat-Long',
            'target' => 'field_place_lat_long:wkt',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Admin Units',
            'target' => 'taxonomy_vocabulary_6',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          4 => array(
            'source' => 'Location Types',
            'target' => 'taxonomy_vocabulary_1',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          5 => array(
            'source' => 'Lat',
            'target' => 'field_place_lat_long:lat',
            'unique' => FALSE,
          ),
          6 => array(
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
  $export['devtrac_locations_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'devtrac_sitereports_importer';
  $feeds_importer->config = array(
    'name' => 'Devtrac SiteReports Importer',
    'description' => 'Imports site reports into a devtrac instance',
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
            'unique' => FALSE,
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
            'source' => 'Public Summary',
            'target' => 'field_ftritem_public_summary',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Full Report',
            'target' => 'field_ftritem_narrative',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Location Type',
            'target' => 'taxonomy_vocabulary_1',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          7 => array(
            'source' => 'Site Report Type',
            'target' => 'taxonomy_vocabulary_7',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          8 => array(
            'source' => 'Field Trip',
            'target' => 'entityreference:field_ftritem_field_trip',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Site Visit Lat',
            'target' => 'field_ftritem_lat_long:lat',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Site Visit Lon',
            'target' => 'field_ftritem_lat_long:lon',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Visited on',
            'target' => 'field_ftritem_date_visited:start',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'District',
            'target' => 'taxonomy_vocabulary_6',
            'term_search' => '0',
            'autocreate' => 1,
          ),
        ),
        'update_existing' => '0',
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
  $export['devtrac_sitereports_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'devtrac_users_importer';
  $feeds_importer->config = array(
    'name' => 'Devtrac Users Importer',
    'description' => 'Imports a list of new users into a devtrac instance',
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
        'defuse_mail' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Username',
            'target' => 'name',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'First Name',
            'target' => 'field_user_firstname',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Surname',
            'target' => 'field_user_surname',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Email',
            'target' => 'mail',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Function',
            'target' => 'taxonomy_vocabulary_5',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          5 => array(
            'source' => 'Department',
            'target' => 'taxonomy_vocabulary_4',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          6 => array(
            'source' => 'About Me',
            'target' => 'field_user_aboutme',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Password',
            'target' => 'pass',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Academic Degree(s)',
            'target' => 'field_user_degree',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Districts',
            'target' => 'taxonomy_vocabulary_6',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          10 => array(
            'source' => 'Status',
            'target' => 'status',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Title',
            'target' => 'field_user_title',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'Manager',
            'target' => 'field_user_superior:label',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
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
  $export['devtrac_users_importer'] = $feeds_importer;

  return $export;
}
