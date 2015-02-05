<?php
/**
 * @file
 * devtrac7_images_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function devtrac7_images_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'file-image-field_file_image_alt_text'
  $field_instances['file-image-field_file_image_alt_text'] = array(
    'bundle' => 'image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Additional Alt-Text that is used by screen-readers, or if the image cannot be displayed.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'grid' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'image_export' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'list_view_mode' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'media_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'media_original' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'wysiwyg' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'file',
    'field_name' => 'field_file_image_alt_text',
    'label' => 'Alt Text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'file-image-field_file_image_exif_date'
  $field_instances['file-image-field_file_image_exif_date'] = array(
    'bundle' => 'image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'You don\'t need to fill in this field.
If available, this will be filled in automatically with the date that is contained in the image file itself.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 3,
      ),
      'grid' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'image_export' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'list_view_mode' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 3,
      ),
      'media_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'media_original' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'wysiwyg' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'file',
    'field_name' => 'field_file_image_exif_date',
    'label' => 'EXIF Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'exif',
      'settings' => array(
        'exif_field' => 'exif_datetimeoriginal',
        'image_field' => 'file',
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'exif_readonly',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'file-image-field_file_image_gps_latitude'
  $field_instances['file-image-field_file_image_gps_latitude'] = array(
    'bundle' => 'image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'You don\'t need to fill in this field.
If available, this will be filled in automatically with GPS information that is contained in the image file itself.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'grid' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'image_export' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'list_view_mode' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'media_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'media_original' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'wysiwyg' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'file',
    'field_name' => 'field_file_image_gps_latitude',
    'label' => 'GPS Latitude',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'exif',
      'settings' => array(
        'exif_field' => 'gps_gpslatitude',
        'image_field' => 'file',
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'exif_readonly',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'file-image-field_file_image_gps_longitude'
  $field_instances['file-image-field_file_image_gps_longitude'] = array(
    'bundle' => 'image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'You don\'t need to fill in this field.
If available, this will be filled in automatically with GPS informatio that is contained in the image file itself.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'grid' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'image_export' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'list_view_mode' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'media_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'media_original' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'wysiwyg' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'file',
    'field_name' => 'field_file_image_gps_longitude',
    'label' => 'GPS Longitude',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'exif',
      'settings' => array(
        'exif_field' => 'gps_gpslongitude',
        'image_field' => 'file',
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'exif_readonly',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'file-image-field_file_image_title_text'
  $field_instances['file-image-field_file_image_title_text'] = array(
    'bundle' => 'image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This text is displayed with the image in pop-ups, lists and slide shows',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'grid' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'image_export' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'list_view_mode' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'media_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'media_original' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'wysiwyg' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'file',
    'field_name' => 'field_file_image_title_text',
    'label' => 'Title Text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'file-image-field_ftritem_date_visited'
  $field_instances['file-image-field_ftritem_date_visited'] = array(
    'bundle' => 'image',
    'deleted' => 0,
    'description' => 'You don\'t need to fill in this field.
It will be automatically filled in with the date recorded with your image or with the date of your Field Trip when you save the Field Trip Report. ',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 4,
      ),
      'grid' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'image_export' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'list_view_mode' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 4,
      ),
      'media_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'media_original' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'wysiwyg' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'file',
    'field_name' => 'field_ftritem_date_visited',
    'label' => 'Date Visited',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 1,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'file-image-field_ftritem_lat_long'
  $field_instances['file-image-field_ftritem_lat_long'] = array(
    'bundle' => 'image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'You don\'t need to fill in this field.
It will be automatically filled in with the GPS information of the image or with the location of your Field Trip when you save the Field Trip Report.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'geofield',
        'settings' => array(
          'data' => 'full',
          'format' => 'decimal_degrees',
          'labels' => 1,
        ),
        'type' => 'geofield_latlon',
        'weight' => 7,
      ),
      'grid' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'image_export' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'list_view_mode' => array(
        'label' => 'inline',
        'module' => 'geofield',
        'settings' => array(
          'data' => 'full',
          'format' => 'decimal_degrees',
          'labels' => 1,
        ),
        'type' => 'geofield_latlon',
        'weight' => 7,
      ),
      'media_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'media_original' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'wysiwyg' => array(
        'label' => 'inline',
        'module' => 'geofield',
        'settings' => array(
          'data' => 'full',
          'format' => 'decimal_degrees',
          'labels' => 1,
        ),
        'type' => 'geofield_latlon',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'file',
    'field_name' => 'field_ftritem_lat_long',
    'label' => 'Lat-Long',
    'required' => 0,
    'settings' => array(
      'local_solr' => array(
        'enabled' => FALSE,
        'lat_field' => 'lat',
        'lng_field' => 'lng',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'geofield',
      'settings' => array(
        'html5_geolocation' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'geofield_latlon',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'file-image-field_taxonomy_image_tags'
  $field_instances['file-image-field_taxonomy_image_tags'] = array(
    'bundle' => 'image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 8,
      ),
      'grid' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'image_export' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'list_view_mode' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 8,
      ),
      'media_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'media_original' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'wysiwyg' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'file',
    'field_name' => 'field_taxonomy_image_tags',
    'label' => 'Tags',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'file-image-taxonomy_vocabulary_1'
  $field_instances['file-image-taxonomy_vocabulary_1'] = array(
    'bundle' => 'image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'You don\'t need to fill in this field.
It will be automatically filled in with the place type of your Field Trip when you save the Field Trip Report. ',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 9,
      ),
      'grid' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'image_export' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'list_view_mode' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 9,
      ),
      'media_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'media_original' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'wysiwyg' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'file',
    'field_name' => 'taxonomy_vocabulary_1',
    'label' => 'Placetype',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
        'content_taxonomy_opt_groups' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'options_select',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'file-image-taxonomy_vocabulary_6'
  $field_instances['file-image-taxonomy_vocabulary_6'] = array(
    'bundle' => 'image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'You don\'t need to fill in this field.
It will be automatically filled in with the district of your Field Trip when you save the Field Trip Report. ',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 10,
      ),
      'grid' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'image_export' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'list_view_mode' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 10,
      ),
      'media_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'media_original' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'wysiwyg' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'file',
    'field_name' => 'taxonomy_vocabulary_6',
    'label' => 'Districts',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
        'content_taxonomy_opt_groups' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'options_select',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'file-image-taxonomy_vocabulary_8'
  $field_instances['file-image-taxonomy_vocabulary_8'] = array(
    'bundle' => 'image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'You don\'t need to fill in this field.
It will be automatically filled in with the sectors of your Field Trip when you save the Field Trip Report. ',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 11,
      ),
      'grid' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'image_export' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'list_view_mode' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 11,
      ),
      'media_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'media_original' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'wysiwyg' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'file',
    'field_name' => 'taxonomy_vocabulary_8',
    'label' => 'Sectors',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
        'content_taxonomy_opt_groups' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'options_select',
      'weight' => 12,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Additional Alt-Text that is used by screen-readers, or if the image cannot be displayed.');
  t('Alt Text');
  t('Date Visited');
  t('Districts');
  t('EXIF Date');
  t('GPS Latitude');
  t('GPS Longitude');
  t('Lat-Long');
  t('Placetype');
  t('Sectors');
  t('Tags');
  t('This text is displayed with the image in pop-ups, lists and slide shows');
  t('Title Text');
  t('You don\'t need to fill in this field.
If available, this will be filled in automatically with GPS information that is contained in the image file itself.');
  t('You don\'t need to fill in this field.
If available, this will be filled in automatically with GPS information that is contained in the image file itself.');
  t('You don\'t need to fill in this field.
It will be automatically filled in with the GPS information of the image or with the location of your Field Trip when you save the Field Trip Report.');
  t('You don\'t need to fill in this field.
It will be automatically filled in with the date recorded with your image or with the date of your Field Trip when you save the Field Trip Report. ');
  t('You don\'t need to fill in this field.
It will be automatically filled in with the district of your Field Trip when you save the Field Trip Report. ');
  t('You don\'t need to fill in this field.
It will be automatically filled in with the place type of your Field Trip when you save the Field Trip Report. ');
  t('You don\'t need to fill in this field.
It will be automatically filled in with the sectors of your Field Trip when you save the Field Trip Report. ');
  t('You don\'t need to fill in this field.
If available, this will be filled in automatically with the date that is contained in the image file itself.');

  return $field_instances;
}
