<?php
/**
 * Implements hook_preprocess_html().
 */
function devtrac7_theme_alpha_preprocess_html(&$vars) {

  // Add conditional stylesheets for IE
  drupal_add_css(drupal_get_path('theme', 'devtrac7_theme') . '/css/ie8.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'lte IE 8', '!IE' => FALSE), 'preprocess' => FALSE, 'weight' => 115));
  drupal_add_css(drupal_get_path('theme', 'devtrac7_theme') . '/css/ie9.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'IE 9', '!IE' => FALSE), 'preprocess' => FALSE, 'weight' => 115));

  if (isset($_GET['print'])) {
  // Replace all html classes
    $vars['classes_array'] = array('print');
    $vars['attributes_array']['class'] = array('print');
  }
}
