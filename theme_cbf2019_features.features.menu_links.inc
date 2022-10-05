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
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'management_content:admin/content',
  );
  // Exported menu link: menu-cbf-2019-main-menu_about-us:about-us.
  $menu_links['menu-cbf-2019-main-menu_about-us:about-us'] = array(
    'menu_name' => 'menu-cbf-2019-main-menu',
    'link_path' => 'about-us',
    'router_path' => 'about-us',
    'link_title' => 'About us',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-cbf-2019-main-menu_about-us:about-us',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-cbf-2019-main-menu_all:library.
  $menu_links['menu-cbf-2019-main-menu_all:library'] = array(
    'menu_name' => 'menu-cbf-2019-main-menu',
    'link_path' => 'library',
    'router_path' => 'library',
    'link_title' => 'All',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-cbf-2019-main-menu_all:library',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-cbf-2019-main-menu_explore-topics:library',
  );
  // Exported menu link: menu-cbf-2019-main-menu_art--culture:library/topic.
  $menu_links['menu-cbf-2019-main-menu_art--culture:library/topic'] = array(
    'menu_name' => 'menu-cbf-2019-main-menu',
    'link_path' => 'library/topic',
    'router_path' => 'library/topic',
    'link_title' => 'Art + culture',
    'options' => array(
      'query' => array(
        'term_node_tid_depth' => 760,
      ),
      'identifier' => 'menu-cbf-2019-main-menu_art--culture:library/topic',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'menu-cbf-2019-main-menu_explore-topics:library',
  );
  // Exported menu link: menu-cbf-2019-main-menu_blog:articles.
  $menu_links['menu-cbf-2019-main-menu_blog:articles'] = array(
    'menu_name' => 'menu-cbf-2019-main-menu',
    'link_path' => 'articles',
    'router_path' => 'articles',
    'link_title' => 'Blog',
    'options' => array(
      'identifier' => 'menu-cbf-2019-main-menu_blog:articles',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-cbf-2019-main-menu_christianity:library/topic.
  $menu_links['menu-cbf-2019-main-menu_christianity:library/topic'] = array(
    'menu_name' => 'menu-cbf-2019-main-menu',
    'link_path' => 'library/topic',
    'router_path' => 'library/topic',
    'link_title' => 'Christianity',
    'options' => array(
      'query' => array(
        'term_node_tid_depth' => 757,
      ),
      'identifier' => 'menu-cbf-2019-main-menu_christianity:library/topic',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-cbf-2019-main-menu_explore-topics:library',
  );
  // Exported menu link: menu-cbf-2019-main-menu_explore-topics:library.
  $menu_links['menu-cbf-2019-main-menu_explore-topics:library'] = array(
    'menu_name' => 'menu-cbf-2019-main-menu',
    'link_path' => 'library',
    'router_path' => 'library',
    'link_title' => 'Explore topics',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-cbf-2019-main-menu_explore-topics:library',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-cbf-2019-main-menu_jesus:library/topic.
  $menu_links['menu-cbf-2019-main-menu_jesus:library/topic'] = array(
    'menu_name' => 'menu-cbf-2019-main-menu',
    'link_path' => 'library/topic',
    'router_path' => 'library/topic',
    'link_title' => 'Jesus',
    'options' => array(
      'query' => array(
        'term_node_tid_depth' => 756,
      ),
      'identifier' => 'menu-cbf-2019-main-menu_jesus:library/topic',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-cbf-2019-main-menu_explore-topics:library',
  );
  // Exported menu link: menu-cbf-2019-main-menu_networks:networks.
  $menu_links['menu-cbf-2019-main-menu_networks:networks'] = array(
    'menu_name' => 'menu-cbf-2019-main-menu',
    'link_path' => 'networks',
    'router_path' => 'networks',
    'link_title' => 'Networks',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-cbf-2019-main-menu_networks:networks',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-cbf-2019-main-menu_read-the-bible:node/4940.
  $menu_links['menu-cbf-2019-main-menu_read-the-bible:node/4940'] = array(
    'menu_name' => 'menu-cbf-2019-main-menu',
    'link_path' => 'node/4940',
    'router_path' => 'node/%',
    'link_title' => 'Read the Bible',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-cbf-2019-main-menu_read-the-bible:node/4940',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-cbf-2019-main-menu_science--faith:library/topic.
  $menu_links['menu-cbf-2019-main-menu_science--faith:library/topic'] = array(
    'menu_name' => 'menu-cbf-2019-main-menu',
    'link_path' => 'library/topic',
    'router_path' => 'library/topic',
    'link_title' => 'Science + faith',
    'options' => array(
      'query' => array(
        'term_node_tid_depth' => 759,
      ),
      'identifier' => 'menu-cbf-2019-main-menu_science--faith:library/topic',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-cbf-2019-main-menu_explore-topics:library',
  );
  // Exported menu link: menu-cbf-2019-main-menu_society:library/topic.
  $menu_links['menu-cbf-2019-main-menu_society:library/topic'] = array(
    'menu_name' => 'menu-cbf-2019-main-menu',
    'link_path' => 'library/topic',
    'router_path' => 'library/topic',
    'link_title' => 'Society',
    'options' => array(
      'query' => array(
        'term_node_tid_depth' => 762,
      ),
      'identifier' => 'menu-cbf-2019-main-menu_society:library/topic',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'menu-cbf-2019-main-menu_explore-topics:library',
  );
  // Exported menu link: menu-cbf-2019-main-menu_whats-on:whats-on.
  $menu_links['menu-cbf-2019-main-menu_whats-on:whats-on'] = array(
    'menu_name' => 'menu-cbf-2019-main-menu',
    'link_path' => 'whats-on',
    'router_path' => 'whats-on',
    'link_title' => 'What\'s on',
    'options' => array(
      'identifier' => 'menu-cbf-2019-main-menu_whats-on:whats-on',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-cbf-2019-main-menu_work:library/topic.
  $menu_links['menu-cbf-2019-main-menu_work:library/topic'] = array(
    'menu_name' => 'menu-cbf-2019-main-menu',
    'link_path' => 'library/topic',
    'router_path' => 'library/topic',
    'link_title' => 'Work',
    'options' => array(
      'query' => array(
        'term_node_tid_depth' => 758,
      ),
      'identifier' => 'menu-cbf-2019-main-menu_work:library/topic',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-cbf-2019-main-menu_explore-topics:library',
  );
  // Exported menu link: menu-cbf-2019-main-menu_worldviews:library/topic.
  $menu_links['menu-cbf-2019-main-menu_worldviews:library/topic'] = array(
    'menu_name' => 'menu-cbf-2019-main-menu',
    'link_path' => 'library/topic',
    'router_path' => 'library/topic',
    'link_title' => 'Worldviews',
    'options' => array(
      'query' => array(
        'term_node_tid_depth' => 761,
      ),
      'identifier' => 'menu-cbf-2019-main-menu_worldviews:library/topic',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'menu-cbf-2019-main-menu_explore-topics:library',
  );
  // Exported menu link: menu-cbf-2019-plus-menu_about-us:about-us.
  $menu_links['menu-cbf-2019-plus-menu_about-us:about-us'] = array(
    'menu_name' => 'menu-cbf-2019-plus-menu',
    'link_path' => 'about-us',
    'router_path' => 'about-us',
    'link_title' => 'About us',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-cbf-2019-plus-menu_about-us:about-us',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-cbf-2019-plus-menu_all:library.
  $menu_links['menu-cbf-2019-plus-menu_all:library'] = array(
    'menu_name' => 'menu-cbf-2019-plus-menu',
    'link_path' => 'library',
    'router_path' => 'library',
    'link_title' => 'All',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-cbf-2019-plus-menu_all:library',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-cbf-2019-plus-menu_resources:library',
  );
  // Exported menu link: menu-cbf-2019-plus-menu_art--culture:library/topic.
  $menu_links['menu-cbf-2019-plus-menu_art--culture:library/topic'] = array(
    'menu_name' => 'menu-cbf-2019-plus-menu',
    'link_path' => 'library/topic',
    'router_path' => 'library/topic',
    'link_title' => 'Art + culture',
    'options' => array(
      'query' => array(
        'term_node_tid_depth' => 760,
      ),
      'identifier' => 'menu-cbf-2019-plus-menu_art--culture:library/topic',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'menu-cbf-2019-plus-menu_resources:library',
  );
  // Exported menu link: menu-cbf-2019-plus-menu_blog:articles.
  $menu_links['menu-cbf-2019-plus-menu_blog:articles'] = array(
    'menu_name' => 'menu-cbf-2019-plus-menu',
    'link_path' => 'articles',
    'router_path' => 'articles',
    'link_title' => 'Blog',
    'options' => array(
      'identifier' => 'menu-cbf-2019-plus-menu_blog:articles',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-cbf-2019-plus-menu_christianity:library/topic.
  $menu_links['menu-cbf-2019-plus-menu_christianity:library/topic'] = array(
    'menu_name' => 'menu-cbf-2019-plus-menu',
    'link_path' => 'library/topic',
    'router_path' => 'library/topic',
    'link_title' => 'Christianity',
    'options' => array(
      'query' => array(
        'term_node_tid_depth' => 757,
      ),
      'identifier' => 'menu-cbf-2019-plus-menu_christianity:library/topic',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-cbf-2019-plus-menu_resources:library',
  );
  // Exported menu link: menu-cbf-2019-plus-menu_courses:courses.
  $menu_links['menu-cbf-2019-plus-menu_courses:courses'] = array(
    'menu_name' => 'menu-cbf-2019-plus-menu',
    'link_path' => 'courses',
    'router_path' => 'courses',
    'link_title' => 'Courses',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-cbf-2019-plus-menu_courses:courses',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-cbf-2019-plus-menu_training:node/6194',
  );
  // Exported menu link: menu-cbf-2019-plus-menu_evq:node/5857.
  $menu_links['menu-cbf-2019-plus-menu_evq:node/5857'] = array(
    'menu_name' => 'menu-cbf-2019-plus-menu',
    'link_path' => 'node/5857',
    'router_path' => 'node/%',
    'link_title' => 'EvQ',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-cbf-2019-plus-menu_evq:node/5857',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-cbf-2019-plus-menu_training:node/6194',
  );
  // Exported menu link: menu-cbf-2019-plus-menu_jesus:library/topic.
  $menu_links['menu-cbf-2019-plus-menu_jesus:library/topic'] = array(
    'menu_name' => 'menu-cbf-2019-plus-menu',
    'link_path' => 'library/topic',
    'router_path' => 'library/topic',
    'link_title' => 'Jesus',
    'options' => array(
      'query' => array(
        'term_node_tid_depth' => 756,
      ),
      'identifier' => 'menu-cbf-2019-plus-menu_jesus:library/topic',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-cbf-2019-plus-menu_resources:library',
  );
  // Exported menu link: menu-cbf-2019-plus-menu_lifework-conference:node/5523.
  $menu_links['menu-cbf-2019-plus-menu_lifework-conference:node/5523'] = array(
    'menu_name' => 'menu-cbf-2019-plus-menu',
    'link_path' => 'node/5523',
    'router_path' => 'node/%',
    'link_title' => 'Life@Work conference',
    'options' => array(
      'identifier' => 'menu-cbf-2019-plus-menu_lifework-conference:node/5523',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-cbf-2019-plus-menu_training:node/6194',
  );
  // Exported menu link: menu-cbf-2019-plus-menu_networks:networks.
  $menu_links['menu-cbf-2019-plus-menu_networks:networks'] = array(
    'menu_name' => 'menu-cbf-2019-plus-menu',
    'link_path' => 'networks',
    'router_path' => 'networks',
    'link_title' => 'Networks',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-cbf-2019-plus-menu_networks:networks',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-cbf-2019-plus-menu_overview:node/6194.
  $menu_links['menu-cbf-2019-plus-menu_overview:node/6194'] = array(
    'menu_name' => 'menu-cbf-2019-plus-menu',
    'link_path' => 'node/6194',
    'router_path' => 'node/%',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-cbf-2019-plus-menu_overview:node/6194',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-cbf-2019-plus-menu_training:node/6194',
  );
  // Exported menu link: menu-cbf-2019-plus-menu_resources:library.
  $menu_links['menu-cbf-2019-plus-menu_resources:library'] = array(
    'menu_name' => 'menu-cbf-2019-plus-menu',
    'link_path' => 'library',
    'router_path' => 'library',
    'link_title' => 'Resources',
    'options' => array(
      'identifier' => 'menu-cbf-2019-plus-menu_resources:library',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-cbf-2019-plus-menu_science--faith:library/topic.
  $menu_links['menu-cbf-2019-plus-menu_science--faith:library/topic'] = array(
    'menu_name' => 'menu-cbf-2019-plus-menu',
    'link_path' => 'library/topic',
    'router_path' => 'library/topic',
    'link_title' => 'Science + faith',
    'options' => array(
      'query' => array(
        'term_node_tid_depth' => 759,
      ),
      'identifier' => 'menu-cbf-2019-plus-menu_science--faith:library/topic',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-cbf-2019-plus-menu_resources:library',
  );
  // Exported menu link: menu-cbf-2019-plus-menu_society:library/topic.
  $menu_links['menu-cbf-2019-plus-menu_society:library/topic'] = array(
    'menu_name' => 'menu-cbf-2019-plus-menu',
    'link_path' => 'library/topic',
    'router_path' => 'library/topic',
    'link_title' => 'Society',
    'options' => array(
      'query' => array(
        'term_node_tid_depth' => 762,
      ),
      'identifier' => 'menu-cbf-2019-plus-menu_society:library/topic',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'menu-cbf-2019-plus-menu_resources:library',
  );
  // Exported menu link: menu-cbf-2019-plus-menu_the-word-one-to-one:node/3044.
  $menu_links['menu-cbf-2019-plus-menu_the-word-one-to-one:node/3044'] = array(
    'menu_name' => 'menu-cbf-2019-plus-menu',
    'link_path' => 'node/3044',
    'router_path' => 'node/%',
    'link_title' => 'The Word One to One',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-cbf-2019-plus-menu_the-word-one-to-one:node/3044',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-cbf-2019-plus-menu_training:node/6194',
  );
  // Exported menu link: menu-cbf-2019-plus-menu_third-space:https://thirdspace.org.au.
  $menu_links['menu-cbf-2019-plus-menu_third-space:https://thirdspace.org.au'] = array(
    'menu_name' => 'menu-cbf-2019-plus-menu',
    'link_path' => 'https://thirdspace.org.au',
    'router_path' => '',
    'link_title' => 'Third Space',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-cbf-2019-plus-menu_third-space:https://thirdspace.org.au',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-cbf-2019-plus-menu_training:node/6194.
  $menu_links['menu-cbf-2019-plus-menu_training:node/6194'] = array(
    'menu_name' => 'menu-cbf-2019-plus-menu',
    'link_path' => 'node/6194',
    'router_path' => 'node/%',
    'link_title' => 'Training',
    'options' => array(
      'identifier' => 'menu-cbf-2019-plus-menu_training:node/6194',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-cbf-2019-plus-menu_whats-on:whats-on.
  $menu_links['menu-cbf-2019-plus-menu_whats-on:whats-on'] = array(
    'menu_name' => 'menu-cbf-2019-plus-menu',
    'link_path' => 'whats-on',
    'router_path' => 'whats-on',
    'link_title' => 'What\'s on',
    'options' => array(
      'identifier' => 'menu-cbf-2019-plus-menu_whats-on:whats-on',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-cbf-2019-plus-menu_work:library/topic.
  $menu_links['menu-cbf-2019-plus-menu_work:library/topic'] = array(
    'menu_name' => 'menu-cbf-2019-plus-menu',
    'link_path' => 'library/topic',
    'router_path' => 'library/topic',
    'link_title' => 'Work',
    'options' => array(
      'query' => array(
        'term_node_tid_depth' => 758,
      ),
      'identifier' => 'menu-cbf-2019-plus-menu_work:library/topic',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-cbf-2019-plus-menu_resources:library',
  );
  // Exported menu link: menu-cbf-2019-plus-menu_worldviews:library/topic.
  $menu_links['menu-cbf-2019-plus-menu_worldviews:library/topic'] = array(
    'menu_name' => 'menu-cbf-2019-plus-menu',
    'link_path' => 'library/topic',
    'router_path' => 'library/topic',
    'link_title' => 'Worldviews',
    'options' => array(
      'query' => array(
        'term_node_tid_depth' => 761,
      ),
      'identifier' => 'menu-cbf-2019-plus-menu_worldviews:library/topic',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'menu-cbf-2019-plus-menu_resources:library',
  );
  // Exported menu link: menu-third-space-main-menu_about-us:node/4018.
  $menu_links['menu-third-space-main-menu_about-us:node/4018'] = array(
    'menu_name' => 'menu-third-space-main-menu',
    'link_path' => 'node/4018',
    'router_path' => 'node/%',
    'link_title' => 'About us',
    'options' => array(
      'identifier' => 'menu-third-space-main-menu_about-us:node/4018',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-third-space-main-menu_activities:http://_anchor_.
  $menu_links['menu-third-space-main-menu_activities:http://_anchor_'] = array(
    'menu_name' => 'menu-third-space-main-menu',
    'link_path' => 'http://_anchor_',
    'router_path' => '',
    'link_title' => 'Activities',
    'options' => array(
      'identifier' => 'menu-third-space-main-menu_activities:http://_anchor_',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-third-space-main-menu_bible-and-prayer:third-space/category/1541.
  $menu_links['menu-third-space-main-menu_bible-and-prayer:third-space/category/1541'] = array(
    'menu_name' => 'menu-third-space-main-menu',
    'link_path' => 'third-space/category/1541',
    'router_path' => 'third-space/category/%',
    'link_title' => 'Bible and prayer',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-third-space-main-menu_bible-and-prayer:third-space/category/1541',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-third-space-main-menu_rooms:http://_anchor_',
  );
  // Exported menu link: menu-third-space-main-menu_bigger-questions:node/1263.
  $menu_links['menu-third-space-main-menu_bigger-questions:node/1263'] = array(
    'menu_name' => 'menu-third-space-main-menu',
    'link_path' => 'node/1263',
    'router_path' => 'node/%',
    'link_title' => 'Bigger Questions',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-third-space-main-menu_bigger-questions:node/1263',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-third-space-main-menu_activities:http://_anchor_',
  );
  // Exported menu link: menu-third-space-main-menu_entertainment:third-space/category/1540.
  $menu_links['menu-third-space-main-menu_entertainment:third-space/category/1540'] = array(
    'menu_name' => 'menu-third-space-main-menu',
    'link_path' => 'third-space/category/1540',
    'router_path' => 'third-space/category/%',
    'link_title' => 'Entertainment',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-third-space-main-menu_entertainment:third-space/category/1540',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'menu-third-space-main-menu_rooms:http://_anchor_',
  );
  // Exported menu link: menu-third-space-main-menu_environment-and-science:third-space/category/1544.
  $menu_links['menu-third-space-main-menu_environment-and-science:third-space/category/1544'] = array(
    'menu_name' => 'menu-third-space-main-menu',
    'link_path' => 'third-space/category/1544',
    'router_path' => 'third-space/category/%',
    'link_title' => 'Environment and science',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-third-space-main-menu_environment-and-science:third-space/category/1544',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'menu-third-space-main-menu_rooms:http://_anchor_',
  );
  // Exported menu link: menu-third-space-main-menu_food:third-space/category/1565.
  $menu_links['menu-third-space-main-menu_food:third-space/category/1565'] = array(
    'menu_name' => 'menu-third-space-main-menu',
    'link_path' => 'third-space/category/1565',
    'router_path' => 'third-space/category/%',
    'link_title' => 'Food',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-third-space-main-menu_food:third-space/category/1565',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-third-space-main-menu_rooms:http://_anchor_',
  );
  // Exported menu link: menu-third-space-main-menu_health-and-wellbeing:third-space/category/1548.
  $menu_links['menu-third-space-main-menu_health-and-wellbeing:third-space/category/1548'] = array(
    'menu_name' => 'menu-third-space-main-menu',
    'link_path' => 'third-space/category/1548',
    'router_path' => 'third-space/category/%',
    'link_title' => 'Health and wellbeing',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-third-space-main-menu_health-and-wellbeing:third-space/category/1548',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-third-space-main-menu_rooms:http://_anchor_',
  );
  // Exported menu link: menu-third-space-main-menu_learning:third-space/category/1543.
  $menu_links['menu-third-space-main-menu_learning:third-space/category/1543'] = array(
    'menu_name' => 'menu-third-space-main-menu',
    'link_path' => 'third-space/category/1543',
    'router_path' => 'third-space/category/%',
    'link_title' => 'Learning',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-third-space-main-menu_learning:third-space/category/1543',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'parent_identifier' => 'menu-third-space-main-menu_rooms:http://_anchor_',
  );
  // Exported menu link: menu-third-space-main-menu_listen:third-space/listen.
  $menu_links['menu-third-space-main-menu_listen:third-space/listen'] = array(
    'menu_name' => 'menu-third-space-main-menu',
    'link_path' => 'third-space/listen',
    'router_path' => 'third-space/listen',
    'link_title' => 'Listen',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-third-space-main-menu_listen:third-space/listen',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-third-space-main-menu_panic-room---covid-19:third-space/category/1636.
  $menu_links['menu-third-space-main-menu_panic-room---covid-19:third-space/category/1636'] = array(
    'menu_name' => 'menu-third-space-main-menu',
    'link_path' => 'third-space/category/1636',
    'router_path' => 'third-space/category/%',
    'link_title' => 'Panic room - COVID-19',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-third-space-main-menu_panic-room---covid-19:third-space/category/1636',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-third-space-main-menu_rooms:http://_anchor_',
  );
  // Exported menu link: menu-third-space-main-menu_politics-and-society:third-space/category/1546.
  $menu_links['menu-third-space-main-menu_politics-and-society:third-space/category/1546'] = array(
    'menu_name' => 'menu-third-space-main-menu',
    'link_path' => 'third-space/category/1546',
    'router_path' => 'third-space/category/%',
    'link_title' => 'Politics and society',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-third-space-main-menu_politics-and-society:third-space/category/1546',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'menu-third-space-main-menu_rooms:http://_anchor_',
  );
  // Exported menu link: menu-third-space-main-menu_read:third-space/read.
  $menu_links['menu-third-space-main-menu_read:third-space/read'] = array(
    'menu_name' => 'menu-third-space-main-menu',
    'link_path' => 'third-space/read',
    'router_path' => 'third-space/read',
    'link_title' => 'Read',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-third-space-main-menu_read:third-space/read',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-third-space-main-menu_reel-dialogue:node/2151.
  $menu_links['menu-third-space-main-menu_reel-dialogue:node/2151'] = array(
    'menu_name' => 'menu-third-space-main-menu',
    'link_path' => 'node/2151',
    'router_path' => 'node/%',
    'link_title' => 'Reel Dialogue',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-third-space-main-menu_reel-dialogue:node/2151',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-third-space-main-menu_activities:http://_anchor_',
  );
  // Exported menu link: menu-third-space-main-menu_relationships:third-space/category/1547.
  $menu_links['menu-third-space-main-menu_relationships:third-space/category/1547'] = array(
    'menu_name' => 'menu-third-space-main-menu',
    'link_path' => 'third-space/category/1547',
    'router_path' => 'third-space/category/%',
    'link_title' => 'Relationships',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-third-space-main-menu_relationships:third-space/category/1547',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'parent_identifier' => 'menu-third-space-main-menu_rooms:http://_anchor_',
  );
  // Exported menu link: menu-third-space-main-menu_rooms:http://_anchor_.
  $menu_links['menu-third-space-main-menu_rooms:http://_anchor_'] = array(
    'menu_name' => 'menu-third-space-main-menu',
    'link_path' => 'http://_anchor_',
    'router_path' => '',
    'link_title' => 'Rooms',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-third-space-main-menu_rooms:http://_anchor_',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-third-space-main-menu_sport:third-space/category/1545.
  $menu_links['menu-third-space-main-menu_sport:third-space/category/1545'] = array(
    'menu_name' => 'menu-third-space-main-menu',
    'link_path' => 'third-space/category/1545',
    'router_path' => 'third-space/category/%',
    'link_title' => 'Sport',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-third-space-main-menu_sport:third-space/category/1545',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-third-space-main-menu_rooms:http://_anchor_',
  );
  // Exported menu link: menu-third-space-main-menu_watch:third-space/watch.
  $menu_links['menu-third-space-main-menu_watch:third-space/watch'] = array(
    'menu_name' => 'menu-third-space-main-menu',
    'link_path' => 'third-space/watch',
    'router_path' => 'third-space/watch',
    'link_title' => 'Watch',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-third-space-main-menu_watch:third-space/watch',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About us');
  t('Activities');
  t('All');
  t('Art + culture');
  t('Bible and prayer');
  t('Bigger Questions');
  t('Blog');
  t('Christianity');
  t('Collections');
  t('Courses');
  t('Entertainment');
  t('Environment and science');
  t('EvQ');
  t('Explore topics');
  t('Food');
  t('Health and wellbeing');
  t('Jesus');
  t('Learning');
  t('Life@Work conference');
  t('Listen');
  t('Networks');
  t('Overview');
  t('Panic room - COVID-19');
  t('Politics and society');
  t('Read');
  t('Read the Bible');
  t('Reel Dialogue');
  t('Relationships');
  t('Resources');
  t('Rooms');
  t('Science + faith');
  t('Society');
  t('Sport');
  t('The Word One to One');
  t('Third Space');
  t('Training');
  t('Watch');
  t('What\'s on');
  t('Work');
  t('Worldviews');

  return $menu_links;
}
