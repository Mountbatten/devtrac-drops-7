<?php

/**
 * Implements hook_preprocess_views_view_fields().
 */
function devtrac7_theme_alpha_preprocess_views_view_fields(&$vars) {
  if ((($vars['view']->name == 'dvtrc_field_trip') || ($vars['view']->name == 'dvtrc_site_visits')) && isset($vars['fields']['field_ftritem_images_3']->content)) {
    global $base_path;
    $output = $vars['fields']['field_ftritem_images_3']->content;
    $token = substr($output, strpos($output, 'token=') + 6, strpos($output, 'type=') - strpos($output, 'token=') - 8);
    $vars['fields']['field_ftritem_images_3']->content = '<div class="field-content"><span class="file"><a href="' . $base_path . 'file/' . $vars['row']->field_data_field_ftritem_images_field_ftritem_images_fid . '/download?token=' . $token . '" type="' . $vars['row']->field_field_ftritem_images_3[0]['raw']['filemime'] . '; length=' . $vars['row']->field_field_ftritem_images_3[0]['raw']['filesize'] . '"><img class="file-icon" alt="" title="Download image" src="/dt-map-upg8/modules/file/icons/image-x-generic.png" /></a></span></div>';
  }
}