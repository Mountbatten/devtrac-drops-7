<?php

/**
 * Implements hook_process_html().
 */
function devtrac7_theme_alpha_process_html(&$vars) {
  // Replace screen/all stylesheets with print
  // We want a minimal print representation here for full control.
  if (isset($_GET['print'])) {
//    $css = drupal_add_css();
    foreach ($vars['css'] as $path => $details) {
      if ((substr($details['media'], 0, 3) == 'all') || (substr($details['media'], 0, 6) == 'screen')) {
        unset($vars['css'][$path]);
      }
      if (substr($details['media'], 0, 5) == 'print') {
        $vars['css'][$path]['media'] = str_replace('print', 'all', $vars['css'][$path]['media']);
      }
    }
//    unset($css['all']);
//    unset($css['screen']);
//    $css['all'] = $css['print'];
//    $vars['css'] = $css;
    $vars['styles'] = drupal_get_css($vars['css']);

    // Set $theme_path used in print-header template.
    $vars['theme_path'] = path_to_theme();

    // Add print header
    $vars['print_header'] = theme('print_header');

    // Add print page
    $vars['print_page'] = theme('print_page', $vars);

    // Suppress devel output
//    $GLOBALS['devel_shutdown'] = FALSE;
  }
}
