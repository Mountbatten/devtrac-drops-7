<?php
/**
 * @file
 * devtrac7_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function devtrac7_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'Primary links are often used at the theme layer to show the major sections of a site. A typical representation for primary links would be tabs along the top.',
  );
  // Exported menu: menu-my-dashboard-menu.
  $menus['menu-my-dashboard-menu'] = array(
    'menu_name' => 'menu-my-dashboard-menu',
    'title' => 'My ItemsMenu',
    'description' => 'The menu with all items of a given user eg fieldtrips, site repaorts',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Footer Menu Right');
  t('Main menu');
  t('My ItemsMenu');
  t('Primary links are often used at the theme layer to show the major sections of a site. A typical representation for primary links would be tabs along the top.');
  t('The menu with all items of a given user eg fieldtrips, site repaorts');
  t('The right-most footer menu');

  return $menus;
}
