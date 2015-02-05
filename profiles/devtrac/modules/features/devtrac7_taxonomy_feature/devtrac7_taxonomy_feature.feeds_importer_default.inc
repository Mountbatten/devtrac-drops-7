<?php
/**
 * @file
 * devtrac7_taxonomy_feature.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function devtrac7_taxonomy_feature_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'devtrac_UNICEF_region_import';
  $feeds_importer->config = array(
    'name' => 'Devtrac UNICEF Region Import',
    'description' => 'Imports UNICEF and WZO GZO and MZO',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml geojson',
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
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 'vocabulary_6',
        'mappings' => array(
          0 => array(
            'source' => 'name',
            'target' => 'name',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'parent',
            'target' => 'parentguid',
            'unique' => 0,
          ),
          2 => array(
            'source' => 'name',
            'target' => 'guid',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'description',
            'target' => 'description',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => '4',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['devtrac_UNICEF_region_import'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'devtrac_country_import';
  $feeds_importer->config = array(
    'name' => 'Devtrac Country Import',
    'description' => 'Imports Uganda',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml geojson',
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
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 'vocabulary_6',
        'mappings' => array(
          0 => array(
            'source' => 'COUNTRY',
            'target' => 'name',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'WKT',
            'target' => 'field_district_geo:wkt',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'COUNTRY',
            'target' => 'guid',
            'unique' => 1,
          ),
        ),
        'update_existing' => '2',
        'input_format' => '4',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['devtrac_country_import'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'devtrac_district_geo_import';
  $feeds_importer->config = array(
    'name' => 'District Geo Import',
    'description' => 'Imports only the Geo Info',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml geojson',
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
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 'vocabulary_6',
        'mappings' => array(
          0 => array(
            'source' => 'WKT',
            'target' => 'field_district_geo:wkt',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'DNAME_2010',
            'target' => 'guid',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'DNAME_2010',
            'target' => 'name',
            'unique' => 1,
          ),
        ),
        'update_existing' => '2',
        'input_format' => '4',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['devtrac_district_geo_import'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'devtrac_district_import';
  $feeds_importer->config = array(
    'name' => 'Devtrac District Import',
    'description' => 'Ugandan Districts in 2010',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml geojson',
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
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 'vocabulary_6',
        'mappings' => array(
          0 => array(
            'source' => 'WKT',
            'target' => 'field_district_geo:wkt',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'DNAME_2010',
            'target' => 'name',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'SUBREGION',
            'target' => 'parentguid',
            'unique' => 0,
          ),
          3 => array(
            'source' => 'SUBREGION',
            'target' => 'parent',
            'unique' => 0,
          ),
          4 => array(
            'source' => 'DNAME_2010',
            'target' => 'guid',
            'unique' => 1,
          ),
          5 => array(
            'source' => 'Zone',
            'target' => 'parentguid',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => '4',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['devtrac_district_import'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'devtrac_oecd_category_import';
  $feeds_importer->config = array(
    'name' => 'Devtrac OECD Category Import',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml geojson',
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
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 'vocabulary_8',
        'mappings' => array(
          0 => array(
            'source' => 'category',
            'target' => 'field_oecd_code',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'categoryname',
            'target' => 'name',
            'unique' => 0,
          ),
          2 => array(
            'source' => 'categorydescription',
            'target' => 'description',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'category',
            'target' => 'guid',
            'unique' => 1,
          ),
          4 => array(
            'source' => 'topiccode',
            'target' => 'parentguid',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => '4',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['devtrac_oecd_category_import'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'devtrac_oecd_group_import';
  $feeds_importer->config = array(
    'name' => 'Devtrac OECD Group Import',
    'description' => 'Imports the group OECD (only)',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml geojson',
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
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 'vocabulary_8',
        'mappings' => array(
          0 => array(
            'source' => 'group',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'group',
            'target' => 'name',
            'unique' => 0,
          ),
        ),
        'update_existing' => '2',
        'input_format' => '4',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['devtrac_oecd_group_import'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'devtrac_oecd_sector_import';
  $feeds_importer->config = array(
    'name' => 'Devtrac OECD Sector Import',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml geojson',
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
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 'vocabulary_8',
        'mappings' => array(
          0 => array(
            'source' => 'code',
            'target' => 'field_oecd_code',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'name',
            'target' => 'name',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'description',
            'target' => 'description',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'code',
            'target' => 'weight',
            'unique' => 0,
          ),
          4 => array(
            'source' => 'category',
            'target' => 'parentguid',
            'unique' => 0,
          ),
        ),
        'update_existing' => '2',
        'input_format' => '4',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['devtrac_oecd_sector_import'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'devtrac_oecd_topic_import';
  $feeds_importer->config = array(
    'name' => 'Devtrac OECD Topic Import',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml geojson',
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
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 'vocabulary_8',
        'mappings' => array(
          0 => array(
            'source' => 'topiccode',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'topiccode',
            'target' => 'field_oecd_code',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'topic',
            'target' => 'name',
            'unique' => 0,
          ),
          3 => array(
            'source' => 'group',
            'target' => 'parentguid',
            'unique' => 0,
          ),
        ),
        'update_existing' => '2',
        'input_format' => '4',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['devtrac_oecd_topic_import'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'devtrac_region_import';
  $feeds_importer->config = array(
    'name' => 'Devtrac Region Import',
    'description' => 'Imports Regions in Uganda',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml geojson',
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
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 'vocabulary_6',
        'mappings' => array(
          0 => array(
            'source' => 'WKT',
            'target' => 'field_district_geo:wkt',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'SUB_REGION',
            'target' => 'name',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'SUB_REGION',
            'target' => 'guid',
            'unique' => 1,
          ),
          3 => array(
            'source' => 'COUNTRY',
            'target' => 'parentguid',
            'unique' => 0,
          ),
        ),
        'update_existing' => '2',
        'input_format' => '4',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['devtrac_region_import'] = $feeds_importer;

  return $export;
}
