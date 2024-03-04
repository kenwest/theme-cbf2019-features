<?php

/**
 * @file
 * theme_cbf2019_features.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function theme_cbf2019_features_taxonomy_default_vocabularies() {
  return array(
    'regularity' => array(
      'name' => 'Regularity',
      'machine_name' => 'regularity',
      'description' => 'How often events happen or groups meet',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'time_of_day' => array(
      'name' => 'Time of day',
      'machine_name' => 'time_of_day',
      'description' => 'When do activities typically happen',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
