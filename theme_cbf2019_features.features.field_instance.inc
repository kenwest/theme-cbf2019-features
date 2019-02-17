<?php
/**
 * @file
 * theme_cbf2019_features.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function theme_cbf2019_features_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'entityform-ministry_team-domain_entityform'.
  $field_instances['entityform-ministry_team-domain_entityform'] = array(
    'bundle' => 'ministry_team',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'domain_entityform',
    'label' => 'Domain',
    'required' => TRUE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'domain_entity',
      'settings' => array(),
      'type' => 'domain_entity_user_multiple_choice',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'entityform-ministry_team-field_ministry_team'.
  $field_instances['entityform-ministry_team-field_ministry_team'] = array(
    'bundle' => 'ministry_team',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'civicrm_contact_ref',
        'settings' => array(),
        'type' => 'civicrm_contact_ref_link',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_ministry_team',
    'label' => 'Ministry team',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'civicrm_contact_ref',
      'settings' => array(
        'autocomplete_path' => 'civicrm_contact_ref/autocomplete',
        'size' => 60,
      ),
      'type' => 'civicrm_contact_ref_autocomplete',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Domain');
  t('Ministry team');

  return $field_instances;
}
