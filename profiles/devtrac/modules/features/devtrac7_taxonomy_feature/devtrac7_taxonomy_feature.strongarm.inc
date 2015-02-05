<?php
/**
 * @file
 * devtrac7_taxonomy_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function devtrac7_taxonomy_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_taxonomy_term__vocabulary_1';
  $strongarm->value = array(
    'view_modes' => array(
      'sector_code_icon' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'district_profile_view_mode' => array(
        'custom_settings' => FALSE,
      ),
      'map_popup_view_mode' => array(
        'custom_settings' => FALSE,
      ),
      'location_type_icon' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'path' => array(
          'weight' => '30',
        ),
        'name' => array(
          'weight' => '-5',
        ),
        'description' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(
        'description' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'location_type_icon' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_taxonomy_term__vocabulary_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_taxonomy_term__vocabulary_6';
  $strongarm->value = array(
    'view_modes' => array(
      'district_profile_view_mode' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'map_popup_view_mode' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'name' => array(
          'weight' => '0',
        ),
        'description' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(
        'description' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'district_profile_view_mode' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'map_popup_view_mode' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_taxonomy_term__vocabulary_6'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_taxonomy_term__vocabulary_8';
  $strongarm->value = array(
    'view_modes' => array(
      'sector_code_icon' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'district_profile_view_mode' => array(
        'custom_settings' => FALSE,
      ),
      'map_popup_view_mode' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'description' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'sector_code_icon' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'district_profile_view_mode' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'map_popup_view_mode' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_taxonomy_term__vocabulary_8'] = $strongarm;

  return $export;
}
