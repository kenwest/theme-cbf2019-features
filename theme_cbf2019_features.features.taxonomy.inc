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
    'office' => array(
      'name' => 'Office',
      'machine_name' => 'office',
      'description' => 'The offices of the City Bible Forum',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
