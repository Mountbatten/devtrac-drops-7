<?php

/**
 * Implements hook_preprocess_block().
 */
/*
function devtrac7_theme_alpha_preprocess_block(&$vars) {
  if($vars['block']->module == 'current_search') {
    if( module_exists('beautytips') ) {
      $options['currentsearch_block'] = array(
        'cssSelect' => '.beautytips',
        'trigger' => array(0 => 'mouseover'),
        'width' => 300,
        'positions' => 'bottom',
        'shadow' =>      TRUE,
        'hoverIntentOpts' => Array (
          'interval' => 300,
          'timeout' => 500,
        )
      );
      beautytips_add_beautytips($options);
    }
  }
}
*/