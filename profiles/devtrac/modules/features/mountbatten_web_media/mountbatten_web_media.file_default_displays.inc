<?php
/**
 * @file
 * mountbatten_web_media.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function mountbatten_web_media_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__wysiwyg__file_field_picture';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'picture_mapping' => 'picturemap',
    'fallback_image_style' => '',
    'image_link' => '',
  );
  $export['image__wysiwyg__file_field_picture'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__wysiwyg__file_field_picture_sizes_formatter';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'sizes' => '(min-width: 0px)',
    'image_styles' => array(
      '_empty image_' => '_empty image_',
      'thumbnail' => 0,
      'medium' => 0,
      'large' => 0,
      'media_thumbnail' => 0,
      'medium_tryoutcustom_user_large_1x' => 0,
      'medium_tryoutcustom_user_smaller_1x' => 0,
      '_original image_' => 0,
    ),
    'fallback_image_style' => '_original image_',
    'image_link' => '',
  );
  $export['image__wysiwyg__file_field_picture_sizes_formatter'] = $file_display;

  return $export;
}
