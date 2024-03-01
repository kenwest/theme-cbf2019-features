<?php

/**
 * @file
 * theme_cbf2019_features.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function theme_cbf2019_features_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'cbf2019_activity_brite_event_slider';
  $view->description = 'Embedded in other views. ';
  $view->tag = 'slider, autoplay, add-christian-content';
  $view->base_table = 'node';
  $view->human_name = 'cbf2019 activity brite_event slider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'bg-gray-view-content';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = '0';
  $handler->display->display_options['style_options']['visible'] = '';
  $handler->display->display_options['style_options']['auto'] = '6';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<span id="cbf2019-activity-event-slider-view-header">Upcoming events</span>';
  $handler->display->display_options['header']['area']['format'] = 'raw_html';
  /* Field: Field: Highlight */
  $handler->display->display_options['fields']['field_highlight']['id'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['table'] = 'field_data_field_highlight';
  $handler->display->display_options['fields']['field_highlight']['field'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['label'] = '';
  $handler->display->display_options['fields']['field_highlight']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_highlight']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlight']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_highlight']['settings'] = array(
    'image_style' => 'portfolio_653x368',
    'image_link' => '',
  );
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['empty'] = '[field_highlight]';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'portfolio_653x368',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field: Ministry Centre */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Date text */
  $handler->display->display_options['fields']['field_date_text']['id'] = 'field_date_text';
  $handler->display->display_options['fields']['field_date_text']['table'] = 'field_data_field_date_text';
  $handler->display->display_options['fields']['field_date_text']['field'] = 'field_date_text';
  $handler->display->display_options['fields']['field_date_text']['label'] = '';
  $handler->display->display_options['fields']['field_date_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_text']['element_label_colon'] = FALSE;
  /* Field: Location: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['label'] = '';
  $handler->display->display_options['fields']['city']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['city']['alter']['text'] = '[field_date_text] | [city]';
  $handler->display->display_options['fields']['city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['city']['empty'] = '[field_date_text]';
  /* Field: Field: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['alter']['max_length'] = '128';
  $handler->display->display_options['fields']['field_subtitle']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['type'] = 'text_plain';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'More info';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['link_class'] = 'btn btn-mod btn-border btn-medium btn-round';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Sort criterion: Field: Sort Order (field_sort_order) */
  $handler->display->display_options['sorts']['field_sort_order_value']['id'] = 'field_sort_order_value';
  $handler->display->display_options['sorts']['field_sort_order_value']['table'] = 'field_data_field_sort_order';
  $handler->display->display_options['sorts']['field_sort_order_value']['field'] = 'field_sort_order_value';
  /* Contextual filter: Field: Activity (field_in_activity) */
  $handler->display->display_options['arguments']['field_in_activity_target_id']['id'] = 'field_in_activity_target_id';
  $handler->display->display_options['arguments']['field_in_activity_target_id']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['arguments']['field_in_activity_target_id']['field'] = 'field_in_activity_target_id';
  $handler->display->display_options['arguments']['field_in_activity_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_in_activity_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_in_activity_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_in_activity_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_in_activity_target_id']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Ministry Centre filter applied during post-execute */
  $handler->display->display_options['arguments']['null']['id'] = 'null';
  $handler->display->display_options['arguments']['null']['table'] = 'views';
  $handler->display->display_options['arguments']['null']['field'] = 'null';
  $handler->display->display_options['arguments']['null']['ui_name'] = 'Ministry Centre filter applied during post-execute';
  $handler->display->display_options['arguments']['null']['default_action'] = 'default';
  $handler->display->display_options['arguments']['null']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['null']['default_argument_options']['code'] = 'return cbf_convert_banner_to_city_tid();';
  $handler->display->display_options['arguments']['null']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['null']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['null']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['null']['validate']['type'] = 'numeric';
  $handler->display->display_options['arguments']['null']['validate']['fail'] = 'ignore';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'brite_event' => 'brite_event',
  );
  /* Filter criterion: Field: Next action (field_next_action) */
  $handler->display->display_options['filters']['field_next_action_value']['id'] = 'field_next_action_value';
  $handler->display->display_options['filters']['field_next_action_value']['table'] = 'field_data_field_next_action';
  $handler->display->display_options['filters']['field_next_action_value']['field'] = 'field_next_action_value';
  $handler->display->display_options['filters']['field_next_action_value']['operator'] = '!=';
  $handler->display->display_options['filters']['field_next_action_value']['value'] = '0';
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
    48 => '48',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';

  /* Display: Block (embedded) */
  $handler = $view->new_display('block', 'Block (embedded)', 'block');
  $handler->display->display_options['display_comment'] = 'When on the \'christian\' site, the add-christian-content tag tells cbf_views_query_alter() to change Audience = \'general\' to Audience in [\'general\', \'christian\'].';
  $translatables['cbf2019_activity_brite_event_slider'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<span id="cbf2019-activity-event-slider-view-header">Upcoming events</span>'),
    t('[field_highlight]'),
    t('[field_date_text] | [city]'),
    t('[field_date_text]'),
    t('More info'),
    t('All'),
    t('Block (embedded)'),
  );
  $export['cbf2019_activity_brite_event_slider'] = $view;

  $view = new view();
  $view->name = 'cbf2019_activity_component_list';
  $view->description = 'Embedded in other views. List the Activity components in order with links to their Anchors';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'cbf2019 activity component list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => '2',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'field_highlight_location_tid' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => 'All',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Components (field_activity_components) */
  $handler->display->display_options['relationships']['field_activity_components_value']['id'] = 'field_activity_components_value';
  $handler->display->display_options['relationships']['field_activity_components_value']['table'] = 'field_data_field_activity_components';
  $handler->display->display_options['relationships']['field_activity_components_value']['field'] = 'field_activity_components_value';
  $handler->display->display_options['relationships']['field_activity_components_value']['label'] = 'Component';
  $handler->display->display_options['relationships']['field_activity_components_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_activity_components_value']['delta'] = '-1';
  /* Relationship: Paragraphs item: Type (field_activity_component_type) */
  $handler->display->display_options['relationships']['field_activity_component_type_tid']['id'] = 'field_activity_component_type_tid';
  $handler->display->display_options['relationships']['field_activity_component_type_tid']['table'] = 'field_data_field_activity_component_type';
  $handler->display->display_options['relationships']['field_activity_component_type_tid']['field'] = 'field_activity_component_type_tid';
  $handler->display->display_options['relationships']['field_activity_component_type_tid']['relationship'] = 'field_activity_components_value';
  $handler->display->display_options['relationships']['field_activity_component_type_tid']['label'] = 'Type';
  /* Field: Field: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['relationship'] = 'field_activity_components_value';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  /* Field: Type anchor */
  $handler->display->display_options['fields']['field_subtitle_1']['id'] = 'field_subtitle_1';
  $handler->display->display_options['fields']['field_subtitle_1']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle_1']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle_1']['relationship'] = 'field_activity_component_type_tid';
  $handler->display->display_options['fields']['field_subtitle_1']['ui_name'] = 'Type anchor';
  $handler->display->display_options['fields']['field_subtitle_1']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subtitle_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_subtitle_1']['alter']['text'] = '<a href="#[field_subtitle_1]">[field_title]</a>';
  $handler->display->display_options['fields']['field_subtitle_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle_1']['empty'] = '[field_title]';
  $handler->display->display_options['fields']['field_subtitle_1']['hide_empty'] = TRUE;
  /* Field: Component anchor */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['relationship'] = 'field_activity_components_value';
  $handler->display->display_options['fields']['field_subtitle']['ui_name'] = 'Component anchor';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_subtitle']['alter']['text'] = '<a href="#[field_subtitle]">[field_title]</a>';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['empty'] = '[field_subtitle_1]';
  $handler->display->display_options['fields']['field_subtitle']['hide_empty'] = TRUE;
  /* Sort criterion: Content: Components (field_activity_components:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_activity_components';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'activity' => 'activity',
  );
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'activity' => 'activity',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Title (field_title) */
  $handler->display->display_options['filters']['field_title_value']['id'] = 'field_title_value';
  $handler->display->display_options['filters']['field_title_value']['table'] = 'field_data_field_title';
  $handler->display->display_options['filters']['field_title_value']['field'] = 'field_title_value';
  $handler->display->display_options['filters']['field_title_value']['relationship'] = 'field_activity_components_value';
  $handler->display->display_options['filters']['field_title_value']['operator'] = 'longerthan';
  $handler->display->display_options['filters']['field_title_value']['value'] = '0';

  /* Display: Block (embedded) */
  $handler = $view->new_display('block', 'Block (embedded)', 'block');
  $translatables['cbf2019_activity_component_list'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Select any filter and click on Apply to see results'),
    t('Advanced options'),
    t('Component'),
    t('Type'),
    t('<a href="#[field_subtitle_1]">[field_title]</a>'),
    t('[field_title]'),
    t('<a href="#[field_subtitle]">[field_title]</a>'),
    t('[field_subtitle_1]'),
    t('All'),
    t('Block (embedded)'),
  );
  $export['cbf2019_activity_component_list'] = $view;

  $view = new view();
  $view->name = 'cbf2019_activity_components';
  $view->description = 'Show the Activity components in the order they are listed. The theme template uses views_embed_view() to display the rows.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'cbf2019 activity components';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => '2',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'field_highlight_location_tid' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => 'All',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Components (field_activity_components) */
  $handler->display->display_options['relationships']['field_activity_components_value']['id'] = 'field_activity_components_value';
  $handler->display->display_options['relationships']['field_activity_components_value']['table'] = 'field_data_field_activity_components';
  $handler->display->display_options['relationships']['field_activity_components_value']['field'] = 'field_activity_components_value';
  $handler->display->display_options['relationships']['field_activity_components_value']['label'] = 'Component';
  $handler->display->display_options['relationships']['field_activity_components_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_activity_components_value']['delta'] = '-1';
  /* Relationship: Paragraphs item: Type (field_activity_component_type) */
  $handler->display->display_options['relationships']['field_activity_component_type_tid']['id'] = 'field_activity_component_type_tid';
  $handler->display->display_options['relationships']['field_activity_component_type_tid']['table'] = 'field_data_field_activity_component_type';
  $handler->display->display_options['relationships']['field_activity_component_type_tid']['field'] = 'field_activity_component_type_tid';
  $handler->display->display_options['relationships']['field_activity_component_type_tid']['relationship'] = 'field_activity_components_value';
  $handler->display->display_options['relationships']['field_activity_component_type_tid']['label'] = 'Type';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Paragraphs item: Type */
  $handler->display->display_options['fields']['field_activity_component_type']['id'] = 'field_activity_component_type';
  $handler->display->display_options['fields']['field_activity_component_type']['table'] = 'field_data_field_activity_component_type';
  $handler->display->display_options['fields']['field_activity_component_type']['field'] = 'field_activity_component_type';
  $handler->display->display_options['fields']['field_activity_component_type']['relationship'] = 'field_activity_components_value';
  /* Field: Field: Note */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['relationship'] = 'field_activity_component_type_tid';
  /* Field: Field: Title */
  $handler->display->display_options['fields']['field_title_1']['id'] = 'field_title_1';
  $handler->display->display_options['fields']['field_title_1']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title_1']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title_1']['relationship'] = 'field_activity_component_type_tid';
  $handler->display->display_options['fields']['field_title_1']['label'] = 'Default Title';
  /* Field: Field: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['relationship'] = 'field_activity_components_value';
  /* Field: Field: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['relationship'] = 'field_activity_components_value';
  $handler->display->display_options['fields']['field_description']['label'] = 'Block content';
  /* Field: Paragraphs item: Fixed width container */
  $handler->display->display_options['fields']['field_fixed_width_container']['id'] = 'field_fixed_width_container';
  $handler->display->display_options['fields']['field_fixed_width_container']['table'] = 'field_data_field_fixed_width_container';
  $handler->display->display_options['fields']['field_fixed_width_container']['field'] = 'field_fixed_width_container';
  $handler->display->display_options['fields']['field_fixed_width_container']['relationship'] = 'field_activity_components_value';
  $handler->display->display_options['fields']['field_fixed_width_container']['label'] = '';
  $handler->display->display_options['fields']['field_fixed_width_container']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Components (field_activity_components:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_activity_components';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'activity' => 'activity',
  );
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'activity' => 'activity',
  );
  /* Filter criterion: Field: Highlight location (field_highlight_location) */
  $handler->display->display_options['filters']['field_highlight_location_tid']['id'] = 'field_highlight_location_tid';
  $handler->display->display_options['filters']['field_highlight_location_tid']['table'] = 'field_data_field_highlight_location';
  $handler->display->display_options['filters']['field_highlight_location_tid']['field'] = 'field_highlight_location_tid';
  $handler->display->display_options['filters']['field_highlight_location_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_highlight_location_tid']['expose']['operator_id'] = 'field_highlight_location_tid_op';
  $handler->display->display_options['filters']['field_highlight_location_tid']['expose']['operator'] = 'field_highlight_location_tid_op';
  $handler->display->display_options['filters']['field_highlight_location_tid']['expose']['identifier'] = 'field_highlight_location_tid';
  $handler->display->display_options['filters']['field_highlight_location_tid']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_highlight_location_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_highlight_location_tid']['vocabulary'] = 'banner';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['cbf2019_activity_components'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Select any filter and click on Apply to see results'),
    t('Advanced options'),
    t('All'),
    t('Component'),
    t('Type'),
    t('Nid'),
    t('Note'),
    t('Default Title'),
    t('Title'),
    t('Block content'),
    t('Block'),
  );
  $export['cbf2019_activity_components'] = $view;

  $view = new view();
  $view->name = 'cbf2019_activity_logo';
  $view->description = 'The logo and subtitle of the Activity';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'cbf2019 activity logo';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_logo']['alter']['text'] = '###[field_logo]###';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['type'] = 'file_url_plain';
  /* Field: Field: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_subtitle']['alter']['text'] = '<blockquote>[field_subtitle]</blockquote>';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Defaults */
  $handler = $view->new_display('block', 'Defaults', 'block');
  $handler->display->display_options['display_description'] = 'This display contains the defaults - don\'t use';

  /* Display: For Activity */
  $handler = $view->new_display('block', 'For Activity', 'block_1');
  $handler->display->display_options['display_description'] = 'Logo and subtitle for an activity';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_logo']['alter']['text'] = '###[field_logo]###';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['type'] = 'file_url_plain';
  /* Field: Field: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_subtitle']['alter']['text'] = '<blockquote>[field_subtitle]</blockquote>';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  /* Field: Activity component list */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['ui_name'] = 'Activity component list';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['view']['view'] = 'cbf2019_activity_component_list';
  $handler->display->display_options['fields']['view']['display'] = 'block';
  $handler->display->display_options['fields']['view']['arguments'] = '!1';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: For content of Activity */
  $handler = $view->new_display('block', 'For content of Activity', 'block_2');
  $handler->display->display_options['display_description'] = 'Logo for content\'s activity, else Title and link';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_in_activity_node']['id'] = 'reverse_field_in_activity_node';
  $handler->display->display_options['relationships']['reverse_field_in_activity_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_in_activity_node']['field'] = 'reverse_field_in_activity_node';
  $handler->display->display_options['relationships']['reverse_field_in_activity_node']['label'] = 'Content in Activity';
  $handler->display->display_options['relationships']['reverse_field_in_activity_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_logo']['alter']['text'] = '###[field_logo]###';
  $handler->display->display_options['fields']['field_logo']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_logo']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['element_wrapper_class'] = 'small-logo';
  $handler->display->display_options['fields']['field_logo']['empty'] = '[title]';
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['type'] = 'file_url_plain';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_in_activity_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $translatables['cbf2019_activity_logo'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('###[field_logo]###'),
    t('<blockquote>[field_subtitle]</blockquote>'),
    t('Defaults'),
    t('This display contains the defaults - don\'t use'),
    t('For Activity'),
    t('Logo and subtitle for an activity'),
    t('All'),
    t('For content of Activity'),
    t('Logo for content\'s activity, else Title and link'),
    t('Content in Activity'),
    t('[title]'),
  );
  $export['cbf2019_activity_logo'] = $view;

  $view = new view();
  $view->name = 'cbf2019_article_ratings_admin';
  $view->description = 'An admin page for reviewing article ratings';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'cbf2019 article ratings admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'cbf2019 article ratings admin';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'log' => 0,
      ),
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 1,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::node_save_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Article Rating */
  $handler->display->display_options['fields']['field_article_rating']['id'] = 'field_article_rating';
  $handler->display->display_options['fields']['field_article_rating']['table'] = 'field_data_field_article_rating';
  $handler->display->display_options['fields']['field_article_rating']['field'] = 'field_article_rating';
  $handler->display->display_options['fields']['field_article_rating']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_rating']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_episode_date']['id'] = 'field_episode_date';
  $handler->display->display_options['fields']['field_episode_date']['table'] = 'field_data_field_episode_date';
  $handler->display->display_options['fields']['field_episode_date']['field'] = 'field_episode_date';
  $handler->display->display_options['fields']['field_episode_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_episode_date']['settings'] = array(
    'format_type' => 'short',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Article Topics */
  $handler->display->display_options['fields']['field_article_topics']['id'] = 'field_article_topics';
  $handler->display->display_options['fields']['field_article_topics']['table'] = 'field_data_field_article_topics';
  $handler->display->display_options['fields']['field_article_topics']['field'] = 'field_article_topics';
  $handler->display->display_options['fields']['field_article_topics']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_article_topics']['delta_offset'] = '0';
  /* Field: Field: Speaker(s) */
  $handler->display->display_options['fields']['field_speakers']['id'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['table'] = 'field_data_field_speakers';
  $handler->display->display_options['fields']['field_speakers']['field'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speakers']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_speakers']['delta_offset'] = '0';
  /* Field: Content: Published status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Published';
  $handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Field: Audience */
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['id'] = 'taxonomy_vocabulary_3';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['field'] = 'taxonomy_vocabulary_3';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'Edit content';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'node/[nid]/edit';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Article Rating (field_article_rating) */
  $handler->display->display_options['sorts']['field_article_rating_value']['id'] = 'field_article_rating_value';
  $handler->display->display_options['sorts']['field_article_rating_value']['table'] = 'field_data_field_article_rating';
  $handler->display->display_options['sorts']['field_article_rating_value']['field'] = 'field_article_rating_value';
  $handler->display->display_options['sorts']['field_article_rating_value']['order'] = 'DESC';
  /* Sort criterion: Field: Date (field_episode_date) */
  $handler->display->display_options['sorts']['field_episode_date_value']['id'] = 'field_episode_date_value';
  $handler->display->display_options['sorts']['field_episode_date_value']['table'] = 'field_data_field_episode_date';
  $handler->display->display_options['sorts']['field_episode_date_value']['field'] = 'field_episode_date_value';
  $handler->display->display_options['sorts']['field_episode_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Article Topics (field_article_topics) */
  $handler->display->display_options['filters']['field_article_topics_tid']['id'] = 'field_article_topics_tid';
  $handler->display->display_options['filters']['field_article_topics_tid']['table'] = 'field_data_field_article_topics';
  $handler->display->display_options['filters']['field_article_topics_tid']['field'] = 'field_article_topics_tid';
  $handler->display->display_options['filters']['field_article_topics_tid']['value'] = '';
  $handler->display->display_options['filters']['field_article_topics_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_article_topics_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_article_topics_tid']['expose']['operator_id'] = 'field_article_topics_tid_op';
  $handler->display->display_options['filters']['field_article_topics_tid']['expose']['label'] = 'Article Topics';
  $handler->display->display_options['filters']['field_article_topics_tid']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_article_topics_tid']['expose']['operator'] = 'field_article_topics_tid_op';
  $handler->display->display_options['filters']['field_article_topics_tid']['expose']['identifier'] = 'field_article_topics_tid';
  $handler->display->display_options['filters']['field_article_topics_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_article_topics_tid']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_article_topics_tid']['vocabulary'] = 'article_topic';
  /* Filter criterion: Field: Speaker(s) (field_speakers) */
  $handler->display->display_options['filters']['field_speakers_tid']['id'] = 'field_speakers_tid';
  $handler->display->display_options['filters']['field_speakers_tid']['table'] = 'field_data_field_speakers';
  $handler->display->display_options['filters']['field_speakers_tid']['field'] = 'field_speakers_tid';
  $handler->display->display_options['filters']['field_speakers_tid']['value'] = '';
  $handler->display->display_options['filters']['field_speakers_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_speakers_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_speakers_tid']['expose']['operator_id'] = 'field_speakers_tid_op';
  $handler->display->display_options['filters']['field_speakers_tid']['expose']['label'] = 'Speaker(s)';
  $handler->display->display_options['filters']['field_speakers_tid']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_speakers_tid']['expose']['operator'] = 'field_speakers_tid_op';
  $handler->display->display_options['filters']['field_speakers_tid']['expose']['identifier'] = 'field_speakers_tid';
  $handler->display->display_options['filters']['field_speakers_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_speakers_tid']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_speakers_tid']['vocabulary'] = 'speaker';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Article Rating (field_article_rating) */
  $handler->display->display_options['filters']['field_article_rating_value']['id'] = 'field_article_rating_value';
  $handler->display->display_options['filters']['field_article_rating_value']['table'] = 'field_data_field_article_rating';
  $handler->display->display_options['filters']['field_article_rating_value']['field'] = 'field_article_rating_value';
  $handler->display->display_options['filters']['field_article_rating_value']['group'] = 1;
  $handler->display->display_options['filters']['field_article_rating_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_article_rating_value']['expose']['operator_id'] = 'field_article_rating_value_op';
  $handler->display->display_options['filters']['field_article_rating_value']['expose']['label'] = 'Article Rating';
  $handler->display->display_options['filters']['field_article_rating_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_article_rating_value']['expose']['operator'] = 'field_article_rating_value_op';
  $handler->display->display_options['filters']['field_article_rating_value']['expose']['identifier'] = 'field_article_rating_value';
  $handler->display->display_options['filters']['field_article_rating_value']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = '';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_3_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['label'] = 'Audience';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['operator'] = 'taxonomy_vocabulary_3_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['identifier'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search Terms';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/cbf/article-ratings';
  $translatables['cbf2019_article_ratings_admin'] = array(
    t('Master'),
    t('cbf2019 article ratings admin'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Content'),
    t('- Choose an operation -'),
    t('Title'),
    t('Article Rating'),
    t('Date'),
    t('Article Topics'),
    t('Speaker(s)'),
    t('Published'),
    t('Audience'),
    t('Edit content'),
    t('Search Terms'),
    t('Page'),
  );
  $export['cbf2019_article_ratings_admin'] = $view;

  $view = new view();
  $view->name = 'cbf2019_article_topics';
  $view->description = '';
  $view->tag = 'add-christian-content';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'cbf2019 article topics';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time_per_domain';
  $handler->display->display_options['cache']['results_lifespan'] = '1800';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '-1';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<span id="cbf2019-article-topics-view-header">Topics</span>';
  $handler->display->display_options['header']['area']['format'] = '2';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: URL */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['ui_name'] = 'URL';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title']['empty'] = '[name]';
  /* Field: Link to Article topic page */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Link to Article topic page';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[name]';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'resources/topic?topic=[field_title]';
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'article_topic' => 'article_topic',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['id'] = 'taxonomy_vocabulary_3_tid_1';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['value'] = array(
    0 => '48',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['group'] = 1;
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['vocabulary'] = 'vocabulary_3';

  /* Display: Defaults */
  $handler = $view->new_display('block', 'Defaults', 'block');
  $handler->display->display_options['display_comment'] = 'When on the \'christian\' site, the add-christian-content tag tells cbf_views_query_alter() to change Audience = \'general\' to Audience in [\'general\', \'christian\'].';

  /* Display: Article Topics links */
  $handler = $view->new_display('block', 'Article Topics links', 'block_6');
  $handler->display->display_options['display_comment'] = 'When on the \'christian\' site, cbf_views_query_alter() changes Audience = \'general\' to Audience in [\'general\', \'christian\']';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Article */
  $handler->display->display_options['relationships']['reverse_field_article_topics_node']['id'] = 'reverse_field_article_topics_node';
  $handler->display->display_options['relationships']['reverse_field_article_topics_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_article_topics_node']['field'] = 'reverse_field_article_topics_node';
  $handler->display->display_options['relationships']['reverse_field_article_topics_node']['ui_name'] = 'Article';
  $handler->display->display_options['relationships']['reverse_field_article_topics_node']['label'] = 'Article';
  $handler->display->display_options['relationships']['reverse_field_article_topics_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_article_topics_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'blog' => 'blog',
    'episode' => 'episode',
  );

  /* Display: Article topic hierarchy */
  $handler = $view->new_display('block', 'Article topic hierarchy', 'block_2');
  $handler->display->display_options['display_comment'] = 'When on the \'christian\' site, cbf_views_query_alter() changes Audience = \'general\' to Audience in [\'general\', \'christian\']';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-header-must-align-left';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'name_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Parent */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['ui_name'] = 'Parent';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Field: URL */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['ui_name'] = 'URL';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title']['empty'] = '[name]';
  /* Field: Parent URL */
  $handler->display->display_options['fields']['field_title_1']['id'] = 'field_title_1';
  $handler->display->display_options['fields']['field_title_1']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title_1']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['field_title_1']['ui_name'] = 'Parent URL';
  $handler->display->display_options['fields']['field_title_1']['label'] = '';
  $handler->display->display_options['fields']['field_title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title_1']['empty'] = '[name_1]';
  /* Field: Link to Article topic page */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Link to Article topic page';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[name]';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'resources/topic?topic=[field_title]&focus=[field_title_1]';
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'parent';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight_1']['id'] = 'weight_1';
  $handler->display->display_options['sorts']['weight_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight_1']['field'] = 'weight';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'article_topic' => 'article_topic',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  /* Filter criterion: Taxonomy term: Parent term */
  $handler->display->display_options['filters']['parent']['id'] = 'parent';
  $handler->display->display_options['filters']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['filters']['parent']['field'] = 'parent';
  $handler->display->display_options['filters']['parent']['operator'] = '!=';
  $handler->display->display_options['filters']['parent']['value']['value'] = '0';
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
    0 => '48',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['id'] = 'taxonomy_vocabulary_3_tid_1';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['relationship'] = 'parent';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['value'] = array(
    0 => '48',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['vocabulary'] = 'vocabulary_3';
  $translatables['cbf2019_article_topics'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<span id="cbf2019-article-topics-view-header">Topics</span>'),
    t('[name]'),
    t('Defaults'),
    t('Article Topics links'),
    t('Article'),
    t('All'),
    t('Article topic hierarchy'),
    t('Parent'),
    t('[name_1]'),
  );
  $export['cbf2019_article_topics'] = $view;

  $view = new view();
  $view->name = 'cbf2019_blog';
  $view->description = 'Embedded in other views. Blog view for the cbf2019 theme';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'cbf2019 blog';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'More resources';
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time_per_domain';
  $handler->display->display_options['cache']['results_lifespan'] = '1800';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '1800';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '4';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '6';
  $handler->display->display_options['style_options']['columns_md'] = '4';
  $handler->display->display_options['style_options']['columns_lg'] = '4';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<span id="cbf2019-blog-view-header">Blog</span>';
  $handler->display->display_options['header']['area']['format'] = '2';
  /* Relationship: Content: Content author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['label'] = 'Author';
  /* Field: Field: Highlight */
  $handler->display->display_options['fields']['field_highlight']['id'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['table'] = 'field_data_field_highlight';
  $handler->display->display_options['fields']['field_highlight']['field'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['label'] = '';
  $handler->display->display_options['fields']['field_highlight']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlight']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_highlight']['settings'] = array(
    'image_style' => 'portfolio_653x368',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Activity */
  $handler->display->display_options['fields']['field_in_activity']['id'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['field'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['label'] = '';
  $handler->display->display_options['fields']['field_in_activity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_in_activity']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Field: Speaker(s) */
  $handler->display->display_options['fields']['field_speakers']['id'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['table'] = 'field_data_field_speakers';
  $handler->display->display_options['fields']['field_speakers']['field'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['label'] = '';
  $handler->display->display_options['fields']['field_speakers']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speakers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speakers']['empty'] = '[name]';
  $handler->display->display_options['fields']['field_speakers']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_speakers']['delta_offset'] = '0';
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_episode_date']['id'] = 'field_episode_date';
  $handler->display->display_options['fields']['field_episode_date']['table'] = 'field_data_field_episode_date';
  $handler->display->display_options['fields']['field_episode_date']['field'] = 'field_episode_date';
  $handler->display->display_options['fields']['field_episode_date']['label'] = '';
  $handler->display->display_options['fields']['field_episode_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_episode_date']['alter']['text'] = '[field_speakers] | [field_episode_date]';
  $handler->display->display_options['fields']['field_episode_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_episode_date']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'j M Y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Field: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  /* Sort criterion: Field: Date (field_episode_date) */
  $handler->display->display_options['sorts']['field_episode_date_value']['id'] = 'field_episode_date_value';
  $handler->display->display_options['sorts']['field_episode_date_value']['table'] = 'field_data_field_episode_date';
  $handler->display->display_options['sorts']['field_episode_date_value']['field'] = 'field_episode_date_value';
  $handler->display->display_options['sorts']['field_episode_date_value']['order'] = 'DESC';
  /* Contextual filter: Domain Access: Domain ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'domain_access';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'current_domain';
  $handler->display->display_options['arguments']['gid']['default_argument_skip_url'] = TRUE;
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blog' => 'blog',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
    1957 => '1957',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';

  /* Display: Defaults */
  $handler = $view->new_display('block', 'Defaults', 'block');
  $handler->display->display_options['display_comment'] = 'Tick \'Skip default argument for view URL\' on the Domain Id contextual filter. This prevents the argument polluting the canonical URL, which affects SEO.';
  $handler->display->display_options['display_description'] = 'This display contains the defaults - don\'t use';
  $handler->display->display_options['link_url'] = 'resources';

  /* Display: For Collection */
  $handler = $view->new_display('block', 'For Collection', 'block_3');
  $handler->display->display_options['display_description'] = 'This display shows the recent blog articles for a Collection';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'All news in our blog';
  $handler->display->display_options['link_url'] = 'resources';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Content author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['label'] = 'Author';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_related_blogs_entityform']['id'] = 'reverse_field_related_blogs_entityform';
  $handler->display->display_options['relationships']['reverse_field_related_blogs_entityform']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_related_blogs_entityform']['field'] = 'reverse_field_related_blogs_entityform';
  $handler->display->display_options['relationships']['reverse_field_related_blogs_entityform']['label'] = 'Collection';
  $handler->display->display_options['relationships']['reverse_field_related_blogs_entityform']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Entityform Submission: Entityform submission ID */
  $handler->display->display_options['arguments']['entityform_id']['id'] = 'entityform_id';
  $handler->display->display_options['arguments']['entityform_id']['table'] = 'entityform';
  $handler->display->display_options['arguments']['entityform_id']['field'] = 'entityform_id';
  $handler->display->display_options['arguments']['entityform_id']['relationship'] = 'reverse_field_related_blogs_entityform';
  $handler->display->display_options['arguments']['entityform_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['entityform_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['entityform_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['entityform_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['entityform_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['entityform_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['entityform_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['entityform_id']['validate']['type'] = 'numeric';
  /* Contextual filter: Domain Access: Domain ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'domain_access';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'current_domain';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blog' => 'blog',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['id'] = 'taxonomy_vocabulary_3_tid_1';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['relationship'] = 'reverse_field_related_blogs_entityform';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['value'] = array(
    1957 => '1957',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['group'] = 2;
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['vocabulary'] = 'vocabulary_3';
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
    1957 => '1957',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['group'] = 2;
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';

  /* Display: For Activity (embedded) */
  $handler = $view->new_display('block', 'For Activity (embedded)', 'block_5');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'container';
  $handler->display->display_options['display_description'] = 'Recent blog articles for an activity';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More resources';
  $handler->display->display_options['link_url'] = 'resources';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['total_pages'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<span id="cbf2019-blog-view-header">%3</span>';
  $handler->display->display_options['header']['area']['format'] = '2';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Content author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['label'] = 'Author';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_in_activity_target_id']['id'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['field'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['label'] = 'Activity';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Highlight */
  $handler->display->display_options['fields']['field_highlight']['id'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['table'] = 'field_data_field_highlight';
  $handler->display->display_options['fields']['field_highlight']['field'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['label'] = '';
  $handler->display->display_options['fields']['field_highlight']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlight']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_highlight']['settings'] = array(
    'image_style' => 'portfolio_653x368',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Activity excluded from display */
  $handler->display->display_options['fields']['field_in_activity']['id'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['field'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['ui_name'] = 'Activity excluded from display';
  $handler->display->display_options['fields']['field_in_activity']['label'] = '';
  $handler->display->display_options['fields']['field_in_activity']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_in_activity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_in_activity']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Field: Speaker(s) */
  $handler->display->display_options['fields']['field_speakers']['id'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['table'] = 'field_data_field_speakers';
  $handler->display->display_options['fields']['field_speakers']['field'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['label'] = '';
  $handler->display->display_options['fields']['field_speakers']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speakers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speakers']['empty'] = '[name]';
  $handler->display->display_options['fields']['field_speakers']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_speakers']['delta_offset'] = '0';
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_episode_date']['id'] = 'field_episode_date';
  $handler->display->display_options['fields']['field_episode_date']['table'] = 'field_data_field_episode_date';
  $handler->display->display_options['fields']['field_episode_date']['field'] = 'field_episode_date';
  $handler->display->display_options['fields']['field_episode_date']['label'] = '';
  $handler->display->display_options['fields']['field_episode_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_episode_date']['alter']['text'] = '[field_speakers] | [field_episode_date]';
  $handler->display->display_options['fields']['field_episode_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_episode_date']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'j M Y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Field: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  /* Field: Content: Blog label */
  $handler->display->display_options['fields']['field_blog_label']['id'] = 'field_blog_label';
  $handler->display->display_options['fields']['field_blog_label']['table'] = 'field_data_field_blog_label';
  $handler->display->display_options['fields']['field_blog_label']['field'] = 'field_blog_label';
  $handler->display->display_options['fields']['field_blog_label']['relationship'] = 'field_in_activity_target_id';
  $handler->display->display_options['fields']['field_blog_label']['label'] = '';
  $handler->display->display_options['fields']['field_blog_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_blog_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blog_label']['empty'] = 'Blog';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_in_activity_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Domain Access: Domain ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'domain_access';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'current_domain';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Title in header */
  $handler->display->display_options['arguments']['null']['id'] = 'null';
  $handler->display->display_options['arguments']['null']['table'] = 'views';
  $handler->display->display_options['arguments']['null']['field'] = 'null';
  $handler->display->display_options['arguments']['null']['ui_name'] = 'Title in header';
  $handler->display->display_options['arguments']['null']['default_action'] = 'default';
  $handler->display->display_options['arguments']['null']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['null']['default_argument_options']['argument'] = 'Blog';
  $handler->display->display_options['arguments']['null']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['null']['summary_options']['items_per_page'] = '25';
  $translatables['cbf2019_blog'] = array(
    t('Master'),
    t('<none>'),
    t('More resources'),
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<span id="cbf2019-blog-view-header">Blog</span>'),
    t('Author'),
    t('[name]'),
    t('[field_speakers] | [field_episode_date]'),
    t('All'),
    t('Defaults'),
    t('This display contains the defaults - don\'t use'),
    t('more'),
    t('For Collection'),
    t('This display shows the recent blog articles for a Collection'),
    t('All news in our blog'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Collection'),
    t('For Activity (embedded)'),
    t('Recent blog articles for an activity'),
    t('<span id="cbf2019-blog-view-header">%3</span>'),
    t('Activity'),
    t('Blog'),
  );
  $export['cbf2019_blog'] = $view;

  $view = new view();
  $view->name = 'cbf2019_brite_event_admin';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'cbf2019 brite_event admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Website brite_events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => '2',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'title_1' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_date_text_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_sort_order_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'taxonomy_vocabulary_3_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'title' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'taxonomy_vocabulary_1_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_title_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'field_date_text' => 'field_date_text',
    'field_sort_order' => 'field_sort_order',
    'taxonomy_vocabulary_3' => 'taxonomy_vocabulary_3',
    'field_in_activity' => 'field_in_activity',
    'taxonomy_vocabulary_1' => 'taxonomy_vocabulary_1',
    'field_staff_member' => 'field_staff_member',
    'nid' => 'nid',
  );
  $handler->display->display_options['style_options']['class'] = '';
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_text' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sort_order' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'taxonomy_vocabulary_3' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_in_activity' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'taxonomy_vocabulary_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_staff_member' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<p><strong><a href="/node/add/brite-event">+ Create a new event</a></strong></p>

<p>Notes ...</p>

<ul>
<li><strong>Date</strong> - For repeating events, this is the date of the next occurrence</li>
<li><strong>Sort Order</strong> - This is the start datetime in UTC. For repeating events, this refers to the next occurrence</li>
</ul>';
  $handler->display->display_options['header']['area']['format'] = '2';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_in_activity_target_id']['id'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['field'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['label'] = 'Activity';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_staff_member_target_id']['id'] = 'field_staff_member_target_id';
  $handler->display->display_options['relationships']['field_staff_member_target_id']['table'] = 'field_data_field_staff_member';
  $handler->display->display_options['relationships']['field_staff_member_target_id']['field'] = 'field_staff_member_target_id';
  $handler->display->display_options['relationships']['field_staff_member_target_id']['label'] = 'Staff member';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Select';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'log' => 0,
      ),
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Date text */
  $handler->display->display_options['fields']['field_date_text']['id'] = 'field_date_text';
  $handler->display->display_options['fields']['field_date_text']['table'] = 'field_data_field_date_text';
  $handler->display->display_options['fields']['field_date_text']['field'] = 'field_date_text';
  $handler->display->display_options['fields']['field_date_text']['label'] = 'Date';
  $handler->display->display_options['fields']['field_date_text']['element_label_colon'] = FALSE;
  /* Field: Field: Sort Order */
  $handler->display->display_options['fields']['field_sort_order']['id'] = 'field_sort_order';
  $handler->display->display_options['fields']['field_sort_order']['table'] = 'field_data_field_sort_order';
  $handler->display->display_options['fields']['field_sort_order']['field'] = 'field_sort_order';
  $handler->display->display_options['fields']['field_sort_order']['element_label_colon'] = FALSE;
  /* Field: Field: Audience */
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['id'] = 'taxonomy_vocabulary_3';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['field'] = 'taxonomy_vocabulary_3';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Activity */
  $handler->display->display_options['fields']['field_in_activity']['id'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['field'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_in_activity']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  /* Field: Field: Ministry Centre */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Staff member */
  $handler->display->display_options['fields']['field_staff_member']['id'] = 'field_staff_member';
  $handler->display->display_options['fields']['field_staff_member']['table'] = 'field_data_field_staff_member';
  $handler->display->display_options['fields']['field_staff_member']['field'] = 'field_staff_member';
  $handler->display->display_options['fields']['field_staff_member']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_member']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Published status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Published';
  $handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Operations';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a href="/node/[nid]/edit">Edit</a>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Field: Sort Order (field_sort_order) */
  $handler->display->display_options['sorts']['field_sort_order_value']['id'] = 'field_sort_order_value';
  $handler->display->display_options['sorts']['field_sort_order_value']['table'] = 'field_data_field_sort_order';
  $handler->display->display_options['sorts']['field_sort_order_value']['field'] = 'field_sort_order_value';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'brite_event' => 'brite_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_1']['group'] = 1;
  $handler->display->display_options['filters']['title_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['operator_id'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['label'] = 'Title contains ...';
  $handler->display->display_options['filters']['title_1']['expose']['operator'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['identifier'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['title_1']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title_1']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title_1']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title_1']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title_1']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title_1']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Field: Date text (field_date_text) */
  $handler->display->display_options['filters']['field_date_text_value']['id'] = 'field_date_text_value';
  $handler->display->display_options['filters']['field_date_text_value']['table'] = 'field_data_field_date_text';
  $handler->display->display_options['filters']['field_date_text_value']['field'] = 'field_date_text_value';
  $handler->display->display_options['filters']['field_date_text_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_date_text_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_text_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_text_value']['expose']['operator_id'] = 'field_date_text_value_op';
  $handler->display->display_options['filters']['field_date_text_value']['expose']['label'] = 'Date contains ...';
  $handler->display->display_options['filters']['field_date_text_value']['expose']['operator'] = 'field_date_text_value_op';
  $handler->display->display_options['filters']['field_date_text_value']['expose']['identifier'] = 'field_date_text_value';
  $handler->display->display_options['filters']['field_date_text_value']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_date_text_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_date_text_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_date_text_value']['expose']['autocomplete_field'] = 'field_date_text';
  $handler->display->display_options['filters']['field_date_text_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_date_text_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_date_text_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Field: Sort Order (field_sort_order) */
  $handler->display->display_options['filters']['field_sort_order_value']['id'] = 'field_sort_order_value';
  $handler->display->display_options['filters']['field_sort_order_value']['table'] = 'field_data_field_sort_order';
  $handler->display->display_options['filters']['field_sort_order_value']['field'] = 'field_sort_order_value';
  $handler->display->display_options['filters']['field_sort_order_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_sort_order_value']['group'] = 1;
  $handler->display->display_options['filters']['field_sort_order_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sort_order_value']['expose']['operator_id'] = 'field_sort_order_value_op';
  $handler->display->display_options['filters']['field_sort_order_value']['expose']['label'] = 'Sort Order contains ...';
  $handler->display->display_options['filters']['field_sort_order_value']['expose']['operator'] = 'field_sort_order_value_op';
  $handler->display->display_options['filters']['field_sort_order_value']['expose']['identifier'] = 'field_sort_order_value';
  $handler->display->display_options['filters']['field_sort_order_value']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_sort_order_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_sort_order_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_sort_order_value']['expose']['autocomplete_field'] = 'field_sort_order';
  $handler->display->display_options['filters']['field_sort_order_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_sort_order_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_sort_order_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = '';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['group'] = 1;
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_3_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['label'] = 'Audience';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['operator'] = 'taxonomy_vocabulary_3_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['identifier'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_in_activity_target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Activity title contains ...';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Field: Ministry Centre (taxonomy_vocabulary_1) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['id'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['field'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['value'] = '';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['group'] = 1;
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_1_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['expose']['label'] = 'Ministry Centre';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['expose']['operator'] = 'taxonomy_vocabulary_1_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['expose']['identifier'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['vocabulary'] = 'vocabulary_1';
  /* Filter criterion: Field: Title (field_title) */
  $handler->display->display_options['filters']['field_title_value']['id'] = 'field_title_value';
  $handler->display->display_options['filters']['field_title_value']['table'] = 'field_data_field_title';
  $handler->display->display_options['filters']['field_title_value']['field'] = 'field_title_value';
  $handler->display->display_options['filters']['field_title_value']['relationship'] = 'field_staff_member_target_id';
  $handler->display->display_options['filters']['field_title_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_title_value']['group'] = 1;
  $handler->display->display_options['filters']['field_title_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_title_value']['expose']['operator_id'] = 'field_title_value_op';
  $handler->display->display_options['filters']['field_title_value']['expose']['label'] = 'Staff member name contains ...';
  $handler->display->display_options['filters']['field_title_value']['expose']['operator'] = 'field_title_value_op';
  $handler->display->display_options['filters']['field_title_value']['expose']['identifier'] = 'field_title_value';
  $handler->display->display_options['filters']['field_title_value']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_title_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_title_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_title_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_title_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_title_value']['expose']['autocomplete_dependent'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/cbf/events';
  $translatables['cbf2019_brite_event_admin'] = array(
    t('Master'),
    t('Website brite_events'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Select any filter and click on Apply to see results'),
    t('Advanced options'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<p><strong><a href="/node/add/brite-event">+ Create a new event</a></strong></p>

<p>Notes ...</p>

<ul>
<li><strong>Date</strong> - For repeating events, this is the date of the next occurrence</li>
<li><strong>Sort Order</strong> - This is the start datetime in UTC. For repeating events, this refers to the next occurrence</li>
</ul>'),
    t('Activity'),
    t('Staff member'),
    t('Select'),
    t('- Choose an operation -'),
    t('Title'),
    t('Date'),
    t('Sort Order'),
    t('Audience'),
    t('Ministry Centre'),
    t('Published'),
    t('Operations'),
    t('<a href="/node/[nid]/edit">Edit</a>'),
    t('Title contains ...'),
    t('Date contains ...'),
    t('Sort Order contains ...'),
    t('Activity title contains ...'),
    t('Staff member name contains ...'),
    t('Page'),
  );
  $export['cbf2019_brite_event_admin'] = $view;

  $view = new view();
  $view->name = 'cbf2019_brite_event_slider';
  $view->description = '';
  $view->tag = 'slider, autoplay, add-christian-content';
  $view->base_table = 'node';
  $view->human_name = 'cbf2019 brite_event slider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'bg-gray-view-content';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'All events';
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = '0';
  $handler->display->display_options['style_options']['visible'] = '';
  $handler->display->display_options['style_options']['auto'] = '6';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<span id="cbf2019-activity-event-slider-view-header">Upcoming events</span>';
  $handler->display->display_options['header']['area']['format'] = 'raw_html';
  /* Field: Field: Highlight */
  $handler->display->display_options['fields']['field_highlight']['id'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['table'] = 'field_data_field_highlight';
  $handler->display->display_options['fields']['field_highlight']['field'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['label'] = '';
  $handler->display->display_options['fields']['field_highlight']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_highlight']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlight']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_highlight']['settings'] = array(
    'image_style' => 'portfolio_653x368',
    'image_link' => '',
  );
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['empty'] = '[field_highlight]';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'portfolio_653x368',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field: Ministry Centre */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Date text */
  $handler->display->display_options['fields']['field_date_text']['id'] = 'field_date_text';
  $handler->display->display_options['fields']['field_date_text']['table'] = 'field_data_field_date_text';
  $handler->display->display_options['fields']['field_date_text']['field'] = 'field_date_text';
  $handler->display->display_options['fields']['field_date_text']['label'] = '';
  $handler->display->display_options['fields']['field_date_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_text']['element_label_colon'] = FALSE;
  /* Field: Location: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['label'] = '';
  $handler->display->display_options['fields']['city']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['city']['alter']['text'] = '[field_date_text] | [city]';
  $handler->display->display_options['fields']['city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['city']['empty'] = '[field_date_text]';
  /* Field: Field: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['alter']['max_length'] = '128';
  $handler->display->display_options['fields']['field_subtitle']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['type'] = 'text_plain';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'More info';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['link_class'] = 'btn btn-mod btn-border btn-medium btn-round';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Sort criterion: Field: Sort Order (field_sort_order) */
  $handler->display->display_options['sorts']['field_sort_order_value']['id'] = 'field_sort_order_value';
  $handler->display->display_options['sorts']['field_sort_order_value']['table'] = 'field_data_field_sort_order';
  $handler->display->display_options['sorts']['field_sort_order_value']['field'] = 'field_sort_order_value';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'brite_event' => 'brite_event',
  );
  /* Filter criterion: Field: Next action (field_next_action) */
  $handler->display->display_options['filters']['field_next_action_value']['id'] = 'field_next_action_value';
  $handler->display->display_options['filters']['field_next_action_value']['table'] = 'field_data_field_next_action';
  $handler->display->display_options['filters']['field_next_action_value']['field'] = 'field_next_action_value';
  $handler->display->display_options['filters']['field_next_action_value']['operator'] = '!=';
  $handler->display->display_options['filters']['field_next_action_value']['value'] = '0';
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
    48 => '48',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';

  /* Display: Defaults */
  $handler = $view->new_display('block', 'Defaults', 'block');
  $handler->display->display_options['display_comment'] = 'When on the \'christian\' site, the add-christian-content tag tells cbf_views_query_alter() to change Audience = \'general\' to Audience in [\'general\', \'christian\'].';
  $handler->display->display_options['display_description'] = 'This display contains the defaults - don\'t use';

  /* Display: For Speaker */
  $handler = $view->new_display('block', 'For Speaker', 'block_1');
  $handler->display->display_options['display_comment'] = 'When on the \'christian\' site, the add-christian-content tag tells cbf_views_query_alter() to change Audience = \'general\' to Audience in [\'general\', \'christian\'].';
  $handler->display->display_options['link_url'] = 'whats-on';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Speaker(s) (field_speakers) */
  $handler->display->display_options['relationships']['field_speakers_tid']['id'] = 'field_speakers_tid';
  $handler->display->display_options['relationships']['field_speakers_tid']['table'] = 'field_data_field_speakers';
  $handler->display->display_options['relationships']['field_speakers_tid']['field'] = 'field_speakers_tid';
  $handler->display->display_options['relationships']['field_speakers_tid']['label'] = 'Speaker';
  $handler->display->display_options['relationships']['field_speakers_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_speakers_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['code'] = 'return cbf_get_last_item_in_path();';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'speaker' => 'speaker',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = TRUE;
  $translatables['cbf2019_brite_event_slider'] = array(
    t('Master'),
    t('All events'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<span id="cbf2019-activity-event-slider-view-header">Upcoming events</span>'),
    t('[field_highlight]'),
    t('[field_date_text] | [city]'),
    t('[field_date_text]'),
    t('More info'),
    t('Defaults'),
    t('This display contains the defaults - don\'t use'),
    t('more'),
    t('For Speaker'),
    t('Speaker'),
    t('All'),
  );
  $export['cbf2019_brite_event_slider'] = $view;

  $view = new view();
  $view->name = 'cbf2019_brite_events';
  $view->description = '';
  $view->tag = 'add-christian-content, filter-ministry-centre-post-execute';
  $view->base_table = 'node';
  $view->human_name = 'cbf2019 brite_events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => '2',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'taxonomy_vocabulary_1_tid' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => 'All',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Events';
  $handler->display->display_options['header']['area']['format'] = '3';
  /* Relationship: Field: Ministry Centre (taxonomy_vocabulary_1) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1_tid']['id'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1_tid']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1_tid']['field'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_1_tid']['label'] = 'Ministry Centre';
  /* Field: Field: Highlight */
  $handler->display->display_options['fields']['field_highlight']['id'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['table'] = 'field_data_field_highlight';
  $handler->display->display_options['fields']['field_highlight']['field'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['label'] = '';
  $handler->display->display_options['fields']['field_highlight']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlight']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_highlight']['settings'] = array(
    'image_style' => 'portfolio_653x368',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Activity */
  $handler->display->display_options['fields']['field_in_activity']['id'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['field'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['label'] = '';
  $handler->display->display_options['fields']['field_in_activity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_in_activity']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  /* Field: Field: Date text */
  $handler->display->display_options['fields']['field_date_text']['id'] = 'field_date_text';
  $handler->display->display_options['fields']['field_date_text']['table'] = 'field_data_field_date_text';
  $handler->display->display_options['fields']['field_date_text']['field'] = 'field_date_text';
  $handler->display->display_options['fields']['field_date_text']['label'] = '';
  $handler->display->display_options['fields']['field_date_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_text']['element_label_colon'] = FALSE;
  /* Field: Location: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['label'] = '';
  $handler->display->display_options['fields']['city']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['city']['alter']['text'] = '[field_date_text] | [city]';
  $handler->display->display_options['fields']['city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['city']['empty'] = '[field_date_text]';
  /* Field: Field: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['type'] = 'text_plain';
  /* Field: Ministry Centre */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['fields']['tid']['ui_name'] = 'Ministry Centre';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Sort criterion: Field: Sort Order (field_sort_order) */
  $handler->display->display_options['sorts']['field_sort_order_value']['id'] = 'field_sort_order_value';
  $handler->display->display_options['sorts']['field_sort_order_value']['table'] = 'field_data_field_sort_order';
  $handler->display->display_options['sorts']['field_sort_order_value']['field'] = 'field_sort_order_value';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'brite_event' => 'brite_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Next action (field_next_action) */
  $handler->display->display_options['filters']['field_next_action_value']['id'] = 'field_next_action_value';
  $handler->display->display_options['filters']['field_next_action_value']['table'] = 'field_data_field_next_action';
  $handler->display->display_options['filters']['field_next_action_value']['field'] = 'field_next_action_value';
  $handler->display->display_options['filters']['field_next_action_value']['operator'] = '!=';
  $handler->display->display_options['filters']['field_next_action_value']['value'] = '0';
  $handler->display->display_options['filters']['field_next_action_value']['group'] = 1;
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
    48 => '48',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['group'] = 1;
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 2;
  /* Filter criterion: Field: Ministry Centre (taxonomy_vocabulary_1) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['id'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['field'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['value'] = '';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['group'] = 2;
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_1_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['expose']['operator'] = 'taxonomy_vocabulary_1_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['expose']['identifier'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['vocabulary'] = 'vocabulary_1';

  /* Display: Defaults */
  $handler = $view->new_display('block', 'Defaults', 'block');
  $handler->display->display_options['display_comment'] = 'The filter criteria are organised as two OR groups with the exposed Ministry Centre in one and the Ministry Centre IS NULL in the other. When the exposed Ministry Centre is ALL, that condition disappears from the first group, and all results are returned (whether Ministry Centre is set or not). When the exposed Ministry Centre is X that condition is set in the first group, and results are returned for all items where Ministry Centre is X or NULL.';
  $handler->display->display_options['display_description'] = 'This display contains the defaults - don\'t use';

  /* Display: For What's On */
  $handler = $view->new_display('block', 'For What\'s On', 'block_1');
  $handler->display->display_options['display_comment'] = 'I couldn\'t get the exposed Ministry Centre filter to work in conjuction with "OR Ministry Centre IS NULL". Add tag filter-ministry-centre-post-execute and did the filtering in post_execute(). Relies on the relationship with Ministry Centre, and an exclude-from-display Term Id field.';
  $translatables['cbf2019_brite_events'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Select any filter and click on Apply to see results'),
    t('Advanced options'),
    t('All'),
    t('Events'),
    t('Ministry Centre'),
    t('[field_date_text] | [city]'),
    t('[field_date_text]'),
    t('.'),
    t('Defaults'),
    t('This display contains the defaults - don\'t use'),
    t('For What\'s On'),
  );
  $export['cbf2019_brite_events'] = $view;

  $view = new view();
  $view->name = 'cbf2019_city_activities';
  $view->description = 'This view is superceded by the \'cbf2019 what\'s on activities\' view';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'cbf2019 city activities';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => '2',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'taxonomy_vocabulary_1_tid' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => 'All',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Activities';
  $handler->display->display_options['header']['area']['format'] = '2';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Highlight */
  $handler->display->display_options['fields']['field_highlight']['id'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['table'] = 'field_data_field_highlight';
  $handler->display->display_options['fields']['field_highlight']['field'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['label'] = '';
  $handler->display->display_options['fields']['field_highlight']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_highlight']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlight']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_highlight']['settings'] = array(
    'image_style' => 'portfolio_653x368',
    'image_link' => '',
  );
  /* Field: Field: Title image */
  $handler->display->display_options['fields']['field_title_image']['id'] = 'field_title_image';
  $handler->display->display_options['fields']['field_title_image']['table'] = 'field_data_field_title_image';
  $handler->display->display_options['fields']['field_title_image']['field'] = 'field_title_image';
  $handler->display->display_options['fields']['field_title_image']['label'] = '';
  $handler->display->display_options['fields']['field_title_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title_image']['empty'] = '[field_highlight]';
  $handler->display->display_options['fields']['field_title_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_title_image']['settings'] = array(
    'image_style' => 'portfolio_653x368',
    'image_link' => '',
  );
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_logo']['alter']['text'] = '<div class="overlaid-image">[field_title_image]</div><div class="image-overlay">###[field_logo]###</div>';
  $handler->display->display_options['fields']['field_logo']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_logo']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['element_wrapper_class'] = 'image-plus-fixed-overlay';
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['type'] = 'file_url_plain';
  /* Field: Field: Ministry Centre */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['empty'] = 'All cities';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Regularity */
  $handler->display->display_options['fields']['field_regularity']['id'] = 'field_regularity';
  $handler->display->display_options['fields']['field_regularity']['table'] = 'field_data_field_regularity';
  $handler->display->display_options['fields']['field_regularity']['field'] = 'field_regularity';
  $handler->display->display_options['fields']['field_regularity']['label'] = '';
  $handler->display->display_options['fields']['field_regularity']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_regularity']['alter']['text'] = '[taxonomy_vocabulary_1] | [field_regularity]';
  $handler->display->display_options['fields']['field_regularity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_regularity']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Time of day */
  $handler->display->display_options['fields']['field_time_of_day']['id'] = 'field_time_of_day';
  $handler->display->display_options['fields']['field_time_of_day']['table'] = 'field_data_field_time_of_day';
  $handler->display->display_options['fields']['field_time_of_day']['field'] = 'field_time_of_day';
  $handler->display->display_options['fields']['field_time_of_day']['label'] = '';
  $handler->display->display_options['fields']['field_time_of_day']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_of_day']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Field: Weight (field_weight) */
  $handler->display->display_options['sorts']['field_weight_value']['id'] = 'field_weight_value';
  $handler->display->display_options['sorts']['field_weight_value']['table'] = 'field_data_field_weight';
  $handler->display->display_options['sorts']['field_weight_value']['field'] = 'field_weight_value';
  $handler->display->display_options['sorts']['field_weight_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Domain Access: Domain ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'domain_access';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'current_domain';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'activity' => 'activity',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Ministry Centre (taxonomy_vocabulary_1) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['id'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['field'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['group'] = 1;
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_1_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['expose']['operator'] = 'taxonomy_vocabulary_1_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['expose']['identifier'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    3 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['vocabulary'] = 'vocabulary_1';
  /* Filter criterion: Content: Activity category (field_activity_category) */
  $handler->display->display_options['filters']['field_activity_category_tid']['id'] = 'field_activity_category_tid';
  $handler->display->display_options['filters']['field_activity_category_tid']['table'] = 'field_data_field_activity_category';
  $handler->display->display_options['filters']['field_activity_category_tid']['field'] = 'field_activity_category_tid';
  $handler->display->display_options['filters']['field_activity_category_tid']['value'] = array(
    1182 => '1182',
    1183 => '1183',
  );
  $handler->display->display_options['filters']['field_activity_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_activity_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_activity_category_tid']['vocabulary'] = 'activity_category';
  /* Filter criterion: Field: Weight (field_weight) */
  $handler->display->display_options['filters']['field_weight_value']['id'] = 'field_weight_value';
  $handler->display->display_options['filters']['field_weight_value']['table'] = 'field_data_field_weight';
  $handler->display->display_options['filters']['field_weight_value']['field'] = 'field_weight_value';
  $handler->display->display_options['filters']['field_weight_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_weight_value']['value']['value'] = '0';
  $handler->display->display_options['filters']['field_weight_value']['group'] = 1;
  /* Filter criterion: Content: Logo (field_logo:fid) */
  $handler->display->display_options['filters']['field_logo_fid']['id'] = 'field_logo_fid';
  $handler->display->display_options['filters']['field_logo_fid']['table'] = 'field_data_field_logo';
  $handler->display->display_options['filters']['field_logo_fid']['field'] = 'field_logo_fid';
  $handler->display->display_options['filters']['field_logo_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_logo_fid']['group'] = 1;
  /* Filter criterion: Field: Title image (field_title_image:fid) */
  $handler->display->display_options['filters']['field_title_image_fid']['id'] = 'field_title_image_fid';
  $handler->display->display_options['filters']['field_title_image_fid']['table'] = 'field_data_field_title_image';
  $handler->display->display_options['filters']['field_title_image_fid']['field'] = 'field_title_image_fid';
  $handler->display->display_options['filters']['field_title_image_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_title_image_fid']['group'] = 2;
  /* Filter criterion: Field: Highlight (field_highlight:fid) */
  $handler->display->display_options['filters']['field_highlight_fid']['id'] = 'field_highlight_fid';
  $handler->display->display_options['filters']['field_highlight_fid']['table'] = 'field_data_field_highlight';
  $handler->display->display_options['filters']['field_highlight_fid']['field'] = 'field_highlight_fid';
  $handler->display->display_options['filters']['field_highlight_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_highlight_fid']['group'] = 2;
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
    1957 => '1957',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['enabled'] = FALSE;
  $translatables['cbf2019_city_activities'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Select any filter and click on Apply to see results'),
    t('Advanced options'),
    t('All'),
    t('Activities'),
    t('[field_highlight]'),
    t('<div class="overlaid-image">[field_title_image]</div><div class="image-overlay">###[field_logo]###</div>'),
    t('All cities'),
    t('[taxonomy_vocabulary_1] | [field_regularity]'),
    t('Block'),
  );
  $export['cbf2019_city_activities'] = $view;

  $view = new view();
  $view->name = 'cbf2019_collections';
  $view->description = 'A page showing the library resources, blogs and Third Space categories in a Collection';
  $view->tag = 'default';
  $view->base_table = 'entityform';
  $view->human_name = 'cbf2019 collections';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '[field_title]';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  /* Field: Field: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_subtitle']['alter']['text'] = '<div class="row">
  <div class="col-xs-12 col-md-8 col-md-offset-2 col-lg-6 col-lg-offset-3">
    [field_subtitle]
  </div>
</div>';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['element_wrapper_class'] = 'h4 align-center';
  /* Field: Field: Promotional insert */
  $handler->display->display_options['fields']['field_short_form']['id'] = 'field_short_form';
  $handler->display->display_options['fields']['field_short_form']['table'] = 'field_data_field_short_form';
  $handler->display->display_options['fields']['field_short_form']['field'] = 'field_short_form';
  $handler->display->display_options['fields']['field_short_form']['label'] = '';
  $handler->display->display_options['fields']['field_short_form']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_short_form']['alter']['text'] = '<div class="row">
  <div class="col-xs-12 col-md-8 col-md-offset-2 col-lg-6 col-lg-offset-3">
    [field_short_form]
  </div>
</div>';
  $handler->display->display_options['fields']['field_short_form']['element_label_colon'] = FALSE;
  /* Contextual filter: Entityform Submission: Entityform submission ID */
  $handler->display->display_options['arguments']['entityform_id']['id'] = 'entityform_id';
  $handler->display->display_options['arguments']['entityform_id']['table'] = 'entityform';
  $handler->display->display_options['arguments']['entityform_id']['field'] = 'entityform_id';
  $handler->display->display_options['arguments']['entityform_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['entityform_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['entityform_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['entityform_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['entityform_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['entityform_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['entityform_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['entityform_id']['validate']['type'] = 'numeric';
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'collection' => 'collection',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'collection/%';
  $translatables['cbf2019_collections'] = array(
    t('Master'),
    t('[field_title]'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<div class="row">
  <div class="col-xs-12 col-md-8 col-md-offset-2 col-lg-6 col-lg-offset-3">
    [field_subtitle]
  </div>
</div>'),
    t('<div class="row">
  <div class="col-xs-12 col-md-8 col-md-offset-2 col-lg-6 col-lg-offset-3">
    [field_short_form]
  </div>
</div>'),
    t('All'),
    t('Page'),
  );
  $export['cbf2019_collections'] = $view;

  $view = new view();
  $view->name = 'cbf2019_collections_admin_view';
  $view->description = 'Administer collections';
  $view->tag = 'default';
  $view->base_table = 'entityform';
  $view->human_name = 'cbf2019 collections admin view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Collections';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'entityform_id' => 'entityform_id',
  );
  $handler->display->display_options['style_options']['class'] = '';
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'entityform_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'This view allows you to find and edit Collections. Collections are thematic groupings of Articles (blogs and library episodes) and Terms (Third Space categories). <em>The current implementation of Collections works best if they contain no more than 12 library episodes, 6 blogs and ~3 Third Space categories. Further development work is required to support larger Collections (esp searching).</em>

<ol>
<li>You can <a href="/eform/submit/collection">create a new Collection</a></li>
<li>To be usable, the collection must have a subtitle, description and title image</ii>
<li>To find an existing collection, use the form below to narrow the search by name or description</ii>
<li>The listing of collections tells you how many Blogs, Episodes and Third Space Categories are in each collection. The listing also shows you some of the Description.</ii>
<li>To edit or delete a collection, click the Edit link and from there you can either edit and Save, or Delete the collection.</ii>
</ol>';
  $handler->display->display_options['header']['area']['format'] = '2';
  /* Field: Bulk operations: Entityform Submission */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_entityform';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'log' => 0,
      ),
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
  );
  /* Field: Field: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  /* Field: Field: Audience */
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['id'] = 'taxonomy_vocabulary_3';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['field'] = 'taxonomy_vocabulary_3';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Promotional insert */
  $handler->display->display_options['fields']['field_short_form']['id'] = 'field_short_form';
  $handler->display->display_options['fields']['field_short_form']['table'] = 'field_data_field_short_form';
  $handler->display->display_options['fields']['field_short_form']['field'] = 'field_short_form';
  $handler->display->display_options['fields']['field_short_form']['alter']['max_length'] = '128';
  $handler->display->display_options['fields']['field_short_form']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_short_form']['type'] = 'text_plain';
  /* Field: Field: Title image */
  $handler->display->display_options['fields']['field_title_image']['id'] = 'field_title_image';
  $handler->display->display_options['fields']['field_title_image']['table'] = 'field_data_field_title_image';
  $handler->display->display_options['fields']['field_title_image']['field'] = 'field_title_image';
  $handler->display->display_options['fields']['field_title_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_title_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Entityform Submission: Related blogs */
  $handler->display->display_options['fields']['field_related_blogs']['id'] = 'field_related_blogs';
  $handler->display->display_options['fields']['field_related_blogs']['table'] = 'field_data_field_related_blogs';
  $handler->display->display_options['fields']['field_related_blogs']['field'] = 'field_related_blogs';
  $handler->display->display_options['fields']['field_related_blogs']['label'] = 'Blogs';
  $handler->display->display_options['fields']['field_related_blogs']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_related_blogs']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_related_blogs']['multi_type'] = 'count';
  /* Field: Entityform Submission: Related episodes */
  $handler->display->display_options['fields']['field_related_episodes']['id'] = 'field_related_episodes';
  $handler->display->display_options['fields']['field_related_episodes']['table'] = 'field_data_field_related_episodes';
  $handler->display->display_options['fields']['field_related_episodes']['field'] = 'field_related_episodes';
  $handler->display->display_options['fields']['field_related_episodes']['label'] = 'Episodes';
  $handler->display->display_options['fields']['field_related_episodes']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_related_episodes']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_related_episodes']['multi_type'] = 'count';
  /* Field: Entityform Submission: Entityform submission ID */
  $handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
  $handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['label'] = 'Operations';
  $handler->display->display_options['fields']['entityform_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['entityform_id']['alter']['text'] = '<a href="/collection/[entityform_id]">View</a>&nbsp;&nbsp;
<a href="/entityform/[entityform_id]/edit?destination=admin/cbf/collections">Edit</a>';
  $handler->display->display_options['fields']['entityform_id']['separator'] = '';
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'collection' => 'collection',
  );
  /* Filter criterion: Field: Title (field_title) */
  $handler->display->display_options['filters']['field_title_value']['id'] = 'field_title_value';
  $handler->display->display_options['filters']['field_title_value']['table'] = 'field_data_field_title';
  $handler->display->display_options['filters']['field_title_value']['field'] = 'field_title_value';
  $handler->display->display_options['filters']['field_title_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_title_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_title_value']['expose']['operator_id'] = 'field_title_value_op';
  $handler->display->display_options['filters']['field_title_value']['expose']['label'] = 'Title contains';
  $handler->display->display_options['filters']['field_title_value']['expose']['operator'] = 'field_title_value_op';
  $handler->display->display_options['filters']['field_title_value']['expose']['identifier'] = 'field_title_value';
  $handler->display->display_options['filters']['field_title_value']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_title_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_title_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_title_value']['expose']['autocomplete_field'] = 'field_title';
  $handler->display->display_options['filters']['field_title_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_title_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_title_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Field: Promotional insert (field_short_form) */
  $handler->display->display_options['filters']['field_short_form_value']['id'] = 'field_short_form_value';
  $handler->display->display_options['filters']['field_short_form_value']['table'] = 'field_data_field_short_form';
  $handler->display->display_options['filters']['field_short_form_value']['field'] = 'field_short_form_value';
  $handler->display->display_options['filters']['field_short_form_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_short_form_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_short_form_value']['expose']['operator_id'] = 'field_short_form_value_op';
  $handler->display->display_options['filters']['field_short_form_value']['expose']['label'] = 'Description contains';
  $handler->display->display_options['filters']['field_short_form_value']['expose']['operator'] = 'field_short_form_value_op';
  $handler->display->display_options['filters']['field_short_form_value']['expose']['identifier'] = 'field_short_form_value';
  $handler->display->display_options['filters']['field_short_form_value']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_short_form_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_short_form_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_short_form_value']['expose']['autocomplete_field'] = 'field_short_form';
  $handler->display->display_options['filters']['field_short_form_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_short_form_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_short_form_value']['expose']['autocomplete_dependent'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/cbf/collections';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Collections';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['cbf2019_collections_admin_view'] = array(
    t('Master'),
    t('Collections'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('This view allows you to find and edit Collections. Collections are thematic groupings of Articles (blogs and library episodes) and Terms (Third Space categories). <em>The current implementation of Collections works best if they contain no more than 12 library episodes, 6 blogs and ~3 Third Space categories. Further development work is required to support larger Collections (esp searching).</em>

<ol>
<li>You can <a href="/eform/submit/collection">create a new Collection</a></li>
<li>To be usable, the collection must have a subtitle, description and title image</ii>
<li>To find an existing collection, use the form below to narrow the search by name or description</ii>
<li>The listing of collections tells you how many Blogs, Episodes and Third Space Categories are in each collection. The listing also shows you some of the Description.</ii>
<li>To edit or delete a collection, click the Edit link and from there you can either edit and Save, or Delete the collection.</ii>
</ol>'),
    t('Entityform Submission'),
    t('- Choose an operation -'),
    t('Title'),
    t('Audience'),
    t('Promotional insert'),
    t('Title image'),
    t('Blogs'),
    t('Episodes'),
    t('Operations'),
    t('<a href="/collection/[entityform_id]">View</a>&nbsp;&nbsp;
<a href="/entityform/[entityform_id]/edit?destination=admin/cbf/collections">Edit</a>'),
    t('.'),
    t('Title contains'),
    t('Description contains'),
    t('Page'),
  );
  $export['cbf2019_collections_admin_view'] = $view;

  $view = new view();
  $view->name = 'cbf2019_collections_slider';
  $view->description = 'Embedded in other views. ';
  $view->tag = 'slider, autoplay';
  $view->base_table = 'entityform';
  $view->human_name = 'cbf2019 collections slider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'bg-gray-view-content';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = '0';
  $handler->display->display_options['style_options']['visible'] = '';
  $handler->display->display_options['style_options']['auto'] = '6';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entityqueue: Entityform Submission Queue */
  $handler->display->display_options['relationships']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['table'] = 'entityform';
  $handler->display->display_options['relationships']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['required'] = TRUE;
  $handler->display->display_options['relationships']['entityqueue_relationship']['limit'] = 1;
  $handler->display->display_options['relationships']['entityqueue_relationship']['queues'] = array(
    'cbf_home_page_slider' => 0,
    'cbf_plus_home_page_slider' => 0,
    'cbf_library_collections_slider' => 0,
    'cbf_plus_library_collections_slider' => 0,
  );
  /* Field: Field: Title image */
  $handler->display->display_options['fields']['field_title_image']['id'] = 'field_title_image';
  $handler->display->display_options['fields']['field_title_image']['table'] = 'field_data_field_title_image';
  $handler->display->display_options['fields']['field_title_image']['field'] = 'field_title_image';
  $handler->display->display_options['fields']['field_title_image']['label'] = '';
  $handler->display->display_options['fields']['field_title_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_title_image']['settings'] = array(
    'image_style' => 'portfolio_653x368',
    'image_link' => '',
  );
  /* Field: Field: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  /* Field: Field: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  /* Field: Entityform Submission: Entityform submission ID */
  $handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
  $handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['label'] = '';
  $handler->display->display_options['fields']['entityform_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['entityform_id']['alter']['text'] = 'More info';
  $handler->display->display_options['fields']['entityform_id']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['entityform_id']['alter']['path'] = 'collection/[entityform_id]';
  $handler->display->display_options['fields']['entityform_id']['alter']['link_class'] = 'btn btn-mod btn-border btn-medium btn-round';
  $handler->display->display_options['fields']['entityform_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entityform_id']['separator'] = '';
  /* Sort criterion: Entityqueue: Entityform Submission Queue Position */
  $handler->display->display_options['sorts']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['sorts']['entityqueue_relationship']['table'] = 'entityform';
  $handler->display->display_options['sorts']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'collection' => 'collection',
  );

  /* Display: Defaults */
  $handler = $view->new_display('block', 'Defaults', 'block');
  $handler->display->display_options['display_description'] = 'Don\'t display this block - for defaults only';

  /* Display: For general library */
  $handler = $view->new_display('block', 'For general library', 'block_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entityqueue: Entityform Submission Queue */
  $handler->display->display_options['relationships']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['table'] = 'entityform';
  $handler->display->display_options['relationships']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['required'] = TRUE;
  $handler->display->display_options['relationships']['entityqueue_relationship']['limit'] = 1;
  $handler->display->display_options['relationships']['entityqueue_relationship']['queues'] = array(
    'cbf_library_collections_slider' => 'cbf_library_collections_slider',
    'cbf_home_page_slider' => 0,
    'cbf_plus_home_page_slider' => 0,
    'cbf_plus_library_collections_slider' => 0,
  );

  /* Display: For general library for topic */
  $handler = $view->new_display('block', 'For general library for topic', 'block_4');
  $handler->display->display_options['display_description'] = 'This is a duplicate of \'For general library\' so block location can be different';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entityqueue: Entityform Submission Queue */
  $handler->display->display_options['relationships']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['table'] = 'entityform';
  $handler->display->display_options['relationships']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['required'] = TRUE;
  $handler->display->display_options['relationships']['entityqueue_relationship']['limit'] = 1;
  $handler->display->display_options['relationships']['entityqueue_relationship']['queues'] = array(
    'cbf_library_collections_slider' => 'cbf_library_collections_slider',
    'cbf_home_page_slider' => 0,
    'cbf_plus_home_page_slider' => 0,
    'cbf_plus_library_collections_slider' => 0,
  );

  /* Display: For Christian library */
  $handler = $view->new_display('block', 'For Christian library', 'block_2');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entityqueue: Entityform Submission Queue */
  $handler->display->display_options['relationships']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['table'] = 'entityform';
  $handler->display->display_options['relationships']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['required'] = TRUE;
  $handler->display->display_options['relationships']['entityqueue_relationship']['limit'] = 1;
  $handler->display->display_options['relationships']['entityqueue_relationship']['queues'] = array(
    'cbf_plus_library_collections_slider' => 'cbf_plus_library_collections_slider',
    'cbf_home_page_slider' => 0,
    'cbf_plus_home_page_slider' => 0,
    'cbf_library_collections_slider' => 0,
  );

  /* Display: For Christian library for topic */
  $handler = $view->new_display('block', 'For Christian library for topic', 'block_5');
  $handler->display->display_options['display_description'] = 'This is a duplicate of \'For Christian library\' so block location can be different';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entityqueue: Entityform Submission Queue */
  $handler->display->display_options['relationships']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['table'] = 'entityform';
  $handler->display->display_options['relationships']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['required'] = TRUE;
  $handler->display->display_options['relationships']['entityqueue_relationship']['limit'] = 1;
  $handler->display->display_options['relationships']['entityqueue_relationship']['queues'] = array(
    'cbf_plus_library_collections_slider' => 'cbf_plus_library_collections_slider',
    'cbf_home_page_slider' => 0,
    'cbf_plus_home_page_slider' => 0,
    'cbf_library_collections_slider' => 0,
  );

  /* Display: Referred by Node (embedded) */
  $handler = $view->new_display('block', 'Referred by Node (embedded)', 'block_3');
  $handler->display->display_options['display_description'] = 'Shows the Node\'s collections in the order specified';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_collections_node']['id'] = 'reverse_field_collections_node';
  $handler->display->display_options['relationships']['reverse_field_collections_node']['table'] = 'entityform';
  $handler->display->display_options['relationships']['reverse_field_collections_node']['field'] = 'reverse_field_collections_node';
  $handler->display->display_options['relationships']['reverse_field_collections_node']['label'] = 'Node';
  $handler->display->display_options['relationships']['reverse_field_collections_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_collections_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';

  /* Display: Refers to Blog */
  $handler = $view->new_display('block', 'Refers to Blog', 'block_6');
  $handler->display->display_options['display_description'] = 'Shows the collections that refer to this Blog';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_related_blogs_target_id']['id'] = 'field_related_blogs_target_id';
  $handler->display->display_options['relationships']['field_related_blogs_target_id']['table'] = 'field_data_field_related_blogs';
  $handler->display->display_options['relationships']['field_related_blogs_target_id']['field'] = 'field_related_blogs_target_id';
  $handler->display->display_options['relationships']['field_related_blogs_target_id']['label'] = 'Blog';
  $handler->display->display_options['relationships']['field_related_blogs_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_related_blogs_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';

  /* Display: Refers to Episode */
  $handler = $view->new_display('block', 'Refers to Episode', 'block_7');
  $handler->display->display_options['display_description'] = 'Shows the collections that refer to this Episode';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_related_episodes_target_id']['id'] = 'field_related_episodes_target_id';
  $handler->display->display_options['relationships']['field_related_episodes_target_id']['table'] = 'field_data_field_related_episodes';
  $handler->display->display_options['relationships']['field_related_episodes_target_id']['field'] = 'field_related_episodes_target_id';
  $handler->display->display_options['relationships']['field_related_episodes_target_id']['label'] = 'Episode';
  $handler->display->display_options['relationships']['field_related_episodes_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_related_episodes_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $translatables['cbf2019_collections_slider'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Entityform Submission Queue'),
    t('More info'),
    t('.'),
    t('Defaults'),
    t('Don\'t display this block - for defaults only'),
    t('For general library'),
    t('For general library for topic'),
    t('This is a duplicate of \'For general library\' so block location can be different'),
    t('For Christian library'),
    t('For Christian library for topic'),
    t('This is a duplicate of \'For Christian library\' so block location can be different'),
    t('Referred by Node (embedded)'),
    t('Shows the Node\'s collections in the order specified'),
    t('Node'),
    t('All'),
    t('Refers to Blog'),
    t('Shows the collections that refer to this Blog'),
    t('Blog'),
    t('Refers to Episode'),
    t('Shows the collections that refer to this Episode'),
    t('Episode'),
  );
  $export['cbf2019_collections_slider'] = $view;

  $view = new view();
  $view->name = 'cbf2019_content_details_table';
  $view->description = 'Embedded in other views. ';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'cbf2019 content details table';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: Details */
  $handler->display->display_options['fields']['field_details']['id'] = 'field_details';
  $handler->display->display_options['fields']['field_details']['table'] = 'field_data_field_details';
  $handler->display->display_options['fields']['field_details']['field'] = 'field_details';
  $handler->display->display_options['fields']['field_details']['label'] = '';
  $handler->display->display_options['fields']['field_details']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_details']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_details']['settings'] = array(
    'header_orientation' => 'Horizontal',
    'sticky_header' => 0,
    'striping' => 1,
    'sortable' => FALSE,
    'hide_header' => 0,
    'hide_cols_skip_head' => 0,
    'trim_trailing_cols' => 0,
    'trim_trailing_rows' => 0,
    'hide_empty_rows' => 0,
    'hide_empty_cols' => 0,
    'export_csv' => 0,
  );
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Field: Details (field_details) */
  $handler->display->display_options['filters']['field_details_value']['id'] = 'field_details_value';
  $handler->display->display_options['filters']['field_details_value']['table'] = 'field_data_field_details';
  $handler->display->display_options['filters']['field_details_value']['field'] = 'field_details_value';
  $handler->display->display_options['filters']['field_details_value']['operator'] = 'not empty';

  /* Display: Defaults */
  $handler = $view->new_display('block', 'Defaults', 'block');
  $handler->display->display_options['display_description'] = 'This display contains the defaults - don\'t use';

  /* Display: For non-Activity */
  $handler = $view->new_display('block', 'For non-Activity', 'block_1');
  $handler->display->display_options['display_description'] = 'Details table for a non-Activity';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Field: Details (field_details) */
  $handler->display->display_options['filters']['field_details_value']['id'] = 'field_details_value';
  $handler->display->display_options['filters']['field_details_value']['table'] = 'field_data_field_details';
  $handler->display->display_options['filters']['field_details_value']['field'] = 'field_details_value';
  $handler->display->display_options['filters']['field_details_value']['operator'] = 'not empty';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['operator'] = 'not in';
  $handler->display->display_options['filters']['type']['value'] = array(
    'activity' => 'activity',
  );

  /* Display: For Activity (embedded) */
  $handler = $view->new_display('block', 'For Activity (embedded)', 'block_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'container';
  $handler->display->display_options['display_description'] = 'Details table for an Activity';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Field: Details (field_details) */
  $handler->display->display_options['filters']['field_details_value']['id'] = 'field_details_value';
  $handler->display->display_options['filters']['field_details_value']['table'] = 'field_data_field_details';
  $handler->display->display_options['filters']['field_details_value']['field'] = 'field_details_value';
  $handler->display->display_options['filters']['field_details_value']['operator'] = 'not empty';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'activity' => 'activity',
  );
  $translatables['cbf2019_content_details_table'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Defaults'),
    t('This display contains the defaults - don\'t use'),
    t('For non-Activity'),
    t('Details table for a non-Activity'),
    t('All'),
    t('For Activity (embedded)'),
    t('Details table for an Activity'),
  );
  $export['cbf2019_content_details_table'] = $view;

  $view = new view();
  $view->name = 'cbf2019_content_highlight_slider';
  $view->description = 'Embedded in other views. Slider showing promotional material for nodes';
  $view->tag = 'slider, fieldwise, unique';
  $view->base_table = 'node';
  $view->human_name = 'cbf2019 content promotional slider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'bg-gray-view-content';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: Promotional videos */
  $handler->display->display_options['fields']['field_highlight_video']['id'] = 'field_highlight_video';
  $handler->display->display_options['fields']['field_highlight_video']['table'] = 'field_data_field_highlight_video';
  $handler->display->display_options['fields']['field_highlight_video']['field'] = 'field_highlight_video';
  $handler->display->display_options['fields']['field_highlight_video']['label'] = '';
  $handler->display->display_options['fields']['field_highlight_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlight_video']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_highlight_video']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_highlight_video']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_highlight_video']['multi_type'] = 'ul';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Field: Promotional videos (field_highlight_video:url) */
  $handler->display->display_options['filters']['field_highlight_video_url']['id'] = 'field_highlight_video_url';
  $handler->display->display_options['filters']['field_highlight_video_url']['table'] = 'field_data_field_highlight_video';
  $handler->display->display_options['filters']['field_highlight_video_url']['field'] = 'field_highlight_video_url';
  $handler->display->display_options['filters']['field_highlight_video_url']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_highlight_video_url']['group'] = 2;

  /* Display: Defaults */
  $handler = $view->new_display('block', 'Defaults', 'block');
  $handler->display->display_options['display_description'] = 'This display contains the defaults - don\'t use';

  /* Display: For Activity (embedded) */
  $handler = $view->new_display('block', 'For Activity (embedded)', 'block_2');
  $handler->display->display_options['display_description'] = 'Highlights for an Activity';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Field: Promotional videos (field_highlight_video:url) */
  $handler->display->display_options['filters']['field_highlight_video_url']['id'] = 'field_highlight_video_url';
  $handler->display->display_options['filters']['field_highlight_video_url']['table'] = 'field_data_field_highlight_video';
  $handler->display->display_options['filters']['field_highlight_video_url']['field'] = 'field_highlight_video_url';
  $handler->display->display_options['filters']['field_highlight_video_url']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_highlight_video_url']['group'] = 2;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'activity' => 'activity',
  );

  /* Display: For non-Activity */
  $handler = $view->new_display('block', 'For non-Activity', 'block_4');
  $handler->display->display_options['display_description'] = 'Slider for non-Activity nodes';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_in_activity_target_id']['id'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['field'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['label'] = 'Activity';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Promotional videos */
  $handler->display->display_options['fields']['field_highlight_video']['id'] = 'field_highlight_video';
  $handler->display->display_options['fields']['field_highlight_video']['table'] = 'field_data_field_highlight_video';
  $handler->display->display_options['fields']['field_highlight_video']['field'] = 'field_highlight_video';
  $handler->display->display_options['fields']['field_highlight_video']['label'] = '';
  $handler->display->display_options['fields']['field_highlight_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlight_video']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_highlight_video']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_highlight_video']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_highlight_video']['multi_type'] = 'ul';
  /* Field: Field: Promotional videos */
  $handler->display->display_options['fields']['field_highlight_video_1']['id'] = 'field_highlight_video_1';
  $handler->display->display_options['fields']['field_highlight_video_1']['table'] = 'field_data_field_highlight_video';
  $handler->display->display_options['fields']['field_highlight_video_1']['field'] = 'field_highlight_video';
  $handler->display->display_options['fields']['field_highlight_video_1']['relationship'] = 'field_in_activity_target_id';
  $handler->display->display_options['fields']['field_highlight_video_1']['label'] = '';
  $handler->display->display_options['fields']['field_highlight_video_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlight_video_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_highlight_video_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_highlight_video_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_highlight_video_1']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['operator'] = 'not in';
  $handler->display->display_options['filters']['type']['value'] = array(
    'activity' => 'activity',
    'course' => 'course',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Promotional videos (field_highlight_video:url) */
  $handler->display->display_options['filters']['field_highlight_video_url']['id'] = 'field_highlight_video_url';
  $handler->display->display_options['filters']['field_highlight_video_url']['table'] = 'field_data_field_highlight_video';
  $handler->display->display_options['filters']['field_highlight_video_url']['field'] = 'field_highlight_video_url';
  $handler->display->display_options['filters']['field_highlight_video_url']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_highlight_video_url']['group'] = 2;
  /* Filter criterion: Field: Promotional videos (field_highlight_video:url) */
  $handler->display->display_options['filters']['field_highlight_video_url_1']['id'] = 'field_highlight_video_url_1';
  $handler->display->display_options['filters']['field_highlight_video_url_1']['table'] = 'field_data_field_highlight_video';
  $handler->display->display_options['filters']['field_highlight_video_url_1']['field'] = 'field_highlight_video_url';
  $handler->display->display_options['filters']['field_highlight_video_url_1']['relationship'] = 'field_in_activity_target_id';
  $handler->display->display_options['filters']['field_highlight_video_url_1']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_highlight_video_url_1']['group'] = 2;
  $translatables['cbf2019_content_highlight_slider'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Defaults'),
    t('This display contains the defaults - don\'t use'),
    t('For Activity (embedded)'),
    t('Highlights for an Activity'),
    t('For non-Activity'),
    t('Slider for non-Activity nodes'),
    t('Activity'),
  );
  $export['cbf2019_content_highlight_slider'] = $view;

  $view = new view();
  $view->name = 'cbf2019_content_videos';
  $view->description = 'Shows the videos for a node in a pager';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'cbf2019 content videos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '';
  $handler->display->display_options['pager']['options']['tags']['last'] = '';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_video']['id'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video']['field'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['label'] = '';
  $handler->display->display_options['fields']['field_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_video']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_video']['delta_offset'] = '0';
  /* Sort criterion: Content: Video (field_video:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_video';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Defaults */
  $handler = $view->new_display('block', 'Defaults', 'block');
  $handler->display->display_options['display_description'] = 'Don\'t display this block - for defaults only';

  /* Display: For embedding in content */
  $handler = $view->new_display('block', 'For embedding in content', 'block_1');
  $handler->display->display_options['display_description'] = 'Don\'t display this block - for embedding only';
  $translatables['cbf2019_content_videos'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('‹ previous'),
    t('next ›'),
    t('All'),
    t('Defaults'),
    t('Don\'t display this block - for defaults only'),
    t('For embedding in content'),
    t('Don\'t display this block - for embedding only'),
  );
  $export['cbf2019_content_videos'] = $view;

  $view = new view();
  $view->name = 'cbf2019_courses';
  $view->description = 'A view of the Courses offered by City Bible Forum';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'cbf2019 courses';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '4';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '6';
  $handler->display->display_options['style_options']['columns_md'] = '4';
  $handler->display->display_options['style_options']['columns_lg'] = '4';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Field: Highlight */
  $handler->display->display_options['fields']['field_highlight']['id'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['table'] = 'field_data_field_highlight';
  $handler->display->display_options['fields']['field_highlight']['field'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['label'] = '';
  $handler->display->display_options['fields']['field_highlight']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlight']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_highlight']['settings'] = array(
    'image_style' => 'portfolio_653x368',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  /* Field: Content: Training pathway */
  $handler->display->display_options['fields']['field_training_pathway']['id'] = 'field_training_pathway';
  $handler->display->display_options['fields']['field_training_pathway']['table'] = 'field_data_field_training_pathway';
  $handler->display->display_options['fields']['field_training_pathway']['field'] = 'field_training_pathway';
  $handler->display->display_options['fields']['field_training_pathway']['label'] = '';
  $handler->display->display_options['fields']['field_training_pathway']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_training_pathway']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_training_pathway']['alter']['text'] = '<em>[field_training_pathway]</em>';
  $handler->display->display_options['fields']['field_training_pathway']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_training_pathway']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Activity */
  $handler->display->display_options['fields']['field_in_activity']['id'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['field'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['label'] = '';
  $handler->display->display_options['fields']['field_in_activity']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_in_activity']['alter']['text'] = '[field_training_pathway] | [field_in_activity]';
  $handler->display->display_options['fields']['field_in_activity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_in_activity']['empty'] = '[field_training_pathway]';
  $handler->display->display_options['fields']['field_in_activity']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  /* Field: Field: With */
  $handler->display->display_options['fields']['field_with']['id'] = 'field_with';
  $handler->display->display_options['fields']['field_with']['table'] = 'field_data_field_with';
  $handler->display->display_options['fields']['field_with']['field'] = 'field_with';
  $handler->display->display_options['fields']['field_with']['label'] = '';
  $handler->display->display_options['fields']['field_with']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_with']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_with']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Domain Access: Domain ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'domain_access';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'current_domain';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'course' => 'course',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
    1957 => '1957',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['group'] = 1;
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';

  /* Display: Defaults */
  $handler = $view->new_display('block', 'Defaults', 'block');
  $handler->display->display_options['display_description'] = 'This display contains the defaults - don\'t use';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Courses';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'search';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => '2',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'field_training_pathway_tid' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => 'All',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['total_pages'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Summary';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Courses';
  $handler->display->display_options['header']['area']['format'] = '3';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'course' => 'course',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
    1957 => '1957',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['group'] = 1;
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';
  /* Filter criterion: Content: Training pathway (field_training_pathway) */
  $handler->display->display_options['filters']['field_training_pathway_tid']['id'] = 'field_training_pathway_tid';
  $handler->display->display_options['filters']['field_training_pathway_tid']['table'] = 'field_data_field_training_pathway';
  $handler->display->display_options['filters']['field_training_pathway_tid']['field'] = 'field_training_pathway_tid';
  $handler->display->display_options['filters']['field_training_pathway_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_training_pathway_tid']['expose']['operator_id'] = 'field_training_pathway_tid_op';
  $handler->display->display_options['filters']['field_training_pathway_tid']['expose']['operator'] = 'field_training_pathway_tid_op';
  $handler->display->display_options['filters']['field_training_pathway_tid']['expose']['identifier'] = 'field_training_pathway_tid';
  $handler->display->display_options['filters']['field_training_pathway_tid']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_training_pathway_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_training_pathway_tid']['vocabulary'] = 'training_pathway';
  $handler->display->display_options['path'] = 'courses';

  /* Display: Recent courses */
  $handler = $view->new_display('block', 'Recent courses', 'block_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More courses';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'courses';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<span id="cbf2019-courses-view-header">Recent courses</span>';
  $handler->display->display_options['header']['area']['format'] = '2';
  $translatables['cbf2019_courses'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<em>[field_training_pathway]</em>'),
    t('[field_training_pathway] | [field_in_activity]'),
    t('[field_training_pathway]'),
    t('All'),
    t('Defaults'),
    t('This display contains the defaults - don\'t use'),
    t('Page'),
    t('Courses'),
    t('search'),
    t('Select any filter and click on Apply to see results'),
    t('Advanced options'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Summary'),
    t('Recent courses'),
    t('More courses'),
    t('<span id="cbf2019-courses-view-header">Recent courses</span>'),
  );
  $export['cbf2019_courses'] = $view;

  $view = new view();
  $view->name = 'cbf2019_domain';
  $view->description = 'Domain-related view displays';
  $view->tag = 'default';
  $view->base_table = 'domain';
  $view->human_name = 'cbf2019 domain';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Domains: Domain ID */
  $handler->display->display_options['fields']['domain_id']['id'] = 'domain_id';
  $handler->display->display_options['fields']['domain_id']['table'] = 'domain';
  $handler->display->display_options['fields']['domain_id']['field'] = 'domain_id';
  $handler->display->display_options['fields']['domain_id']['label'] = '';
  $handler->display->display_options['fields']['domain_id']['element_label_colon'] = FALSE;
  /* Field: Domains: Machine name */
  $handler->display->display_options['fields']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['fields']['machine_name']['table'] = 'domain';
  $handler->display->display_options['fields']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['fields']['machine_name']['label'] = '';
  $handler->display->display_options['fields']['machine_name']['element_label_colon'] = FALSE;
  /* Contextual filter: Domain Access: Domain ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'domain_access';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'current_domain';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Domains: Valid */
  $handler->display->display_options['filters']['valid']['id'] = 'valid';
  $handler->display->display_options['filters']['valid']['table'] = 'domain';
  $handler->display->display_options['filters']['valid']['field'] = 'valid';
  $handler->display->display_options['filters']['valid']['value'] = 1;
  $handler->display->display_options['filters']['valid']['group'] = 1;
  $handler->display->display_options['filters']['valid']['expose']['operator'] = FALSE;

  /* Display: Defaults */
  $handler = $view->new_display('block', 'Defaults', 'block');
  $handler->display->display_options['display_description'] = 'Don\'t display this block - for defaults only';

  /* Display: Footer logo */
  $handler = $view->new_display('block', 'Footer logo', 'block_1');
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'time_per_domain';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Domains: Domain ID */
  $handler->display->display_options['fields']['domain_id']['id'] = 'domain_id';
  $handler->display->display_options['fields']['domain_id']['table'] = 'domain';
  $handler->display->display_options['fields']['domain_id']['field'] = 'domain_id';
  $handler->display->display_options['fields']['domain_id']['label'] = '';
  $handler->display->display_options['fields']['domain_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['domain_id']['element_label_colon'] = FALSE;
  /* Field: Domains: Machine name */
  $handler->display->display_options['fields']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['fields']['machine_name']['table'] = 'domain';
  $handler->display->display_options['fields']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['fields']['machine_name']['label'] = '';
  $handler->display->display_options['fields']['machine_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['machine_name']['alter']['text'] = '<div class="footer-logo">
  <a href="/" class="embed-responsive embed-responsive-16by9">
    <img src="/sites/all/themes/cbf2019/images/[machine_name]/brand/logo-black.png" alt="Our logo">
  </a>
</div>
<span class="footer-social-links">
  <a href="/domain/[machine_name]/facebook" class=""><i class=" fab fa-facebook-f"></i></a>
</span>
<span class="footer-social-links">
  <a href="/domain/[machine_name]/instagram" class=""><i class=" fab fa-instagram"></i></a>
</span>
<span class="footer-social-links">
  <a href="/domain/[machine_name]/youtube" class=""><i class=" fab fa-youtube"></i></a>
</span>
<span class="footer-social-links">
  <a href="/domain/[machine_name]/linkedin" class=""><i class=" fab fa-linkedin-in"></i></a>
</span>
';
  $handler->display->display_options['fields']['machine_name']['element_label_colon'] = FALSE;

  /* Display: Email signature */
  $handler = $view->new_display('page', 'Email signature', 'email_signature');
  $handler->display->display_options['display_description'] = 'Generate a template email signature for staff';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    7 => '7',
    4 => '4',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Domain Access: Domain ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'domain_access';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'current_domain';
  $handler->display->display_options['arguments']['gid']['default_argument_skip_url'] = TRUE;
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'domain/email-signature';
  $translatables['cbf2019_domain'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Defaults'),
    t('Don\'t display this block - for defaults only'),
    t('Footer logo'),
    t('<div class="footer-logo">
  <a href="/" class="embed-responsive embed-responsive-16by9">
    <img src="/sites/all/themes/cbf2019/images/[machine_name]/brand/logo-black.png" alt="Our logo">
  </a>
</div>
<span class="footer-social-links">
  <a href="/domain/[machine_name]/facebook" class=""><i class=" fab fa-facebook-f"></i></a>
</span>
<span class="footer-social-links">
  <a href="/domain/[machine_name]/instagram" class=""><i class=" fab fa-instagram"></i></a>
</span>
<span class="footer-social-links">
  <a href="/domain/[machine_name]/youtube" class=""><i class=" fab fa-youtube"></i></a>
</span>
<span class="footer-social-links">
  <a href="/domain/[machine_name]/linkedin" class=""><i class=" fab fa-linkedin-in"></i></a>
</span>
'),
    t('Email signature'),
    t('Generate a template email signature for staff'),
  );
  $export['cbf2019_domain'] = $view;

  $view = new view();
  $view->name = 'cbf2019_empty_pages';
  $view->description = 'Empty pages for different contexts - home, whats-on, networks, about-us';
  $view->tag = 'default';
  $view->base_table = 'domain';
  $view->human_name = 'cbf2019 empty pages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time_per_domain';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Domains: Domain ID */
  $handler->display->display_options['fields']['domain_id']['id'] = 'domain_id';
  $handler->display->display_options['fields']['domain_id']['table'] = 'domain';
  $handler->display->display_options['fields']['domain_id']['field'] = 'domain_id';
  /* Contextual filter: Domain zero */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'domain_access';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['ui_name'] = 'Domain zero';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['gid']['default_argument_options']['argument'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Domains: Valid */
  $handler->display->display_options['filters']['valid']['id'] = 'valid';
  $handler->display->display_options['filters']['valid']['table'] = 'domain';
  $handler->display->display_options['filters']['valid']['field'] = 'valid';
  $handler->display->display_options['filters']['valid']['value'] = 1;
  $handler->display->display_options['filters']['valid']['group'] = 1;
  $handler->display->display_options['filters']['valid']['expose']['operator'] = FALSE;

  /* Display: Defaults */
  $handler = $view->new_display('page', 'Defaults', 'page');
  $handler->display->display_options['display_description'] = 'This display contains the defaults - don\'t use';
  $handler->display->display_options['path'] = 'empty-page';

  /* Display: Home */
  $handler = $view->new_display('page', 'Home', 'page_1');
  $handler->display->display_options['path'] = 'home';

  /* Display: What's on */
  $handler = $view->new_display('page', 'What\'s on', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'What\'s on';
  $handler->display->display_options['path'] = 'whats-on';

  /* Display: Networks */
  $handler = $view->new_display('page', 'Networks', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Networks';
  $handler->display->display_options['path'] = 'networks';

  /* Display: About us */
  $handler = $view->new_display('page', 'About us', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'About us';
  $handler->display->display_options['path'] = 'about-us';
  $translatables['cbf2019_empty_pages'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Domain ID'),
    t('All'),
    t('Defaults'),
    t('This display contains the defaults - don\'t use'),
    t('Home'),
    t('What\'s on'),
    t('Networks'),
    t('About us'),
  );
  $export['cbf2019_empty_pages'] = $view;

  $view = new view();
  $view->name = 'cbf2019_entityform_promotional_slider';
  $view->description = 'Slider showing promotional material for entityforms';
  $view->tag = 'slider, fieldwise, unique';
  $view->base_table = 'entityform';
  $view->human_name = 'cbf2019 entityform promotional slider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'bg-gray-view-content';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = '0';
  $handler->display->display_options['style_options']['visible'] = '';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: Promotional videos */
  $handler->display->display_options['fields']['field_highlight_video']['id'] = 'field_highlight_video';
  $handler->display->display_options['fields']['field_highlight_video']['table'] = 'field_data_field_highlight_video';
  $handler->display->display_options['fields']['field_highlight_video']['field'] = 'field_highlight_video';
  $handler->display->display_options['fields']['field_highlight_video']['label'] = '';
  $handler->display->display_options['fields']['field_highlight_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlight_video']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_highlight_video']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_highlight_video']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_highlight_video']['multi_type'] = 'ul';
  /* Contextual filter: Entityform Submission: Entityform submission ID */
  $handler->display->display_options['arguments']['entityform_id']['id'] = 'entityform_id';
  $handler->display->display_options['arguments']['entityform_id']['table'] = 'entityform';
  $handler->display->display_options['arguments']['entityform_id']['field'] = 'entityform_id';
  $handler->display->display_options['arguments']['entityform_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['entityform_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['entityform_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['entityform_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['entityform_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['entityform_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['entityform_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['entityform_id']['validate']['type'] = 'numeric';
  /* Filter criterion: Field: Promotional videos (field_highlight_video:url) */
  $handler->display->display_options['filters']['field_highlight_video_url']['id'] = 'field_highlight_video_url';
  $handler->display->display_options['filters']['field_highlight_video_url']['table'] = 'field_data_field_highlight_video';
  $handler->display->display_options['filters']['field_highlight_video_url']['field'] = 'field_highlight_video_url';
  $handler->display->display_options['filters']['field_highlight_video_url']['operator'] = 'not empty';

  /* Display: For all types */
  $handler = $view->new_display('block', 'For all types', 'block');
  $translatables['cbf2019_entityform_promotional_slider'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('For all types'),
  );
  $export['cbf2019_entityform_promotional_slider'] = $view;

  $view = new view();
  $view->name = 'cbf2019_event_location';
  $view->description = 'Location for an EventBrite event';
  $view->tag = 'default';
  $view->base_table = 'location';
  $view->human_name = 'cbf2019 event location';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Location: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'location';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name]<br/>';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Location: Street */
  $handler->display->display_options['fields']['street']['id'] = 'street';
  $handler->display->display_options['fields']['street']['table'] = 'location';
  $handler->display->display_options['fields']['street']['field'] = 'street';
  $handler->display->display_options['fields']['street']['label'] = '';
  $handler->display->display_options['fields']['street']['exclude'] = TRUE;
  $handler->display->display_options['fields']['street']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['street']['alter']['text'] = '[street],';
  $handler->display->display_options['fields']['street']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['street']['style'] = 'street';
  /* Field: Location: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['label'] = '';
  $handler->display->display_options['fields']['city']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['city']['alter']['text'] = '[name] [street] [city]';
  $handler->display->display_options['fields']['city']['element_label_colon'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'brite_event' => 'brite_event',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['cbf2019_event_location'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('[name]<br/>'),
    t('[street],'),
    t('[name] [street] [city]'),
    t('All'),
    t('Block'),
  );
  $export['cbf2019_event_location'] = $view;

  $view = new view();
  $view->name = 'cbf2019_home_page_slider';
  $view->description = 'Sliders showing promoted content on the Third Space and City Bible Forum home pages';
  $view->tag = 'default';
  $view->base_table = 'entityform';
  $view->human_name = 'cbf2019 home page slider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time_per_domain';
  $handler->display->display_options['cache']['results_lifespan'] = '1800';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '1800';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entityqueue: Entityform Submission Queue */
  $handler->display->display_options['relationships']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['table'] = 'entityform';
  $handler->display->display_options['relationships']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['required'] = TRUE;
  $handler->display->display_options['relationships']['entityqueue_relationship']['limit'] = 0;
  $handler->display->display_options['relationships']['entityqueue_relationship']['queues'] = array(
    'cbf_home_page_slider' => 0,
    'cbf_plus_home_page_slider' => 0,
  );
  /* Field: Field: Title image */
  $handler->display->display_options['fields']['field_title_image']['id'] = 'field_title_image';
  $handler->display->display_options['fields']['field_title_image']['table'] = 'field_data_field_title_image';
  $handler->display->display_options['fields']['field_title_image']['field'] = 'field_title_image';
  $handler->display->display_options['fields']['field_title_image']['label'] = '';
  $handler->display->display_options['fields']['field_title_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_title_image']['settings'] = array(
    'image_style' => 'title',
    'image_link' => '',
  );
  /* Field: Field: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  /* Field: Field: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  /* Field: Field: Order URL */
  $handler->display->display_options['fields']['field_order_url']['id'] = 'field_order_url';
  $handler->display->display_options['fields']['field_order_url']['table'] = 'field_data_field_order_url';
  $handler->display->display_options['fields']['field_order_url']['field'] = 'field_order_url';
  $handler->display->display_options['fields']['field_order_url']['label'] = '';
  $handler->display->display_options['fields']['field_order_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_order_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_order_url']['type'] = 'link_plain';
  /* Sort criterion: Entityqueue: Entityform Submission Queue Position */
  $handler->display->display_options['sorts']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['sorts']['entityqueue_relationship']['table'] = 'entityform';
  $handler->display->display_options['sorts']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'home_page_slider' => 'home_page_slider',
  );

  /* Display: Defaults */
  $handler = $view->new_display('block', 'Defaults', 'block');
  $handler->display->display_options['display_description'] = 'Don\'t display this block - for defaults only';

  /* Display: For Third Space home page */
  $handler = $view->new_display('block', 'For Third Space home page', 'block_1');
  $handler->display->display_options['display_description'] = 'General audience';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entityqueue: Entityform Submission Queue */
  $handler->display->display_options['relationships']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['table'] = 'entityform';
  $handler->display->display_options['relationships']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['required'] = TRUE;
  $handler->display->display_options['relationships']['entityqueue_relationship']['limit'] = 1;
  $handler->display->display_options['relationships']['entityqueue_relationship']['queues'] = array(
    'cbf_home_page_slider' => 'cbf_home_page_slider',
    'cbf_plus_home_page_slider' => 0,
  );

  /* Display: For City Bible Forum home page */
  $handler = $view->new_display('block', 'For City Bible Forum home page', 'block_2');
  $handler->display->display_options['display_description'] = 'Christian audience';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entityqueue: Entityform Submission Queue */
  $handler->display->display_options['relationships']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['table'] = 'entityform';
  $handler->display->display_options['relationships']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['required'] = TRUE;
  $handler->display->display_options['relationships']['entityqueue_relationship']['limit'] = 1;
  $handler->display->display_options['relationships']['entityqueue_relationship']['queues'] = array(
    'cbf_plus_home_page_slider' => 'cbf_plus_home_page_slider',
    'cbf_home_page_slider' => 0,
    'cbf_library_collections_slider' => 0,
    'cbf_plus_library_collections_slider' => 0,
  );
  $translatables['cbf2019_home_page_slider'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Entityform Submission Queue'),
    t('Defaults'),
    t('Don\'t display this block - for defaults only'),
    t('For Third Space home page'),
    t('General audience'),
    t('For City Bible Forum home page'),
    t('Christian audience'),
  );
  $export['cbf2019_home_page_slider'] = $view;

  $view = new view();
  $view->name = 'cbf2019_hubspot_form';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'paragraphs_item';
  $view->human_name = 'cbf2019 HubSpot form';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Paragraphs item: Entity with the HubSpot form (field_hubspot_form) */
  $handler->display->display_options['relationships']['field_hubspot_form_node']['id'] = 'field_hubspot_form_node';
  $handler->display->display_options['relationships']['field_hubspot_form_node']['table'] = 'paragraphs_item';
  $handler->display->display_options['relationships']['field_hubspot_form_node']['field'] = 'field_hubspot_form_node';
  $handler->display->display_options['relationships']['field_hubspot_form_node']['label'] = 'Article';
  $handler->display->display_options['relationships']['field_hubspot_form_node']['required'] = TRUE;
  /* Field: Form type */
  $handler->display->display_options['fields']['field_hubspot_form_type']['id'] = 'field_hubspot_form_type';
  $handler->display->display_options['fields']['field_hubspot_form_type']['table'] = 'field_data_field_hubspot_form_type';
  $handler->display->display_options['fields']['field_hubspot_form_type']['field'] = 'field_hubspot_form_type';
  $handler->display->display_options['fields']['field_hubspot_form_type']['ui_name'] = 'Form type';
  $handler->display->display_options['fields']['field_hubspot_form_type']['label'] = '';
  $handler->display->display_options['fields']['field_hubspot_form_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hubspot_form_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hubspot_form_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Form Id */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['ui_name'] = 'Form Id';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title']['type'] = 'text_plain';
  /* Field: Paragraphs item: Paragraphs item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'paragraphs_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['label'] = '';
  $handler->display->display_options['fields']['item_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['item_id']['alter']['text'] = '<cbf-hubspot-script/>';
  $handler->display->display_options['fields']['item_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['item_id']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_hubspot_form_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Paragraphs item: Bundle */
  $handler->display->display_options['filters']['bundle']['id'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['table'] = 'paragraphs_item';
  $handler->display->display_options['filters']['bundle']['field'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['value'] = array(
    'hubspot_form' => 'hubspot_form',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['cbf2019_hubspot_form'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Article'),
    t('<cbf-hubspot-script/>'),
    t('.'),
    t('All'),
    t('Block'),
  );
  $export['cbf2019_hubspot_form'] = $view;

  $view = new view();
  $view->name = 'cbf2019_local_activities';
  $view->description = 'This view is superceded by the \'cbf2019 what\'s on activities\' view';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'cbf2019 local activities';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => '2',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'taxonomy_vocabulary_1_tid' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => 'All',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Highlight */
  $handler->display->display_options['fields']['field_highlight']['id'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['table'] = 'field_data_field_highlight';
  $handler->display->display_options['fields']['field_highlight']['field'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['label'] = '';
  $handler->display->display_options['fields']['field_highlight']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_highlight']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlight']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_highlight']['settings'] = array(
    'image_style' => 'portfolio_653x368',
    'image_link' => 'content',
  );
  /* Field: Field: Title image */
  $handler->display->display_options['fields']['field_title_image']['id'] = 'field_title_image';
  $handler->display->display_options['fields']['field_title_image']['table'] = 'field_data_field_title_image';
  $handler->display->display_options['fields']['field_title_image']['field'] = 'field_title_image';
  $handler->display->display_options['fields']['field_title_image']['label'] = '';
  $handler->display->display_options['fields']['field_title_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title_image']['empty'] = '[field_highlight]';
  $handler->display->display_options['fields']['field_title_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_title_image']['settings'] = array(
    'image_style' => 'portfolio_653x368',
    'image_link' => '',
  );
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_logo']['alter']['text'] = '<div class="overlaid-image">[field_title_image]</div><div class="image-overlay">###[field_logo]###</div>';
  $handler->display->display_options['fields']['field_logo']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_logo']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['element_wrapper_class'] = 'image-plus-fixed-overlay';
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['type'] = 'file_url_plain';
  /* Field: Field: Ministry Centre */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['empty'] = 'All cities';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Regularity */
  $handler->display->display_options['fields']['field_regularity']['id'] = 'field_regularity';
  $handler->display->display_options['fields']['field_regularity']['table'] = 'field_data_field_regularity';
  $handler->display->display_options['fields']['field_regularity']['field'] = 'field_regularity';
  $handler->display->display_options['fields']['field_regularity']['label'] = '';
  $handler->display->display_options['fields']['field_regularity']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_regularity']['alter']['text'] = '[taxonomy_vocabulary_1] | [field_regularity]';
  $handler->display->display_options['fields']['field_regularity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_regularity']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Time of day */
  $handler->display->display_options['fields']['field_time_of_day']['id'] = 'field_time_of_day';
  $handler->display->display_options['fields']['field_time_of_day']['table'] = 'field_data_field_time_of_day';
  $handler->display->display_options['fields']['field_time_of_day']['field'] = 'field_time_of_day';
  $handler->display->display_options['fields']['field_time_of_day']['label'] = '';
  $handler->display->display_options['fields']['field_time_of_day']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_of_day']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Field: Weight (field_weight) */
  $handler->display->display_options['sorts']['field_weight_value']['id'] = 'field_weight_value';
  $handler->display->display_options['sorts']['field_weight_value']['table'] = 'field_data_field_weight';
  $handler->display->display_options['sorts']['field_weight_value']['field'] = 'field_weight_value';
  $handler->display->display_options['sorts']['field_weight_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Domain Access: Domain ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'domain_access';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'current_domain';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'activity' => 'activity',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Ministry Centre (taxonomy_vocabulary_1) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['id'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['field'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['group'] = 1;
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_1_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['expose']['operator'] = 'taxonomy_vocabulary_1_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['expose']['identifier'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    3 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['vocabulary'] = 'vocabulary_1';
  /* Filter criterion: Content: Activity category (field_activity_category) */
  $handler->display->display_options['filters']['field_activity_category_tid']['id'] = 'field_activity_category_tid';
  $handler->display->display_options['filters']['field_activity_category_tid']['table'] = 'field_data_field_activity_category';
  $handler->display->display_options['filters']['field_activity_category_tid']['field'] = 'field_activity_category_tid';
  $handler->display->display_options['filters']['field_activity_category_tid']['value'] = array(
    1182 => '1182',
    1183 => '1183',
  );
  $handler->display->display_options['filters']['field_activity_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_activity_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_activity_category_tid']['vocabulary'] = 'activity_category';
  /* Filter criterion: Field: Weight (field_weight) */
  $handler->display->display_options['filters']['field_weight_value']['id'] = 'field_weight_value';
  $handler->display->display_options['filters']['field_weight_value']['table'] = 'field_data_field_weight';
  $handler->display->display_options['filters']['field_weight_value']['field'] = 'field_weight_value';
  $handler->display->display_options['filters']['field_weight_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_weight_value']['value']['value'] = '0';
  $handler->display->display_options['filters']['field_weight_value']['group'] = 1;
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
    1957 => '1957',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['enabled'] = FALSE;
  $translatables['cbf2019_local_activities'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Select any filter and click on Apply to see results'),
    t('Advanced options'),
    t('All'),
    t('[field_highlight]'),
    t('<div class="overlaid-image">[field_title_image]</div><div class="image-overlay">###[field_logo]###</div>'),
    t('All cities'),
    t('[taxonomy_vocabulary_1] | [field_regularity]'),
    t('Block'),
  );
  $export['cbf2019_local_activities'] = $view;

  $view = new view();
  $view->name = 'cbf2019_local_offices';
  $view->description = 'The offices of the City Bible Forum';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'cbf2019 local offices';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'office-view';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => '2',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'field_office_tid' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Find us';
  $handler->display->display_options['header']['area']['format'] = '2';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '[longitude]';
  $handler->display->display_options['footer']['area']['format'] = 'raw_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  /* Field: Phone icon */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Phone icon';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<i class="fal fa-fw fa-phone"></i>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'view-icon';
  /* Field: Location: Phone */
  $handler->display->display_options['fields']['phone']['id'] = 'phone';
  $handler->display->display_options['fields']['phone']['table'] = 'location_phone';
  $handler->display->display_options['fields']['phone']['field'] = 'phone';
  $handler->display->display_options['fields']['phone']['label'] = 'Call us';
  $handler->display->display_options['fields']['phone']['element_label_colon'] = FALSE;
  /* Field: Map icon */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Map icon';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<i class="fal fa-fw fa-map-marker-alt"></i>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_class'] = 'view-icon';
  /* Field: Location: Additional */
  $handler->display->display_options['fields']['additional']['id'] = 'additional';
  $handler->display->display_options['fields']['additional']['table'] = 'location';
  $handler->display->display_options['fields']['additional']['field'] = 'additional';
  $handler->display->display_options['fields']['additional']['label'] = '';
  $handler->display->display_options['fields']['additional']['exclude'] = TRUE;
  $handler->display->display_options['fields']['additional']['element_label_colon'] = FALSE;
  /* Field: Location: Street */
  $handler->display->display_options['fields']['street']['id'] = 'street';
  $handler->display->display_options['fields']['street']['table'] = 'location';
  $handler->display->display_options['fields']['street']['field'] = 'street';
  $handler->display->display_options['fields']['street']['label'] = '';
  $handler->display->display_options['fields']['street']['exclude'] = TRUE;
  $handler->display->display_options['fields']['street']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['street']['style'] = 'street';
  /* Field: Location: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['label'] = '';
  $handler->display->display_options['fields']['city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['city']['element_label_colon'] = FALSE;
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province']['id'] = 'province';
  $handler->display->display_options['fields']['province']['table'] = 'location';
  $handler->display->display_options['fields']['province']['field'] = 'province';
  $handler->display->display_options['fields']['province']['label'] = 'Address';
  $handler->display->display_options['fields']['province']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['province']['alter']['text'] = '[additional]<div>[street]</div><div>[city]</div>';
  $handler->display->display_options['fields']['province']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['province']['style'] = 'code';
  /* Field: Location: Latitude */
  $handler->display->display_options['fields']['latitude']['id'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['table'] = 'location';
  $handler->display->display_options['fields']['latitude']['field'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['label'] = '';
  $handler->display->display_options['fields']['latitude']['exclude'] = TRUE;
  $handler->display->display_options['fields']['latitude']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['latitude']['style'] = 'dd';
  /* Field: Longitude rewritten into map HTML */
  $handler->display->display_options['fields']['longitude']['id'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['table'] = 'location';
  $handler->display->display_options['fields']['longitude']['field'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['ui_name'] = 'Longitude rewritten into map HTML';
  $handler->display->display_options['fields']['longitude']['label'] = '';
  $handler->display->display_options['fields']['longitude']['exclude'] = TRUE;
  $handler->display->display_options['fields']['longitude']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['longitude']['alter']['text'] = '<div class = "clearfix">
  <div  class = "google-map">
    <div class="map-canvas-view"
      data-zoom="14"
      data-address="[street], [city], Australia"
      data-type="roadmap"
      data-icon="/sites/all/themes/cbf2019/images/!1/map/marker.png">
    </div>
  </div>
</div>';
  $handler->display->display_options['fields']['longitude']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['longitude']['style'] = 'dd';
  /* Field: Postal icon */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Postal icon';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<i class="fal fa-fw fa-envelope-open-text"></i>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_class'] = 'view-icon';
  /* Field: Postal address */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['ui_name'] = 'Postal address';
  $handler->display->display_options['fields']['field_description']['label'] = 'Post';
  $handler->display->display_options['fields']['field_description']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  /* Field: Email icon */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'Email icon';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '<i class="fal fa-fw fa-at"></i>';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_class'] = 'view-icon';
  /* Field: Email address */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['ui_name'] = 'Email address';
  $handler->display->display_options['fields']['field_subtitle']['label'] = 'Address';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['element_wrapper_class'] = 'views-field-email';
  /* Sort criterion: Field: Weight (field_weight) */
  $handler->display->display_options['sorts']['field_weight_value']['id'] = 'field_weight_value';
  $handler->display->display_options['sorts']['field_weight_value']['table'] = 'field_data_field_weight';
  $handler->display->display_options['sorts']['field_weight_value']['field'] = 'field_weight_value';
  $handler->display->display_options['sorts']['field_weight_value']['order'] = 'DESC';
  /* Contextual filter: Domain machine name */
  $handler->display->display_options['arguments']['null']['id'] = 'null';
  $handler->display->display_options['arguments']['null']['table'] = 'views';
  $handler->display->display_options['arguments']['null']['field'] = 'null';
  $handler->display->display_options['arguments']['null']['ui_name'] = 'Domain machine name';
  $handler->display->display_options['arguments']['null']['default_action'] = 'default';
  $handler->display->display_options['arguments']['null']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['null']['default_argument_options']['code'] = 'return domain_get_domain()[\'machine_name\'];';
  $handler->display->display_options['arguments']['null']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['null']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'office' => 'office',
  );
  /* Filter criterion: Content: Office (field_office) */
  $handler->display->display_options['filters']['field_office_tid']['id'] = 'field_office_tid';
  $handler->display->display_options['filters']['field_office_tid']['table'] = 'field_data_field_office';
  $handler->display->display_options['filters']['field_office_tid']['field'] = 'field_office_tid';
  $handler->display->display_options['filters']['field_office_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_office_tid']['expose']['operator_id'] = 'field_office_tid_op';
  $handler->display->display_options['filters']['field_office_tid']['expose']['operator'] = 'field_office_tid_op';
  $handler->display->display_options['filters']['field_office_tid']['expose']['identifier'] = 'field_office_tid';
  $handler->display->display_options['filters']['field_office_tid']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_office_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_office_tid']['vocabulary'] = 'office';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['cbf2019_local_offices'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Select any filter and click on Apply to see results'),
    t('Advanced options'),
    t('Find us'),
    t('[longitude]'),
    t('<i class="fal fa-fw fa-phone"></i>'),
    t('Call us'),
    t('<i class="fal fa-fw fa-map-marker-alt"></i>'),
    t('Address'),
    t('[additional]<div>[street]</div><div>[city]</div>'),
    t('<div class = "clearfix">
  <div  class = "google-map">
    <div class="map-canvas-view"
      data-zoom="14"
      data-address="[street], [city], Australia"
      data-type="roadmap"
      data-icon="/sites/all/themes/cbf2019/images/!1/map/marker.png">
    </div>
  </div>
</div>'),
    t('<i class="fal fa-fw fa-envelope-open-text"></i>'),
    t('Post'),
    t('<i class="fal fa-fw fa-at"></i>'),
    t('All'),
    t('Block'),
  );
  $export['cbf2019_local_offices'] = $view;

  $view = new view();
  $view->name = 'cbf2019_mappable';
  $view->description = 'Embedded in other views. ';
  $view->tag = 'default';
  $view->base_table = 'entityform';
  $view->human_name = 'cbf2019 mappable';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'map-canvas-view-multiple';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time_per_domain';
  $handler->display->display_options['cache']['results_lifespan'] = '1800';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '1800';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entityform Submission: Map location (field_map_location) */
  $handler->display->display_options['relationships']['field_map_location_lid']['id'] = 'field_map_location_lid';
  $handler->display->display_options['relationships']['field_map_location_lid']['table'] = 'field_data_field_map_location';
  $handler->display->display_options['relationships']['field_map_location_lid']['field'] = 'field_map_location_lid';
  $handler->display->display_options['relationships']['field_map_location_lid']['label'] = 'Location';
  $handler->display->display_options['relationships']['field_map_location_lid']['required'] = TRUE;
  /* Field: Location: Latitude */
  $handler->display->display_options['fields']['latitude']['id'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['table'] = 'location';
  $handler->display->display_options['fields']['latitude']['field'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['relationship'] = 'field_map_location_lid';
  $handler->display->display_options['fields']['latitude']['label'] = '';
  $handler->display->display_options['fields']['latitude']['exclude'] = TRUE;
  $handler->display->display_options['fields']['latitude']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['latitude']['style'] = 'dd';
  /* Field: Location: Longitude */
  $handler->display->display_options['fields']['longitude']['id'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['table'] = 'location';
  $handler->display->display_options['fields']['longitude']['field'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['relationship'] = 'field_map_location_lid';
  $handler->display->display_options['fields']['longitude']['label'] = '';
  $handler->display->display_options['fields']['longitude']['exclude'] = TRUE;
  $handler->display->display_options['fields']['longitude']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['longitude']['style'] = 'dd';
  /* Field: Field: Activity */
  $handler->display->display_options['fields']['field_in_activity']['id'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['field'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['label'] = '';
  $handler->display->display_options['fields']['field_in_activity']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_in_activity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_in_activity']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  /* Field: Field: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  /* Field: Location: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'location';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_map_location_lid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Location: Street */
  $handler->display->display_options['fields']['street']['id'] = 'street';
  $handler->display->display_options['fields']['street']['table'] = 'location';
  $handler->display->display_options['fields']['street']['field'] = 'street';
  $handler->display->display_options['fields']['street']['relationship'] = 'field_map_location_lid';
  $handler->display->display_options['fields']['street']['label'] = '';
  $handler->display->display_options['fields']['street']['exclude'] = TRUE;
  $handler->display->display_options['fields']['street']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['street']['style'] = 'street';
  /* Field: Location: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['relationship'] = 'field_map_location_lid';
  $handler->display->display_options['fields']['city']['label'] = '';
  $handler->display->display_options['fields']['city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['city']['element_label_colon'] = FALSE;
  /* Field: Field: Note */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_summary']['hide_empty'] = TRUE;
  /* Field: Field: Order URL */
  $handler->display->display_options['fields']['field_order_url']['id'] = 'field_order_url';
  $handler->display->display_options['fields']['field_order_url']['table'] = 'field_data_field_order_url';
  $handler->display->display_options['fields']['field_order_url']['field'] = 'field_order_url';
  $handler->display->display_options['fields']['field_order_url']['label'] = '';
  $handler->display->display_options['fields']['field_order_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_order_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_order_url']['alter']['text'] = 'Contact [field_order_url]';
  $handler->display->display_options['fields']['field_order_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_order_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_order_url']['settings'] = array(
    'custom_title' => '',
  );
  $handler->display->display_options['fields']['field_order_url']['delta_offset'] = '0';
  /* Field: Entityform Submission: Entityform submission ID */
  $handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
  $handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['label'] = '';
  $handler->display->display_options['fields']['entityform_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['entityform_id']['alter']['text'] = '      <div class="marker"
        data-lat="[latitude]"
        data-long="[longitude]"
        data-icon="/sites/all/themes/cbf2019/images/!2/map/marker.png">
        <div class="marker-content">
          <div class="marker-item marker-activity">[field_in_activity]</div>
          <div class="marker-item marker-title">[field_title]</div>
          <div class="marker-item marker-summary">[field_summary]</div>
          <div class="marker-item marker-link">[field_order_url]</div>
          <div class="marker-item marker-separator"></div>
          <div class="marker-item marker-name">[name]</div>
          <div class="marker-item marker-address">[street], [city]</div>
        </div>
      </div>
';
  $handler->display->display_options['fields']['entityform_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entityform_id']['separator'] = '';
  /* Sort criterion: Put old items last so regular venues have preference over CiviCRM events etc */
  $handler->display->display_options['sorts']['entityform_id']['id'] = 'entityform_id';
  $handler->display->display_options['sorts']['entityform_id']['table'] = 'entityform';
  $handler->display->display_options['sorts']['entityform_id']['field'] = 'entityform_id';
  $handler->display->display_options['sorts']['entityform_id']['ui_name'] = 'Put old items last so regular venues have preference over CiviCRM events etc';
  $handler->display->display_options['sorts']['entityform_id']['order'] = 'DESC';
  /* Contextual filter: Entityform Submission: Domain (domain entity) */
  $handler->display->display_options['arguments']['domain_entityform_domain_id']['id'] = 'domain_entityform_domain_id';
  $handler->display->display_options['arguments']['domain_entityform_domain_id']['table'] = 'field_data_domain_entityform';
  $handler->display->display_options['arguments']['domain_entityform_domain_id']['field'] = 'domain_entityform_domain_id';
  $handler->display->display_options['arguments']['domain_entityform_domain_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['domain_entityform_domain_id']['default_argument_type'] = 'current_domain';
  $handler->display->display_options['arguments']['domain_entityform_domain_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['domain_entityform_domain_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['domain_entityform_domain_id']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Domain machine name */
  $handler->display->display_options['arguments']['null']['id'] = 'null';
  $handler->display->display_options['arguments']['null']['table'] = 'views';
  $handler->display->display_options['arguments']['null']['field'] = 'null';
  $handler->display->display_options['arguments']['null']['ui_name'] = 'Domain machine name';
  $handler->display->display_options['arguments']['null']['default_action'] = 'default';
  $handler->display->display_options['arguments']['null']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['null']['default_argument_options']['code'] = 'return domain_get_domain()[\'machine_name\'];';
  $handler->display->display_options['arguments']['null']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['null']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Mappable entityforms only */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['ui_name'] = 'Mappable entityforms only';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mappable' => 'mappable',
  );
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
    1957 => '1957',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';

  /* Display: Defaults */
  $handler = $view->new_display('block', 'Defaults', 'block');
  $handler->display->display_options['display_description'] = 'This display contains the defaults - don\'t use';

  /* Display: For Activity */
  $handler = $view->new_display('block', 'For Activity', 'block_1');
  $handler->display->display_options['display_description'] = 'Mappables for an Activity';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entityform Submission: Map location (field_map_location) */
  $handler->display->display_options['relationships']['field_map_location_lid']['id'] = 'field_map_location_lid';
  $handler->display->display_options['relationships']['field_map_location_lid']['table'] = 'field_data_field_map_location';
  $handler->display->display_options['relationships']['field_map_location_lid']['field'] = 'field_map_location_lid';
  $handler->display->display_options['relationships']['field_map_location_lid']['label'] = 'Location';
  $handler->display->display_options['relationships']['field_map_location_lid']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_in_activity_target_id']['id'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['field'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['label'] = 'Activity';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Location: Latitude */
  $handler->display->display_options['fields']['latitude']['id'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['table'] = 'location';
  $handler->display->display_options['fields']['latitude']['field'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['relationship'] = 'field_map_location_lid';
  $handler->display->display_options['fields']['latitude']['label'] = '';
  $handler->display->display_options['fields']['latitude']['exclude'] = TRUE;
  $handler->display->display_options['fields']['latitude']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['latitude']['style'] = 'dd';
  /* Field: Location: Longitude */
  $handler->display->display_options['fields']['longitude']['id'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['table'] = 'location';
  $handler->display->display_options['fields']['longitude']['field'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['relationship'] = 'field_map_location_lid';
  $handler->display->display_options['fields']['longitude']['label'] = '';
  $handler->display->display_options['fields']['longitude']['exclude'] = TRUE;
  $handler->display->display_options['fields']['longitude']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['longitude']['style'] = 'dd';
  /* Field: Field: Activity */
  $handler->display->display_options['fields']['field_in_activity']['id'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['field'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['label'] = '';
  $handler->display->display_options['fields']['field_in_activity']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_in_activity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_in_activity']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  /* Field: Field: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  /* Field: Location: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'location';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_map_location_lid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Location: Street */
  $handler->display->display_options['fields']['street']['id'] = 'street';
  $handler->display->display_options['fields']['street']['table'] = 'location';
  $handler->display->display_options['fields']['street']['field'] = 'street';
  $handler->display->display_options['fields']['street']['relationship'] = 'field_map_location_lid';
  $handler->display->display_options['fields']['street']['label'] = '';
  $handler->display->display_options['fields']['street']['exclude'] = TRUE;
  $handler->display->display_options['fields']['street']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['street']['style'] = 'street';
  /* Field: Location: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['relationship'] = 'field_map_location_lid';
  $handler->display->display_options['fields']['city']['label'] = '';
  $handler->display->display_options['fields']['city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['city']['element_label_colon'] = FALSE;
  /* Field: Field: Note */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_summary']['hide_empty'] = TRUE;
  /* Field: Field: Order URL */
  $handler->display->display_options['fields']['field_order_url']['id'] = 'field_order_url';
  $handler->display->display_options['fields']['field_order_url']['table'] = 'field_data_field_order_url';
  $handler->display->display_options['fields']['field_order_url']['field'] = 'field_order_url';
  $handler->display->display_options['fields']['field_order_url']['label'] = '';
  $handler->display->display_options['fields']['field_order_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_order_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_order_url']['alter']['text'] = 'Contact [field_order_url]';
  $handler->display->display_options['fields']['field_order_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_order_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_order_url']['settings'] = array(
    'custom_title' => '',
  );
  $handler->display->display_options['fields']['field_order_url']['delta_offset'] = '0';
  /* Field: Domains: Machine name */
  $handler->display->display_options['fields']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['fields']['machine_name']['table'] = 'domain';
  $handler->display->display_options['fields']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['fields']['machine_name']['relationship'] = 'field_in_activity_target_id';
  $handler->display->display_options['fields']['machine_name']['label'] = '';
  $handler->display->display_options['fields']['machine_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['machine_name']['element_label_colon'] = FALSE;
  /* Field: Entityform Submission: Entityform submission ID */
  $handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
  $handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['label'] = '';
  $handler->display->display_options['fields']['entityform_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['entityform_id']['alter']['text'] = '      <div class="marker"
        data-lat="[latitude]"
        data-long="[longitude]"
        data-icon="/sites/all/themes/cbf2019/images/[machine_name]/map/marker.png">
        <div class="marker-content">
          <div class="marker-item marker-title">[field_title]</div>
          <div class="marker-item marker-summary">[field_summary]</div>
          <div class="marker-item marker-link">[field_order_url]</div>
          <div class="marker-item marker-separator"></div>
          <div class="marker-item marker-name">[name]</div>
          <div class="marker-item marker-address">[street], [city]</div>
        </div>
      </div>
';
  $handler->display->display_options['fields']['entityform_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entityform_id']['separator'] = '';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_in_activity_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Mappable entityforms only */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['ui_name'] = 'Mappable entityforms only';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mappable' => 'mappable',
  );
  /* Filter criterion: Domain Access: Domain ID */
  $handler->display->display_options['filters']['gid']['id'] = 'gid';
  $handler->display->display_options['filters']['gid']['table'] = 'domain_access';
  $handler->display->display_options['filters']['gid']['field'] = 'gid';
  $handler->display->display_options['filters']['gid']['relationship'] = 'field_in_activity_target_id';
  $handler->display->display_options['filters']['gid']['value'] = array(
    '***CURRENT_DOMAIN***' => '***CURRENT_DOMAIN***',
  );
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
    1957 => '1957',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';

  /* Display: For Activity (embedded) */
  $handler = $view->new_display('block', 'For Activity (embedded)', 'block_3');
  $handler->display->display_options['display_description'] = 'Mappables for an Activity which is offered in all cities';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => '2',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'taxonomy_vocabulary_1_tid' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => 'All',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entityform Submission: Map location (field_map_location) */
  $handler->display->display_options['relationships']['field_map_location_lid']['id'] = 'field_map_location_lid';
  $handler->display->display_options['relationships']['field_map_location_lid']['table'] = 'field_data_field_map_location';
  $handler->display->display_options['relationships']['field_map_location_lid']['field'] = 'field_map_location_lid';
  $handler->display->display_options['relationships']['field_map_location_lid']['label'] = 'Location';
  $handler->display->display_options['relationships']['field_map_location_lid']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_in_activity_target_id']['id'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['field'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['label'] = 'Activity';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Location: Latitude */
  $handler->display->display_options['fields']['latitude']['id'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['table'] = 'location';
  $handler->display->display_options['fields']['latitude']['field'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['relationship'] = 'field_map_location_lid';
  $handler->display->display_options['fields']['latitude']['label'] = '';
  $handler->display->display_options['fields']['latitude']['exclude'] = TRUE;
  $handler->display->display_options['fields']['latitude']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['latitude']['style'] = 'dd';
  /* Field: Location: Longitude */
  $handler->display->display_options['fields']['longitude']['id'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['table'] = 'location';
  $handler->display->display_options['fields']['longitude']['field'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['relationship'] = 'field_map_location_lid';
  $handler->display->display_options['fields']['longitude']['label'] = '';
  $handler->display->display_options['fields']['longitude']['exclude'] = TRUE;
  $handler->display->display_options['fields']['longitude']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['longitude']['style'] = 'dd';
  /* Field: Field: Activity */
  $handler->display->display_options['fields']['field_in_activity']['id'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['field'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['label'] = '';
  $handler->display->display_options['fields']['field_in_activity']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_in_activity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_in_activity']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  /* Field: Field: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  /* Field: Location: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'location';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_map_location_lid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Location: Street */
  $handler->display->display_options['fields']['street']['id'] = 'street';
  $handler->display->display_options['fields']['street']['table'] = 'location';
  $handler->display->display_options['fields']['street']['field'] = 'street';
  $handler->display->display_options['fields']['street']['relationship'] = 'field_map_location_lid';
  $handler->display->display_options['fields']['street']['label'] = '';
  $handler->display->display_options['fields']['street']['exclude'] = TRUE;
  $handler->display->display_options['fields']['street']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['street']['style'] = 'street';
  /* Field: Location: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['relationship'] = 'field_map_location_lid';
  $handler->display->display_options['fields']['city']['label'] = '';
  $handler->display->display_options['fields']['city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['city']['element_label_colon'] = FALSE;
  /* Field: Field: Note */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_summary']['hide_empty'] = TRUE;
  /* Field: Field: Order URL */
  $handler->display->display_options['fields']['field_order_url']['id'] = 'field_order_url';
  $handler->display->display_options['fields']['field_order_url']['table'] = 'field_data_field_order_url';
  $handler->display->display_options['fields']['field_order_url']['field'] = 'field_order_url';
  $handler->display->display_options['fields']['field_order_url']['label'] = '';
  $handler->display->display_options['fields']['field_order_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_order_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_order_url']['alter']['text'] = 'Contact [field_order_url]';
  $handler->display->display_options['fields']['field_order_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_order_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_order_url']['settings'] = array(
    'custom_title' => '',
  );
  $handler->display->display_options['fields']['field_order_url']['delta_offset'] = '0';
  /* Field: Domains: Machine name */
  $handler->display->display_options['fields']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['fields']['machine_name']['table'] = 'domain';
  $handler->display->display_options['fields']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['fields']['machine_name']['relationship'] = 'field_in_activity_target_id';
  $handler->display->display_options['fields']['machine_name']['label'] = '';
  $handler->display->display_options['fields']['machine_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['machine_name']['element_label_colon'] = FALSE;
  /* Field: Entityform Submission: Entityform submission ID */
  $handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
  $handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['label'] = '';
  $handler->display->display_options['fields']['entityform_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['entityform_id']['alter']['text'] = '      <div class="marker"
        data-lat="[latitude]"
        data-long="[longitude]"
        data-icon="/sites/all/themes/cbf2019/images/[machine_name]/map/marker.png">
        <div class="marker-content">
          <div class="marker-item marker-title">[field_title]</div>
          <div class="marker-item marker-summary">[field_summary]</div>
          <div class="marker-item marker-link">[field_order_url]</div>
          <div class="marker-item marker-separator"></div>
          <div class="marker-item marker-name">[name]</div>
          <div class="marker-item marker-address">[street], [city]</div>
        </div>
      </div>
';
  $handler->display->display_options['fields']['entityform_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entityform_id']['separator'] = '';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_in_activity_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Field: Ministry Centre (taxonomy_vocabulary_1) */
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['id'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['field'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['default_argument_options']['code'] = 'return cbf_convert_banner_to_city_tid();';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['validate_options']['vocabularies'] = array(
    'vocabulary_1' => 'vocabulary_1',
  );
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Mappable entityforms only */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['ui_name'] = 'Mappable entityforms only';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mappable' => 'mappable',
  );
  /* Filter criterion: Domain Access: Domain ID */
  $handler->display->display_options['filters']['gid']['id'] = 'gid';
  $handler->display->display_options['filters']['gid']['table'] = 'domain_access';
  $handler->display->display_options['filters']['gid']['field'] = 'gid';
  $handler->display->display_options['filters']['gid']['relationship'] = 'field_in_activity_target_id';
  $handler->display->display_options['filters']['gid']['value'] = array(
    '***CURRENT_DOMAIN***' => '***CURRENT_DOMAIN***',
  );
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
    1957 => '1957',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';

  /* Display: For What's On */
  $handler = $view->new_display('block', 'For What\'s On', 'block_4');
  $handler->display->display_options['display_description'] = 'Mappables for the What\'s On page';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => '2',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'taxonomy_vocabulary_1_tid' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => 'All',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'What\'s on nearby';
  $handler->display->display_options['header']['area']['format'] = '2';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Mappable entityforms only */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['ui_name'] = 'Mappable entityforms only';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mappable' => 'mappable',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Ministry Centre (taxonomy_vocabulary_1) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['id'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['field'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['group'] = 1;
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_1_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['expose']['operator'] = 'taxonomy_vocabulary_1_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['expose']['identifier'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    3 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['vocabulary'] = 'vocabulary_1';
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
    1957 => '1957',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['group'] = 1;
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';

  /* Display: For Brite Event */
  $handler = $view->new_display('block', 'For Brite Event', 'block_5');
  $handler->display->display_options['display_description'] = 'Mappables for a Brite Event';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Location: Latitude */
  $handler->display->display_options['fields']['latitude']['id'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['table'] = 'location';
  $handler->display->display_options['fields']['latitude']['field'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['relationship'] = 'field_map_location_lid';
  $handler->display->display_options['fields']['latitude']['label'] = '';
  $handler->display->display_options['fields']['latitude']['exclude'] = TRUE;
  $handler->display->display_options['fields']['latitude']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['latitude']['style'] = 'dd';
  /* Field: Location: Longitude */
  $handler->display->display_options['fields']['longitude']['id'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['table'] = 'location';
  $handler->display->display_options['fields']['longitude']['field'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['relationship'] = 'field_map_location_lid';
  $handler->display->display_options['fields']['longitude']['label'] = '';
  $handler->display->display_options['fields']['longitude']['exclude'] = TRUE;
  $handler->display->display_options['fields']['longitude']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['longitude']['style'] = 'dd';
  /* Field: Field: Activity */
  $handler->display->display_options['fields']['field_in_activity']['id'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['field'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['label'] = '';
  $handler->display->display_options['fields']['field_in_activity']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_in_activity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_in_activity']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  /* Field: Field: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  /* Field: Location: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'location';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_map_location_lid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Location: Street */
  $handler->display->display_options['fields']['street']['id'] = 'street';
  $handler->display->display_options['fields']['street']['table'] = 'location';
  $handler->display->display_options['fields']['street']['field'] = 'street';
  $handler->display->display_options['fields']['street']['relationship'] = 'field_map_location_lid';
  $handler->display->display_options['fields']['street']['label'] = '';
  $handler->display->display_options['fields']['street']['exclude'] = TRUE;
  $handler->display->display_options['fields']['street']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['street']['style'] = 'street';
  /* Field: Location: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['relationship'] = 'field_map_location_lid';
  $handler->display->display_options['fields']['city']['label'] = '';
  $handler->display->display_options['fields']['city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['city']['element_label_colon'] = FALSE;
  /* Field: Field: Note */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_summary']['hide_empty'] = TRUE;
  /* Field: Field: Order URL */
  $handler->display->display_options['fields']['field_order_url']['id'] = 'field_order_url';
  $handler->display->display_options['fields']['field_order_url']['table'] = 'field_data_field_order_url';
  $handler->display->display_options['fields']['field_order_url']['field'] = 'field_order_url';
  $handler->display->display_options['fields']['field_order_url']['label'] = '';
  $handler->display->display_options['fields']['field_order_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_order_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_order_url']['alter']['text'] = 'Contact [field_order_url]';
  $handler->display->display_options['fields']['field_order_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_order_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_order_url']['settings'] = array(
    'custom_title' => '',
  );
  $handler->display->display_options['fields']['field_order_url']['delta_offset'] = '0';
  /* Field: Entityform Submission: Entityform submission ID */
  $handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
  $handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['label'] = '';
  $handler->display->display_options['fields']['entityform_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['entityform_id']['alter']['text'] = '      <div class="marker"
        data-lat="[latitude]"
        data-long="[longitude]"
        data-icon="/sites/all/themes/cbf2019/images/!2/map/marker.png">
        <div class="marker-content">
          <div class="marker-item marker-activity">[field_in_activity]</div>
          <div class="marker-item marker-title">[field_title]</div>
          <div class="marker-item marker-summary">[field_summary]</div>
          <div class="marker-item marker-link">[field_order_url]</div>
          <div class="marker-item marker-separator"></div>
          <div class="marker-item marker-name">[name]</div>
          <div class="marker-item marker-address">[street], [city]</div>
        </div>
      </div>
';
  $handler->display->display_options['fields']['entityform_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entityform_id']['separator'] = '';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Entityform Submission: Source entity id (field_source_entity_id) */
  $handler->display->display_options['arguments']['field_source_entity_id_value']['id'] = 'field_source_entity_id_value';
  $handler->display->display_options['arguments']['field_source_entity_id_value']['table'] = 'field_data_field_source_entity_id';
  $handler->display->display_options['arguments']['field_source_entity_id_value']['field'] = 'field_source_entity_id_value';
  $handler->display->display_options['arguments']['field_source_entity_id_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_source_entity_id_value']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_source_entity_id_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_source_entity_id_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_source_entity_id_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_source_entity_id_value']['validate']['type'] = 'node';
  /* Contextual filter: Domain machine name */
  $handler->display->display_options['arguments']['null']['id'] = 'null';
  $handler->display->display_options['arguments']['null']['table'] = 'views';
  $handler->display->display_options['arguments']['null']['field'] = 'null';
  $handler->display->display_options['arguments']['null']['ui_name'] = 'Domain machine name';
  $handler->display->display_options['arguments']['null']['default_action'] = 'default';
  $handler->display->display_options['arguments']['null']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['null']['default_argument_options']['code'] = 'return domain_get_domain()[\'machine_name\'];';
  $handler->display->display_options['arguments']['null']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['null']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Mappable entityforms only */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['ui_name'] = 'Mappable entityforms only';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mappable' => 'mappable',
  );
  /* Filter criterion: Source entity bundle */
  $handler->display->display_options['filters']['field_source_entity_bundle_value']['id'] = 'field_source_entity_bundle_value';
  $handler->display->display_options['filters']['field_source_entity_bundle_value']['table'] = 'field_data_field_source_entity_bundle';
  $handler->display->display_options['filters']['field_source_entity_bundle_value']['field'] = 'field_source_entity_bundle_value';
  $handler->display->display_options['filters']['field_source_entity_bundle_value']['ui_name'] = 'Source entity bundle';
  $handler->display->display_options['filters']['field_source_entity_bundle_value']['value'] = 'brite_event';
  $translatables['cbf2019_mappable'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Location'),
    t('Contact [field_order_url]'),
    t('      <div class="marker"
        data-lat="[latitude]"
        data-long="[longitude]"
        data-icon="/sites/all/themes/cbf2019/images/!2/map/marker.png">
        <div class="marker-content">
          <div class="marker-item marker-activity">[field_in_activity]</div>
          <div class="marker-item marker-title">[field_title]</div>
          <div class="marker-item marker-summary">[field_summary]</div>
          <div class="marker-item marker-link">[field_order_url]</div>
          <div class="marker-item marker-separator"></div>
          <div class="marker-item marker-name">[name]</div>
          <div class="marker-item marker-address">[street], [city]</div>
        </div>
      </div>
'),
    t('.'),
    t('All'),
    t('Defaults'),
    t('This display contains the defaults - don\'t use'),
    t('For Activity'),
    t('Mappables for an Activity'),
    t('Activity'),
    t('      <div class="marker"
        data-lat="[latitude]"
        data-long="[longitude]"
        data-icon="/sites/all/themes/cbf2019/images/[machine_name]/map/marker.png">
        <div class="marker-content">
          <div class="marker-item marker-title">[field_title]</div>
          <div class="marker-item marker-summary">[field_summary]</div>
          <div class="marker-item marker-link">[field_order_url]</div>
          <div class="marker-item marker-separator"></div>
          <div class="marker-item marker-name">[name]</div>
          <div class="marker-item marker-address">[street], [city]</div>
        </div>
      </div>
'),
    t('For Activity (embedded)'),
    t('Mappables for an Activity which is offered in all cities'),
    t('Select any filter and click on Apply to see results'),
    t('Advanced options'),
    t('For What\'s On'),
    t('Mappables for the What\'s On page'),
    t('What\'s on nearby'),
    t('For Brite Event'),
    t('Mappables for a Brite Event'),
  );
  $export['cbf2019_mappable'] = $view;

  $view = new view();
  $view->name = 'cbf2019_networks_activities';
  $view->description = 'Shows activities on the Networks page';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'cbf2019 networks activities';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => '2',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'field_networks_visibility_tid_1' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => 'All',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '4';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '6';
  $handler->display->display_options['style_options']['columns_md'] = '4';
  $handler->display->display_options['style_options']['columns_lg'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Networks';
  $handler->display->display_options['header']['area']['format'] = '2';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Highlight */
  $handler->display->display_options['fields']['field_highlight']['id'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['table'] = 'field_data_field_highlight';
  $handler->display->display_options['fields']['field_highlight']['field'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['label'] = '';
  $handler->display->display_options['fields']['field_highlight']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_highlight']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlight']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_highlight']['settings'] = array(
    'image_style' => 'portfolio_653x368',
    'image_link' => '',
  );
  /* Field: Field: Title image */
  $handler->display->display_options['fields']['field_title_image']['id'] = 'field_title_image';
  $handler->display->display_options['fields']['field_title_image']['table'] = 'field_data_field_title_image';
  $handler->display->display_options['fields']['field_title_image']['field'] = 'field_title_image';
  $handler->display->display_options['fields']['field_title_image']['label'] = '';
  $handler->display->display_options['fields']['field_title_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title_image']['empty'] = '[field_highlight]';
  $handler->display->display_options['fields']['field_title_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_title_image']['settings'] = array(
    'image_style' => 'portfolio_653x368',
    'image_link' => '',
  );
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_logo']['alter']['text'] = '<div class="overlaid-image">[field_title_image]</div><div class="image-overlay">###[field_logo]###</div>';
  $handler->display->display_options['fields']['field_logo']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_logo']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['element_wrapper_class'] = 'image-plus-fixed-overlay';
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['type'] = 'file_url_plain';
  /* Field: Field: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['hide_empty'] = TRUE;
  /* Field: Field: Ministry Centre */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['empty'] = 'All cities';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Regularity */
  $handler->display->display_options['fields']['field_regularity']['id'] = 'field_regularity';
  $handler->display->display_options['fields']['field_regularity']['table'] = 'field_data_field_regularity';
  $handler->display->display_options['fields']['field_regularity']['field'] = 'field_regularity';
  $handler->display->display_options['fields']['field_regularity']['label'] = '';
  $handler->display->display_options['fields']['field_regularity']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_regularity']['alter']['text'] = '[taxonomy_vocabulary_1] | [field_regularity]';
  $handler->display->display_options['fields']['field_regularity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_regularity']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Time of day */
  $handler->display->display_options['fields']['field_time_of_day']['id'] = 'field_time_of_day';
  $handler->display->display_options['fields']['field_time_of_day']['table'] = 'field_data_field_time_of_day';
  $handler->display->display_options['fields']['field_time_of_day']['field'] = 'field_time_of_day';
  $handler->display->display_options['fields']['field_time_of_day']['label'] = '';
  $handler->display->display_options['fields']['field_time_of_day']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_of_day']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Field: Weight (field_weight) */
  $handler->display->display_options['sorts']['field_weight_value']['id'] = 'field_weight_value';
  $handler->display->display_options['sorts']['field_weight_value']['table'] = 'field_data_field_weight';
  $handler->display->display_options['sorts']['field_weight_value']['field'] = 'field_weight_value';
  $handler->display->display_options['sorts']['field_weight_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Domain Access: Domain ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'domain_access';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'current_domain';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'activity' => 'activity',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Weight (field_weight) */
  $handler->display->display_options['filters']['field_weight_value']['id'] = 'field_weight_value';
  $handler->display->display_options['filters']['field_weight_value']['table'] = 'field_data_field_weight';
  $handler->display->display_options['filters']['field_weight_value']['field'] = 'field_weight_value';
  $handler->display->display_options['filters']['field_weight_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_weight_value']['value']['value'] = '0';
  $handler->display->display_options['filters']['field_weight_value']['group'] = 1;
  /* Filter criterion: Content: Logo (field_logo:fid) */
  $handler->display->display_options['filters']['field_logo_fid']['id'] = 'field_logo_fid';
  $handler->display->display_options['filters']['field_logo_fid']['table'] = 'field_data_field_logo';
  $handler->display->display_options['filters']['field_logo_fid']['field'] = 'field_logo_fid';
  $handler->display->display_options['filters']['field_logo_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_logo_fid']['group'] = 1;
  /* Filter criterion: Field: Title image (field_title_image:fid) */
  $handler->display->display_options['filters']['field_title_image_fid']['id'] = 'field_title_image_fid';
  $handler->display->display_options['filters']['field_title_image_fid']['table'] = 'field_data_field_title_image';
  $handler->display->display_options['filters']['field_title_image_fid']['field'] = 'field_title_image_fid';
  $handler->display->display_options['filters']['field_title_image_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_title_image_fid']['group'] = 2;
  /* Filter criterion: Field: Highlight (field_highlight:fid) */
  $handler->display->display_options['filters']['field_highlight_fid']['id'] = 'field_highlight_fid';
  $handler->display->display_options['filters']['field_highlight_fid']['table'] = 'field_data_field_highlight';
  $handler->display->display_options['filters']['field_highlight_fid']['field'] = 'field_highlight_fid';
  $handler->display->display_options['filters']['field_highlight_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_highlight_fid']['group'] = 2;
  /* Filter criterion: Content: Networks visibility (field_networks_visibility) */
  $handler->display->display_options['filters']['field_networks_visibility_tid']['id'] = 'field_networks_visibility_tid';
  $handler->display->display_options['filters']['field_networks_visibility_tid']['table'] = 'field_data_field_networks_visibility';
  $handler->display->display_options['filters']['field_networks_visibility_tid']['field'] = 'field_networks_visibility_tid';
  $handler->display->display_options['filters']['field_networks_visibility_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_networks_visibility_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_networks_visibility_tid']['vocabulary'] = 'banner';
  /* Filter criterion: Content: Networks visibility (field_networks_visibility) */
  $handler->display->display_options['filters']['field_networks_visibility_tid_1']['id'] = 'field_networks_visibility_tid_1';
  $handler->display->display_options['filters']['field_networks_visibility_tid_1']['table'] = 'field_data_field_networks_visibility';
  $handler->display->display_options['filters']['field_networks_visibility_tid_1']['field'] = 'field_networks_visibility_tid';
  $handler->display->display_options['filters']['field_networks_visibility_tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_networks_visibility_tid_1']['expose']['operator_id'] = 'field_networks_visibility_tid_1_op';
  $handler->display->display_options['filters']['field_networks_visibility_tid_1']['expose']['operator'] = 'field_networks_visibility_tid_1_op';
  $handler->display->display_options['filters']['field_networks_visibility_tid_1']['expose']['identifier'] = 'field_networks_visibility_tid_1';
  $handler->display->display_options['filters']['field_networks_visibility_tid_1']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_networks_visibility_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_networks_visibility_tid_1']['vocabulary'] = 'banner';
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
    1957 => '1957',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';

  /* Display: Defaults */
  $handler = $view->new_display('block', 'Defaults', 'block');
  $handler->display->display_options['display_description'] = 'This display contains the defaults - don\'t use';

  /* Display: Networks */
  $handler = $view->new_display('block', 'Networks', 'block_1');
  $handler->display->display_options['display_description'] = 'All networks visible from this domain';

  /* Display: Christian Networks */
  $handler = $view->new_display('block', 'Christian Networks', 'block_2');
  $handler->display->display_options['display_description'] = 'Christian networks';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Networks for Christians';
  $handler->display->display_options['header']['area']['format'] = '2';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'activity' => 'activity',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Weight (field_weight) */
  $handler->display->display_options['filters']['field_weight_value']['id'] = 'field_weight_value';
  $handler->display->display_options['filters']['field_weight_value']['table'] = 'field_data_field_weight';
  $handler->display->display_options['filters']['field_weight_value']['field'] = 'field_weight_value';
  $handler->display->display_options['filters']['field_weight_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_weight_value']['value']['value'] = '0';
  $handler->display->display_options['filters']['field_weight_value']['group'] = 1;
  /* Filter criterion: Content: Logo (field_logo:fid) */
  $handler->display->display_options['filters']['field_logo_fid']['id'] = 'field_logo_fid';
  $handler->display->display_options['filters']['field_logo_fid']['table'] = 'field_data_field_logo';
  $handler->display->display_options['filters']['field_logo_fid']['field'] = 'field_logo_fid';
  $handler->display->display_options['filters']['field_logo_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_logo_fid']['group'] = 1;
  /* Filter criterion: Field: Title image (field_title_image:fid) */
  $handler->display->display_options['filters']['field_title_image_fid']['id'] = 'field_title_image_fid';
  $handler->display->display_options['filters']['field_title_image_fid']['table'] = 'field_data_field_title_image';
  $handler->display->display_options['filters']['field_title_image_fid']['field'] = 'field_title_image_fid';
  $handler->display->display_options['filters']['field_title_image_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_title_image_fid']['group'] = 2;
  /* Filter criterion: Field: Highlight (field_highlight:fid) */
  $handler->display->display_options['filters']['field_highlight_fid']['id'] = 'field_highlight_fid';
  $handler->display->display_options['filters']['field_highlight_fid']['table'] = 'field_data_field_highlight';
  $handler->display->display_options['filters']['field_highlight_fid']['field'] = 'field_highlight_fid';
  $handler->display->display_options['filters']['field_highlight_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_highlight_fid']['group'] = 2;
  /* Filter criterion: Content: Networks visibility (field_networks_visibility) */
  $handler->display->display_options['filters']['field_networks_visibility_tid']['id'] = 'field_networks_visibility_tid';
  $handler->display->display_options['filters']['field_networks_visibility_tid']['table'] = 'field_data_field_networks_visibility';
  $handler->display->display_options['filters']['field_networks_visibility_tid']['field'] = 'field_networks_visibility_tid';
  $handler->display->display_options['filters']['field_networks_visibility_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_networks_visibility_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_networks_visibility_tid']['vocabulary'] = 'banner';
  /* Filter criterion: Content: Networks visibility (field_networks_visibility) */
  $handler->display->display_options['filters']['field_networks_visibility_tid_1']['id'] = 'field_networks_visibility_tid_1';
  $handler->display->display_options['filters']['field_networks_visibility_tid_1']['table'] = 'field_data_field_networks_visibility';
  $handler->display->display_options['filters']['field_networks_visibility_tid_1']['field'] = 'field_networks_visibility_tid';
  $handler->display->display_options['filters']['field_networks_visibility_tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_networks_visibility_tid_1']['expose']['operator_id'] = 'field_networks_visibility_tid_1_op';
  $handler->display->display_options['filters']['field_networks_visibility_tid_1']['expose']['operator'] = 'field_networks_visibility_tid_1_op';
  $handler->display->display_options['filters']['field_networks_visibility_tid_1']['expose']['identifier'] = 'field_networks_visibility_tid_1';
  $handler->display->display_options['filters']['field_networks_visibility_tid_1']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_networks_visibility_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_networks_visibility_tid_1']['vocabulary'] = 'banner';
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['id'] = 'taxonomy_vocabulary_3_tid_1';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['value'] = array(
    47 => '47',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['vocabulary'] = 'vocabulary_3';

  /* Display: General Networks */
  $handler = $view->new_display('block', 'General Networks', 'block_3');
  $handler->display->display_options['display_description'] = 'General networks';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<span class="cardinal">Networks for Christians and enquirers</span>';
  $handler->display->display_options['header']['area']['format'] = '2';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'activity' => 'activity',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Weight (field_weight) */
  $handler->display->display_options['filters']['field_weight_value']['id'] = 'field_weight_value';
  $handler->display->display_options['filters']['field_weight_value']['table'] = 'field_data_field_weight';
  $handler->display->display_options['filters']['field_weight_value']['field'] = 'field_weight_value';
  $handler->display->display_options['filters']['field_weight_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_weight_value']['value']['value'] = '0';
  $handler->display->display_options['filters']['field_weight_value']['group'] = 1;
  /* Filter criterion: Content: Logo (field_logo:fid) */
  $handler->display->display_options['filters']['field_logo_fid']['id'] = 'field_logo_fid';
  $handler->display->display_options['filters']['field_logo_fid']['table'] = 'field_data_field_logo';
  $handler->display->display_options['filters']['field_logo_fid']['field'] = 'field_logo_fid';
  $handler->display->display_options['filters']['field_logo_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_logo_fid']['group'] = 1;
  /* Filter criterion: Field: Title image (field_title_image:fid) */
  $handler->display->display_options['filters']['field_title_image_fid']['id'] = 'field_title_image_fid';
  $handler->display->display_options['filters']['field_title_image_fid']['table'] = 'field_data_field_title_image';
  $handler->display->display_options['filters']['field_title_image_fid']['field'] = 'field_title_image_fid';
  $handler->display->display_options['filters']['field_title_image_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_title_image_fid']['group'] = 2;
  /* Filter criterion: Field: Highlight (field_highlight:fid) */
  $handler->display->display_options['filters']['field_highlight_fid']['id'] = 'field_highlight_fid';
  $handler->display->display_options['filters']['field_highlight_fid']['table'] = 'field_data_field_highlight';
  $handler->display->display_options['filters']['field_highlight_fid']['field'] = 'field_highlight_fid';
  $handler->display->display_options['filters']['field_highlight_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_highlight_fid']['group'] = 2;
  /* Filter criterion: Content: Networks visibility (field_networks_visibility) */
  $handler->display->display_options['filters']['field_networks_visibility_tid']['id'] = 'field_networks_visibility_tid';
  $handler->display->display_options['filters']['field_networks_visibility_tid']['table'] = 'field_data_field_networks_visibility';
  $handler->display->display_options['filters']['field_networks_visibility_tid']['field'] = 'field_networks_visibility_tid';
  $handler->display->display_options['filters']['field_networks_visibility_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_networks_visibility_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_networks_visibility_tid']['vocabulary'] = 'banner';
  /* Filter criterion: Content: Networks visibility (field_networks_visibility) */
  $handler->display->display_options['filters']['field_networks_visibility_tid_1']['id'] = 'field_networks_visibility_tid_1';
  $handler->display->display_options['filters']['field_networks_visibility_tid_1']['table'] = 'field_data_field_networks_visibility';
  $handler->display->display_options['filters']['field_networks_visibility_tid_1']['field'] = 'field_networks_visibility_tid';
  $handler->display->display_options['filters']['field_networks_visibility_tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_networks_visibility_tid_1']['expose']['operator_id'] = 'field_networks_visibility_tid_1_op';
  $handler->display->display_options['filters']['field_networks_visibility_tid_1']['expose']['operator'] = 'field_networks_visibility_tid_1_op';
  $handler->display->display_options['filters']['field_networks_visibility_tid_1']['expose']['identifier'] = 'field_networks_visibility_tid_1';
  $handler->display->display_options['filters']['field_networks_visibility_tid_1']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_networks_visibility_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_networks_visibility_tid_1']['vocabulary'] = 'banner';
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['id'] = 'taxonomy_vocabulary_3_tid_1';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['value'] = array(
    48 => '48',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['vocabulary'] = 'vocabulary_3';
  $translatables['cbf2019_networks_activities'] = array(
    t('Master'),
    t('<none>'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Select any filter and click on Apply to see results'),
    t('Advanced options'),
    t('All'),
    t('Networks'),
    t('[field_highlight]'),
    t('<div class="overlaid-image">[field_title_image]</div><div class="image-overlay">###[field_logo]###</div>'),
    t('All cities'),
    t('[taxonomy_vocabulary_1] | [field_regularity]'),
    t('Defaults'),
    t('This display contains the defaults - don\'t use'),
    t('All networks visible from this domain'),
    t('Christian Networks'),
    t('Christian networks'),
    t('Networks for Christians'),
    t('General Networks'),
    t('General networks'),
    t('<span class="cardinal">Networks for Christians and enquirers</span>'),
  );
  $export['cbf2019_networks_activities'] = $view;

  $view = new view();
  $view->name = 'cbf2019_page_header_collections';
  $view->description = 'Can\'t cache rendered output else search block will fail';
  $view->tag = 'page-header';
  $view->base_table = 'entityform';
  $view->human_name = 'cbf2019 page header - collections';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time_per_domain';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '-1';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: Title image */
  $handler->display->display_options['fields']['field_title_image']['id'] = 'field_title_image';
  $handler->display->display_options['fields']['field_title_image']['table'] = 'field_data_field_title_image';
  $handler->display->display_options['fields']['field_title_image']['field'] = 'field_title_image';
  $handler->display->display_options['fields']['field_title_image']['label'] = '';
  $handler->display->display_options['fields']['field_title_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_title_image']['settings'] = array(
    'image_style' => 'title',
    'image_link' => '',
  );
  /* Field: Field: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  /* Contextual filter: Entityform Submission: Entityform submission ID */
  $handler->display->display_options['arguments']['entityform_id']['id'] = 'entityform_id';
  $handler->display->display_options['arguments']['entityform_id']['table'] = 'entityform';
  $handler->display->display_options['arguments']['entityform_id']['field'] = 'entityform_id';
  $handler->display->display_options['arguments']['entityform_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['entityform_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['entityform_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['entityform_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['entityform_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['entityform_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['entityform_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['entityform_id']['validate']['type'] = 'numeric';
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'collection' => 'collection',
  );

  /* Display: Path */
  $handler = $view->new_display('block', 'Path', 'block');
  $translatables['cbf2019_page_header_collections'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Path'),
  );
  $export['cbf2019_page_header_collections'] = $view;

  $view = new view();
  $view->name = 'cbf2019_page_header_no_results_image';
  $view->description = 'Embedded in other views. Image FID in cases where there are no results. Can\'t cache rendered output else search block will fail.';
  $view->tag = 'default';
  $view->base_table = 'entityform';
  $view->human_name = 'cbf2019 page header - no results image';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '-1';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Field: Title image */
  $handler->display->display_options['fields']['field_title_image']['id'] = 'field_title_image';
  $handler->display->display_options['fields']['field_title_image']['table'] = 'field_data_field_title_image';
  $handler->display->display_options['fields']['field_title_image']['field'] = 'field_title_image';
  $handler->display->display_options['fields']['field_title_image']['label'] = '';
  $handler->display->display_options['fields']['field_title_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_title_image']['alter']['text'] = '[field_title_image-fid]';
  $handler->display->display_options['fields']['field_title_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_title_image']['settings'] = array(
    'image_style' => 'title',
    'image_link' => '',
  );
  /* Contextual filter: Content type of Title Header */
  $handler->display->display_options['arguments']['field_sidebar_title_value']['id'] = 'field_sidebar_title_value';
  $handler->display->display_options['arguments']['field_sidebar_title_value']['table'] = 'field_data_field_sidebar_title';
  $handler->display->display_options['arguments']['field_sidebar_title_value']['field'] = 'field_sidebar_title_value';
  $handler->display->display_options['arguments']['field_sidebar_title_value']['ui_name'] = 'Content type of Title Header';
  $handler->display->display_options['arguments']['field_sidebar_title_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_sidebar_title_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_sidebar_title_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_sidebar_title_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_sidebar_title_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_sidebar_title_value']['limit'] = '0';
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'title_header' => 'title_header',
  );

  /* Display: Content type (embedded) */
  $handler = $view->new_display('block', 'Content type (embedded)', 'block_1');
  $handler->display->display_options['display_comment'] = 'This view is not tagged with \'page-header\' because it\'s results are used by other page-header views.';
  $translatables['cbf2019_page_header_no_results_image'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('[field_title_image-fid]'),
    t('All'),
    t('Content type (embedded)'),
  );
  $export['cbf2019_page_header_no_results_image'] = $view;

  $view = new view();
  $view->name = 'cbf2019_page_header_node';
  $view->description = 'Page header for all node pages. Can\'t cache rendered output else search block will fail.';
  $view->tag = 'page-header';
  $view->base_table = 'node';
  $view->human_name = 'cbf2019 page header - node';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '-1';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_in_activity_target_id']['id'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['field'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['label'] = 'Activity';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  /* Field: Field: Title image */
  $handler->display->display_options['fields']['field_title_image']['id'] = 'field_title_image';
  $handler->display->display_options['fields']['field_title_image']['table'] = 'field_data_field_title_image';
  $handler->display->display_options['fields']['field_title_image']['field'] = 'field_title_image';
  $handler->display->display_options['fields']['field_title_image']['label'] = '';
  $handler->display->display_options['fields']['field_title_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_title_image']['settings'] = array(
    'image_style' => 'title',
    'image_link' => '',
  );
  /* Field: Activity title image */
  $handler->display->display_options['fields']['field_title_image_1']['id'] = 'field_title_image_1';
  $handler->display->display_options['fields']['field_title_image_1']['table'] = 'field_data_field_title_image';
  $handler->display->display_options['fields']['field_title_image_1']['field'] = 'field_title_image';
  $handler->display->display_options['fields']['field_title_image_1']['relationship'] = 'field_in_activity_target_id';
  $handler->display->display_options['fields']['field_title_image_1']['ui_name'] = 'Activity title image';
  $handler->display->display_options['fields']['field_title_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_title_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_title_image_1']['settings'] = array(
    'image_style' => 'title',
    'image_link' => '',
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  /* Field: Content type image FID */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['ui_name'] = 'Content type image FID';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'cbf2019_page_header_no_results_image';
  $handler->display->display_options['fields']['view']['display'] = 'block_1';
  $handler->display->display_options['fields']['view']['arguments'] = '[!type]';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['cbf2019_page_header_node'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Activity'),
    t('All'),
    t('Block'),
  );
  $export['cbf2019_page_header_node'] = $view;

  $view = new view();
  $view->name = 'cbf2019_page_header_paths';
  $view->description = 'Page header for specific cases. Can\'t cache rendered output else search block will fail.';
  $view->tag = 'page-header';
  $view->base_table = 'entityform';
  $view->human_name = 'cbf2019 page header - special';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '-1';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: Title image */
  $handler->display->display_options['fields']['field_title_image']['id'] = 'field_title_image';
  $handler->display->display_options['fields']['field_title_image']['table'] = 'field_data_field_title_image';
  $handler->display->display_options['fields']['field_title_image']['field'] = 'field_title_image';
  $handler->display->display_options['fields']['field_title_image']['label'] = '';
  $handler->display->display_options['fields']['field_title_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_title_image']['settings'] = array(
    'image_style' => 'title',
    'image_link' => '',
  );
  /* Field: Field: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  /* Contextual filter: Path */
  $handler->display->display_options['arguments']['field_synopsis_value']['id'] = 'field_synopsis_value';
  $handler->display->display_options['arguments']['field_synopsis_value']['table'] = 'field_data_field_synopsis';
  $handler->display->display_options['arguments']['field_synopsis_value']['field'] = 'field_synopsis_value';
  $handler->display->display_options['arguments']['field_synopsis_value']['ui_name'] = 'Path';
  $handler->display->display_options['arguments']['field_synopsis_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_synopsis_value']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_synopsis_value']['default_argument_options']['code'] = 'return rtrim(parse_url(request_uri())["path"], \'/\');';
  $handler->display->display_options['arguments']['field_synopsis_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_synopsis_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_synopsis_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_synopsis_value']['limit'] = '0';
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'title_header' => 'title_header',
  );

  /* Display: Path */
  $handler = $view->new_display('block', 'Path', 'block');

  /* Display: Path which should not be cached */
  $handler = $view->new_display('block', 'Path which should not be cached', 'block_1');
  $handler->display->display_options['display_description'] = ' Eg civicrm/event/register?reset=1&id=1979 -- the title varies for each event';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';

  /* Display: First 2 components of path */
  $handler = $view->new_display('block', 'First 2 components of path', 'block_2');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: First two components of Path */
  $handler->display->display_options['arguments']['field_synopsis_value']['id'] = 'field_synopsis_value';
  $handler->display->display_options['arguments']['field_synopsis_value']['table'] = 'field_data_field_synopsis';
  $handler->display->display_options['arguments']['field_synopsis_value']['field'] = 'field_synopsis_value';
  $handler->display->display_options['arguments']['field_synopsis_value']['ui_name'] = 'First two components of Path';
  $handler->display->display_options['arguments']['field_synopsis_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_synopsis_value']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_synopsis_value']['default_argument_options']['code'] = '$cbf_url_parts = explode(\'/\', parse_url(request_uri())["path"]);
if (empty($cbf_url_parts[1])) {
  return \'/\';
}
else if (empty($cbf_url_parts[2])) {
  return \'/\' . $cbf_url_parts[1];
}
else {
  return \'/\' . $cbf_url_parts[1] . \'/\' . $cbf_url_parts[2];
}';
  $handler->display->display_options['arguments']['field_synopsis_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_synopsis_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_synopsis_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_synopsis_value']['limit'] = '0';
  $translatables['cbf2019_page_header_paths'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Path'),
    t('Path which should not be cached'),
    t(' Eg civicrm/event/register?reset=1&id=1979 -- the title varies for each event'),
    t('First 2 components of path'),
  );
  $export['cbf2019_page_header_paths'] = $view;

  $view = new view();
  $view->name = 'cbf2019_rated_content';
  $view->description = 'Recent library view for the cbf2019 theme';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'cbf2019 rated content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'More articles';
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time_per_domain';
  $handler->display->display_options['cache']['results_lifespan'] = '1800';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '1800';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '4';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '6';
  $handler->display->display_options['style_options']['columns_md'] = '6';
  $handler->display->display_options['style_options']['columns_lg'] = '6';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Title';
  $handler->display->display_options['header']['area']['content'] = '<span id="cbf2019-rated-content-view-header">Resources</span>';
  $handler->display->display_options['header']['area']['format'] = '2';
  /* Field: Field: Highlight */
  $handler->display->display_options['fields']['field_highlight']['id'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['table'] = 'field_data_field_highlight';
  $handler->display->display_options['fields']['field_highlight']['field'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['label'] = '';
  $handler->display->display_options['fields']['field_highlight']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlight']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_highlight']['settings'] = array(
    'image_style' => 'portfolio_653x368',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Activity */
  $handler->display->display_options['fields']['field_in_activity']['id'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['field'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['label'] = '';
  $handler->display->display_options['fields']['field_in_activity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_in_activity']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  /* Field: Content: Resource type */
  $handler->display->display_options['fields']['field_resource_type']['id'] = 'field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['table'] = 'field_data_field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['field'] = 'field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['label'] = '';
  $handler->display->display_options['fields']['field_resource_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_type']['type'] = 'computed_field_unsanitized';
  /* Field: Field: Speaker(s) */
  $handler->display->display_options['fields']['field_speakers']['id'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['table'] = 'field_data_field_speakers';
  $handler->display->display_options['fields']['field_speakers']['field'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['label'] = '';
  $handler->display->display_options['fields']['field_speakers']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speakers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speakers']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_speakers']['delta_offset'] = '0';
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_episode_date']['id'] = 'field_episode_date';
  $handler->display->display_options['fields']['field_episode_date']['table'] = 'field_data_field_episode_date';
  $handler->display->display_options['fields']['field_episode_date']['field'] = 'field_episode_date';
  $handler->display->display_options['fields']['field_episode_date']['label'] = '';
  $handler->display->display_options['fields']['field_episode_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_episode_date']['alter']['text'] = '[field_speakers] | [field_episode_date]';
  $handler->display->display_options['fields']['field_episode_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_episode_date']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'j M Y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Field: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Article Rating (field_article_rating) */
  $handler->display->display_options['sorts']['field_article_rating_value']['id'] = 'field_article_rating_value';
  $handler->display->display_options['sorts']['field_article_rating_value']['table'] = 'field_data_field_article_rating';
  $handler->display->display_options['sorts']['field_article_rating_value']['field'] = 'field_article_rating_value';
  $handler->display->display_options['sorts']['field_article_rating_value']['order'] = 'DESC';
  /* Sort criterion: Field: Date (field_episode_date) */
  $handler->display->display_options['sorts']['field_episode_date_value']['id'] = 'field_episode_date_value';
  $handler->display->display_options['sorts']['field_episode_date_value']['table'] = 'field_data_field_episode_date';
  $handler->display->display_options['sorts']['field_episode_date_value']['field'] = 'field_episode_date_value';
  $handler->display->display_options['sorts']['field_episode_date_value']['order'] = 'DESC';
  /* Contextual filter: Domain Access: Domain ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'domain_access';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'current_domain';
  $handler->display->display_options['arguments']['gid']['default_argument_skip_url'] = TRUE;
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blog' => 'blog',
    'episode' => 'episode',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
    0 => '1957',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';

  /* Display: Defaults */
  $handler = $view->new_display('block', 'Defaults', 'block');
  $handler->display->display_options['display_comment'] = 'Tick \'Skip default argument for view URL\' on the Domain Id contextual filter. This prevents the argument polluting the canonical URL, which affects SEO.';
  $handler->display->display_options['display_description'] = 'This display contains the defaults - don\'t use';
  $handler->display->display_options['link_url'] = 'library';

  /* Display: Resources page */
  $handler = $view->new_display('page', 'Resources page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Resource library';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['path'] = 'resources';

  /* Display: Resources by topic page */
  $handler = $view->new_display('page', 'Resources by topic page', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Resource library';
  $handler->display->display_options['display_comment'] = 'The Header and No Results text are modified by cbf_views_post_execute() to contain the text from cbf_convert_article_topics_to_title()';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => '2',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'keys' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Title';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<span id="cbf2019-rated-content-view-header">All Topics</span>';
  $handler->display->display_options['header']['area']['format'] = '2';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no resources for this topic';
  $handler->display->display_options['empty']['area']['format'] = '2';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Domain Access: Domain ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'domain_access';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'current_domain';
  $handler->display->display_options['arguments']['gid']['default_argument_skip_url'] = TRUE;
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Article Topics (field_article_topics) */
  $handler->display->display_options['arguments']['field_article_topics_tid']['id'] = 'field_article_topics_tid';
  $handler->display->display_options['arguments']['field_article_topics_tid']['table'] = 'field_data_field_article_topics';
  $handler->display->display_options['arguments']['field_article_topics_tid']['field'] = 'field_article_topics_tid';
  $handler->display->display_options['arguments']['field_article_topics_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_article_topics_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_article_topics_tid']['default_argument_options']['code'] = 'return cbf_convert_article_topics_to_tids_with_depth();';
  $handler->display->display_options['arguments']['field_article_topics_tid']['default_argument_skip_url'] = TRUE;
  $handler->display->display_options['arguments']['field_article_topics_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_article_topics_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_article_topics_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_article_topics_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_article_topics_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_article_topics_tid']['validate_options']['vocabularies'] = array(
    'article_topic' => 'article_topic',
  );
  $handler->display->display_options['arguments']['field_article_topics_tid']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['field_article_topics_tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['field_article_topics_tid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['field_article_topics_tid']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blog' => 'blog',
    'episode' => 'episode',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
    0 => '1957',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'search';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['path'] = 'resources/topic';

  /* Display: Resources by speaker page */
  $handler = $view->new_display('page', 'Resources by speaker page', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Resources by %1';
  $handler->display->display_options['display_comment'] = 'The Header and No Results text are modified by cbf_views_post_execute() to contain the text from the \'search\' query parameter (ie the Search Terms filter) if supplied';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => '2',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'keys' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Title';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<span id="cbf2019-rated-content-view-header">%1</span>';
  $handler->display->display_options['header']['area']['format'] = '2';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no resources by %1';
  $handler->display->display_options['empty']['area']['format'] = '2';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Speaker(s) (field_speakers) */
  $handler->display->display_options['arguments']['field_speakers_tid']['id'] = 'field_speakers_tid';
  $handler->display->display_options['arguments']['field_speakers_tid']['table'] = 'field_data_field_speakers';
  $handler->display->display_options['arguments']['field_speakers_tid']['field'] = 'field_speakers_tid';
  $handler->display->display_options['arguments']['field_speakers_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_speakers_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_speakers_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_speakers_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_speakers_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_speakers_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_speakers_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_speakers_tid']['validate_options']['vocabularies'] = array(
    'speaker' => 'speaker',
  );
  $handler->display->display_options['arguments']['field_speakers_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_speakers_tid']['validate_options']['transform'] = TRUE;
  /* Contextual filter: Domain Access: Domain ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'domain_access';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'current_domain';
  $handler->display->display_options['arguments']['gid']['default_argument_skip_url'] = TRUE;
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blog' => 'blog',
    'episode' => 'episode',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
    0 => '1957',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'search';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['path'] = 'resources/speaker/%';

  /* Display: Unrated Recent block */
  $handler = $view->new_display('block', 'Unrated Recent block', 'block_3');
  $handler->display->display_options['display_comment'] = 'Reverse the priority of the sort criteria for this block: by date then by rating';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '4';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '6';
  $handler->display->display_options['style_options']['columns_md'] = '3';
  $handler->display->display_options['style_options']['columns_lg'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Date (field_episode_date) */
  $handler->display->display_options['sorts']['field_episode_date_value']['id'] = 'field_episode_date_value';
  $handler->display->display_options['sorts']['field_episode_date_value']['table'] = 'field_data_field_episode_date';
  $handler->display->display_options['sorts']['field_episode_date_value']['field'] = 'field_episode_date_value';
  $handler->display->display_options['sorts']['field_episode_date_value']['order'] = 'DESC';
  /* Sort criterion: Content: Article Rating (field_article_rating) */
  $handler->display->display_options['sorts']['field_article_rating_value']['id'] = 'field_article_rating_value';
  $handler->display->display_options['sorts']['field_article_rating_value']['table'] = 'field_data_field_article_rating';
  $handler->display->display_options['sorts']['field_article_rating_value']['field'] = 'field_article_rating_value';
  $handler->display->display_options['sorts']['field_article_rating_value']['order'] = 'DESC';

  /* Display: More by Speaker block */
  $handler = $view->new_display('block', 'More by Speaker block', 'block_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['display_comment'] = 'Exclude the current article from the results using cbf_views_query_alter() to add node.nid != <Content Nid>';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '4';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '6';
  $handler->display->display_options['style_options']['columns_md'] = '3';
  $handler->display->display_options['style_options']['columns_lg'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Speaker */
  $handler->display->display_options['relationships']['field_speakers_tid']['id'] = 'field_speakers_tid';
  $handler->display->display_options['relationships']['field_speakers_tid']['table'] = 'field_data_field_speakers';
  $handler->display->display_options['relationships']['field_speakers_tid']['field'] = 'field_speakers_tid';
  $handler->display->display_options['relationships']['field_speakers_tid']['ui_name'] = 'Speaker';
  $handler->display->display_options['relationships']['field_speakers_tid']['label'] = 'Speaker';
  $handler->display->display_options['relationships']['field_speakers_tid']['required'] = TRUE;
  /* Relationship: Current article */
  $handler->display->display_options['relationships']['reverse_field_speakers_node']['id'] = 'reverse_field_speakers_node';
  $handler->display->display_options['relationships']['reverse_field_speakers_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_speakers_node']['field'] = 'reverse_field_speakers_node';
  $handler->display->display_options['relationships']['reverse_field_speakers_node']['relationship'] = 'field_speakers_tid';
  $handler->display->display_options['relationships']['reverse_field_speakers_node']['ui_name'] = 'Current article';
  $handler->display->display_options['relationships']['reverse_field_speakers_node']['label'] = 'Current article';
  $handler->display->display_options['relationships']['reverse_field_speakers_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_speakers_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'blog' => 'blog',
    'episode' => 'episode',
  );
  /* Contextual filter: Domain Access: Domain ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'domain_access';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'current_domain';
  $handler->display->display_options['arguments']['gid']['default_argument_skip_url'] = TRUE;
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';

  /* Display: More on Topic block */
  $handler = $view->new_display('block', 'More on Topic block', 'block_2');
  $handler->display->display_options['display_comment'] = 'Exclude the current article from the results using cbf_views_query_alter() to add node.nid != <Content Nid>';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '4';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '6';
  $handler->display->display_options['style_options']['columns_md'] = '3';
  $handler->display->display_options['style_options']['columns_lg'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<span id="cbf2019-rated-content-view-header">More like this ...</span>';
  $handler->display->display_options['header']['area']['format'] = '2';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Article topic */
  $handler->display->display_options['relationships']['field_article_topics_tid']['id'] = 'field_article_topics_tid';
  $handler->display->display_options['relationships']['field_article_topics_tid']['table'] = 'field_data_field_article_topics';
  $handler->display->display_options['relationships']['field_article_topics_tid']['field'] = 'field_article_topics_tid';
  $handler->display->display_options['relationships']['field_article_topics_tid']['ui_name'] = 'Article topic';
  $handler->display->display_options['relationships']['field_article_topics_tid']['label'] = 'Article topic';
  $handler->display->display_options['relationships']['field_article_topics_tid']['required'] = TRUE;
  /* Relationship: Current article */
  $handler->display->display_options['relationships']['reverse_field_article_topics_node']['id'] = 'reverse_field_article_topics_node';
  $handler->display->display_options['relationships']['reverse_field_article_topics_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_article_topics_node']['field'] = 'reverse_field_article_topics_node';
  $handler->display->display_options['relationships']['reverse_field_article_topics_node']['relationship'] = 'field_article_topics_tid';
  $handler->display->display_options['relationships']['reverse_field_article_topics_node']['ui_name'] = 'Current article';
  $handler->display->display_options['relationships']['reverse_field_article_topics_node']['label'] = 'Current article';
  $handler->display->display_options['relationships']['reverse_field_article_topics_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_article_topics_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'blog' => 'blog',
    'episode' => 'episode',
  );
  /* Contextual filter: Domain Access: Domain ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'domain_access';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'current_domain';
  $handler->display->display_options['arguments']['gid']['default_argument_skip_url'] = TRUE;
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $translatables['cbf2019_rated_content'] = array(
    t('Master'),
    t('<none>'),
    t('More articles'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Title'),
    t('<span id="cbf2019-rated-content-view-header">Resources</span>'),
    t('[field_speakers] | [field_episode_date]'),
    t('All'),
    t('Defaults'),
    t('This display contains the defaults - don\'t use'),
    t('more'),
    t('Resources page'),
    t('Resource library'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Resources by topic page'),
    t('Search'),
    t('Select any filter and click on Apply to see results'),
    t('Advanced options'),
    t('<span id="cbf2019-rated-content-view-header">All Topics</span>'),
    t('There are no resources for this topic'),
    t('Resources by speaker page'),
    t('Resources by %1'),
    t('<span id="cbf2019-rated-content-view-header">%1</span>'),
    t('There are no resources by %1'),
    t('Unrated Recent block'),
    t('More by Speaker block'),
    t('Speaker'),
    t('Current article'),
    t('More on Topic block'),
    t('<span id="cbf2019-rated-content-view-header">More like this ...</span>'),
    t('Article topic'),
  );
  $export['cbf2019_rated_content'] = $view;

  $view = new view();
  $view->name = 'cbf2019_recent_library';
  $view->description = 'Embedded in other views. Recent library view for the cbf2019 theme';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'cbf2019 recent library';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'More resources';
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time_per_domain';
  $handler->display->display_options['cache']['results_lifespan'] = '1800';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '1800';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '4';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '6';
  $handler->display->display_options['style_options']['columns_md'] = '3';
  $handler->display->display_options['style_options']['columns_lg'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Title';
  $handler->display->display_options['header']['area']['content'] = '<span id="cbf2019-recent-library-view-header">Recent resources</span>';
  $handler->display->display_options['header']['area']['format'] = '2';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_in_activity_target_id']['id'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['field'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['label'] = 'Activity';
  /* Field: Field: Highlight */
  $handler->display->display_options['fields']['field_highlight']['id'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['table'] = 'field_data_field_highlight';
  $handler->display->display_options['fields']['field_highlight']['field'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['label'] = '';
  $handler->display->display_options['fields']['field_highlight']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlight']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_highlight']['settings'] = array(
    'image_style' => 'portfolio_653x368',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Activity */
  $handler->display->display_options['fields']['field_in_activity']['id'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['field'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['label'] = '';
  $handler->display->display_options['fields']['field_in_activity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_in_activity']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  /* Field: Content: Resource type */
  $handler->display->display_options['fields']['field_resource_type']['id'] = 'field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['table'] = 'field_data_field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['field'] = 'field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['label'] = '';
  $handler->display->display_options['fields']['field_resource_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_type']['type'] = 'computed_field_unsanitized';
  /* Field: Field: Speaker(s) */
  $handler->display->display_options['fields']['field_speakers']['id'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['table'] = 'field_data_field_speakers';
  $handler->display->display_options['fields']['field_speakers']['field'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['label'] = '';
  $handler->display->display_options['fields']['field_speakers']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speakers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speakers']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_speakers']['delta_offset'] = '0';
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_episode_date']['id'] = 'field_episode_date';
  $handler->display->display_options['fields']['field_episode_date']['table'] = 'field_data_field_episode_date';
  $handler->display->display_options['fields']['field_episode_date']['field'] = 'field_episode_date';
  $handler->display->display_options['fields']['field_episode_date']['label'] = '';
  $handler->display->display_options['fields']['field_episode_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_episode_date']['alter']['text'] = '[field_speakers] | [field_episode_date]';
  $handler->display->display_options['fields']['field_episode_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_episode_date']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'j M Y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Field: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  /* Sort criterion: Field: Date (field_episode_date) */
  $handler->display->display_options['sorts']['field_episode_date_value']['id'] = 'field_episode_date_value';
  $handler->display->display_options['sorts']['field_episode_date_value']['table'] = 'field_data_field_episode_date';
  $handler->display->display_options['sorts']['field_episode_date_value']['field'] = 'field_episode_date_value';
  $handler->display->display_options['sorts']['field_episode_date_value']['order'] = 'DESC';
  /* Contextual filter: Domain Access: Domain ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'domain_access';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'current_domain';
  $handler->display->display_options['arguments']['gid']['default_argument_skip_url'] = TRUE;
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'episode' => 'episode',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
    1957 => '1957',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';

  /* Display: Defaults */
  $handler = $view->new_display('block', 'Defaults', 'block');
  $handler->display->display_options['display_comment'] = 'Tick \'Skip default argument for view URL\' on the Domain Id contextual filter. This prevents the argument polluting the canonical URL, which affects SEO.';
  $handler->display->display_options['display_description'] = 'This display contains the defaults - don\'t use';
  $handler->display->display_options['link_url'] = 'resources';

  /* Display: For home page */
  $handler = $view->new_display('block', 'For home page', 'block_1');
  $handler->display->display_options['display_description'] = 'Recent library resources for the home page';
  $handler->display->display_options['link_url'] = 'resources';

  /* Display: For Local Activity */
  $handler = $view->new_display('block', 'For Local Activity', 'block_2');
  $handler->display->display_options['display_description'] = 'Recent library resources for a local activity';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More resources';
  $handler->display->display_options['link_url'] = 'resources';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['total_pages'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_in_activity_target_id']['id'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['field'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['label'] = 'Activity';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Highlight */
  $handler->display->display_options['fields']['field_highlight']['id'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['table'] = 'field_data_field_highlight';
  $handler->display->display_options['fields']['field_highlight']['field'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['label'] = '';
  $handler->display->display_options['fields']['field_highlight']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlight']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_highlight']['settings'] = array(
    'image_style' => 'portfolio_653x368',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Activity excluded from display */
  $handler->display->display_options['fields']['field_in_activity']['id'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['field'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['ui_name'] = 'Activity excluded from display';
  $handler->display->display_options['fields']['field_in_activity']['label'] = '';
  $handler->display->display_options['fields']['field_in_activity']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_in_activity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_in_activity']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  /* Field: Content: Resource type */
  $handler->display->display_options['fields']['field_resource_type']['id'] = 'field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['table'] = 'field_data_field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['field'] = 'field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['label'] = '';
  $handler->display->display_options['fields']['field_resource_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_type']['type'] = 'computed_field_unsanitized';
  /* Field: Field: Speaker(s) */
  $handler->display->display_options['fields']['field_speakers']['id'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['table'] = 'field_data_field_speakers';
  $handler->display->display_options['fields']['field_speakers']['field'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['label'] = '';
  $handler->display->display_options['fields']['field_speakers']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speakers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speakers']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_speakers']['delta_offset'] = '0';
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_episode_date']['id'] = 'field_episode_date';
  $handler->display->display_options['fields']['field_episode_date']['table'] = 'field_data_field_episode_date';
  $handler->display->display_options['fields']['field_episode_date']['field'] = 'field_episode_date';
  $handler->display->display_options['fields']['field_episode_date']['label'] = '';
  $handler->display->display_options['fields']['field_episode_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_episode_date']['alter']['text'] = '[field_speakers] | [field_episode_date]';
  $handler->display->display_options['fields']['field_episode_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_episode_date']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'j M Y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Field: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_in_activity_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Domain Access: Domain ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'domain_access';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'current_domain';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'episode' => 'episode',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Ministry Centre (taxonomy_vocabulary_1) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['id'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['field'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['relationship'] = 'field_in_activity_target_id';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['vocabulary'] = 'vocabulary_1';
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
    1957 => '1957',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';

  /* Display: Resource library */
  $handler = $view->new_display('page', 'Resource library', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Resource library';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Our library';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => '2',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'term_node_tid_depth' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_select_all_none_nested' => FALSE,
        'bef_term_description' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => 'All',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'title' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_speakers_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'title_1' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'taxonomy_vocabulary_1_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => 'All',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_resource_type_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => 'All',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['total_pages'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Title';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['format'] = '3';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Search: Score */
  $handler->display->display_options['sorts']['score']['id'] = 'score';
  $handler->display->display_options['sorts']['score']['table'] = 'search_index';
  $handler->display->display_options['sorts']['score']['field'] = 'score';
  $handler->display->display_options['sorts']['score']['order'] = 'DESC';
  /* Sort criterion: Field: Date (field_episode_date) */
  $handler->display->display_options['sorts']['field_episode_date_value']['id'] = 'field_episode_date_value';
  $handler->display->display_options['sorts']['field_episode_date_value']['table'] = 'field_data_field_episode_date';
  $handler->display->display_options['sorts']['field_episode_date_value']['field'] = 'field_episode_date_value';
  $handler->display->display_options['sorts']['field_episode_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'episode' => 'episode',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
    756 => '756',
    757 => '757',
    758 => '758',
    759 => '759',
    760 => '760',
    761 => '761',
    762 => '762',
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'topic';
  $handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '1';
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = 1;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search terms';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Content: Resource type (field_resource_type) */
  $handler->display->display_options['filters']['field_resource_type_value']['id'] = 'field_resource_type_value';
  $handler->display->display_options['filters']['field_resource_type_value']['table'] = 'field_data_field_resource_type';
  $handler->display->display_options['filters']['field_resource_type_value']['field'] = 'field_resource_type_value';
  $handler->display->display_options['filters']['field_resource_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_resource_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_resource_type_value']['expose']['operator_id'] = 'field_resource_type_value_op';
  $handler->display->display_options['filters']['field_resource_type_value']['expose']['label'] = 'Resource type (field_resource_type)';
  $handler->display->display_options['filters']['field_resource_type_value']['expose']['operator'] = 'field_resource_type_value_op';
  $handler->display->display_options['filters']['field_resource_type_value']['expose']['identifier'] = 'field_resource_type_value';
  $handler->display->display_options['filters']['field_resource_type_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_resource_type_value']['group_info']['label'] = 'Resource type';
  $handler->display->display_options['filters']['field_resource_type_value']['group_info']['identifier'] = 'field_resource_type_value';
  $handler->display->display_options['filters']['field_resource_type_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Order hardcopy',
      'operator' => 'contains',
      'value' => 'o',
    ),
    2 => array(
      'title' => 'Video',
      'operator' => 'contains',
      'value' => 'v',
    ),
    3 => array(
      'title' => 'Audio',
      'operator' => 'contains',
      'value' => 'a',
    ),
    4 => array(
      'title' => 'Download PDF',
      'operator' => 'contains',
      'value' => 'd',
    ),
  );
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
    1957 => '1957',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';
  $handler->display->display_options['metatags'] = array(
    'und' => array(
      'title' => array(
        'value' => '[view:title] | [current-page:pager][site:name]',
        'default' => '[view:title] | [current-page:pager][site:name]',
      ),
      'description' => array(
        'value' => 'Looking for answers to life\'s biggest questions? We\'re here to explore with you. Dive into our free resource library.',
        'default' => '[view:description]',
      ),
      'abstract' => array(
        'value' => '',
        'default' => '',
      ),
      'keywords' => array(
        'value' => '',
        'default' => '',
      ),
      'robots' => array(
        'value' => array(
          'index' => 0,
          'follow' => 0,
          'noindex' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
          'noimageindex' => 0,
          'notranslate' => 0,
        ),
        'default' => array(),
      ),
      'news_keywords' => array(
        'value' => '',
        'default' => '',
      ),
      'standout' => array(
        'value' => '',
        'default' => '',
      ),
      'rating' => array(
        'value' => '',
      ),
      'referrer' => array(
        'value' => '',
      ),
      'rights' => array(
        'value' => '',
        'default' => '',
      ),
      'image_src' => array(
        'value' => '',
        'default' => '',
      ),
      'canonical' => array(
        'value' => '[view:url]',
        'default' => '[view:url]',
      ),
      'set_cookie' => array(
        'value' => '',
      ),
      'shortlink' => array(
        'value' => '[current-page:url:unaliased]',
        'default' => '[current-page:url:unaliased]',
      ),
      'original-source' => array(
        'value' => '',
        'default' => '',
      ),
      'prev' => array(
        'value' => '',
      ),
      'next' => array(
        'value' => '',
      ),
      'content-language' => array(
        'value' => '',
        'default' => '',
      ),
      'geo.position' => array(
        'value' => '',
      ),
      'geo.placename' => array(
        'value' => '',
      ),
      'geo.region' => array(
        'value' => '',
      ),
      'icbm' => array(
        'value' => '',
      ),
      'refresh' => array(
        'value' => '',
      ),
      'revisit-after' => array(
        'value' => '',
        'period' => '',
        'default' => '',
      ),
      'pragma' => array(
        'value' => '',
      ),
      'cache-control' => array(
        'value' => '',
      ),
      'expires' => array(
        'value' => '',
      ),
      'og:type' => array(
        'value' => '',
      ),
      'og:url' => array(
        'value' => '',
      ),
      'og:title' => array(
        'value' => '',
      ),
      'og:determiner' => array(
        'value' => '',
      ),
      'og:description' => array(
        'value' => '',
      ),
      'og:updated_time' => array(
        'value' => '',
      ),
      'og:see_also' => array(
        'value' => '',
      ),
      'og:image' => array(
        'value' => '',
      ),
      'og:image:url' => array(
        'value' => '',
      ),
      'og:image:secure_url' => array(
        'value' => '',
      ),
      'og:image:type' => array(
        'value' => '',
      ),
      'og:image:width' => array(
        'value' => '',
      ),
      'og:image:height' => array(
        'value' => '',
      ),
      'og:latitude' => array(
        'value' => '',
      ),
      'og:longitude' => array(
        'value' => '',
      ),
      'og:street_address' => array(
        'value' => '',
      ),
      'og:locality' => array(
        'value' => '',
      ),
      'og:region' => array(
        'value' => '',
      ),
      'og:postal_code' => array(
        'value' => '',
      ),
      'og:country_name' => array(
        'value' => '',
      ),
      'og:email' => array(
        'value' => '',
      ),
      'og:phone_number' => array(
        'value' => '',
      ),
      'og:fax_number' => array(
        'value' => '',
      ),
      'og:locale' => array(
        'value' => '',
      ),
      'og:locale:alternate' => array(
        'value' => '',
      ),
      'article:author' => array(
        'value' => '',
      ),
      'article:publisher' => array(
        'value' => '',
      ),
      'article:section' => array(
        'value' => '',
      ),
      'article:tag' => array(
        'value' => '',
      ),
      'article:published_time' => array(
        'value' => '',
      ),
      'article:modified_time' => array(
        'value' => '',
      ),
      'article:expiration_time' => array(
        'value' => '',
      ),
      'profile:first_name' => array(
        'value' => '',
      ),
      'profile:last_name' => array(
        'value' => '',
      ),
      'profile:username' => array(
        'value' => '',
      ),
      'profile:gender' => array(
        'value' => '',
      ),
      'og:audio' => array(
        'value' => '',
      ),
      'og:audio:secure_url' => array(
        'value' => '',
      ),
      'og:audio:type' => array(
        'value' => '',
      ),
      'book:author' => array(
        'value' => '',
      ),
      'book:isbn' => array(
        'value' => '',
      ),
      'book:release_date' => array(
        'value' => '',
      ),
      'book:tag' => array(
        'value' => '',
      ),
      'og:video:url' => array(
        'value' => '',
      ),
      'og:video:secure_url' => array(
        'value' => '',
      ),
      'og:video:width' => array(
        'value' => '',
      ),
      'og:video:height' => array(
        'value' => '',
      ),
      'og:video:type' => array(
        'value' => '',
      ),
      'video:actor' => array(
        'value' => '',
      ),
      'video:actor:role' => array(
        'value' => '',
      ),
      'video:director' => array(
        'value' => '',
      ),
      'video:writer' => array(
        'value' => '',
      ),
      'video:duration' => array(
        'value' => '',
      ),
      'video:release_date' => array(
        'value' => '',
      ),
      'video:tag' => array(
        'value' => '',
      ),
      'video:series' => array(
        'value' => '',
      ),
      'twitter:card' => array(
        'value' => '',
      ),
      'twitter:creator' => array(
        'value' => '',
      ),
      'twitter:creator:id' => array(
        'value' => '',
      ),
      'twitter:url' => array(
        'value' => '',
      ),
      'twitter:title' => array(
        'value' => '',
      ),
      'twitter:description' => array(
        'value' => '',
      ),
      'twitter:dnt' => array(
        'value' => '',
      ),
      'twitter:image' => array(
        'value' => '',
      ),
      'twitter:image:width' => array(
        'value' => '',
      ),
      'twitter:image:height' => array(
        'value' => '',
      ),
      'twitter:image:alt' => array(
        'value' => '',
      ),
      'twitter:image0' => array(
        'value' => '',
      ),
      'twitter:image1' => array(
        'value' => '',
      ),
      'twitter:image2' => array(
        'value' => '',
      ),
      'twitter:image3' => array(
        'value' => '',
      ),
      'twitter:player' => array(
        'value' => '',
      ),
      'twitter:player:width' => array(
        'value' => '',
      ),
      'twitter:player:height' => array(
        'value' => '',
      ),
      'twitter:player:stream' => array(
        'value' => '',
      ),
      'twitter:player:stream:content_type' => array(
        'value' => '',
      ),
      'twitter:app:country' => array(
        'value' => '',
      ),
      'twitter:app:name:iphone' => array(
        'value' => '',
      ),
      'twitter:app:id:iphone' => array(
        'value' => '',
      ),
      'twitter:app:url:iphone' => array(
        'value' => '',
      ),
      'twitter:app:name:ipad' => array(
        'value' => '',
      ),
      'twitter:app:id:ipad' => array(
        'value' => '',
      ),
      'twitter:app:url:ipad' => array(
        'value' => '',
      ),
      'twitter:app:name:googleplay' => array(
        'value' => '',
      ),
      'twitter:app:id:googleplay' => array(
        'value' => '',
      ),
      'twitter:app:url:googleplay' => array(
        'value' => '',
      ),
      'twitter:label1' => array(
        'value' => '',
      ),
      'twitter:data1' => array(
        'value' => '',
      ),
      'twitter:label2' => array(
        'value' => '',
      ),
      'twitter:data2' => array(
        'value' => '',
      ),
    ),
  );
  $handler->display->display_options['path'] = 'library';

  /* Display: Resource library for topic */
  $handler = $view->new_display('page', 'Resource library for topic', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Resource library';
  $handler->display->display_options['display_description'] = 'This is a duplicate of \'Resource library\' with a different path so block ordering can be different';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Our library';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => '2',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'term_node_tid_depth' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_select_all_none_nested' => FALSE,
        'bef_term_description' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => 'All',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'title' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_speakers_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'title_1' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'taxonomy_vocabulary_1_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => 'All',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_resource_type_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => 'All',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['total_pages'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Title';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['format'] = '3';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Search: Score */
  $handler->display->display_options['sorts']['score']['id'] = 'score';
  $handler->display->display_options['sorts']['score']['table'] = 'search_index';
  $handler->display->display_options['sorts']['score']['field'] = 'score';
  $handler->display->display_options['sorts']['score']['order'] = 'DESC';
  /* Sort criterion: Field: Date (field_episode_date) */
  $handler->display->display_options['sorts']['field_episode_date_value']['id'] = 'field_episode_date_value';
  $handler->display->display_options['sorts']['field_episode_date_value']['table'] = 'field_data_field_episode_date';
  $handler->display->display_options['sorts']['field_episode_date_value']['field'] = 'field_episode_date_value';
  $handler->display->display_options['sorts']['field_episode_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'episode' => 'episode',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
    756 => '756',
    757 => '757',
    758 => '758',
    759 => '759',
    760 => '760',
    761 => '761',
    762 => '762',
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'topic';
  $handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '1';
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = 1;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search terms';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Content: Resource type (field_resource_type) */
  $handler->display->display_options['filters']['field_resource_type_value']['id'] = 'field_resource_type_value';
  $handler->display->display_options['filters']['field_resource_type_value']['table'] = 'field_data_field_resource_type';
  $handler->display->display_options['filters']['field_resource_type_value']['field'] = 'field_resource_type_value';
  $handler->display->display_options['filters']['field_resource_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_resource_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_resource_type_value']['expose']['operator_id'] = 'field_resource_type_value_op';
  $handler->display->display_options['filters']['field_resource_type_value']['expose']['label'] = 'Resource type (field_resource_type)';
  $handler->display->display_options['filters']['field_resource_type_value']['expose']['operator'] = 'field_resource_type_value_op';
  $handler->display->display_options['filters']['field_resource_type_value']['expose']['identifier'] = 'field_resource_type_value';
  $handler->display->display_options['filters']['field_resource_type_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_resource_type_value']['group_info']['label'] = 'Resource type';
  $handler->display->display_options['filters']['field_resource_type_value']['group_info']['identifier'] = 'field_resource_type_value';
  $handler->display->display_options['filters']['field_resource_type_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Order hardcopy',
      'operator' => 'contains',
      'value' => 'o',
    ),
    2 => array(
      'title' => 'Video',
      'operator' => 'contains',
      'value' => 'v',
    ),
    3 => array(
      'title' => 'Audio',
      'operator' => 'contains',
      'value' => 'a',
    ),
    4 => array(
      'title' => 'Download PDF',
      'operator' => 'contains',
      'value' => 'd',
    ),
  );
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
    1957 => '1957',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';
  $handler->display->display_options['metatags'] = array(
    'und' => array(
      'title' => array(
        'value' => '[view:title] | [current-page:pager][site:name]',
        'default' => '[view:title] | [current-page:pager][site:name]',
      ),
      'description' => array(
        'value' => 'Looking for answers to life\'s biggest questions? We\'re here to explore with you. Dive into our free resource library.',
        'default' => '[view:description]',
      ),
      'abstract' => array(
        'value' => '',
        'default' => '',
      ),
      'keywords' => array(
        'value' => '',
        'default' => '',
      ),
      'robots' => array(
        'value' => array(
          'index' => 0,
          'follow' => 0,
          'noindex' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
          'noimageindex' => 0,
          'notranslate' => 0,
        ),
        'default' => array(),
      ),
      'news_keywords' => array(
        'value' => '',
        'default' => '',
      ),
      'standout' => array(
        'value' => '',
        'default' => '',
      ),
      'rating' => array(
        'value' => '',
      ),
      'referrer' => array(
        'value' => '',
      ),
      'rights' => array(
        'value' => '',
        'default' => '',
      ),
      'image_src' => array(
        'value' => '',
        'default' => '',
      ),
      'canonical' => array(
        'value' => '[view:url]',
        'default' => '[view:url]',
      ),
      'set_cookie' => array(
        'value' => '',
      ),
      'shortlink' => array(
        'value' => '[current-page:url:unaliased]',
        'default' => '[current-page:url:unaliased]',
      ),
      'original-source' => array(
        'value' => '',
        'default' => '',
      ),
      'prev' => array(
        'value' => '',
      ),
      'next' => array(
        'value' => '',
      ),
      'content-language' => array(
        'value' => '',
        'default' => '',
      ),
      'geo.position' => array(
        'value' => '',
      ),
      'geo.placename' => array(
        'value' => '',
      ),
      'geo.region' => array(
        'value' => '',
      ),
      'icbm' => array(
        'value' => '',
      ),
      'refresh' => array(
        'value' => '',
      ),
      'revisit-after' => array(
        'value' => '',
        'period' => '',
        'default' => '',
      ),
      'pragma' => array(
        'value' => '',
      ),
      'cache-control' => array(
        'value' => '',
      ),
      'expires' => array(
        'value' => '',
      ),
      'og:type' => array(
        'value' => '',
      ),
      'og:url' => array(
        'value' => '',
      ),
      'og:title' => array(
        'value' => '',
      ),
      'og:determiner' => array(
        'value' => '',
      ),
      'og:description' => array(
        'value' => '',
      ),
      'og:updated_time' => array(
        'value' => '',
      ),
      'og:see_also' => array(
        'value' => '',
      ),
      'og:image' => array(
        'value' => '',
      ),
      'og:image:url' => array(
        'value' => '',
      ),
      'og:image:secure_url' => array(
        'value' => '',
      ),
      'og:image:type' => array(
        'value' => '',
      ),
      'og:image:width' => array(
        'value' => '',
      ),
      'og:image:height' => array(
        'value' => '',
      ),
      'og:latitude' => array(
        'value' => '',
      ),
      'og:longitude' => array(
        'value' => '',
      ),
      'og:street_address' => array(
        'value' => '',
      ),
      'og:locality' => array(
        'value' => '',
      ),
      'og:region' => array(
        'value' => '',
      ),
      'og:postal_code' => array(
        'value' => '',
      ),
      'og:country_name' => array(
        'value' => '',
      ),
      'og:email' => array(
        'value' => '',
      ),
      'og:phone_number' => array(
        'value' => '',
      ),
      'og:fax_number' => array(
        'value' => '',
      ),
      'og:locale' => array(
        'value' => '',
      ),
      'og:locale:alternate' => array(
        'value' => '',
      ),
      'article:author' => array(
        'value' => '',
      ),
      'article:publisher' => array(
        'value' => '',
      ),
      'article:section' => array(
        'value' => '',
      ),
      'article:tag' => array(
        'value' => '',
      ),
      'article:published_time' => array(
        'value' => '',
      ),
      'article:modified_time' => array(
        'value' => '',
      ),
      'article:expiration_time' => array(
        'value' => '',
      ),
      'profile:first_name' => array(
        'value' => '',
      ),
      'profile:last_name' => array(
        'value' => '',
      ),
      'profile:username' => array(
        'value' => '',
      ),
      'profile:gender' => array(
        'value' => '',
      ),
      'og:audio' => array(
        'value' => '',
      ),
      'og:audio:secure_url' => array(
        'value' => '',
      ),
      'og:audio:type' => array(
        'value' => '',
      ),
      'book:author' => array(
        'value' => '',
      ),
      'book:isbn' => array(
        'value' => '',
      ),
      'book:release_date' => array(
        'value' => '',
      ),
      'book:tag' => array(
        'value' => '',
      ),
      'og:video:url' => array(
        'value' => '',
      ),
      'og:video:secure_url' => array(
        'value' => '',
      ),
      'og:video:width' => array(
        'value' => '',
      ),
      'og:video:height' => array(
        'value' => '',
      ),
      'og:video:type' => array(
        'value' => '',
      ),
      'video:actor' => array(
        'value' => '',
      ),
      'video:actor:role' => array(
        'value' => '',
      ),
      'video:director' => array(
        'value' => '',
      ),
      'video:writer' => array(
        'value' => '',
      ),
      'video:duration' => array(
        'value' => '',
      ),
      'video:release_date' => array(
        'value' => '',
      ),
      'video:tag' => array(
        'value' => '',
      ),
      'video:series' => array(
        'value' => '',
      ),
      'twitter:card' => array(
        'value' => '',
      ),
      'twitter:creator' => array(
        'value' => '',
      ),
      'twitter:creator:id' => array(
        'value' => '',
      ),
      'twitter:url' => array(
        'value' => '',
      ),
      'twitter:title' => array(
        'value' => '',
      ),
      'twitter:description' => array(
        'value' => '',
      ),
      'twitter:dnt' => array(
        'value' => '',
      ),
      'twitter:image' => array(
        'value' => '',
      ),
      'twitter:image:width' => array(
        'value' => '',
      ),
      'twitter:image:height' => array(
        'value' => '',
      ),
      'twitter:image:alt' => array(
        'value' => '',
      ),
      'twitter:image0' => array(
        'value' => '',
      ),
      'twitter:image1' => array(
        'value' => '',
      ),
      'twitter:image2' => array(
        'value' => '',
      ),
      'twitter:image3' => array(
        'value' => '',
      ),
      'twitter:player' => array(
        'value' => '',
      ),
      'twitter:player:width' => array(
        'value' => '',
      ),
      'twitter:player:height' => array(
        'value' => '',
      ),
      'twitter:player:stream' => array(
        'value' => '',
      ),
      'twitter:player:stream:content_type' => array(
        'value' => '',
      ),
      'twitter:app:country' => array(
        'value' => '',
      ),
      'twitter:app:name:iphone' => array(
        'value' => '',
      ),
      'twitter:app:id:iphone' => array(
        'value' => '',
      ),
      'twitter:app:url:iphone' => array(
        'value' => '',
      ),
      'twitter:app:name:ipad' => array(
        'value' => '',
      ),
      'twitter:app:id:ipad' => array(
        'value' => '',
      ),
      'twitter:app:url:ipad' => array(
        'value' => '',
      ),
      'twitter:app:name:googleplay' => array(
        'value' => '',
      ),
      'twitter:app:id:googleplay' => array(
        'value' => '',
      ),
      'twitter:app:url:googleplay' => array(
        'value' => '',
      ),
      'twitter:label1' => array(
        'value' => '',
      ),
      'twitter:data1' => array(
        'value' => '',
      ),
      'twitter:label2' => array(
        'value' => '',
      ),
      'twitter:data2' => array(
        'value' => '',
      ),
    ),
  );
  $handler->display->display_options['path'] = 'library/topic';

  /* Display: For Node's activity */
  $handler = $view->new_display('block', 'For Node\'s activity', 'block_3');
  $handler->display->display_options['display_description'] = 'Recent library resources for a node\'s activity';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More resources';
  $handler->display->display_options['link_url'] = 'resources';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_in_activity_target_id']['id'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['field'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['label'] = 'Activity';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_in_activity_node']['id'] = 'reverse_field_in_activity_node';
  $handler->display->display_options['relationships']['reverse_field_in_activity_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_in_activity_node']['field'] = 'reverse_field_in_activity_node';
  $handler->display->display_options['relationships']['reverse_field_in_activity_node']['relationship'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['reverse_field_in_activity_node']['label'] = 'Node referencing Activity';
  $handler->display->display_options['relationships']['reverse_field_in_activity_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_in_activity_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Domain Access: Domain ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'domain_access';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'current_domain';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'episode' => 'episode',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
    1957 => '1957',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';

  /* Display: For Collection */
  $handler = $view->new_display('block', 'For Collection', 'block_4');
  $handler->display->display_options['display_description'] = 'This display shows the recent library resources for a Collection';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Our library';
  $handler->display->display_options['link_url'] = 'resources';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Title';
  $handler->display->display_options['header']['area']['content'] = '<span id="cbf2019-recent-library-view-header">Resources</span>';
  $handler->display->display_options['header']['area']['format'] = '2';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_in_activity_target_id']['id'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['field'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['label'] = 'Activity';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_related_episodes_entityform']['id'] = 'reverse_field_related_episodes_entityform';
  $handler->display->display_options['relationships']['reverse_field_related_episodes_entityform']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_related_episodes_entityform']['field'] = 'reverse_field_related_episodes_entityform';
  $handler->display->display_options['relationships']['reverse_field_related_episodes_entityform']['label'] = 'Collection';
  $handler->display->display_options['relationships']['reverse_field_related_episodes_entityform']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Entityform Submission: Entityform submission ID */
  $handler->display->display_options['arguments']['entityform_id']['id'] = 'entityform_id';
  $handler->display->display_options['arguments']['entityform_id']['table'] = 'entityform';
  $handler->display->display_options['arguments']['entityform_id']['field'] = 'entityform_id';
  $handler->display->display_options['arguments']['entityform_id']['relationship'] = 'reverse_field_related_episodes_entityform';
  $handler->display->display_options['arguments']['entityform_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['entityform_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['entityform_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['entityform_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['entityform_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['entityform_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['entityform_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['entityform_id']['validate']['type'] = 'numeric';
  /* Contextual filter: Domain Access: Domain ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'domain_access';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'current_domain';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'episode' => 'episode',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['id'] = 'taxonomy_vocabulary_3_tid_1';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['relationship'] = 'reverse_field_related_episodes_entityform';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['value'] = array(
    1957 => '1957',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['group'] = 2;
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['vocabulary'] = 'vocabulary_3';
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
    1957 => '1957',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['group'] = 2;
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';

  /* Display: For National Activity */
  $handler = $view->new_display('block', 'For National Activity', 'block_5');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'container';
  $handler->display->display_options['display_description'] = 'Recent library resources for a national activity';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More resources';
  $handler->display->display_options['link_url'] = 'resources';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['total_pages'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_in_activity_target_id']['id'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['field'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['label'] = 'Activity';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Highlight */
  $handler->display->display_options['fields']['field_highlight']['id'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['table'] = 'field_data_field_highlight';
  $handler->display->display_options['fields']['field_highlight']['field'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['label'] = '';
  $handler->display->display_options['fields']['field_highlight']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlight']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_highlight']['settings'] = array(
    'image_style' => 'portfolio_653x368',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Activity excluded from display */
  $handler->display->display_options['fields']['field_in_activity']['id'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['field'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['ui_name'] = 'Activity excluded from display';
  $handler->display->display_options['fields']['field_in_activity']['label'] = '';
  $handler->display->display_options['fields']['field_in_activity']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_in_activity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_in_activity']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  /* Field: Content: Resource type */
  $handler->display->display_options['fields']['field_resource_type']['id'] = 'field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['table'] = 'field_data_field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['field'] = 'field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['label'] = '';
  $handler->display->display_options['fields']['field_resource_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_type']['type'] = 'computed_field_unsanitized';
  /* Field: Field: Speaker(s) */
  $handler->display->display_options['fields']['field_speakers']['id'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['table'] = 'field_data_field_speakers';
  $handler->display->display_options['fields']['field_speakers']['field'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['label'] = '';
  $handler->display->display_options['fields']['field_speakers']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speakers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speakers']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_speakers']['delta_offset'] = '0';
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_episode_date']['id'] = 'field_episode_date';
  $handler->display->display_options['fields']['field_episode_date']['table'] = 'field_data_field_episode_date';
  $handler->display->display_options['fields']['field_episode_date']['field'] = 'field_episode_date';
  $handler->display->display_options['fields']['field_episode_date']['label'] = '';
  $handler->display->display_options['fields']['field_episode_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_episode_date']['alter']['text'] = '[field_speakers] | [field_episode_date]';
  $handler->display->display_options['fields']['field_episode_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_episode_date']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'j M Y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Field: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_in_activity_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Domain Access: Domain ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'domain_access';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'current_domain';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'episode' => 'episode',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Ministry Centre (taxonomy_vocabulary_1) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['id'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['field'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['relationship'] = 'field_in_activity_target_id';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['operator'] = 'empty';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['vocabulary'] = 'vocabulary_1';
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
    1957 => '1957',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';

  /* Display: For speaker */
  $handler = $view->new_display('block', 'For speaker', 'block_6');
  $handler->display->display_options['display_description'] = 'Show recent library content for a speaker';
  $handler->display->display_options['link_url'] = 'resources';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_in_activity_target_id']['id'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['field'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['label'] = 'Activity';
  /* Relationship: Field: Speaker(s) (field_speakers) */
  $handler->display->display_options['relationships']['field_speakers_tid']['id'] = 'field_speakers_tid';
  $handler->display->display_options['relationships']['field_speakers_tid']['table'] = 'field_data_field_speakers';
  $handler->display->display_options['relationships']['field_speakers_tid']['field'] = 'field_speakers_tid';
  $handler->display->display_options['relationships']['field_speakers_tid']['label'] = 'Speaker';
  $handler->display->display_options['relationships']['field_speakers_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_speakers_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['code'] = 'return cbf_get_last_item_in_path();';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'speaker' => 'speaker',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = TRUE;
  /* Contextual filter: Domain Access: Domain ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'domain_access';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'current_domain';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';

  /* Display: For Activity (embedded) */
  $handler = $view->new_display('block', 'For Activity (embedded)', 'block_7');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'container';
  $handler->display->display_options['display_description'] = 'Recent library resources for an activity';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More resources';
  $handler->display->display_options['link_url'] = 'resources';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['total_pages'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_in_activity_target_id']['id'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['field'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['label'] = 'Activity';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Highlight */
  $handler->display->display_options['fields']['field_highlight']['id'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['table'] = 'field_data_field_highlight';
  $handler->display->display_options['fields']['field_highlight']['field'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['label'] = '';
  $handler->display->display_options['fields']['field_highlight']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlight']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_highlight']['settings'] = array(
    'image_style' => 'portfolio_653x368',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Activity excluded from display */
  $handler->display->display_options['fields']['field_in_activity']['id'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['field'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['ui_name'] = 'Activity excluded from display';
  $handler->display->display_options['fields']['field_in_activity']['label'] = '';
  $handler->display->display_options['fields']['field_in_activity']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_in_activity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_in_activity']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  /* Field: Content: Resource type */
  $handler->display->display_options['fields']['field_resource_type']['id'] = 'field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['table'] = 'field_data_field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['field'] = 'field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['label'] = '';
  $handler->display->display_options['fields']['field_resource_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_type']['type'] = 'computed_field_unsanitized';
  /* Field: Field: Speaker(s) */
  $handler->display->display_options['fields']['field_speakers']['id'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['table'] = 'field_data_field_speakers';
  $handler->display->display_options['fields']['field_speakers']['field'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['label'] = '';
  $handler->display->display_options['fields']['field_speakers']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speakers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speakers']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_speakers']['delta_offset'] = '0';
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_episode_date']['id'] = 'field_episode_date';
  $handler->display->display_options['fields']['field_episode_date']['table'] = 'field_data_field_episode_date';
  $handler->display->display_options['fields']['field_episode_date']['field'] = 'field_episode_date';
  $handler->display->display_options['fields']['field_episode_date']['label'] = '';
  $handler->display->display_options['fields']['field_episode_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_episode_date']['alter']['text'] = '[field_speakers] | [field_episode_date]';
  $handler->display->display_options['fields']['field_episode_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_episode_date']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'j M Y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Field: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_in_activity_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Domain Access: Domain ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'domain_access';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'current_domain';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $translatables['cbf2019_recent_library'] = array(
    t('Master'),
    t('<none>'),
    t('More resources'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Title'),
    t('<span id="cbf2019-recent-library-view-header">Recent resources</span>'),
    t('Activity'),
    t('[field_speakers] | [field_episode_date]'),
    t('All'),
    t('Defaults'),
    t('This display contains the defaults - don\'t use'),
    t('more'),
    t('For home page'),
    t('Recent library resources for the home page'),
    t('For Local Activity'),
    t('Recent library resources for a local activity'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Resource library'),
    t('Our library'),
    t('Search'),
    t('Select any filter and click on Apply to see results'),
    t('Advanced options'),
    t('Search terms'),
    t('Resource type (field_resource_type)'),
    t('Resource type'),
    t('Resource library for topic'),
    t('This is a duplicate of \'Resource library\' with a different path so block ordering can be different'),
    t('For Node\'s activity'),
    t('Recent library resources for a node\'s activity'),
    t('Node referencing Activity'),
    t('For Collection'),
    t('This display shows the recent library resources for a Collection'),
    t('<span id="cbf2019-recent-library-view-header">Resources</span>'),
    t('Collection'),
    t('For National Activity'),
    t('Recent library resources for a national activity'),
    t('For speaker'),
    t('Show recent library content for a speaker'),
    t('Speaker'),
    t('For Activity (embedded)'),
    t('Recent library resources for an activity'),
  );
  $export['cbf2019_recent_library'] = $view;

  $view = new view();
  $view->name = 'cbf2019_recycled_content';
  $view->description = 'Embedded in other views. Recycled content for an activity.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'cbf2019 recycled content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = '';
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '4';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '6';
  $handler->display->display_options['style_options']['columns_md'] = '3';
  $handler->display->display_options['style_options']['columns_lg'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Title';
  $handler->display->display_options['header']['area']['content'] = '<span id="cbf2019-recycled-content-view-header">Recycled content</span>';
  $handler->display->display_options['header']['area']['format'] = '2';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['link_class'] = 'btn btn-mod btn-border btn-medium btn-round';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Field: Highlight */
  $handler->display->display_options['fields']['field_highlight']['id'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['table'] = 'field_data_field_highlight';
  $handler->display->display_options['fields']['field_highlight']['field'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['label'] = '';
  $handler->display->display_options['fields']['field_highlight']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlight']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_highlight']['settings'] = array(
    'image_style' => 'portfolio_653x368',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Activity */
  $handler->display->display_options['fields']['field_in_activity']['id'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['field'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['label'] = '';
  $handler->display->display_options['fields']['field_in_activity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_in_activity']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  /* Field: Content: Resource type */
  $handler->display->display_options['fields']['field_resource_type']['id'] = 'field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['table'] = 'field_data_field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['field'] = 'field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['label'] = '';
  $handler->display->display_options['fields']['field_resource_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_type']['type'] = 'computed_field_unsanitized';
  /* Field: Field: Speaker(s) */
  $handler->display->display_options['fields']['field_speakers']['id'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['table'] = 'field_data_field_speakers';
  $handler->display->display_options['fields']['field_speakers']['field'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['label'] = '';
  $handler->display->display_options['fields']['field_speakers']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speakers']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_speakers']['alter']['text'] = '<span>[field_speakers]</span> <div class="field-rewrite-half-separator"></div>';
  $handler->display->display_options['fields']['field_speakers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speakers']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_speakers']['delta_offset'] = '0';
  /* Field: Field: Date text */
  $handler->display->display_options['fields']['field_date_text']['id'] = 'field_date_text';
  $handler->display->display_options['fields']['field_date_text']['table'] = 'field_data_field_date_text';
  $handler->display->display_options['fields']['field_date_text']['field'] = 'field_date_text';
  $handler->display->display_options['fields']['field_date_text']['label'] = '';
  $handler->display->display_options['fields']['field_date_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date_text']['alter']['text'] = '[field_speakers] <div class="field-rewrite-half-separator"></div> [field_date_text]';
  $handler->display->display_options['fields']['field_date_text']['element_label_colon'] = FALSE;
  /* Field: Field: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Recycle date (field_recycle_date) */
  $handler->display->display_options['sorts']['field_recycle_date_value']['id'] = 'field_recycle_date_value';
  $handler->display->display_options['sorts']['field_recycle_date_value']['table'] = 'field_data_field_recycle_date';
  $handler->display->display_options['sorts']['field_recycle_date_value']['field'] = 'field_recycle_date_value';
  $handler->display->display_options['sorts']['field_recycle_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Recycle date (field_recycle_date) */
  $handler->display->display_options['filters']['field_recycle_date_value']['id'] = 'field_recycle_date_value';
  $handler->display->display_options['filters']['field_recycle_date_value']['table'] = 'field_data_field_recycle_date';
  $handler->display->display_options['filters']['field_recycle_date_value']['field'] = 'field_recycle_date_value';
  $handler->display->display_options['filters']['field_recycle_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_recycle_date_value']['default_date'] = 'now';
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
    1957 => '1957',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';

  /* Display: Defaults */
  $handler = $view->new_display('block', 'Defaults', 'block');
  $handler->display->display_options['display_description'] = 'This display contains the defaults - don\'t use';
  $handler->display->display_options['link_url'] = 'library';

  /* Display: For Local Activity */
  $handler = $view->new_display('block', 'For Local Activity', 'block_1');
  $handler->display->display_options['display_description'] = 'Show recycled content for a local Activity';
  $handler->display->display_options['link_url'] = 'library';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Title';
  $handler->display->display_options['header']['area']['content'] = '<span id="cbf2019-recycled-content-view-header">[field_recycle_label]</span>';
  $handler->display->display_options['header']['area']['format'] = '2';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_in_activity_target_id']['id'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['field'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['label'] = 'Activity';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['link_class'] = 'btn btn-mod btn-border btn-medium btn-round';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Field: Highlight */
  $handler->display->display_options['fields']['field_highlight']['id'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['table'] = 'field_data_field_highlight';
  $handler->display->display_options['fields']['field_highlight']['field'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['label'] = '';
  $handler->display->display_options['fields']['field_highlight']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlight']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_highlight']['settings'] = array(
    'image_style' => 'portfolio_653x368',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Activity */
  $handler->display->display_options['fields']['field_in_activity']['id'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['field'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['label'] = '';
  $handler->display->display_options['fields']['field_in_activity']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_in_activity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_in_activity']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  /* Field: Content: Resource type */
  $handler->display->display_options['fields']['field_resource_type']['id'] = 'field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['table'] = 'field_data_field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['field'] = 'field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['label'] = '';
  $handler->display->display_options['fields']['field_resource_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_type']['type'] = 'computed_field_unsanitized';
  /* Field: Field: Speaker(s) */
  $handler->display->display_options['fields']['field_speakers']['id'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['table'] = 'field_data_field_speakers';
  $handler->display->display_options['fields']['field_speakers']['field'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['label'] = '';
  $handler->display->display_options['fields']['field_speakers']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speakers']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_speakers']['alter']['text'] = '<span>[field_speakers]</span> <div class="field-rewrite-half-separator"></div>';
  $handler->display->display_options['fields']['field_speakers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speakers']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_speakers']['delta_offset'] = '0';
  /* Field: Field: Date text */
  $handler->display->display_options['fields']['field_date_text']['id'] = 'field_date_text';
  $handler->display->display_options['fields']['field_date_text']['table'] = 'field_data_field_date_text';
  $handler->display->display_options['fields']['field_date_text']['field'] = 'field_date_text';
  $handler->display->display_options['fields']['field_date_text']['label'] = '';
  $handler->display->display_options['fields']['field_date_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date_text']['alter']['text'] = '[field_speakers] <div class="field-rewrite-half-separator"></div> [field_date_text]';
  $handler->display->display_options['fields']['field_date_text']['element_label_colon'] = FALSE;
  /* Field: Field: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  /* Field: Content: Recycle label */
  $handler->display->display_options['fields']['field_recycle_label']['id'] = 'field_recycle_label';
  $handler->display->display_options['fields']['field_recycle_label']['table'] = 'field_data_field_recycle_label';
  $handler->display->display_options['fields']['field_recycle_label']['field'] = 'field_recycle_label';
  $handler->display->display_options['fields']['field_recycle_label']['relationship'] = 'field_in_activity_target_id';
  $handler->display->display_options['fields']['field_recycle_label']['label'] = '';
  $handler->display->display_options['fields']['field_recycle_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_recycle_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_recycle_label']['empty'] = 'Recycled content';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_in_activity_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'activity' => 'activity',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Recycle date (field_recycle_date) */
  $handler->display->display_options['filters']['field_recycle_date_value']['id'] = 'field_recycle_date_value';
  $handler->display->display_options['filters']['field_recycle_date_value']['table'] = 'field_data_field_recycle_date';
  $handler->display->display_options['filters']['field_recycle_date_value']['field'] = 'field_recycle_date_value';
  $handler->display->display_options['filters']['field_recycle_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_recycle_date_value']['default_date'] = 'now';
  /* Filter criterion: Field: Ministry Centre (taxonomy_vocabulary_1) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['id'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['field'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['relationship'] = 'field_in_activity_target_id';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['vocabulary'] = 'vocabulary_1';
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
    1957 => '1957',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';

  /* Display: For National Activity */
  $handler = $view->new_display('block', 'For National Activity', 'block_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'container';
  $handler->display->display_options['display_description'] = 'Show recycled content for a national Activity';
  $handler->display->display_options['link_url'] = 'library';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Title';
  $handler->display->display_options['header']['area']['content'] = '<span id="cbf2019-recycled-content-view-header">[field_recycle_label]</span>';
  $handler->display->display_options['header']['area']['format'] = '2';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_in_activity_target_id']['id'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['field'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['label'] = 'Activity';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['link_class'] = 'btn btn-mod btn-border btn-medium btn-round';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Field: Highlight */
  $handler->display->display_options['fields']['field_highlight']['id'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['table'] = 'field_data_field_highlight';
  $handler->display->display_options['fields']['field_highlight']['field'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['label'] = '';
  $handler->display->display_options['fields']['field_highlight']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlight']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_highlight']['settings'] = array(
    'image_style' => 'portfolio_653x368',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Activity */
  $handler->display->display_options['fields']['field_in_activity']['id'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['field'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['label'] = '';
  $handler->display->display_options['fields']['field_in_activity']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_in_activity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_in_activity']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  /* Field: Content: Resource type */
  $handler->display->display_options['fields']['field_resource_type']['id'] = 'field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['table'] = 'field_data_field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['field'] = 'field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['label'] = '';
  $handler->display->display_options['fields']['field_resource_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_type']['type'] = 'computed_field_unsanitized';
  /* Field: Field: Speaker(s) */
  $handler->display->display_options['fields']['field_speakers']['id'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['table'] = 'field_data_field_speakers';
  $handler->display->display_options['fields']['field_speakers']['field'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['label'] = '';
  $handler->display->display_options['fields']['field_speakers']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speakers']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_speakers']['alter']['text'] = '<span>[field_speakers]</span> <div class="field-rewrite-half-separator"></div>';
  $handler->display->display_options['fields']['field_speakers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speakers']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_speakers']['delta_offset'] = '0';
  /* Field: Field: Date text */
  $handler->display->display_options['fields']['field_date_text']['id'] = 'field_date_text';
  $handler->display->display_options['fields']['field_date_text']['table'] = 'field_data_field_date_text';
  $handler->display->display_options['fields']['field_date_text']['field'] = 'field_date_text';
  $handler->display->display_options['fields']['field_date_text']['label'] = '';
  $handler->display->display_options['fields']['field_date_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date_text']['alter']['text'] = '[field_speakers] <div class="field-rewrite-half-separator"></div> [field_date_text]';
  $handler->display->display_options['fields']['field_date_text']['element_label_colon'] = FALSE;
  /* Field: Field: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  /* Field: Content: Recycle label */
  $handler->display->display_options['fields']['field_recycle_label']['id'] = 'field_recycle_label';
  $handler->display->display_options['fields']['field_recycle_label']['table'] = 'field_data_field_recycle_label';
  $handler->display->display_options['fields']['field_recycle_label']['field'] = 'field_recycle_label';
  $handler->display->display_options['fields']['field_recycle_label']['relationship'] = 'field_in_activity_target_id';
  $handler->display->display_options['fields']['field_recycle_label']['label'] = '';
  $handler->display->display_options['fields']['field_recycle_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_recycle_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_recycle_label']['empty'] = 'Recycled content';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_in_activity_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'activity' => 'activity',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Recycle date (field_recycle_date) */
  $handler->display->display_options['filters']['field_recycle_date_value']['id'] = 'field_recycle_date_value';
  $handler->display->display_options['filters']['field_recycle_date_value']['table'] = 'field_data_field_recycle_date';
  $handler->display->display_options['filters']['field_recycle_date_value']['field'] = 'field_recycle_date_value';
  $handler->display->display_options['filters']['field_recycle_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_recycle_date_value']['default_date'] = 'now';
  /* Filter criterion: Field: Ministry Centre (taxonomy_vocabulary_1) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['id'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['field'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['relationship'] = 'field_in_activity_target_id';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['operator'] = 'empty';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['vocabulary'] = 'vocabulary_1';
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
    1957 => '1957',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';

  /* Display: For Activity (embedded) */
  $handler = $view->new_display('block', 'For Activity (embedded)', 'block_3');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'container';
  $handler->display->display_options['display_description'] = 'Show recycled content for an Activity';
  $handler->display->display_options['link_url'] = 'library';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Title';
  $handler->display->display_options['header']['area']['content'] = '<span id="cbf2019-recycled-content-view-header">%2</span>';
  $handler->display->display_options['header']['area']['format'] = '2';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_in_activity_target_id']['id'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['field'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['label'] = 'Activity';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_in_activity_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'activity' => 'activity',
  );
  /* Contextual filter: Title */
  $handler->display->display_options['arguments']['null']['id'] = 'null';
  $handler->display->display_options['arguments']['null']['table'] = 'views';
  $handler->display->display_options['arguments']['null']['field'] = 'null';
  $handler->display->display_options['arguments']['null']['ui_name'] = 'Title';
  $handler->display->display_options['arguments']['null']['default_action'] = 'default';
  $handler->display->display_options['arguments']['null']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['null']['default_argument_options']['argument'] = 'Recycled content';
  $handler->display->display_options['arguments']['null']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['null']['summary_options']['items_per_page'] = '25';
  $translatables['cbf2019_recycled_content'] = array(
    t('Master'),
    t('<none>'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Title'),
    t('<span id="cbf2019-recycled-content-view-header">Recycled content</span>'),
    t('<span>[field_speakers]</span> <div class="field-rewrite-half-separator"></div>'),
    t('[field_speakers] <div class="field-rewrite-half-separator"></div> [field_date_text]'),
    t('Defaults'),
    t('This display contains the defaults - don\'t use'),
    t('more'),
    t('For Local Activity'),
    t('Show recycled content for a local Activity'),
    t('<span id="cbf2019-recycled-content-view-header">[field_recycle_label]</span>'),
    t('Activity'),
    t('Recycled content'),
    t('All'),
    t('For National Activity'),
    t('Show recycled content for a national Activity'),
    t('For Activity (embedded)'),
    t('Show recycled content for an Activity'),
    t('<span id="cbf2019-recycled-content-view-header">%2</span>'),
  );
  $export['cbf2019_recycled_content'] = $view;

  $view = new view();
  $view->name = 'cbf2019_related_content';
  $view->description = 'Content related to the current node';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'cbf2019 related content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = '';
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time_per_domain';
  $handler->display->display_options['cache']['results_lifespan'] = '1800';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '1800';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '4';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '6';
  $handler->display->display_options['style_options']['columns_md'] = '3';
  $handler->display->display_options['style_options']['columns_lg'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Title';
  $handler->display->display_options['header']['area']['content'] = 'Related content';
  $handler->display->display_options['header']['area']['format'] = '3';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_related_content_node']['id'] = 'reverse_field_related_content_node';
  $handler->display->display_options['relationships']['reverse_field_related_content_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_related_content_node']['field'] = 'reverse_field_related_content_node';
  $handler->display->display_options['relationships']['reverse_field_related_content_node']['label'] = 'Referencing content';
  $handler->display->display_options['relationships']['reverse_field_related_content_node']['required'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['link_class'] = 'btn btn-mod btn-border btn-medium btn-round';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Field: Highlight */
  $handler->display->display_options['fields']['field_highlight']['id'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['table'] = 'field_data_field_highlight';
  $handler->display->display_options['fields']['field_highlight']['field'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['label'] = '';
  $handler->display->display_options['fields']['field_highlight']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlight']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_highlight']['settings'] = array(
    'image_style' => 'portfolio_653x368',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Activity */
  $handler->display->display_options['fields']['field_in_activity']['id'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['field'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['label'] = '';
  $handler->display->display_options['fields']['field_in_activity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_in_activity']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  /* Field: Content: Resource type */
  $handler->display->display_options['fields']['field_resource_type']['id'] = 'field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['table'] = 'field_data_field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['field'] = 'field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['label'] = '';
  $handler->display->display_options['fields']['field_resource_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_type']['type'] = 'computed_field_unsanitized';
  /* Field: Field: Speaker(s) */
  $handler->display->display_options['fields']['field_speakers']['id'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['table'] = 'field_data_field_speakers';
  $handler->display->display_options['fields']['field_speakers']['field'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['label'] = '';
  $handler->display->display_options['fields']['field_speakers']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speakers']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_speakers']['alter']['text'] = '<span>[field_speakers]</span> <div class="field-rewrite-half-separator"></div>';
  $handler->display->display_options['fields']['field_speakers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speakers']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_speakers']['delta_offset'] = '0';
  /* Field: Field: Date text */
  $handler->display->display_options['fields']['field_date_text']['id'] = 'field_date_text';
  $handler->display->display_options['fields']['field_date_text']['table'] = 'field_data_field_date_text';
  $handler->display->display_options['fields']['field_date_text']['field'] = 'field_date_text';
  $handler->display->display_options['fields']['field_date_text']['label'] = '';
  $handler->display->display_options['fields']['field_date_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date_text']['alter']['text'] = '[field_speakers] <div class="field-rewrite-half-separator"></div> [field_date_text]';
  $handler->display->display_options['fields']['field_date_text']['element_label_colon'] = FALSE;
  /* Field: Field: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  /* Sort criterion: Field: Date (field_episode_date) */
  $handler->display->display_options['sorts']['field_episode_date_value']['id'] = 'field_episode_date_value';
  $handler->display->display_options['sorts']['field_episode_date_value']['table'] = 'field_data_field_episode_date';
  $handler->display->display_options['sorts']['field_episode_date_value']['field'] = 'field_episode_date_value';
  $handler->display->display_options['sorts']['field_episode_date_value']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_related_content_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
    1957 => '1957',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';

  /* Display: Defaults */
  $handler = $view->new_display('block', 'Defaults', 'block');
  $handler->display->display_options['display_description'] = 'This display contains the defaults - don\'t use';
  $handler->display->display_options['link_url'] = 'library';

  /* Display: For Episode */
  $handler = $view->new_display('block', 'For Episode', 'block_1');
  $handler->display->display_options['display_comment'] = 'Disabling caching on this display as this doesn\'t work when the No Results view is invoked.';
  $handler->display->display_options['display_description'] = 'Related content for a Library Episode';
  $handler->display->display_options['link_url'] = 'library';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_related_content_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'episode' => 'episode',
  );
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
    1957 => '1957',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';

  /* Display: For non-Episode */
  $handler = $view->new_display('block', 'For non-Episode', 'block_2');
  $handler->display->display_options['display_description'] = 'Related content for a node that is not a Library Episode';
  $handler->display->display_options['link_url'] = 'library';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_related_content_node';
  $handler->display->display_options['filters']['type']['operator'] = 'not in';
  $handler->display->display_options['filters']['type']['value'] = array(
    'episode' => 'episode',
  );
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
    1957 => '1957',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';
  $translatables['cbf2019_related_content'] = array(
    t('Master'),
    t('<none>'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Title'),
    t('Related content'),
    t('Referencing content'),
    t('<span>[field_speakers]</span> <div class="field-rewrite-half-separator"></div>'),
    t('[field_speakers] <div class="field-rewrite-half-separator"></div> [field_date_text]'),
    t('All'),
    t('Defaults'),
    t('This display contains the defaults - don\'t use'),
    t('more'),
    t('For Episode'),
    t('Related content for a Library Episode'),
    t('For non-Episode'),
    t('Related content for a node that is not a Library Episode'),
  );
  $export['cbf2019_related_content'] = $view;

  $view = new view();
  $view->name = 'cbf2019_search';
  $view->description = 'Search results for nodes';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'cbf2019 search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Results for "!1"';
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'Our library';
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => '2',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'keys' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '4';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '6';
  $handler->display->display_options['style_options']['columns_md'] = '4';
  $handler->display->display_options['style_options']['columns_lg'] = '0';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No content matches your search';
  $handler->display->display_options['empty']['area']['format'] = '2';
  /* Field: Field: Highlight */
  $handler->display->display_options['fields']['field_highlight']['id'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['table'] = 'field_data_field_highlight';
  $handler->display->display_options['fields']['field_highlight']['field'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['label'] = '';
  $handler->display->display_options['fields']['field_highlight']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_highlight']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlight']['empty'] = '<img src="/sites/default/files/styles/third_space_grid/public/default_images/default-highlight-image_1.png?itok=Ohfuj8IE" alt="Alt" width="450" height="450">';
  $handler->display->display_options['fields']['field_highlight']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_highlight']['settings'] = array(
    'image_style' => 'third_space_grid',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  /* Field: Content: Resource type */
  $handler->display->display_options['fields']['field_resource_type']['id'] = 'field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['table'] = 'field_data_field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['field'] = 'field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['label'] = '';
  $handler->display->display_options['fields']['field_resource_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_resource_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_type']['type'] = 'computed_field_unsanitized';
  /* Field: Field: Speaker(s) */
  $handler->display->display_options['fields']['field_speakers']['id'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['table'] = 'field_data_field_speakers';
  $handler->display->display_options['fields']['field_speakers']['field'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['label'] = '';
  $handler->display->display_options['fields']['field_speakers']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speakers']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_speakers']['alter']['text'] = '<span>[field_speakers]</span> <div class="field-rewrite-half-separator"></div>';
  $handler->display->display_options['fields']['field_speakers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speakers']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_speakers']['delta_offset'] = '0';
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_episode_date']['id'] = 'field_episode_date';
  $handler->display->display_options['fields']['field_episode_date']['table'] = 'field_data_field_episode_date';
  $handler->display->display_options['fields']['field_episode_date']['field'] = 'field_episode_date';
  $handler->display->display_options['fields']['field_episode_date']['label'] = '';
  $handler->display->display_options['fields']['field_episode_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_episode_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_episode_date']['alter']['text'] = '[field_speakers] <div class="field-rewrite-half-separator"></div> [field_episode_date]';
  $handler->display->display_options['fields']['field_episode_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_episode_date']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'j M Y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<div class="overlaid-image">[field_highlight]</div>
<div class="image-overlay">
  <div class="image-overlay-inner">
    <div class="views-field views-field-title">[title]</div>
    <div class="views-field views-field-subtitle">[field_subtitle]</div>
    <div class="views-field views-field-episode-date">[field_episode_date]</div>
    <div class="views-field views-field-field-resource-type">[field_resource_type]</div>
  </div>
</div>';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_wrapper_class'] = 'image-plus-fixed-overlay';
  /* Sort criterion: Search: Score */
  $handler->display->display_options['sorts']['score']['id'] = 'score';
  $handler->display->display_options['sorts']['score']['table'] = 'search_index';
  $handler->display->display_options['sorts']['score']['field'] = 'score';
  $handler->display->display_options['sorts']['score']['order'] = 'DESC';
  /* Sort criterion: Field: Date (field_episode_date) */
  $handler->display->display_options['sorts']['field_episode_date_value']['id'] = 'field_episode_date_value';
  $handler->display->display_options['sorts']['field_episode_date_value']['table'] = 'field_data_field_episode_date';
  $handler->display->display_options['sorts']['field_episode_date_value']['field'] = 'field_episode_date_value';
  $handler->display->display_options['sorts']['field_episode_date_value']['order'] = 'DESC';
  /* Contextual filter: Search: Search Terms */
  $handler->display->display_options['arguments']['keys']['id'] = 'keys';
  $handler->display->display_options['arguments']['keys']['table'] = 'search_index';
  $handler->display->display_options['arguments']['keys']['field'] = 'keys';
  $handler->display->display_options['arguments']['keys']['default_action'] = 'default';
  $handler->display->display_options['arguments']['keys']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['keys']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['keys']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['keys']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['keys']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Domain Access: Domain ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'domain_access';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'current_domain';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'activity' => 'activity',
    'blog' => 'blog',
    'episode' => 'episode',
    'page' => 'page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
    1957 => '1957',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';

  /* Display: Defaults */
  $handler = $view->new_display('block', 'Defaults', 'block');
  $handler->display->display_options['display_description'] = 'This display contains the defaults - don\'t use';
  $handler->display->display_options['link_url'] = 'library';

  /* Display: Search results page */
  $handler = $view->new_display('page', 'Search results page', 'page_1');
  $handler->display->display_options['path'] = 'search/node/%';
  $translatables['cbf2019_search'] = array(
    t('Master'),
    t('Results for "!1"'),
    t('Our library'),
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Select any filter and click on Apply to see results'),
    t('Advanced options'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('No content matches your search'),
    t('<img src="/sites/default/files/styles/third_space_grid/public/default_images/default-highlight-image_1.png?itok=Ohfuj8IE" alt="Alt" width="450" height="450">'),
    t('<span>[field_speakers]</span> <div class="field-rewrite-half-separator"></div>'),
    t('[field_speakers] <div class="field-rewrite-half-separator"></div> [field_episode_date]'),
    t('<div class="overlaid-image">[field_highlight]</div>
<div class="image-overlay">
  <div class="image-overlay-inner">
    <div class="views-field views-field-title">[title]</div>
    <div class="views-field views-field-subtitle">[field_subtitle]</div>
    <div class="views-field views-field-episode-date">[field_episode_date]</div>
    <div class="views-field views-field-field-resource-type">[field_resource_type]</div>
  </div>
</div>'),
    t('All'),
    t('Defaults'),
    t('This display contains the defaults - don\'t use'),
    t('more'),
    t('Search results page'),
  );
  $export['cbf2019_search'] = $view;

  $view = new view();
  $view->name = 'cbf2019_speaker_admin_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'cbf2019 speaker admin view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Speakers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => '2',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'name' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'description' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_highlight_fid' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
      ),
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_image_fid' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
      ),
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'name' => 'name',
    'nid' => 'nid',
    'id' => 'id',
    'description' => 'description',
    'field_highlight' => 'field_highlight',
    'field_image' => 'field_image',
    'edit_term' => 'edit_term',
  );
  $handler->display->display_options['style_options']['default'] = 'name';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'id' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'description' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_highlight' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_image' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_term' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'This page is where you set up Speaker bios and pictures. It assumes the Speaker already exists.

If your Speaker doesn&#39;t yet exist...
<ul>
  <li>Go back to your article and add the Speaker there
  <ul>
    <li>Type in the name of the Speaker</li>
    <li>Save the article</li>
    <li>Come back here, find the new Speaker and then fill in their details</li>
  </ul></li>
  <li>Note that if you are a super user you can <a href="/admin/structure/taxonomy/speaker/add">create a new Speaker</a> directly.</li>
</ul>

You may discover you have inadvertently created a duplicate of your Speaker. This is possible because Sam Chan etc are common names. To remove a duplicate ...
<ul>
  <li>Edit the duplicate Speaker below and click the Delete button at the bottom of the edit screen.</li>
  <li>Go back to your article.</li>
  <li>Type (part of) the Speaker name into the article&#39;s Speakers field but click the correct item in the dropdown list.</li>
  <li>Save your article</li>
</ul>

Notes ...
<ul>
  <li>To be visible in an article, the Speaker must have a description (bio)</ii>
  <li>For best results, add a Landscape Image to the Speaker. A Portrait Image will also work but is less pleasing. If no image is added, a place-marker is displayed.</ii>
  <li>To find an existing speaker, use the form below to narrow the search by name or description or image type</ii>
  <li>The listing of Speakers tells you how many Articles and CiviCRM Events refer to each Speaker. The Speaker description should be suitably generic to work in all these contexts. The listing also shows you some of the Description and whether a Landscape or Portrait image is attached.</ii>
  <li>To edit or delete a Speaker, click the Edit link and from there you can either edit and Save, or Delete the Speaker.</ii>
</ul>
';
  $handler->display->display_options['header']['area']['format'] = '2';
  /* Relationship: Taxonomy term: Content using Speaker(s) */
  $handler->display->display_options['relationships']['reverse_field_speakers_node']['id'] = 'reverse_field_speakers_node';
  $handler->display->display_options['relationships']['reverse_field_speakers_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_speakers_node']['field'] = 'reverse_field_speakers_node';
  $handler->display->display_options['relationships']['reverse_field_speakers_node']['label'] = 'Content';
  /* Field: Bulk operations: Taxonomy term */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_taxonomy_term';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Select';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'log' => 0,
      ),
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_speakers_node';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Articles';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = 'Description';
  $handler->display->display_options['fields']['description']['alter']['max_length'] = '128';
  $handler->display->display_options['fields']['description']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['description']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Field: Field: Highlight */
  $handler->display->display_options['fields']['field_highlight']['id'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['table'] = 'field_data_field_highlight';
  $handler->display->display_options['fields']['field_highlight']['field'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['label'] = 'Landscape image';
  $handler->display->display_options['fields']['field_highlight']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_highlight']['alter']['text'] = '[field_highlight-fid]';
  $handler->display->display_options['fields']['field_highlight']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlight']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_highlight']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_highlight']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_highlight']['group_columns'] = array(
    'fid' => 'fid',
  );
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = 'Portrait image';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['text'] = '[field_image-fid]';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_image']['group_columns'] = array(
    'fid' => 'fid',
  );
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = 'Operations';
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['text'] = '<a href="/taxonomy/term/[tid]/edit?destination=admin/cbf/speakers">Edit</a>';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'speaker' => 'speaker',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['group'] = 1;
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Name contains';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    3 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['name']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_field'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['name']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['name']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Taxonomy term: Term description */
  $handler->display->display_options['filters']['description']['id'] = 'description';
  $handler->display->display_options['filters']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['description']['field'] = 'description';
  $handler->display->display_options['filters']['description']['operator'] = 'contains';
  $handler->display->display_options['filters']['description']['group'] = 1;
  $handler->display->display_options['filters']['description']['exposed'] = TRUE;
  $handler->display->display_options['filters']['description']['expose']['operator_id'] = 'description_op';
  $handler->display->display_options['filters']['description']['expose']['label'] = 'Description contains';
  $handler->display->display_options['filters']['description']['expose']['operator'] = 'description_op';
  $handler->display->display_options['filters']['description']['expose']['identifier'] = 'description';
  $handler->display->display_options['filters']['description']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    3 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['description']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['description']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['description']['expose']['autocomplete_field'] = 'description';
  $handler->display->display_options['filters']['description']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['description']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['description']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Field: Highlight (field_highlight:fid) */
  $handler->display->display_options['filters']['field_highlight_fid']['id'] = 'field_highlight_fid';
  $handler->display->display_options['filters']['field_highlight_fid']['table'] = 'field_data_field_highlight';
  $handler->display->display_options['filters']['field_highlight_fid']['field'] = 'field_highlight_fid';
  $handler->display->display_options['filters']['field_highlight_fid']['group'] = 1;
  $handler->display->display_options['filters']['field_highlight_fid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_highlight_fid']['expose']['operator_id'] = 'field_highlight_fid_op';
  $handler->display->display_options['filters']['field_highlight_fid']['expose']['label'] = 'Highlight (field_highlight:fid)';
  $handler->display->display_options['filters']['field_highlight_fid']['expose']['operator'] = 'field_highlight_fid_op';
  $handler->display->display_options['filters']['field_highlight_fid']['expose']['identifier'] = 'field_highlight_fid';
  $handler->display->display_options['filters']['field_highlight_fid']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_highlight_fid']['group_info']['label'] = 'Has landscape image';
  $handler->display->display_options['filters']['field_highlight_fid']['group_info']['identifier'] = 'field_highlight_fid';
  $handler->display->display_options['filters']['field_highlight_fid']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'No',
      'operator' => 'empty',
      'value' => array(
        'value' => '0',
        'min' => '',
        'max' => '',
      ),
    ),
    2 => array(
      'title' => 'Yes',
      'operator' => 'not empty',
      'value' => array(
        'value' => '0',
        'min' => '',
        'max' => '',
      ),
    ),
  );
  /* Filter criterion: Field: Image (field_image:fid) */
  $handler->display->display_options['filters']['field_image_fid']['id'] = 'field_image_fid';
  $handler->display->display_options['filters']['field_image_fid']['table'] = 'field_data_field_image';
  $handler->display->display_options['filters']['field_image_fid']['field'] = 'field_image_fid';
  $handler->display->display_options['filters']['field_image_fid']['group'] = 1;
  $handler->display->display_options['filters']['field_image_fid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_image_fid']['expose']['operator_id'] = 'field_image_fid_op';
  $handler->display->display_options['filters']['field_image_fid']['expose']['label'] = 'Image (field_image:fid)';
  $handler->display->display_options['filters']['field_image_fid']['expose']['operator'] = 'field_image_fid_op';
  $handler->display->display_options['filters']['field_image_fid']['expose']['identifier'] = 'field_image_fid';
  $handler->display->display_options['filters']['field_image_fid']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_image_fid']['group_info']['label'] = 'Has portrait image';
  $handler->display->display_options['filters']['field_image_fid']['group_info']['identifier'] = 'field_image_fid';
  $handler->display->display_options['filters']['field_image_fid']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'No',
      'operator' => 'empty',
      'value' => array(
        'value' => '0',
        'min' => '',
        'max' => '',
      ),
    ),
    2 => array(
      'title' => 'Yes',
      'operator' => 'not empty',
      'value' => array(
        'value' => '0',
        'min' => '',
        'max' => '',
      ),
    ),
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/cbf/speakers';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Speakers';
  $handler->display->display_options['menu']['name'] = 'management';
  $translatables['cbf2019_speaker_admin_view'] = array(
    t('Master'),
    t('Speakers'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Select any filter and click on Apply to see results'),
    t('Advanced options'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('This page is where you set up Speaker bios and pictures. It assumes the Speaker already exists.

If your Speaker doesn&#39;t yet exist...
<ul>
  <li>Go back to your article and add the Speaker there
  <ul>
    <li>Type in the name of the Speaker</li>
    <li>Save the article</li>
    <li>Come back here, find the new Speaker and then fill in their details</li>
  </ul></li>
  <li>Note that if you are a super user you can <a href="/admin/structure/taxonomy/speaker/add">create a new Speaker</a> directly.</li>
</ul>

You may discover you have inadvertently created a duplicate of your Speaker. This is possible because Sam Chan etc are common names. To remove a duplicate ...
<ul>
  <li>Edit the duplicate Speaker below and click the Delete button at the bottom of the edit screen.</li>
  <li>Go back to your article.</li>
  <li>Type (part of) the Speaker name into the article&#39;s Speakers field but click the correct item in the dropdown list.</li>
  <li>Save your article</li>
</ul>

Notes ...
<ul>
  <li>To be visible in an article, the Speaker must have a description (bio)</ii>
  <li>For best results, add a Landscape Image to the Speaker. A Portrait Image will also work but is less pleasing. If no image is added, a place-marker is displayed.</ii>
  <li>To find an existing speaker, use the form below to narrow the search by name or description or image type</ii>
  <li>The listing of Speakers tells you how many Articles and CiviCRM Events refer to each Speaker. The Speaker description should be suitably generic to work in all these contexts. The listing also shows you some of the Description and whether a Landscape or Portrait image is attached.</ii>
  <li>To edit or delete a Speaker, click the Edit link and from there you can either edit and Save, or Delete the Speaker.</ii>
</ul>
'),
    t('Content'),
    t('Select'),
    t('- Choose an operation -'),
    t('Name'),
    t('Articles'),
    t('Description'),
    t('Landscape image'),
    t('[field_highlight-fid]'),
    t('Portrait image'),
    t('[field_image-fid]'),
    t('Operations'),
    t('<a href="/taxonomy/term/[tid]/edit?destination=admin/cbf/speakers">Edit</a>'),
    t('.'),
    t('Name contains'),
    t('Description contains'),
    t('Highlight (field_highlight:fid)'),
    t('Has landscape image'),
    t('Image (field_image:fid)'),
    t('Has portrait image'),
    t('Page'),
  );
  $export['cbf2019_speaker_admin_view'] = $view;

  $view = new view();
  $view->name = 'cbf2019_speaker_listings';
  $view->description = 'Listings of speakers';
  $view->tag = 'add-christian-content';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'cbf2019 speaker listings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time_per_domain';
  $handler->display->display_options['cache']['results_lifespan'] = '1800';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '1800';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'resources/speaker/[name]';
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['name']['alter']['alt'] = 'Articles by [name]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'speaker' => 'speaker',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;

  /* Display: Defaults */
  $handler = $view->new_display('block', 'Defaults', 'block');

  /* Display: Article Speaker links */
  $handler = $view->new_display('block', 'Article Speaker links', 'block_6');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Article */
  $handler->display->display_options['relationships']['reverse_field_speakers_node']['id'] = 'reverse_field_speakers_node';
  $handler->display->display_options['relationships']['reverse_field_speakers_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_speakers_node']['field'] = 'reverse_field_speakers_node';
  $handler->display->display_options['relationships']['reverse_field_speakers_node']['ui_name'] = 'Article';
  $handler->display->display_options['relationships']['reverse_field_speakers_node']['label'] = 'Article';
  $handler->display->display_options['relationships']['reverse_field_speakers_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_speakers_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'blog' => 'blog',
    'episode' => 'episode',
  );

  /* Display: Top 10 rated Speakers */
  $handler = $view->new_display('block', 'Top 10 rated Speakers', 'block_7');
  $handler->display->display_options['display_comment'] = 'When on the \'christian\' site, the add-christian-content tag tells cbf_views_query_alter() to change Audience = \'general\' to Audience in [\'general\', \'christian\'].';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-header-must-align-left';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<span id="cbf2019-speaker-listings-header">Contributors</span>';
  $handler->display->display_options['header']['area']['format'] = '2';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Article */
  $handler->display->display_options['relationships']['reverse_field_speakers_node']['id'] = 'reverse_field_speakers_node';
  $handler->display->display_options['relationships']['reverse_field_speakers_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_speakers_node']['field'] = 'reverse_field_speakers_node';
  $handler->display->display_options['relationships']['reverse_field_speakers_node']['ui_name'] = 'Article';
  $handler->display->display_options['relationships']['reverse_field_speakers_node']['label'] = 'Article';
  $handler->display->display_options['relationships']['reverse_field_speakers_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Article Rating (field_article_rating) */
  $handler->display->display_options['sorts']['field_article_rating_value']['id'] = 'field_article_rating_value';
  $handler->display->display_options['sorts']['field_article_rating_value']['table'] = 'field_data_field_article_rating';
  $handler->display->display_options['sorts']['field_article_rating_value']['field'] = 'field_article_rating_value';
  $handler->display->display_options['sorts']['field_article_rating_value']['relationship'] = 'reverse_field_speakers_node';
  $handler->display->display_options['sorts']['field_article_rating_value']['group_type'] = 'sum';
  $handler->display->display_options['sorts']['field_article_rating_value']['order'] = 'DESC';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'speaker' => 'speaker',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'reverse_field_speakers_node';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['relationship'] = 'reverse_field_speakers_node';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
    0 => '48',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';

  /* Display: Event Speaker links */
  $handler = $view->new_display('block', 'Event Speaker links', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Article */
  $handler->display->display_options['relationships']['reverse_field_speakers_node']['id'] = 'reverse_field_speakers_node';
  $handler->display->display_options['relationships']['reverse_field_speakers_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_speakers_node']['field'] = 'reverse_field_speakers_node';
  $handler->display->display_options['relationships']['reverse_field_speakers_node']['ui_name'] = 'Article';
  $handler->display->display_options['relationships']['reverse_field_speakers_node']['label'] = 'Article';
  $handler->display->display_options['relationships']['reverse_field_speakers_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_speakers_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'brite_event' => 'brite_event',
  );
  $translatables['cbf2019_speaker_listings'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Articles by [name]'),
    t('Defaults'),
    t('Article Speaker links'),
    t('Article'),
    t('All'),
    t('Top 10 rated Speakers'),
    t('<span id="cbf2019-speaker-listings-header">Contributors</span>'),
    t('Event Speaker links'),
  );
  $export['cbf2019_speaker_listings'] = $view;

  $view = new view();
  $view->name = 'cbf2019_speakers';
  $view->description = 'Embedded in other views. Slider showing speakers for Activities, and Resources';
  $view->tag = 'slider, autoplay, unique';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'cbf2019 speakers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time_per_domain';
  $handler->display->display_options['cache']['results_lifespan'] = '1800';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '1800';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<span id="cbf2019-speakers-view-header">With</span>';
  $handler->display->display_options['header']['area']['format'] = '2';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['empty'] = '<div class="landscape-image-placeholder"><i class="fal fa-user"></i></div>';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'person_360x438',
    'image_link' => '',
  );
  /* Field: Field: Highlight */
  $handler->display->display_options['fields']['field_highlight']['id'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['table'] = 'field_data_field_highlight';
  $handler->display->display_options['fields']['field_highlight']['field'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['label'] = '';
  $handler->display->display_options['fields']['field_highlight']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlight']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_highlight']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_highlight']['settings'] = array(
    'image_style' => 'portfolio_653x368',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name]';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'resources/speaker/[name]';
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['name']['alter']['alt'] = 'Articles by [name]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'speaker' => 'speaker',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  /* Filter criterion: Taxonomy term: Term description */
  $handler->display->display_options['filters']['description']['id'] = 'description';
  $handler->display->display_options['filters']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['description']['field'] = 'description';
  $handler->display->display_options['filters']['description']['operator'] = 'longerthan';
  $handler->display->display_options['filters']['description']['value'] = '0';
  $handler->display->display_options['filters']['description']['group'] = 1;

  /* Display: Defaults */
  $handler = $view->new_display('block', 'Defaults', 'block');

  /* Display: For non-Activity nodes */
  $handler = $view->new_display('block', 'For non-Activity nodes', 'block_3');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomy term: Content using Speaker(s) */
  $handler->display->display_options['relationships']['reverse_field_speakers_node']['id'] = 'reverse_field_speakers_node';
  $handler->display->display_options['relationships']['reverse_field_speakers_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_speakers_node']['field'] = 'reverse_field_speakers_node';
  $handler->display->display_options['relationships']['reverse_field_speakers_node']['label'] = 'Content';
  $handler->display->display_options['relationships']['reverse_field_speakers_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_speakers_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $translatables['cbf2019_speakers'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<span id="cbf2019-speakers-view-header">With</span>'),
    t('<div class="landscape-image-placeholder"><i class="fal fa-user"></i></div>'),
    t('[field_image]'),
    t('[name]'),
    t('Articles by [name]'),
    t('Defaults'),
    t('For non-Activity nodes'),
    t('Content'),
    t('All'),
  );
  $export['cbf2019_speakers'] = $view;

  $view = new view();
  $view->name = 'cbf2019_staff_admin_view';
  $view->description = 'Allows admin of title Header entities';
  $view->tag = 'default';
  $view->base_table = 'entityform';
  $view->human_name = 'cbf2019 staff admin view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Staff';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    10 => '10',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'field_title' => 'field_title',
    'field_weight' => 'field_weight',
    'field_subtitle' => 'field_subtitle',
    'field_staff_groups' => 'field_staff_groups',
    'field_in_activity' => 'field_in_activity',
    'title' => 'title',
    'entityform_id' => 'entityform_id',
  );
  $handler->display->display_options['style_options']['default'] = 'field_weight';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_weight' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_subtitle' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_staff_groups' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_in_activity' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'entityform_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Staff members ...

<ul>
<li>
Have the following attributes that appear on the <em>About Us</em> page ...
  <ul>
  <li>Name</li>
  <li>Position</li>
  <li>Image</li>
  <li>Summary - one or two sentences that appear when the mouse hovers over the Image</li>
  <li>Staff Groups - when a user clicks on a Staff Group filter only staff in that group are shown. Staff must be in a Staff Group but can be in multiple.</li>
  <li>Staff Contact - (<strong>being deprecated</strong>) when a user clicks on the Image they are taken to the contact form for this Staff Member. This field is the link to the staff member\'s CiviCRM record. If this is not set then there is no link to a contact form.</li>
  <li>Enquiry form - (<strong>being introduced with HubSpot</strong>) when a user clicks on the Image they are taken to the enquiry form for this Staff Member. . If this is not set then there is no link on the image.</li>
  <li>Weight - staff are shown in descending Weight order</li>
  </ul>
</li>
<li>
Have the following attributes that affect the <em>Our Team</em> block on an Activity page ...
  <ul>
  <li>Activities - optionally a Staff member can be associated with Activities. If they are they will appear in the <em>Our Team</em> block.</li>
  <li>Activities Ministry Centre - the <em>Our Team</em> block is filtered by Ministry Centre. If this is set it affects all the Activities with which this Staff member is affiliated.</li>
  </ul>
</li>
</ul>

You can <a href="/eform/submit/staff">add a new Staff member</a>, or edit existing ones below.';
  $handler->display->display_options['header']['area']['format'] = '2';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_activities_target_id']['id'] = 'field_activities_target_id';
  $handler->display->display_options['relationships']['field_activities_target_id']['table'] = 'field_data_field_activities';
  $handler->display->display_options['relationships']['field_activities_target_id']['field'] = 'field_activities_target_id';
  $handler->display->display_options['relationships']['field_activities_target_id']['label'] = 'Activities';
  /* Field: Bulk operations: Entityform Submission */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_entityform';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Select';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'log' => 0,
      ),
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
          'title_header::field_title' => 'title_header::field_title',
          'title_header::field_title_image' => 'title_header::field_title_image',
        ),
      ),
    ),
  );
  /* Field: Field: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = 'Name';
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  /* Field: Field: Weight */
  $handler->display->display_options['fields']['field_weight']['id'] = 'field_weight';
  $handler->display->display_options['fields']['field_weight']['table'] = 'field_data_field_weight';
  $handler->display->display_options['fields']['field_weight']['field'] = 'field_weight';
  $handler->display->display_options['fields']['field_weight']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_weight']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Field: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = 'Position';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  /* Field: Entityform Submission: Staff groups */
  $handler->display->display_options['fields']['field_staff_groups']['id'] = 'field_staff_groups';
  $handler->display->display_options['fields']['field_staff_groups']['table'] = 'field_data_field_staff_groups';
  $handler->display->display_options['fields']['field_staff_groups']['field'] = 'field_staff_groups';
  $handler->display->display_options['fields']['field_staff_groups']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_groups']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_staff_groups']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_staff_groups']['delta_offset'] = '0';
  /* Field: Entityform Submission: Hubspot enquiry form */
  $handler->display->display_options['fields']['field_enquiry_form']['id'] = 'field_enquiry_form';
  $handler->display->display_options['fields']['field_enquiry_form']['table'] = 'field_data_field_enquiry_form';
  $handler->display->display_options['fields']['field_enquiry_form']['field'] = 'field_enquiry_form';
  $handler->display->display_options['fields']['field_enquiry_form']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Entityform Submission: Activities */
  $handler->display->display_options['fields']['field_activities']['id'] = 'field_activities';
  $handler->display->display_options['fields']['field_activities']['table'] = 'field_data_field_activities';
  $handler->display->display_options['fields']['field_activities']['field'] = 'field_activities';
  $handler->display->display_options['fields']['field_activities']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_activities']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_activities']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_activities']['delta_offset'] = '0';
  /* Field: Field: Ministry Centre */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['label'] = 'Activities Ministry Centre';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['group_column'] = 'entity_id';
  /* Field: Entityform Submission: Entityform submission ID */
  $handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
  $handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['label'] = 'Operations';
  $handler->display->display_options['fields']['entityform_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['entityform_id']['alter']['text'] = '<a href="/entityform/[entityform_id]/edit">Edit</a>';
  $handler->display->display_options['fields']['entityform_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entityform_id']['separator'] = '';
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'staff' => 'staff',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Title (field_title) */
  $handler->display->display_options['filters']['field_title_value']['id'] = 'field_title_value';
  $handler->display->display_options['filters']['field_title_value']['table'] = 'field_data_field_title';
  $handler->display->display_options['filters']['field_title_value']['field'] = 'field_title_value';
  $handler->display->display_options['filters']['field_title_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_title_value']['group'] = 1;
  $handler->display->display_options['filters']['field_title_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_title_value']['expose']['operator_id'] = 'field_title_value_op';
  $handler->display->display_options['filters']['field_title_value']['expose']['label'] = 'Name contains';
  $handler->display->display_options['filters']['field_title_value']['expose']['operator'] = 'field_title_value_op';
  $handler->display->display_options['filters']['field_title_value']['expose']['identifier'] = 'field_title_value';
  $handler->display->display_options['filters']['field_title_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    3 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_title_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_title_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_title_value']['expose']['autocomplete_field'] = 'field_title';
  $handler->display->display_options['filters']['field_title_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_title_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_title_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Field: Subtitle (field_subtitle) */
  $handler->display->display_options['filters']['field_subtitle_value']['id'] = 'field_subtitle_value';
  $handler->display->display_options['filters']['field_subtitle_value']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['filters']['field_subtitle_value']['field'] = 'field_subtitle_value';
  $handler->display->display_options['filters']['field_subtitle_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_subtitle_value']['group'] = 1;
  $handler->display->display_options['filters']['field_subtitle_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_subtitle_value']['expose']['operator_id'] = 'field_subtitle_value_op';
  $handler->display->display_options['filters']['field_subtitle_value']['expose']['label'] = 'Position contains';
  $handler->display->display_options['filters']['field_subtitle_value']['expose']['operator'] = 'field_subtitle_value_op';
  $handler->display->display_options['filters']['field_subtitle_value']['expose']['identifier'] = 'field_subtitle_value';
  $handler->display->display_options['filters']['field_subtitle_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    3 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_subtitle_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_subtitle_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_subtitle_value']['expose']['autocomplete_field'] = 'field_subtitle';
  $handler->display->display_options['filters']['field_subtitle_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_subtitle_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_subtitle_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Entityform Submission: Staff groups (field_staff_groups) */
  $handler->display->display_options['filters']['field_staff_groups_tid']['id'] = 'field_staff_groups_tid';
  $handler->display->display_options['filters']['field_staff_groups_tid']['table'] = 'field_data_field_staff_groups';
  $handler->display->display_options['filters']['field_staff_groups_tid']['field'] = 'field_staff_groups_tid';
  $handler->display->display_options['filters']['field_staff_groups_tid']['value'] = '';
  $handler->display->display_options['filters']['field_staff_groups_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_staff_groups_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_staff_groups_tid']['expose']['operator_id'] = 'field_staff_groups_tid_op';
  $handler->display->display_options['filters']['field_staff_groups_tid']['expose']['label'] = 'Staff group';
  $handler->display->display_options['filters']['field_staff_groups_tid']['expose']['operator'] = 'field_staff_groups_tid_op';
  $handler->display->display_options['filters']['field_staff_groups_tid']['expose']['identifier'] = 'field_staff_groups_tid';
  $handler->display->display_options['filters']['field_staff_groups_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    3 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_staff_groups_tid']['vocabulary'] = 'staff_group';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['relationship'] = 'field_activities_target_id';
  $handler->display->display_options['filters']['title_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['operator_id'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['label'] = 'Activity name contains';
  $handler->display->display_options['filters']['title_1']['expose']['operator'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['identifier'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['title_1']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title_1']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title_1']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title_1']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title_1']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Entityform Submission: Hubspot enquiry form (field_enquiry_form) */
  $handler->display->display_options['filters']['field_enquiry_form_tid']['id'] = 'field_enquiry_form_tid';
  $handler->display->display_options['filters']['field_enquiry_form_tid']['table'] = 'field_data_field_enquiry_form';
  $handler->display->display_options['filters']['field_enquiry_form_tid']['field'] = 'field_enquiry_form_tid';
  $handler->display->display_options['filters']['field_enquiry_form_tid']['value'] = '';
  $handler->display->display_options['filters']['field_enquiry_form_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_enquiry_form_tid']['expose']['operator_id'] = 'field_enquiry_form_tid_op';
  $handler->display->display_options['filters']['field_enquiry_form_tid']['expose']['label'] = 'Enquiry form';
  $handler->display->display_options['filters']['field_enquiry_form_tid']['expose']['operator'] = 'field_enquiry_form_tid_op';
  $handler->display->display_options['filters']['field_enquiry_form_tid']['expose']['identifier'] = 'field_enquiry_form_tid';
  $handler->display->display_options['filters']['field_enquiry_form_tid']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_enquiry_form_tid']['vocabulary'] = 'hubspot_enquiry_form';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/cbf/staff';
  $translatables['cbf2019_staff_admin_view'] = array(
    t('Master'),
    t('Staff'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Staff members ...

<ul>
<li>
Have the following attributes that appear on the <em>About Us</em> page ...
  <ul>
  <li>Name</li>
  <li>Position</li>
  <li>Image</li>
  <li>Summary - one or two sentences that appear when the mouse hovers over the Image</li>
  <li>Staff Groups - when a user clicks on a Staff Group filter only staff in that group are shown. Staff must be in a Staff Group but can be in multiple.</li>
  <li>Staff Contact - (<strong>being deprecated</strong>) when a user clicks on the Image they are taken to the contact form for this Staff Member. This field is the link to the staff member\'s CiviCRM record. If this is not set then there is no link to a contact form.</li>
  <li>Enquiry form - (<strong>being introduced with HubSpot</strong>) when a user clicks on the Image they are taken to the enquiry form for this Staff Member. . If this is not set then there is no link on the image.</li>
  <li>Weight - staff are shown in descending Weight order</li>
  </ul>
</li>
<li>
Have the following attributes that affect the <em>Our Team</em> block on an Activity page ...
  <ul>
  <li>Activities - optionally a Staff member can be associated with Activities. If they are they will appear in the <em>Our Team</em> block.</li>
  <li>Activities Ministry Centre - the <em>Our Team</em> block is filtered by Ministry Centre. If this is set it affects all the Activities with which this Staff member is affiliated.</li>
  </ul>
</li>
</ul>

You can <a href="/eform/submit/staff">add a new Staff member</a>, or edit existing ones below.'),
    t('Activities'),
    t('Select'),
    t('- Choose an operation -'),
    t('Name'),
    t('Weight'),
    t('Position'),
    t('Staff groups'),
    t('Hubspot enquiry form'),
    t('Activities Ministry Centre'),
    t('Operations'),
    t('<a href="/entityform/[entityform_id]/edit">Edit</a>'),
    t('.'),
    t('Name contains'),
    t('Position contains'),
    t('Staff group'),
    t('Activity name contains'),
    t('Enquiry form'),
    t('Page'),
  );
  $export['cbf2019_staff_admin_view'] = $view;

  $view = new view();
  $view->name = 'cbf2019_staff_slider';
  $view->description = 'Embedded in other views. ';
  $view->tag = '4-items';
  $view->base_table = 'entityform';
  $view->human_name = 'cbf2019 staff slider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time_per_domain';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<span id="cbf2019-staff-slider-view-header">Our team</span>';
  $handler->display->display_options['header']['area']['format'] = '2';
  /* Relationship: Entityform Submission: Hubspot enquiry form (field_enquiry_form) */
  $handler->display->display_options['relationships']['field_enquiry_form_tid']['id'] = 'field_enquiry_form_tid';
  $handler->display->display_options['relationships']['field_enquiry_form_tid']['table'] = 'field_data_field_enquiry_form';
  $handler->display->display_options['relationships']['field_enquiry_form_tid']['field'] = 'field_enquiry_form_tid';
  $handler->display->display_options['relationships']['field_enquiry_form_tid']['label'] = 'Enquiry form';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['empty'] = '<div class="portrait-image-placeholder"><i class="fal fa-user"></i></div>';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'person_360x438',
    'image_link' => '',
  );
  /* Field: Field: Note */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'field_enquiry_form_tid';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['description']['alter']['text'] = '<div class="overlaid-image">[field_image]</div>
<div class="image-overlay">[field_summary]</div>';
  $handler->display->display_options['fields']['description']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['description']['alter']['path'] = '[description]';
  $handler->display->display_options['fields']['description']['alter']['rel'] = 'nofollow';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description']['element_wrapper_class'] = 'image-plus-hover-overlay';
  $handler->display->display_options['fields']['description']['empty'] = '[field_staff_contact]';
  /* Field: Field: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  /* Field: Field: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  /* Sort criterion: Field: Weight (field_weight) */
  $handler->display->display_options['sorts']['field_weight_value']['id'] = 'field_weight_value';
  $handler->display->display_options['sorts']['field_weight_value']['table'] = 'field_data_field_weight';
  $handler->display->display_options['sorts']['field_weight_value']['field'] = 'field_weight_value';
  $handler->display->display_options['sorts']['field_weight_value']['order'] = 'DESC';
  /* Sort criterion: Field: Title (field_title) */
  $handler->display->display_options['sorts']['field_title_value']['id'] = 'field_title_value';
  $handler->display->display_options['sorts']['field_title_value']['table'] = 'field_data_field_title';
  $handler->display->display_options['sorts']['field_title_value']['field'] = 'field_title_value';
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'staff' => 'staff',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Defaults */
  $handler = $view->new_display('block', 'Defaults', 'block');
  $handler->display->display_options['display_description'] = 'Not intended for display';

  /* Display: For About Us */
  $handler = $view->new_display('block', 'For About Us', 'block_1');
  $handler->display->display_options['display_description'] = 'Staff with filtering by staff group';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => '2',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'field_staff_groups_tid' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => 'All',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'staff' => 'staff',
  );
  /* Filter criterion: Entityform Submission: Staff groups (field_staff_groups) */
  $handler->display->display_options['filters']['field_staff_groups_tid']['id'] = 'field_staff_groups_tid';
  $handler->display->display_options['filters']['field_staff_groups_tid']['table'] = 'field_data_field_staff_groups';
  $handler->display->display_options['filters']['field_staff_groups_tid']['field'] = 'field_staff_groups_tid';
  $handler->display->display_options['filters']['field_staff_groups_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_staff_groups_tid']['expose']['operator_id'] = 'field_staff_groups_tid_op';
  $handler->display->display_options['filters']['field_staff_groups_tid']['expose']['operator'] = 'field_staff_groups_tid_op';
  $handler->display->display_options['filters']['field_staff_groups_tid']['expose']['identifier'] = 'field_staff_groups_tid';
  $handler->display->display_options['filters']['field_staff_groups_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    3 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_staff_groups_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_staff_groups_tid']['vocabulary'] = 'staff_group';

  /* Display: For Activity (embedded) */
  $handler = $view->new_display('block', 'For Activity (embedded)', 'block_2');
  $handler->display->display_options['display_description'] = 'Staff associated with an Activity';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_activities_target_id']['id'] = 'field_activities_target_id';
  $handler->display->display_options['relationships']['field_activities_target_id']['table'] = 'field_data_field_activities';
  $handler->display->display_options['relationships']['field_activities_target_id']['field'] = 'field_activities_target_id';
  $handler->display->display_options['relationships']['field_activities_target_id']['label'] = 'Activity';
  $handler->display->display_options['relationships']['field_activities_target_id']['required'] = TRUE;
  /* Relationship: Entityform Submission: Hubspot enquiry form (field_enquiry_form) */
  $handler->display->display_options['relationships']['field_enquiry_form_tid']['id'] = 'field_enquiry_form_tid';
  $handler->display->display_options['relationships']['field_enquiry_form_tid']['table'] = 'field_data_field_enquiry_form';
  $handler->display->display_options['relationships']['field_enquiry_form_tid']['field'] = 'field_enquiry_form_tid';
  $handler->display->display_options['relationships']['field_enquiry_form_tid']['label'] = 'Enquiry form';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['empty'] = '<div class="portrait-image-placeholder"><i class="fal fa-user"></i></div>';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'person_360x438',
    'image_link' => '',
  );
  /* Field: Field: Note */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'field_enquiry_form_tid';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['description']['alter']['text'] = '<div class="overlaid-image">[field_image]</div>
<div class="image-overlay">[field_summary]</div>';
  $handler->display->display_options['fields']['description']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['description']['alter']['path'] = '[description]';
  $handler->display->display_options['fields']['description']['alter']['rel'] = 'nofollow';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description']['element_wrapper_class'] = 'image-plus-hover-overlay';
  $handler->display->display_options['fields']['description']['empty'] = '[field_staff_contact]';
  /* Field: Field: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  /* Field: Field: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  /* Field: Field: Ministry Centre */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_activities_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Ministry Centre filter applied during post-execute */
  $handler->display->display_options['arguments']['null']['id'] = 'null';
  $handler->display->display_options['arguments']['null']['table'] = 'views';
  $handler->display->display_options['arguments']['null']['field'] = 'null';
  $handler->display->display_options['arguments']['null']['ui_name'] = 'Ministry Centre filter applied during post-execute';
  $handler->display->display_options['arguments']['null']['default_action'] = 'default';
  $handler->display->display_options['arguments']['null']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['null']['default_argument_options']['code'] = 'return cbf_convert_banner_to_city_tid();';
  $handler->display->display_options['arguments']['null']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['null']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['null']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['null']['validate']['type'] = 'numeric';
  $handler->display->display_options['arguments']['null']['validate']['fail'] = 'ignore';

  /* Display: Staff slider for Third Space */
  $handler = $view->new_display('block', 'Staff slider for Third Space', 'block_3');
  $handler->display->display_options['display_description'] = 'Staff associated with Third Space (this activity is node 3977 and the activity is for Christians so it can\'t appear in TS)';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'staff' => 'staff',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Entityform Submission: Activities (field_activities) */
  $handler->display->display_options['filters']['field_activities_target_id']['id'] = 'field_activities_target_id';
  $handler->display->display_options['filters']['field_activities_target_id']['table'] = 'field_data_field_activities';
  $handler->display->display_options['filters']['field_activities_target_id']['field'] = 'field_activities_target_id';
  $handler->display->display_options['filters']['field_activities_target_id']['value']['value'] = '3977';
  $translatables['cbf2019_staff_slider'] = array(
    t('Master'),
    t('<none>'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<span id="cbf2019-staff-slider-view-header">Our team</span>'),
    t('Enquiry form'),
    t('<div class="portrait-image-placeholder"><i class="fal fa-user"></i></div>'),
    t('<div class="overlaid-image">[field_image]</div>
<div class="image-overlay">[field_summary]</div>'),
    t('[field_staff_contact]'),
    t('Defaults'),
    t('Not intended for display'),
    t('For About Us'),
    t('Staff with filtering by staff group'),
    t('Select any filter and click on Apply to see results'),
    t('Advanced options'),
    t('All'),
    t('For Activity (embedded)'),
    t('Staff associated with an Activity'),
    t('Activity'),
    t('Staff slider for Third Space'),
    t('Staff associated with Third Space (this activity is node 3977 and the activity is for Christians so it can\'t appear in TS)'),
  );
  $export['cbf2019_staff_slider'] = $view;

  $view = new view();
  $view->name = 'cbf2019_title_header_admin_view';
  $view->description = 'Allows admin of title Header entities';
  $view->tag = 'default';
  $view->base_table = 'entityform';
  $view->human_name = 'cbf2019 title header admin view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Title headers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    10 => '10',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Title headers perform three functions related to Title Images ...

<ol>
<li>Associating the image with a specific URL path (eg resource library)</li>
<li>Making the image the default for nodes with a specific content type (eg blog articles)</li>
<li>Making the image available for use in special contexts (eg a place to upload an image for a block)</li>
</ol>

You can <a href="/eform/submit/title-header">add a new Title header</a>, or edit existing ones below.

Notes ...

<ol>
<li>SEO: the Subtitle is used as the H2 element if the Path is set.</li>
<li>Domain: you can limit them to only display in certain domains. This allows you to display different Titles and Images on the same page in different domains.</li>
</ol>';
  $handler->display->display_options['header']['area']['format'] = '2';
  /* Field: Bulk operations: Entityform Submission */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_entityform';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Select';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'log' => 0,
      ),
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
          'title_header::field_title' => 'title_header::field_title',
          'title_header::field_title_image' => 'title_header::field_title_image',
        ),
      ),
    ),
  );
  /* Field: Field: Title image */
  $handler->display->display_options['fields']['field_title_image']['id'] = 'field_title_image';
  $handler->display->display_options['fields']['field_title_image']['table'] = 'field_data_field_title_image';
  $handler->display->display_options['fields']['field_title_image']['field'] = 'field_title_image';
  $handler->display->display_options['fields']['field_title_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_title_image']['settings'] = array(
    'image_style' => 'logo_autox67',
    'image_link' => '',
  );
  /* Field: Field: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = 'Name';
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  /* Field: Field: Sidebar title */
  $handler->display->display_options['fields']['field_sidebar_title']['id'] = 'field_sidebar_title';
  $handler->display->display_options['fields']['field_sidebar_title']['table'] = 'field_data_field_sidebar_title';
  $handler->display->display_options['fields']['field_sidebar_title']['field'] = 'field_sidebar_title';
  $handler->display->display_options['fields']['field_sidebar_title']['label'] = 'Content type';
  $handler->display->display_options['fields']['field_sidebar_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sidebar_title']['delta_offset'] = '0';
  /* Field: Field: Synopsis */
  $handler->display->display_options['fields']['field_synopsis']['id'] = 'field_synopsis';
  $handler->display->display_options['fields']['field_synopsis']['table'] = 'field_data_field_synopsis';
  $handler->display->display_options['fields']['field_synopsis']['field'] = 'field_synopsis';
  $handler->display->display_options['fields']['field_synopsis']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_synopsis']['delta_offset'] = '0';
  /* Field: Field: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  /* Field: Entityform Submission: Entityform submission ID */
  $handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
  $handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['label'] = 'Operations';
  $handler->display->display_options['fields']['entityform_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['entityform_id']['alter']['text'] = '<a href="/entityform/[entityform_id]/edit">Edit</a>';
  $handler->display->display_options['fields']['entityform_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entityform_id']['separator'] = '';
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'title_header' => 'title_header',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Title (field_title) */
  $handler->display->display_options['filters']['field_title_value']['id'] = 'field_title_value';
  $handler->display->display_options['filters']['field_title_value']['table'] = 'field_data_field_title';
  $handler->display->display_options['filters']['field_title_value']['field'] = 'field_title_value';
  $handler->display->display_options['filters']['field_title_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_title_value']['group'] = 1;
  $handler->display->display_options['filters']['field_title_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_title_value']['expose']['operator_id'] = 'field_title_value_op';
  $handler->display->display_options['filters']['field_title_value']['expose']['label'] = 'Name contains';
  $handler->display->display_options['filters']['field_title_value']['expose']['operator'] = 'field_title_value_op';
  $handler->display->display_options['filters']['field_title_value']['expose']['identifier'] = 'field_title_value';
  $handler->display->display_options['filters']['field_title_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    3 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_title_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_title_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_title_value']['expose']['autocomplete_field'] = 'field_title';
  $handler->display->display_options['filters']['field_title_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_title_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_title_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Field: Sidebar title (field_sidebar_title) */
  $handler->display->display_options['filters']['field_sidebar_title_value']['id'] = 'field_sidebar_title_value';
  $handler->display->display_options['filters']['field_sidebar_title_value']['table'] = 'field_data_field_sidebar_title';
  $handler->display->display_options['filters']['field_sidebar_title_value']['field'] = 'field_sidebar_title_value';
  $handler->display->display_options['filters']['field_sidebar_title_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_sidebar_title_value']['group'] = 1;
  $handler->display->display_options['filters']['field_sidebar_title_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sidebar_title_value']['expose']['operator_id'] = 'field_sidebar_title_value_op';
  $handler->display->display_options['filters']['field_sidebar_title_value']['expose']['label'] = 'Content type contains';
  $handler->display->display_options['filters']['field_sidebar_title_value']['expose']['operator'] = 'field_sidebar_title_value_op';
  $handler->display->display_options['filters']['field_sidebar_title_value']['expose']['identifier'] = 'field_sidebar_title_value';
  $handler->display->display_options['filters']['field_sidebar_title_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    3 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_sidebar_title_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_sidebar_title_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_sidebar_title_value']['expose']['autocomplete_field'] = 'field_sidebar_title';
  $handler->display->display_options['filters']['field_sidebar_title_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_sidebar_title_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_sidebar_title_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Field: Synopsis (field_synopsis) */
  $handler->display->display_options['filters']['field_synopsis_value']['id'] = 'field_synopsis_value';
  $handler->display->display_options['filters']['field_synopsis_value']['table'] = 'field_data_field_synopsis';
  $handler->display->display_options['filters']['field_synopsis_value']['field'] = 'field_synopsis_value';
  $handler->display->display_options['filters']['field_synopsis_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_synopsis_value']['group'] = 1;
  $handler->display->display_options['filters']['field_synopsis_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_synopsis_value']['expose']['operator_id'] = 'field_synopsis_value_op';
  $handler->display->display_options['filters']['field_synopsis_value']['expose']['label'] = 'Path contains';
  $handler->display->display_options['filters']['field_synopsis_value']['expose']['operator'] = 'field_synopsis_value_op';
  $handler->display->display_options['filters']['field_synopsis_value']['expose']['identifier'] = 'field_synopsis_value';
  $handler->display->display_options['filters']['field_synopsis_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    3 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_synopsis_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_synopsis_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_synopsis_value']['expose']['autocomplete_field'] = 'field_synopsis';
  $handler->display->display_options['filters']['field_synopsis_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_synopsis_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_synopsis_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Field: Subtitle (field_subtitle) */
  $handler->display->display_options['filters']['field_subtitle_value']['id'] = 'field_subtitle_value';
  $handler->display->display_options['filters']['field_subtitle_value']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['filters']['field_subtitle_value']['field'] = 'field_subtitle_value';
  $handler->display->display_options['filters']['field_subtitle_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_subtitle_value']['group'] = 1;
  $handler->display->display_options['filters']['field_subtitle_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_subtitle_value']['expose']['operator_id'] = 'field_subtitle_value_op';
  $handler->display->display_options['filters']['field_subtitle_value']['expose']['label'] = 'Subtitle contains';
  $handler->display->display_options['filters']['field_subtitle_value']['expose']['operator'] = 'field_subtitle_value_op';
  $handler->display->display_options['filters']['field_subtitle_value']['expose']['identifier'] = 'field_subtitle_value';
  $handler->display->display_options['filters']['field_subtitle_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    3 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_subtitle_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_subtitle_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_subtitle_value']['expose']['autocomplete_field'] = 'field_subtitle';
  $handler->display->display_options['filters']['field_subtitle_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_subtitle_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_subtitle_value']['expose']['autocomplete_dependent'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/cbf/title-headers';
  $translatables['cbf2019_title_header_admin_view'] = array(
    t('Master'),
    t('Title headers'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Title headers perform three functions related to Title Images ...

<ol>
<li>Associating the image with a specific URL path (eg resource library)</li>
<li>Making the image the default for nodes with a specific content type (eg blog articles)</li>
<li>Making the image available for use in special contexts (eg a place to upload an image for a block)</li>
</ol>

You can <a href="/eform/submit/title-header">add a new Title header</a>, or edit existing ones below.

Notes ...

<ol>
<li>SEO: the Subtitle is used as the H2 element if the Path is set.</li>
<li>Domain: you can limit them to only display in certain domains. This allows you to display different Titles and Images on the same page in different domains.</li>
</ol>'),
    t('Select'),
    t('- Choose an operation -'),
    t('Title image'),
    t('Name'),
    t('Content type'),
    t('Synopsis'),
    t('Subtitle'),
    t('Operations'),
    t('<a href="/entityform/[entityform_id]/edit">Edit</a>'),
    t('.'),
    t('Name contains'),
    t('Content type contains'),
    t('Path contains'),
    t('Subtitle contains'),
    t('Page'),
  );
  $export['cbf2019_title_header_admin_view'] = $view;

  $view = new view();
  $view->name = 'cbf2019_whats_on_activities';
  $view->description = 'Shows activities on the what\'s on page';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'cbf2019 whats on activities';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => '2',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'field_highlight_location_tid' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => 'All',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '4';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '6';
  $handler->display->display_options['style_options']['columns_md'] = '4';
  $handler->display->display_options['style_options']['columns_lg'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Activities';
  $handler->display->display_options['header']['area']['format'] = '2';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Highlight */
  $handler->display->display_options['fields']['field_highlight']['id'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['table'] = 'field_data_field_highlight';
  $handler->display->display_options['fields']['field_highlight']['field'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['label'] = '';
  $handler->display->display_options['fields']['field_highlight']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_highlight']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlight']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_highlight']['settings'] = array(
    'image_style' => 'portfolio_653x368',
    'image_link' => '',
  );
  /* Field: Field: Title image */
  $handler->display->display_options['fields']['field_title_image']['id'] = 'field_title_image';
  $handler->display->display_options['fields']['field_title_image']['table'] = 'field_data_field_title_image';
  $handler->display->display_options['fields']['field_title_image']['field'] = 'field_title_image';
  $handler->display->display_options['fields']['field_title_image']['label'] = '';
  $handler->display->display_options['fields']['field_title_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title_image']['empty'] = '[field_highlight]';
  $handler->display->display_options['fields']['field_title_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_title_image']['settings'] = array(
    'image_style' => 'portfolio_653x368',
    'image_link' => '',
  );
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_logo']['alter']['text'] = '<div class="overlaid-image">[field_title_image]</div><div class="image-overlay">###[field_logo]###</div>';
  $handler->display->display_options['fields']['field_logo']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_logo']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['element_wrapper_class'] = 'image-plus-fixed-overlay';
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['type'] = 'file_url_plain';
  /* Field: Field: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['hide_empty'] = TRUE;
  /* Field: Field: Ministry Centre */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['empty'] = 'All cities';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Regularity */
  $handler->display->display_options['fields']['field_regularity']['id'] = 'field_regularity';
  $handler->display->display_options['fields']['field_regularity']['table'] = 'field_data_field_regularity';
  $handler->display->display_options['fields']['field_regularity']['field'] = 'field_regularity';
  $handler->display->display_options['fields']['field_regularity']['label'] = '';
  $handler->display->display_options['fields']['field_regularity']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_regularity']['alter']['text'] = '[taxonomy_vocabulary_1] | [field_regularity]';
  $handler->display->display_options['fields']['field_regularity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_regularity']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Time of day */
  $handler->display->display_options['fields']['field_time_of_day']['id'] = 'field_time_of_day';
  $handler->display->display_options['fields']['field_time_of_day']['table'] = 'field_data_field_time_of_day';
  $handler->display->display_options['fields']['field_time_of_day']['field'] = 'field_time_of_day';
  $handler->display->display_options['fields']['field_time_of_day']['label'] = '';
  $handler->display->display_options['fields']['field_time_of_day']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_of_day']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Field: Weight (field_weight) */
  $handler->display->display_options['sorts']['field_weight_value']['id'] = 'field_weight_value';
  $handler->display->display_options['sorts']['field_weight_value']['table'] = 'field_data_field_weight';
  $handler->display->display_options['sorts']['field_weight_value']['field'] = 'field_weight_value';
  $handler->display->display_options['sorts']['field_weight_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Domain Access: Domain ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'domain_access';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'current_domain';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'activity' => 'activity',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Weight (field_weight) */
  $handler->display->display_options['filters']['field_weight_value']['id'] = 'field_weight_value';
  $handler->display->display_options['filters']['field_weight_value']['table'] = 'field_data_field_weight';
  $handler->display->display_options['filters']['field_weight_value']['field'] = 'field_weight_value';
  $handler->display->display_options['filters']['field_weight_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_weight_value']['value']['value'] = '0';
  $handler->display->display_options['filters']['field_weight_value']['group'] = 1;
  /* Filter criterion: Content: Logo (field_logo:fid) */
  $handler->display->display_options['filters']['field_logo_fid']['id'] = 'field_logo_fid';
  $handler->display->display_options['filters']['field_logo_fid']['table'] = 'field_data_field_logo';
  $handler->display->display_options['filters']['field_logo_fid']['field'] = 'field_logo_fid';
  $handler->display->display_options['filters']['field_logo_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_logo_fid']['group'] = 1;
  /* Filter criterion: Field: Highlight location (field_highlight_location) */
  $handler->display->display_options['filters']['field_highlight_location_tid_1']['id'] = 'field_highlight_location_tid_1';
  $handler->display->display_options['filters']['field_highlight_location_tid_1']['table'] = 'field_data_field_highlight_location';
  $handler->display->display_options['filters']['field_highlight_location_tid_1']['field'] = 'field_highlight_location_tid';
  $handler->display->display_options['filters']['field_highlight_location_tid_1']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_highlight_location_tid_1']['group'] = 1;
  $handler->display->display_options['filters']['field_highlight_location_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_highlight_location_tid_1']['vocabulary'] = 'banner';
  /* Filter criterion: Field: Highlight location (field_highlight_location) */
  $handler->display->display_options['filters']['field_highlight_location_tid']['id'] = 'field_highlight_location_tid';
  $handler->display->display_options['filters']['field_highlight_location_tid']['table'] = 'field_data_field_highlight_location';
  $handler->display->display_options['filters']['field_highlight_location_tid']['field'] = 'field_highlight_location_tid';
  $handler->display->display_options['filters']['field_highlight_location_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_highlight_location_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_highlight_location_tid']['expose']['operator_id'] = 'field_highlight_location_tid_op';
  $handler->display->display_options['filters']['field_highlight_location_tid']['expose']['operator'] = 'field_highlight_location_tid_op';
  $handler->display->display_options['filters']['field_highlight_location_tid']['expose']['identifier'] = 'field_highlight_location_tid';
  $handler->display->display_options['filters']['field_highlight_location_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    3 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_highlight_location_tid']['group_info']['label'] = 'Highlight location (field_highlight_location)';
  $handler->display->display_options['filters']['field_highlight_location_tid']['group_info']['identifier'] = 'field_highlight_location_tid';
  $handler->display->display_options['filters']['field_highlight_location_tid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_highlight_location_tid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_highlight_location_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_highlight_location_tid']['vocabulary'] = 'banner';
  /* Filter criterion: Field: Title image (field_title_image:fid) */
  $handler->display->display_options['filters']['field_title_image_fid']['id'] = 'field_title_image_fid';
  $handler->display->display_options['filters']['field_title_image_fid']['table'] = 'field_data_field_title_image';
  $handler->display->display_options['filters']['field_title_image_fid']['field'] = 'field_title_image_fid';
  $handler->display->display_options['filters']['field_title_image_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_title_image_fid']['group'] = 2;
  /* Filter criterion: Field: Highlight (field_highlight:fid) */
  $handler->display->display_options['filters']['field_highlight_fid']['id'] = 'field_highlight_fid';
  $handler->display->display_options['filters']['field_highlight_fid']['table'] = 'field_data_field_highlight';
  $handler->display->display_options['filters']['field_highlight_fid']['field'] = 'field_highlight_fid';
  $handler->display->display_options['filters']['field_highlight_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_highlight_fid']['group'] = 2;
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
    1957 => '1957',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['cbf2019_whats_on_activities'] = array(
    t('Master'),
    t('<none>'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Select any filter and click on Apply to see results'),
    t('Advanced options'),
    t('All'),
    t('Activities'),
    t('[field_highlight]'),
    t('<div class="overlaid-image">[field_title_image]</div><div class="image-overlay">###[field_logo]###</div>'),
    t('All cities'),
    t('[taxonomy_vocabulary_1] | [field_regularity]'),
    t('Highlight location (field_highlight_location)'),
    t('Block'),
  );
  $export['cbf2019_whats_on_activities'] = $view;

  $view = new view();
  $view->name = 'cbf2019_with';
  $view->description = 'Embedded in other views. A view of a "with speaker" paragraph';
  $view->tag = 'slider, autoplay, unique';
  $view->base_table = 'paragraphs_item';
  $view->human_name = 'cbf2019 with';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '1800';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '1800';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<span id="cbf2019-speakers-view-header">With</span>';
  $handler->display->display_options['header']['area']['format'] = '2';
  /* Relationship: Paragraphs item: Person (field_speaker) */
  $handler->display->display_options['relationships']['field_speaker_tid']['id'] = 'field_speaker_tid';
  $handler->display->display_options['relationships']['field_speaker_tid']['table'] = 'field_data_field_speaker';
  $handler->display->display_options['relationships']['field_speaker_tid']['field'] = 'field_speaker_tid';
  $handler->display->display_options['relationships']['field_speaker_tid']['label'] = 'Speaker';
  $handler->display->display_options['relationships']['field_speaker_tid']['required'] = TRUE;
  /* Relationship: Article */
  $handler->display->display_options['relationships']['field_with_node']['id'] = 'field_with_node';
  $handler->display->display_options['relationships']['field_with_node']['table'] = 'paragraphs_item';
  $handler->display->display_options['relationships']['field_with_node']['field'] = 'field_with_node';
  $handler->display->display_options['relationships']['field_with_node']['ui_name'] = 'Article';
  $handler->display->display_options['relationships']['field_with_node']['label'] = 'Article';
  $handler->display->display_options['relationships']['field_with_node']['required'] = TRUE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_1']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_1']['relationship'] = 'field_speaker_tid';
  $handler->display->display_options['fields']['field_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_image_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_1']['empty'] = '<div class="landscape-image-placeholder"><i class="fal fa-user"></i></div>';
  $handler->display->display_options['fields']['field_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_1']['settings'] = array(
    'image_style' => 'person_360x438',
    'image_link' => '',
  );
  /* Field: Field: Highlight */
  $handler->display->display_options['fields']['field_highlight_1']['id'] = 'field_highlight_1';
  $handler->display->display_options['fields']['field_highlight_1']['table'] = 'field_data_field_highlight';
  $handler->display->display_options['fields']['field_highlight_1']['field'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight_1']['relationship'] = 'field_speaker_tid';
  $handler->display->display_options['fields']['field_highlight_1']['label'] = '';
  $handler->display->display_options['fields']['field_highlight_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_highlight_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlight_1']['empty'] = '[field_image_1]';
  $handler->display->display_options['fields']['field_highlight_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_highlight_1']['settings'] = array(
    'image_style' => 'portfolio_653x368',
    'image_link' => '',
  );
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['empty'] = '[field_highlight_1]';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'person_360x438',
    'image_link' => '',
  );
  /* Field: Field: Highlight */
  $handler->display->display_options['fields']['field_highlight']['id'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['table'] = 'field_data_field_highlight';
  $handler->display->display_options['fields']['field_highlight']['field'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['label'] = '';
  $handler->display->display_options['fields']['field_highlight']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlight']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_highlight']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_highlight']['settings'] = array(
    'image_style' => 'portfolio_653x368',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_speaker_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name]';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'resources/speaker/[name]';
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['name']['alter']['alt'] = 'Articles by [name]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Role */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['ui_name'] = 'Role';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'field_speaker_tid';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['description']['alter']['max_length'] = '500';
  $handler->display->display_options['fields']['description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['description']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Field: Field: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['alter']['max_length'] = '500';
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['empty'] = '[description]';
  $handler->display->display_options['fields']['field_description']['settings'] = array(
    'trim_length' => '100',
  );
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Paragraphs item: Bundle */
  $handler->display->display_options['filters']['bundle']['id'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['table'] = 'paragraphs_item';
  $handler->display->display_options['filters']['bundle']['field'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['value'] = array(
    'with_speaker' => 'with_speaker',
  );
  $handler->display->display_options['filters']['bundle']['group'] = 1;
  /* Filter criterion: Taxonomy term: Term description */
  $handler->display->display_options['filters']['description']['id'] = 'description';
  $handler->display->display_options['filters']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['description']['field'] = 'description';
  $handler->display->display_options['filters']['description']['relationship'] = 'field_speaker_tid';
  $handler->display->display_options['filters']['description']['operator'] = 'longerthan';
  $handler->display->display_options['filters']['description']['value'] = '0';
  $handler->display->display_options['filters']['description']['group'] = 2;
  /* Filter criterion: Field: Description (field_description) */
  $handler->display->display_options['filters']['field_description_value']['id'] = 'field_description_value';
  $handler->display->display_options['filters']['field_description_value']['table'] = 'field_data_field_description';
  $handler->display->display_options['filters']['field_description_value']['field'] = 'field_description_value';
  $handler->display->display_options['filters']['field_description_value']['operator'] = 'longerthan';
  $handler->display->display_options['filters']['field_description_value']['value'] = '0';
  $handler->display->display_options['filters']['field_description_value']['group'] = 2;

  /* Display: Defaults */
  $handler = $view->new_display('block', 'Defaults', 'block');
  $handler->display->display_options['display_description'] = 'This display contains the defaults - don\'t use';

  /* Display: For node */
  $handler = $view->new_display('block', 'For node', 'block_1');
  $handler->display->display_options['display_description'] = 'Shows the "with speaker" for nodes';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: View (Views field view) */
  $handler->display->display_options['empty']['view_field']['id'] = 'view_field';
  $handler->display->display_options['empty']['view_field']['table'] = 'views';
  $handler->display->display_options['empty']['view_field']['field'] = 'view_field';
  $handler->display->display_options['empty']['view_field']['label'] = '';
  $handler->display->display_options['empty']['view_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['empty']['view_field']['view'] = 'cbf2019_speakers';
  $handler->display->display_options['empty']['view_field']['display'] = 'block_3';
  $handler->display->display_options['empty']['view_field']['arguments'] = '!1';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_with_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $translatables['cbf2019_with'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<span id="cbf2019-speakers-view-header">With</span>'),
    t('Speaker'),
    t('Article'),
    t('<div class="landscape-image-placeholder"><i class="fal fa-user"></i></div>'),
    t('[field_image_1]'),
    t('[field_highlight_1]'),
    t('[field_image]'),
    t('[name]'),
    t('Articles by [name]'),
    t('[description]'),
    t('Defaults'),
    t('This display contains the defaults - don\'t use'),
    t('For node'),
    t('Shows the "with speaker" for nodes'),
    t('All'),
  );
  $export['cbf2019_with'] = $view;

  return $export;
}
