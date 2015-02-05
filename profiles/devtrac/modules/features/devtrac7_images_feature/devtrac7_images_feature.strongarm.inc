<?php
/**
 * @file
 * devtrac7_images_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function devtrac7_images_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'exif_empty_values';
  $strongarm->value = 1;
  $export['exif_empty_values'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'exif_mediatypes';
  $strongarm->value = array(
    'image' => 'image',
    'audio' => 0,
    'document' => 0,
    'video' => 0,
  );
  $export['exif_mediatypes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'exif_nodetypes';
  $strongarm->value = array(
    'actionitem' => 0,
    'book' => 0,
    'fieldtrip' => 0,
    'ftritem' => 0,
    'page' => 0,
    'place' => 0,
    'questionnaire_question' => 0,
    'iati_activity' => 0,
    'iati_organisation' => 0,
    'story' => 0,
  );
  $export['exif_nodetypes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'exif_update';
  $strongarm->value = TRUE;
  $export['exif_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'exif_vocabulary';
  $strongarm->value = '0';
  $export['exif_vocabulary'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__image';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'preview' => array(
        'custom_settings' => TRUE,
      ),
      'media_link' => array(
        'custom_settings' => TRUE,
      ),
      'media_original' => array(
        'custom_settings' => TRUE,
      ),
      'list_view_mode' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'image_export' => array(
        'custom_settings' => TRUE,
      ),
      'grid' => array(
        'custom_settings' => TRUE,
      ),
      'wysiwyg' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'filename' => array(
          'weight' => '0',
        ),
        'preview' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(
        'file' => array(
          'media_small' => array(
            'weight' => 0,
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'list_view_mode' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'preview' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'image_export' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'grid' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'wysiwyg' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__image'] = $strongarm;

  return $export;
}
