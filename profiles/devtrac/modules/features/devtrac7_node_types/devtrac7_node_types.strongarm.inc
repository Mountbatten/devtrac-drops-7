<?php
/**
 * @file
 * devtrac7_node_types.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function devtrac7_node_types_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_actionitem';
  $strongarm->value = '2';
  $export['comment_actionitem'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_actionitem';
  $strongarm->value = 0;
  $export['comment_anonymous_actionitem'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_fieldtrip';
  $strongarm->value = 0;
  $export['comment_anonymous_fieldtrip'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_ftritem';
  $strongarm->value = 0;
  $export['comment_anonymous_ftritem'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_page';
  $strongarm->value = 0;
  $export['comment_anonymous_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_place';
  $strongarm->value = 0;
  $export['comment_anonymous_place'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_actionitem';
  $strongarm->value = 1;
  $export['comment_default_mode_actionitem'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_fieldtrip';
  $strongarm->value = 1;
  $export['comment_default_mode_fieldtrip'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_ftritem';
  $strongarm->value = 1;
  $export['comment_default_mode_ftritem'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_page';
  $strongarm->value = 1;
  $export['comment_default_mode_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_place';
  $strongarm->value = 1;
  $export['comment_default_mode_place'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_actionitem';
  $strongarm->value = '50';
  $export['comment_default_per_page_actionitem'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_fieldtrip';
  $strongarm->value = '50';
  $export['comment_default_per_page_fieldtrip'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_ftritem';
  $strongarm->value = '50';
  $export['comment_default_per_page_ftritem'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_page';
  $strongarm->value = '50';
  $export['comment_default_per_page_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_place';
  $strongarm->value = '50';
  $export['comment_default_per_page_place'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_fieldtrip';
  $strongarm->value = '2';
  $export['comment_fieldtrip'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_actionitem';
  $strongarm->value = 1;
  $export['comment_form_location_actionitem'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_fieldtrip';
  $strongarm->value = 1;
  $export['comment_form_location_fieldtrip'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_ftritem';
  $strongarm->value = 1;
  $export['comment_form_location_ftritem'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_page';
  $strongarm->value = 1;
  $export['comment_form_location_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_place';
  $strongarm->value = 1;
  $export['comment_form_location_place'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_ftritem';
  $strongarm->value = '1';
  $export['comment_ftritem'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_page';
  $strongarm->value = 1;
  $export['comment_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_place';
  $strongarm->value = '1';
  $export['comment_place'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_actionitem';
  $strongarm->value = '0';
  $export['comment_preview_actionitem'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_fieldtrip';
  $strongarm->value = '0';
  $export['comment_preview_fieldtrip'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_ftritem';
  $strongarm->value = '0';
  $export['comment_preview_ftritem'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_page';
  $strongarm->value = '0';
  $export['comment_preview_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_place';
  $strongarm->value = '0';
  $export['comment_preview_place'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_story';
  $strongarm->value = '1';
  $export['comment_story'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_actionitem';
  $strongarm->value = 0;
  $export['comment_subject_field_actionitem'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_fieldtrip';
  $strongarm->value = 0;
  $export['comment_subject_field_fieldtrip'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_ftritem';
  $strongarm->value = 1;
  $export['comment_subject_field_ftritem'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_page';
  $strongarm->value = 1;
  $export['comment_subject_field_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_place';
  $strongarm->value = 1;
  $export['comment_subject_field_place'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_devtrac_format';
  $strongarm->value = 'd/m/Y';
  $export['date_format_devtrac_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_actionitem';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_actionitem'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_fieldtrip';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_fieldtrip'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_ftritem';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_ftritem'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_actionitem';
  $strongarm->value = 0;
  $export['diff_show_preview_changes_node_actionitem'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_fieldtrip';
  $strongarm->value = 0;
  $export['diff_show_preview_changes_node_fieldtrip'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_ftritem';
  $strongarm->value = 0;
  $export['diff_show_preview_changes_node_ftritem'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_place';
  $strongarm->value = 0;
  $export['diff_show_preview_changes_node_place'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_ftritem';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_ftritem'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings';
  $strongarm->value = array(
    'node' => array(
      'actionitem' => array(
        'extra_fields' => array(
          'form' => array(
            'body' => array(
              'weight' => 0,
            ),
            'title' => array(
              'weight' => '-5',
            ),
          ),
          'display' => array(),
        ),
        'view_modes' => array(
          'full' => array(
            'custom_settings' => TRUE,
          ),
          'teaser' => array(
            'custom_settings' => TRUE,
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
          'print' => array(
            'custom_settings' => FALSE,
          ),
          'mobile' => array(
            'custom_settings' => FALSE,
          ),
          'token' => array(
            'custom_settings' => FALSE,
          ),
        ),
      ),
      'fieldtrip' => array(
        'extra_fields' => array(
          'form' => array(
            'body' => array(
              'weight' => 0,
            ),
            'title' => array(
              'weight' => '-5',
            ),
          ),
          'display' => array(),
        ),
        'view_modes' => array(
          'full' => array(
            'custom_settings' => TRUE,
          ),
          'teaser' => array(
            'custom_settings' => TRUE,
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
          'print' => array(
            'custom_settings' => FALSE,
          ),
          'mobile' => array(
            'custom_settings' => FALSE,
          ),
          'token' => array(
            'custom_settings' => FALSE,
          ),
        ),
      ),
      'ftritem' => array(
        'extra_fields' => array(
          'form' => array(
            'body' => array(
              'weight' => 0,
            ),
            'title' => array(
              'weight' => '-5',
            ),
          ),
          'display' => array(),
        ),
        'view_modes' => array(
          'full' => array(
            'custom_settings' => TRUE,
          ),
          'teaser' => array(
            'custom_settings' => TRUE,
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
          'print' => array(
            'custom_settings' => FALSE,
          ),
          'mobile' => array(
            'custom_settings' => FALSE,
          ),
          'token' => array(
            'custom_settings' => FALSE,
          ),
        ),
      ),
      'page' => array(
        'extra_fields' => array(
          'form' => array(
            'body' => array(
              'weight' => 0,
            ),
            'title' => array(
              'weight' => '-5',
            ),
          ),
          'display' => array(),
        ),
        'view_modes' => array(
          'teaser' => array(
            'custom_settings' => TRUE,
          ),
          'full' => array(
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
          'print' => array(
            'custom_settings' => FALSE,
          ),
          'mobile' => array(
            'custom_settings' => FALSE,
          ),
          'token' => array(
            'custom_settings' => FALSE,
          ),
        ),
      ),
      'place' => array(
        'extra_fields' => array(
          'form' => array(
            'body' => array(
              'weight' => 0,
            ),
            'title' => array(
              'weight' => '-5',
            ),
          ),
          'display' => array(),
        ),
        'view_modes' => array(
          'full' => array(
            'custom_settings' => TRUE,
          ),
          'teaser' => array(
            'custom_settings' => TRUE,
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
          'print' => array(
            'custom_settings' => FALSE,
          ),
          'mobile' => array(
            'custom_settings' => FALSE,
          ),
          'token' => array(
            'custom_settings' => FALSE,
          ),
        ),
      ),
      'story' => array(
        'extra_fields' => array(
          'form' => array(
            'title' => array(
              'weight' => '-5',
            ),
            'body' => array(
              'weight' => '0',
            ),
            'revision_information' => array(
              'weight' => '20',
            ),
            'comment_settings' => array(
              'weight' => '30',
            ),
            'menu' => array(
              'weight' => '-2',
            ),
            'attachments' => array(
              'weight' => '30',
            ),
          ),
          'display' => array(),
        ),
        'view_modes' => array(),
      ),
      'questionnaire_question' => array(
        'view_modes' => array(),
        'extra_fields' => array(
          'form' => array(
            'title' => array(
              'weight' => '-5',
            ),
          ),
          'display' => array(),
        ),
      ),
    ),
    'file' => array(
      'default' => array(
        'view_modes' => array(
          'preview' => array(
            'custom_settings' => TRUE,
          ),
          'teaser' => array(
            'custom_settings' => TRUE,
          ),
          'full' => array(
            'custom_settings' => TRUE,
          ),
        ),
        'extra_fields' => array(
          'form' => array(),
          'display' => array(
            'file' => array(
              'teaser' => array(
                'weight' => 0,
                'visible' => FALSE,
              ),
            ),
          ),
        ),
      ),
      'image' => array(
        'view_modes' => array(
          'preview' => array(
            'custom_settings' => TRUE,
          ),
          'teaser' => array(
            'custom_settings' => TRUE,
          ),
          'full' => array(
            'custom_settings' => TRUE,
          ),
        ),
        'extra_fields' => array(
          'form' => array(),
          'display' => array(
            'file' => array(
              'teaser' => array(
                'weight' => 0,
                'visible' => FALSE,
              ),
            ),
          ),
        ),
      ),
      'audio' => array(
        'view_modes' => array(
          'preview' => array(
            'custom_settings' => TRUE,
          ),
          'teaser' => array(
            'custom_settings' => TRUE,
          ),
          'full' => array(
            'custom_settings' => TRUE,
          ),
        ),
        'extra_fields' => array(
          'form' => array(),
          'display' => array(
            'file' => array(
              'teaser' => array(
                'weight' => 0,
                'visible' => FALSE,
              ),
            ),
          ),
        ),
      ),
      'video' => array(
        'view_modes' => array(
          'preview' => array(
            'custom_settings' => TRUE,
          ),
          'teaser' => array(
            'custom_settings' => TRUE,
          ),
          'full' => array(
            'custom_settings' => TRUE,
          ),
        ),
        'extra_fields' => array(
          'form' => array(),
          'display' => array(
            'file' => array(
              'teaser' => array(
                'weight' => 0,
                'visible' => FALSE,
              ),
            ),
          ),
        ),
      ),
    ),
    'comment' => array(
      'comment_node_actionitem' => array(
        'view_modes' => array(
          'full' => array(
            'custom_settings' => FALSE,
          ),
          'mobile' => array(
            'custom_settings' => FALSE,
          ),
          'token' => array(
            'custom_settings' => FALSE,
          ),
        ),
        'extra_fields' => array(
          'form' => array(),
          'display' => array(),
        ),
      ),
    ),
    'user' => array(
      'user' => array(
        'view_modes' => array(
          'full' => array(
            'custom_settings' => TRUE,
          ),
          'mobile' => array(
            'custom_settings' => FALSE,
          ),
          'token' => array(
            'custom_settings' => FALSE,
          ),
        ),
        'extra_fields' => array(
          'form' => array(
            'account' => array(
              'weight' => '0',
            ),
            'timezone' => array(
              'weight' => '13',
            ),
            'picture' => array(
              'weight' => '1',
            ),
            'contact' => array(
              'weight' => '12',
            ),
          ),
          'display' => array(
            'summary' => array(
              'default' => array(
                'weight' => '5',
                'visible' => TRUE,
              ),
              'full' => array(
                'weight' => '10',
                'visible' => FALSE,
              ),
            ),
          ),
        ),
      ),
    ),
    'taxonomy_term' => array(
      'vocabulary_6' => array(
        'view_modes' => array(
          'full' => array(
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
              'full' => array(
                'weight' => '1',
                'visible' => TRUE,
              ),
            ),
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_field_collection_item__field_place_contact_info';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_field_collection_item__field_place_contact_info'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__document';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'filename' => array(
          'weight' => '-10',
        ),
        'preview' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(
        'file' => array(
          'preview' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'media_original' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'media_link' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__document'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__actionitem';
  $strongarm->value = array(
    'extra_fields' => array(
      'form' => array(
        'body' => array(
          'weight' => 0,
        ),
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(),
    ),
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
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
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'mobile' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
  );
  $export['field_bundle_settings_node__actionitem'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__fieldtrip';
  $strongarm->value = array(
    'extra_fields' => array(
      'form' => array(
        'body' => array(
          'weight' => 0,
        ),
        'title' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
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
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'mobile' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
  );
  $export['field_bundle_settings_node__fieldtrip'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__ftritem';
  $strongarm->value = array(
    'extra_fields' => array(
      'form' => array(
        'body' => array(
          'weight' => 0,
        ),
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(),
    ),
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
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
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'mobile' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'map_popup_view_mode' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'district_profile_view_mode' => array(
        'custom_settings' => FALSE,
      ),
    ),
  );
  $export['field_bundle_settings_node__ftritem'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__place';
  $strongarm->value = array(
    'extra_fields' => array(
      'form' => array(
        'body' => array(
          'weight' => 0,
        ),
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '7',
        ),
      ),
      'display' => array(),
    ),
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
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
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'mobile' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'district_profile_view_mode' => array(
        'custom_settings' => FALSE,
      ),
      'map_popup_view_mode' => array(
        'custom_settings' => TRUE,
      ),
    ),
  );
  $export['field_bundle_settings_node__place'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_actionitem';
  $strongarm->value = array();
  $export['menu_options_actionitem'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_fieldtrip';
  $strongarm->value = array();
  $export['menu_options_fieldtrip'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ftritem';
  $strongarm->value = array();
  $export['menu_options_ftritem'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_page';
  $strongarm->value = array();
  $export['menu_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_place';
  $strongarm->value = array();
  $export['menu_options_place'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_actionitem';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_actionitem'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_fieldtrip';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_fieldtrip'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ftritem';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ftritem'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_page';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_place';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_place'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_actionitem';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_actionitem'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_fieldtrip';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_fieldtrip'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ftritem';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_ftritem'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_page';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_place';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_place'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_actionitem';
  $strongarm->value = '0';
  $export['node_preview_actionitem'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_fieldtrip';
  $strongarm->value = '0';
  $export['node_preview_fieldtrip'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ftritem';
  $strongarm->value = '0';
  $export['node_preview_ftritem'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_page';
  $strongarm->value = '0';
  $export['node_preview_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_place';
  $strongarm->value = '0';
  $export['node_preview_place'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_actionitem';
  $strongarm->value = 0;
  $export['node_submitted_actionitem'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_fieldtrip';
  $strongarm->value = 0;
  $export['node_submitted_fieldtrip'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ftritem';
  $strongarm->value = 0;
  $export['node_submitted_ftritem'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_page';
  $strongarm->value = 0;
  $export['node_submitted_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_place';
  $strongarm->value = 0;
  $export['node_submitted_place'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tipsy';
  $strongarm->value = array(
    'drupal_forms' => array(
      'forms' => 0,
      'options' => array(
        'fade' => 1,
        'gravity' => 'autoWE',
        'delayIn' => '0',
        'delayOut' => '0',
        'trigger' => 'focus',
        'opacity' => '0.8',
        'offset' => '0',
      ),
    ),
    'custom_selectors' => array(
      0 => array(
        'selector' => 'a.feed-icon, a.beautytips, .block-views-modes a',
        'options' => array(
          'fade' => 1,
          'gravity' => 'n',
          'trigger' => 'hover',
          'delayIn' => '0',
          'delayOut' => '0',
          'opacity' => '0.8',
          'offset' => '0',
          'html' => 0,
          'tooltip_content' => array(
            'source' => 'attribute',
            'selector' => 'title',
          ),
        ),
      ),
      1 => array(
        'selector' => 'img.taxonomy-term-image, .field-name-ds-user-picture img',
        'options' => array(
          'fade' => 1,
          'gravity' => 'autoWE',
          'trigger' => 'hover',
          'delayIn' => '0',
          'delayOut' => '0',
          'opacity' => '0.8',
          'offset' => '0',
          'html' => 0,
          'tooltip_content' => array(
            'source' => 'attribute',
            'selector' => 'alt',
          ),
        ),
      ),
      2 => array(
        'selector' => '.olButton, img.file-icon, .olControlPermalinkPlus',
        'options' => array(
          'fade' => 1,
          'gravity' => 'e',
          'trigger' => 'hover',
          'delayIn' => '0',
          'delayOut' => '0',
          'opacity' => '0.8',
          'offset' => '0',
          'html' => 0,
          'tooltip_content' => array(
            'source' => 'attribute',
            'selector' => 'title',
          ),
        ),
      ),
      3 => array(
        'selector' => 'th a, .form-required',
        'options' => array(
          'fade' => 1,
          'gravity' => 'sw',
          'trigger' => 'hover',
          'delayIn' => '0',
          'delayOut' => '0',
          'opacity' => '0.8',
          'offset' => '0',
          'html' => 0,
          'tooltip_content' => array(
            'source' => 'attribute',
            'selector' => 'title',
          ),
        ),
      ),
      4 => array(
        'selector' => '.view-display-id-block_3 table td a',
        'options' => array(
          'fade' => 1,
          'gravity' => 'e',
          'trigger' => 'hover',
          'delayIn' => '0',
          'delayOut' => '0',
          'opacity' => '0.8',
          'offset' => '0',
          'html' => 0,
          'tooltip_content' => array(
            'source' => 'attribute',
            'selector' => 'title',
          ),
        ),
      ),
      5 => array(
        'selector' => '.field img',
        'options' => array(
          'fade' => 1,
          'gravity' => 'sw',
          'trigger' => 'hover',
          'delayIn' => '0',
          'delayOut' => '0',
          'opacity' => '0.8',
          'offset' => '0',
          'html' => 0,
          'tooltip_content' => array(
            'source' => 'attribute',
            'selector' => 'alt',
          ),
        ),
      ),
    ),
  );
  $export['tipsy'] = $strongarm;

  return $export;
}
