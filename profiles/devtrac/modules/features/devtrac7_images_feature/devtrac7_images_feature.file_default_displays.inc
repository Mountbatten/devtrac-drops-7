<?php
/**
 * @file
 * devtrac7_images_feature.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function devtrac7_images_feature_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_field_image';
  $file_display->weight = 49;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => '',
    'image_link' => '',
  );
  $export['image__default__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__full__file_image';
  $file_display->weight = 5;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'large',
  );
  $export['image__full__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__image_export__file_field_image';
  $file_display->weight = 5;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'image_export',
    'image_link' => '',
  );
  $export['image__image_export__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_original__file_image';
  $file_display->weight = 5;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__media_original__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__preview__file_field_image';
  $file_display->weight = 49;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'media_thumbnail',
    'image_link' => '',
  );
  $export['image__preview__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__preview__file_image';
  $file_display->weight = 5;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'thumbnail',
    'alt' => '[file:field_file_image_alt_text]',
    'title' => '[file:field_file_image_title_text]',
  );
  $export['image__preview__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__teaser__file_field_colorbox';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'colorbox_node_style' => 'gallery',
    'colorbox_node_style_first' => 'gallery',
    'colorbox_image_style' => 'gallery_popup_images',
    'colorbox_gallery' => 'page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'custom',
    'colorbox_caption_custom' => '[file:field-file-image-title-text] Added to : [file:node-usage]',
  );
  $export['image__teaser__file_field_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__teaser__file_field_image';
  $file_display->weight = 49;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  $export['image__teaser__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__teaser__file_image';
  $file_display->weight = 5;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'medium',
  );
  $export['image__teaser__file_image'] = $file_display;

  return $export;
}
