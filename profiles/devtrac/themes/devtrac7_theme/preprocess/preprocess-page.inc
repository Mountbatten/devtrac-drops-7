<?php

function devtrac7_theme_alpha_preprocess_page(&$vars) {
  /**
   * Show the breadcrumb only on admin pages.
   */
  if (arg(1) === 'admin') {
    $breadcrumb = drupal_get_breadcrumb();
    $vars['breadcrumb'] = theme_breadcrumb($breadcrumb);
  }
  /**
    * Remove all regions from the page on print pages, except the content region
    */
  if (isset($_GET['print'])) {
    foreach ($vars['page'] as $key => $value) {
      if ((($key != 'page_bottom') && ($key != 'content')) && (substr($key, 0, 1) != '#')) {
        unset($vars['page'][$key]);
      }
      if ($key == 'content') {
        // We need to do more: remove the quicktabs
        unset($vars['page']['content']['highlighted']);
      }

    }
    unset($vars['page']['content']['content']['sidebar_first']);
  }

  // If the user isn't an admin, or the original administrative user,
  // remove all the tabs for all node add/edit forms.
  global $user;
  if ((arg(0) == 'node') && ((arg(1) == 'add') || (is_numeric(arg(1)) && (arg(2) == 'edit'))) &&
     !in_array('administrator',array_values($user->roles)) && ($user->uid != 1)) {
      if (arg(0) ==  'user') {
          // To avoid "Notice: Undefined index: tabs in omega_alpha_process_region()"
          // we empty $vars['tabs'] instead of unsetting it.
          $vars['tabs'] = array();
      }
      elseif ((arg(0) == 'node') && (is_numeric(arg(1))) && (arg(2) != 'edit')) {
        //Only for Devtrac content types
        $nid = arg(1);
        $node = node_load($nid);
        $types = array('ftritem', 'actionitem', 'fieldtrip', 'location');
        if (in_array($node->type, $types)) {
          // To avoid "Notice: Undefined index: tabs in omega_alpha_process_region()"
          // we empty $vars['tabs'] instead of unsetting it.
          $vars['tabs'] = array();
        }
      }
  }
}
