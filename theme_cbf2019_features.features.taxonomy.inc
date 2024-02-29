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
    'map_marker' => array(
      'name' => 'Map marker',
      'machine_name' => 'map_marker',
      'description' => 'Choose which marker to use on Gmaps',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'region' => array(
      'name' => 'Region',
      'machine_name' => 'region',
      'description' => 'A geographic area in a Ministry Centre',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'regularity' => array(
      'name' => 'Regularity',
      'machine_name' => 'regularity',
      'description' => 'How often events happen or groups meet',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'third_space_category' => array(
      'name' => 'Third Space category',
      'machine_name' => 'third_space_category',
      'description' => 'Signals where content appears on Third Space',
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
