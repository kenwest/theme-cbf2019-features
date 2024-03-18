<?php

/**
 * @file
 * theme_cbf2019_features.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function theme_cbf2019_features_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_collections:admin/cbf/collections.
  $menu_links['management_collections:admin/cbf/collections'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/cbf/collections',
    'router_path' => 'admin/cbf/collections',
    'link_title' => 'Collections',
    'options' => array(
      'identifier' => 'management_collections:admin/cbf/collections',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'management_content:admin/content',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Collections');

  return $menu_links;
}
