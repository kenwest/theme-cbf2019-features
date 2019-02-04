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
  // Translatables
  // Included for use with string extractors like potx.
  t('CBF 2019 main menu');

  return $menus;
}
