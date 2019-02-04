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

  // Exported menu link: menu-cbf-2019-main-menu_about-us:<front>.
  $menu_links['menu-cbf-2019-main-menu_about-us:<front>'] = array(
    'menu_name' => 'menu-cbf-2019-main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'About us',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-cbf-2019-main-menu_about-us:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-cbf-2019-main-menu_activities:<front>.
  $menu_links['menu-cbf-2019-main-menu_activities:<front>'] = array(
    'menu_name' => 'menu-cbf-2019-main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Activities',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-cbf-2019-main-menu_activities:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-cbf-2019-main-menu_blog:<front>.
  $menu_links['menu-cbf-2019-main-menu_blog:<front>'] = array(
    'menu_name' => 'menu-cbf-2019-main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Blog',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-cbf-2019-main-menu_blog:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-cbf-2019-main-menu_events:<front>.
  $menu_links['menu-cbf-2019-main-menu_events:<front>'] = array(
    'menu_name' => 'menu-cbf-2019-main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-cbf-2019-main-menu_events:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-cbf-2019-main-menu_resources:<front>.
  $menu_links['menu-cbf-2019-main-menu_resources:<front>'] = array(
    'menu_name' => 'menu-cbf-2019-main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Resources',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-cbf-2019-main-menu_resources:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About us');
  t('Activities');
  t('Blog');
  t('Events');
  t('Resources');

  return $menu_links;
}
