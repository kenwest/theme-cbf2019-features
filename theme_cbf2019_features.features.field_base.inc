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

  // Exported field_base: 'field_office'.
  $field_bases['field_office'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_office',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'office',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_organisation_contact'.
  $field_bases['field_organisation_contact'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_organisation_contact',
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
          'Team' => 0,
        ),
        'Organization' => array(
          'Organization' => 'Organization',
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'civicrm_contact_ref_contact',
  );

  // Exported field_base: 'field_staff_contact'.
  $field_bases['field_staff_contact'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_staff_contact',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'civicrm_contact_ref',
    'settings' => array(
      'allowed_values' => array(
        'Individual' => array(
          'Individual' => 'Individual',
        ),
        'Household' => array(
          'Archived_team' => 0,
          'Household' => 0,
          'Team' => 0,
        ),
        'Organization' => array(
          'Organization' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'civicrm_contact_ref_contact',
  );

  // Exported field_base: 'field_staff_groups'.
  $field_bases['field_staff_groups'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_staff_groups',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'staff_group',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_subtitle'.
  $field_bases['field_subtitle'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_subtitle',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 128,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_title'.
  $field_bases['field_title'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_title',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 128,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_weight'.
  $field_bases['field_weight'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_weight',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'taxonomy_vocabulary_1'.
  $field_bases['taxonomy_vocabulary_1'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'taxonomy_vocabulary_1',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'vocabulary_1',
          'parent' => 0,
        ),
      ),
      'required' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
