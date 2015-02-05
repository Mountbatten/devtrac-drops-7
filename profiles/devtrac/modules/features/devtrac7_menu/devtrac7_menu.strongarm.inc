<?php
/**
 * @file
 * devtrac7_menu.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function devtrac7_menu_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_secondary_links_source';
  $strongarm->value = '';
  $export['menu_secondary_links_source'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_depth_1';
  $strongarm->value = '-1';
  $export['nice_menus_depth_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_depth_3';
  $strongarm->value = '-1';
  $export['nice_menus_depth_3'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_js';
  $strongarm->value = 1;
  $export['nice_menus_js'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_menu_1';
  $strongarm->value = 'main-menu:0';
  $export['nice_menus_menu_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_menu_3';
  $strongarm->value = 'menu-my-dashboard-menu:0';
  $export['nice_menus_menu_3'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_name_1';
  $strongarm->value = 'Nice Main Menu';
  $export['nice_menus_name_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_name_3';
  $strongarm->value = 'My Dashboard Menu';
  $export['nice_menus_name_3'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_number';
  $strongarm->value = '3';
  $export['nice_menus_number'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_sf_delay';
  $strongarm->value = '800';
  $export['nice_menus_sf_delay'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_sf_speed';
  $strongarm->value = 'slow';
  $export['nice_menus_sf_speed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_type_1';
  $strongarm->value = 'down';
  $export['nice_menus_type_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_type_3';
  $strongarm->value = 'right';
  $export['nice_menus_type_3'] = $strongarm;

  return $export;
}
