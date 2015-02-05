<?php
/**
 * @file
 * Implementation of OpenLayers behavior.
 */

/**
 * Keyboard Defaults Behavior
 */
class openlayers_behavior_OKC extends openlayers_behavior {
  /**
   * Provide initial values for options.
   */
  function options_init() {
    return array(
      'keyboarddefaults' => '',
    );
  }

  // /**
  //  * Render.
  //  */

	function render(&$map) {
    	drupal_add_js(drupal_get_path('module', 'OL_lat_long').'/js/openlayers_behavior_OKC.js');
    	return $this->options;
  	}

}
