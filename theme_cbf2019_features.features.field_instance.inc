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

  // Exported field_instance: 'entityform-office-domain_entityform'.
  $field_instances['entityform-office-domain_entityform'] = array(
    'bundle' => 'office',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
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
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'entityform-office-field_office'.
  $field_instances['entityform-office-field_office'] = array(
    'bundle' => 'office',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_office',
    'label' => 'Office',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'entityform-office-field_organisation_contact'.
  $field_instances['entityform-office-field_organisation_contact'] = array(
    'bundle' => 'office',
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
    'field_name' => 'field_organisation_contact',
    'label' => 'Office contact',
    'required' => 0,
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
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'entityform-office-field_title'.
  $field_instances['entityform-office-field_title'] = array(
    'bundle' => 'office',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'entityform-office-field_weight'.
  $field_instances['entityform-office-field_weight'] = array(
    'bundle' => 'office',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Sort order for offices',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_weight',
    'label' => 'Weight',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 39,
    ),
  );

  // Exported field_instance: 'entityform-office-taxonomy_vocabulary_1'.
  $field_instances['entityform-office-taxonomy_vocabulary_1'] = array(
    'bundle' => 'office',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'taxonomy_vocabulary_1',
    'label' => 'Ministry Centre',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'entityform-staff-domain_entityform'.
  $field_instances['entityform-staff-domain_entityform'] = array(
    'bundle' => 'staff',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'entityform-staff-field_image'.
  $field_instances['entityform-staff-field_image'] = array(
    'bundle' => 'staff',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'images/content/[current-date:custom:Y]',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '800x800',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'imce' => 'imce',
            'reference' => 0,
            'remote' => 0,
            'upload' => 'upload',
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 1,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
            'search_all_fields' => 0,
          ),
        ),
        'preview_image_style' => 'person_360x438',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'entityform-staff-field_staff_contact'.
  $field_instances['entityform-staff-field_staff_contact'] = array(
    'bundle' => 'staff',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'civicrm_contact_ref',
        'settings' => array(),
        'type' => 'civicrm_contact_ref_link',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_staff_contact',
    'label' => 'Staff contact',
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'entityform-staff-field_staff_groups'.
  $field_instances['entityform-staff-field_staff_groups'] = array(
    'bundle' => 'staff',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_staff_groups',
    'label' => 'Staff groups',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'entityform-staff-field_subtitle'.
  $field_instances['entityform-staff-field_subtitle'] = array(
    'bundle' => 'staff',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_subtitle',
    'label' => 'Position',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'entityform-staff-field_summary'.
  $field_instances['entityform-staff-field_summary'] = array(
    'bundle' => 'staff',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_summary',
    'label' => 'Summary',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'entityform-staff-field_title'.
  $field_instances['entityform-staff-field_title'] = array(
    'bundle' => 'staff',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_title',
    'label' => 'Name',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Domain');
  t('Image');
  t('Ministry Centre');
  t('Ministry team');
  t('Name');
  t('Office');
  t('Office contact');
  t('Position');
  t('Sort order for offices');
  t('Staff contact');
  t('Staff groups');
  t('Summary');
  t('Title');
  t('Weight');

  return $field_instances;
}
