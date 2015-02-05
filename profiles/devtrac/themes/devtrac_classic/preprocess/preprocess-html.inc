<?php
/**
 * Implements hook_preprocess_html().
 */
function devtrac_classic_alpha_preprocess_html(&$vars) {

  $pages = array('sitereports', 'fieldtrips', 'actionitems', 'statistics');
  $pages = array_merge($pages, array('images', 'adminunits', 'locations'));
  $pages = array_merge($pages, array('users'));

  $argument = arg(0);
  if (in_array($argument, $pages)) {
  // Replace all html classes
    $vars['classes_array'][] = 'fluid';
    $vars['attributes_array']['class'][] = 'fluid';
  }
}
