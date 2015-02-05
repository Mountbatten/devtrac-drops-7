<?php
function devtrac7_theme_alpha_process_region(&$vars) {
  if ($vars['elements']['#region'] == 'content') {
    if (arg(0) == 'places') {// Only hide on the find places page
      $vars['title_hidden'] = TRUE;
    }
  }
}