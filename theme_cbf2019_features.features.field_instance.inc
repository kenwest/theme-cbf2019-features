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

  // Exported field_instance: 'entityform-collection-domain_entityform'.
  $field_instances['entityform-collection-domain_entityform'] = array(
    'bundle' => 'collection',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
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
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'entityform-collection-field_highlight_video'.
  $field_instances['entityform-collection-field_highlight_video'] = array(
    'bundle' => 'collection',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'video_filter_field',
        'settings' => array(),
        'type' => 'video_filter_field_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_highlight_video',
    'label' => 'Promotional videos',
    'required' => FALSE,
    'settings' => array(
      'autoplay' => 0,
      'max_height' => 400,
      'max_width' => 400,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'video_filter_field',
      'settings' => array(),
      'type' => 'video_filter',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'entityform-collection-field_related_blogs'.
  $field_instances['entityform-collection-field_related_blogs'] = array(
    'bundle' => 'collection',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add links to related blogs. Since items can have the same name, be careful to check the node number to see you have the right one! Put them in the order you want them to appear.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_related_blogs',
    'label' => 'Related blogs',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'hide_ids' => FALSE,
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'entityform-collection-field_related_episodes'.
  $field_instances['entityform-collection-field_related_episodes'] = array(
    'bundle' => 'collection',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add links to related episodes. Since items can have the same name, be careful to check the node number to see you have the right one! Put them in the order you want them to appear.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_related_episodes',
    'label' => 'Related episodes',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'hide_ids' => FALSE,
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'entityform-collection-field_short_form'.
  $field_instances['entityform-collection-field_short_form'] = array(
    'bundle' => 'collection',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_short_form',
    'label' => 'Description',
    'required' => 1,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'entityform-collection-field_subtitle'.
  $field_instances['entityform-collection-field_subtitle'] = array(
    'bundle' => 'collection',
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
    'label' => 'Subtitle',
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

  // Exported field_instance: 'entityform-collection-field_title'.
  $field_instances['entityform-collection-field_title'] = array(
    'bundle' => 'collection',
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
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'entityform-collection-field_title_image'.
  $field_instances['entityform-collection-field_title_image'] = array(
    'bundle' => 'collection',
    'deleted' => 0,
    'description' => 'Image displayed in the banner under the title',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_title_image',
    'label' => 'Title image',
    'required' => 1,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'images/content/[current-date:custom:Y]',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '1600x900',
      'min_resolution' => '1600x900',
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
        'preview_image_style' => 'title',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'entityform-collection-taxonomy_vocabulary_3'.
  $field_instances['entityform-collection-taxonomy_vocabulary_3'] = array(
    'bundle' => 'collection',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Who is the intended audience for the content in this collection? "Christians in the workplace" content is pitched at Christians. "General" content is for anybody whether Christian or not. "Unlisted" content is not promoted on the website - visitors need to be given a direct link to see it.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'taxonomy_vocabulary_3',
    'label' => 'Audience',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add links to related blogs. Since items can have the same name, be careful to check the node number to see you have the right one! Put them in the order you want them to appear.');
  t('Add links to related episodes. Since items can have the same name, be careful to check the node number to see you have the right one! Put them in the order you want them to appear.');
  t('Audience');
  t('Description');
  t('Domain');
  t('Image displayed in the banner under the title');
  t('Promotional videos');
  t('Related blogs');
  t('Related episodes');
  t('Subtitle');
  t('Title');
  t('Title image');
  t('Who is the intended audience for the content in this collection? "Christians in the workplace" content is pitched at Christians. "General" content is for anybody whether Christian or not. "Unlisted" content is not promoted on the website - visitors need to be given a direct link to see it.');

  return $field_instances;
}
