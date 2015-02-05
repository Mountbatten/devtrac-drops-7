<?php

/**
 * Implements hook_process_page().
 */
function devtrac7_theme_alpha_process_page(&$vars) {
  // Remove the node title part from the node edit form.
  if (isset($vars['page']['content']['content']['content']['system_main']['#node_edit_form']) && $vars['page']['content']['content']['content']['system_main']['#node_edit_form']) {
    if (isset($vars['node']->title)) {
      $vars['title'] = str_replace($vars['node']->title, '', $vars['title']);
    }
  }
}
