<?php

/**
 * @file
 * theme_cbf2019_features.features.inc
 */

/**
 * Implements hook_views_api().
 */
function theme_cbf2019_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function theme_cbf2019_features_image_default_styles() {
  $styles = array();

  // Exported image style: title.
  $styles['title'] = array(
    'label' => 'title',
    'effects' => array(
      9 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1600,
          'height' => 900,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
