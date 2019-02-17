<?php
/**
 * @file
 * theme_cbf2019_features.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function theme_cbf2019_features_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'domain_entityform'.
  $field_bases['domain_entityform'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'entityform',
    ),
    'field_name' => 'domain_entityform',
    'indexes' => array(
      'domain_id' => array(
        0 => 'domain_id',
      ),
    ),
    'locked' => 0,
    'module' => 'domain_entity',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'domain_entity',
  );

  // Exported field_base: 'field_ministry_team'.
  $field_bases['field_ministry_team'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ministry_team',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'civicrm_contact_ref',
    'settings' => array(
      'allowed_values' => array(
        'Individual' => array(
          'Individual' => 0,
        ),
        'Household' => array(
          'Archived_team' => 0,
          'Household' => 0,
          'Team' => 'Team',
        ),
        'Organization' => array(
          'Organization' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'civicrm_contact_ref_contact',
  );

  return $field_bases;
}
