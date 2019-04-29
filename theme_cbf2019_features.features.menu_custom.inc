<?php
/**
 * @file
 * theme_cbf2019_features.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function theme_cbf2019_features_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-cbf-2019-main-menu.
  $menus['menu-cbf-2019-main-menu'] = array(
    'menu_name' => 'menu-cbf-2019-main-menu',
    'title' => 'CBF 2019 main menu',
    'description' => '',
  );
  // Exported menu: menu-cbf-2019-plus-menu.
  $menus['menu-cbf-2019-plus-menu'] = array(
    'menu_name' => 'menu-cbf-2019-plus-menu',
    'title' => 'CBF 2019 plus menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('CBF 2019 main menu');
  t('CBF 2019 plus menu');

  return $menus;
}
