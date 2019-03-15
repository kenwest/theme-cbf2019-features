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
  $view->name = 'cbf2019_activity_map';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'entityform';
  $view->human_name = 'cbf2019 activity map';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'map-canvas-view-multiple';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_in_activity_target_id']['id'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['field'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['label'] = 'Activity';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['required'] = TRUE;
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
  /* Field: Entityform Submission: Title */
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
  $handler->display->display_options['fields']['name']['empty'] = '[field_title]';
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
  /* Field: Entityform Submission: Note */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_summary']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_summary']['alter']['text'] = '<br/><em>[field_summary]</em>';
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_summary']['hide_empty'] = TRUE;
  /* Field: Entityform Submission: Entityform submission ID */
  $handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
  $handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['label'] = '';
  $handler->display->display_options['fields']['entityform_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['entityform_id']['alter']['text'] = '      <div class="marker"
        data-lat="[latitude]"
        data-long="[longitude]"
        data-icon="https://citybibleforum.org/sites/all/themes/cbf2019/map-marker.png">
        <strong>[name]</strong><br/>
        [street], [city] [field_summary]
      </div>
';
  $handler->display->display_options['fields']['entityform_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entityform_id']['separator'] = '';
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
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mappable' => 'mappable',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['cbf2019_activity_map'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Activity'),
    t('Location'),
    t('[field_title]'),
    t('<br/><em>[field_summary]</em>'),
    t('      <div class="marker"
        data-lat="[latitude]"
        data-long="[longitude]"
        data-icon="https://citybibleforum.org/sites/all/themes/cbf2019/map-marker.png">
        <strong>[name]</strong><br/>
        [street], [city] [field_summary]
      </div>
'),
    t('.'),
    t('All'),
    t('Block'),
  );
  $export['cbf2019_activity_map'] = $view;

  $view = new view();
  $view->name = 'cbf2019_activity_regular_venue_list';
  $view->description = 'List of the regular venues for an activity';
  $view->tag = 'default';
  $view->base_table = 'entityform';
  $view->human_name = 'cbf2019 activity regular venue list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['css_class'] = 'venue';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_in_activity_target_id']['id'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['field'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['label'] = 'Activity';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['required'] = TRUE;
  /* Field: Entityform Submission: Day description */
  $handler->display->display_options['fields']['field_day_description']['id'] = 'field_day_description';
  $handler->display->display_options['fields']['field_day_description']['table'] = 'field_data_field_day_description';
  $handler->display->display_options['fields']['field_day_description']['field'] = 'field_day_description';
  $handler->display->display_options['fields']['field_day_description']['label'] = 'Day';
  $handler->display->display_options['fields']['field_day_description']['element_label_colon'] = FALSE;
  /* Field: Entityform Submission: Time description */
  $handler->display->display_options['fields']['field_time_description']['id'] = 'field_time_description';
  $handler->display->display_options['fields']['field_time_description']['table'] = 'field_data_field_time_description';
  $handler->display->display_options['fields']['field_time_description']['field'] = 'field_time_description';
  $handler->display->display_options['fields']['field_time_description']['label'] = 'Time';
  $handler->display->display_options['fields']['field_time_description']['element_label_colon'] = FALSE;
  /* Field: Entityform Submission: Map location */
  $handler->display->display_options['fields']['field_map_location']['id'] = 'field_map_location';
  $handler->display->display_options['fields']['field_map_location']['table'] = 'field_data_field_map_location';
  $handler->display->display_options['fields']['field_map_location']['field'] = 'field_map_location';
  $handler->display->display_options['fields']['field_map_location']['label'] = 'Location';
  $handler->display->display_options['fields']['field_map_location']['element_label_colon'] = FALSE;
  /* Field: Entityform Submission: Note */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_summary']['hide_empty'] = TRUE;
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
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'regular_venue' => 'regular_venue',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['cbf2019_activity_regular_venue_list'] = array(
    t('Master'),
    t('<none>'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Activity'),
    t('Day'),
    t('Time'),
    t('Location'),
    t('Note'),
    t('All'),
    t('Block'),
  );
  $export['cbf2019_activity_regular_venue_list'] = $view;

  $view = new view();
  $view->name = 'cbf2019_blog';
  $view->description = 'Blog view for the cbf2019 theme';
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
  $handler->display->display_options['use_more_text'] = 'All news in our blog';
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '4';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '12';
  $handler->display->display_options['style_options']['columns_md'] = '4';
  $handler->display->display_options['style_options']['columns_lg'] = '4';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Title';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Blog';
  $handler->display->display_options['header']['area']['format'] = '3';
  /* Relationship: Content: Author */
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
    'image_style' => 'highlight',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_episode_date']['id'] = 'field_episode_date';
  $handler->display->display_options['fields']['field_episode_date']['table'] = 'field_data_field_episode_date';
  $handler->display->display_options['fields']['field_episode_date']['field'] = 'field_episode_date';
  $handler->display->display_options['fields']['field_episode_date']['label'] = '';
  $handler->display->display_options['fields']['field_episode_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_episode_date']['alter']['text'] = '[name] | [field_episode_date]';
  $handler->display->display_options['fields']['field_episode_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_episode_date']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'M j',
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
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'READ MORE';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['nid']['alter']['link_class'] = 'btn btn-mod btn-border btn-medium btn-round';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Sort criterion: Field: Date (field_episode_date) */
  $handler->display->display_options['sorts']['field_episode_date_value']['id'] = 'field_episode_date_value';
  $handler->display->display_options['sorts']['field_episode_date_value']['table'] = 'field_data_field_episode_date';
  $handler->display->display_options['sorts']['field_episode_date_value']['field'] = 'field_episode_date_value';
  $handler->display->display_options['sorts']['field_episode_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['link_url'] = 'articles';
  $translatables['cbf2019_blog'] = array(
    t('Master'),
    t('<none>'),
    t('All news in our blog'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Title'),
    t('Blog'),
    t('Author'),
    t('[name] | [field_episode_date]'),
    t('READ MORE'),
    t('Block'),
    t('more'),
  );
  $export['cbf2019_blog'] = $view;

  $view = new view();
  $view->name = 'cbf2019_city_activities';
  $view->description = '';
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
  /* Field: Content: Title image */
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
  /* Filter criterion: Content: Published */
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
  /* Filter criterion: Field: Activity category (field_activity_category) */
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
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
    48 => '48',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['group'] = 2;
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';
  /* Filter criterion: Domains: Domain ID */
  $handler->display->display_options['filters']['domain_id']['id'] = 'domain_id';
  $handler->display->display_options['filters']['domain_id']['table'] = 'domain';
  $handler->display->display_options['filters']['domain_id']['field'] = 'domain_id';
  $handler->display->display_options['filters']['domain_id']['operator'] = 'not in';
  $handler->display->display_options['filters']['domain_id']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['domain_id']['group'] = 2;
  /* Filter criterion: Field: Weight (field_weight) */
  $handler->display->display_options['filters']['field_weight_value']['id'] = 'field_weight_value';
  $handler->display->display_options['filters']['field_weight_value']['table'] = 'field_data_field_weight';
  $handler->display->display_options['filters']['field_weight_value']['field'] = 'field_weight_value';
  $handler->display->display_options['filters']['field_weight_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_weight_value']['value']['value'] = '0';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
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
    t('[field_highlight]'),
    t('<div class="overlaid-image">[field_title_image]</div><div class="image-overlay">###[field_logo]###</div>'),
    t('All cities'),
    t('[taxonomy_vocabulary_1] | [field_regularity]'),
    t('Block'),
  );
  $export['cbf2019_city_activities'] = $view;

  $view = new view();
  $view->name = 'cbf2019_event_speakers';
  $view->description = 'Slider showing speaker';
  $view->tag = 'slider, autoplay';
  $view->base_table = 'civicrm_event';
  $view->human_name = 'cbf2019 event speakers';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Field: Speaker(s) (field_speakers) */
  $handler->display->display_options['relationships']['field_speakers_tid']['id'] = 'field_speakers_tid';
  $handler->display->display_options['relationships']['field_speakers_tid']['table'] = 'field_data_field_speakers';
  $handler->display->display_options['relationships']['field_speakers_tid']['field'] = 'field_speakers_tid';
  $handler->display->display_options['relationships']['field_speakers_tid']['label'] = 'Speaker';
  $handler->display->display_options['relationships']['field_speakers_tid']['required'] = TRUE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_speakers_tid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'person_360x438',
    'image_link' => '',
  );
  /* Field: Content: Title image */
  $handler->display->display_options['fields']['field_title_image']['id'] = 'field_title_image';
  $handler->display->display_options['fields']['field_title_image']['table'] = 'field_data_field_title_image';
  $handler->display->display_options['fields']['field_title_image']['field'] = 'field_title_image';
  $handler->display->display_options['fields']['field_title_image']['relationship'] = 'field_speakers_tid';
  $handler->display->display_options['fields']['field_title_image']['label'] = '';
  $handler->display->display_options['fields']['field_title_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title_image']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_title_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_title_image']['settings'] = array(
    'image_style' => 'portfolio_653x368',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_speakers_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'field_speakers_tid';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['cbf2019_event_speakers'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Speaker'),
    t('[field_image]'),
    t('Block'),
  );
  $export['cbf2019_event_speakers'] = $view;

  $view = new view();
  $view->name = 'cbf2019_local_activities';
  $view->description = '';
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
  /* Field: Content: Title image */
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
  /* Filter criterion: Content: Published */
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
  /* Filter criterion: Field: Activity category (field_activity_category) */
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
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
    48 => '48',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['group'] = 2;
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';
  /* Filter criterion: Domains: Domain ID */
  $handler->display->display_options['filters']['domain_id']['id'] = 'domain_id';
  $handler->display->display_options['filters']['domain_id']['table'] = 'domain';
  $handler->display->display_options['filters']['domain_id']['field'] = 'domain_id';
  $handler->display->display_options['filters']['domain_id']['operator'] = 'not in';
  $handler->display->display_options['filters']['domain_id']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['domain_id']['group'] = 2;
  /* Filter criterion: Field: Weight (field_weight) */
  $handler->display->display_options['filters']['field_weight_value']['id'] = 'field_weight_value';
  $handler->display->display_options['filters']['field_weight_value']['table'] = 'field_data_field_weight';
  $handler->display->display_options['filters']['field_weight_value']['field'] = 'field_weight_value';
  $handler->display->display_options['filters']['field_weight_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_weight_value']['value']['value'] = '0';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
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
  $view->name = 'cbf2019_local_events';
  $view->description = 'Upcoming events, localised to the visitor if possible';
  $view->tag = 'merge-events';
  $view->base_table = 'civicrm_event';
  $view->human_name = 'cbf2019 local events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'show-8-items';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
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
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '4';
  $handler->display->display_options['style_options']['columns_vertical'] = '4';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '6';
  $handler->display->display_options['style_options']['columns_md'] = '4';
  $handler->display->display_options['style_options']['columns_lg'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: CiviCRM Address: Address */
  $handler->display->display_options['relationships']['id']['id'] = 'id';
  $handler->display->display_options['relationships']['id']['table'] = 'civicrm_address';
  $handler->display->display_options['relationships']['id']['field'] = 'id';
  $handler->display->display_options['relationships']['id']['label'] = 'Address';
  $handler->display->display_options['relationships']['id']['location_type'] = '0';
  $handler->display->display_options['relationships']['id']['location_op'] = '0';
  $handler->display->display_options['relationships']['id']['is_primary'] = 0;
  /* Field: CiviCRM Events: Event ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'civicrm_event';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: Field: Highlight */
  $handler->display->display_options['fields']['field_highlight']['id'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['table'] = 'field_data_field_highlight';
  $handler->display->display_options['fields']['field_highlight']['field'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['label'] = '';
  $handler->display->display_options['fields']['field_highlight']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_highlight']['alter']['path'] = 'civicrm-event/[id]';
  $handler->display->display_options['fields']['field_highlight']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlight']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_highlight']['settings'] = array(
    'image_style' => 'portfolio_653x368',
    'image_link' => '',
  );
  /* Field: CiviCRM Events: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'civicrm_event';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Activity */
  $handler->display->display_options['fields']['field_in_activity']['id'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['field'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['label'] = '';
  $handler->display->display_options['fields']['field_in_activity']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_in_activity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_in_activity']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Field: Date text */
  $handler->display->display_options['fields']['field_date_text']['id'] = 'field_date_text';
  $handler->display->display_options['fields']['field_date_text']['table'] = 'field_data_field_date_text';
  $handler->display->display_options['fields']['field_date_text']['field'] = 'field_date_text';
  $handler->display->display_options['fields']['field_date_text']['label'] = '';
  $handler->display->display_options['fields']['field_date_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_text']['element_label_colon'] = FALSE;
  /* Field: CiviCRM Address: City / Suburb */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['relationship'] = 'id';
  $handler->display->display_options['fields']['city']['label'] = '';
  $handler->display->display_options['fields']['city']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['city']['alter']['text'] = '[field_date_text] | [city]';
  $handler->display->display_options['fields']['city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['city']['location_type'] = '0';
  $handler->display->display_options['fields']['city']['location_op'] = '0';
  $handler->display->display_options['fields']['city']['is_primary'] = 0;
  /* Sort criterion: Field: Sort Order (field_sort_order) */
  $handler->display->display_options['sorts']['field_sort_order_value']['id'] = 'field_sort_order_value';
  $handler->display->display_options['sorts']['field_sort_order_value']['table'] = 'field_data_field_sort_order';
  $handler->display->display_options['sorts']['field_sort_order_value']['field'] = 'field_sort_order_value';
  /* Filter criterion: Field: Next action (field_next_action) */
  $handler->display->display_options['filters']['field_next_action_value']['id'] = 'field_next_action_value';
  $handler->display->display_options['filters']['field_next_action_value']['table'] = 'field_data_field_next_action';
  $handler->display->display_options['filters']['field_next_action_value']['field'] = 'field_next_action_value';
  $handler->display->display_options['filters']['field_next_action_value']['operator'] = '!=';
  $handler->display->display_options['filters']['field_next_action_value']['value'] = '0';
  /* Filter criterion: Field: Ministry Centre (taxonomy_vocabulary_1) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['id'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['field'] = 'taxonomy_vocabulary_1_tid';
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['cbf2019_local_events'] = array(
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
    t('Address'),
    t('.'),
    t('[field_date_text] | [city]'),
    t('Block'),
  );
  $export['cbf2019_local_events'] = $view;

  $view = new view();
  $view->name = 'cbf2019_local_office';
  $view->description = 'The offices of the City Bible Forum';
  $view->tag = 'default';
  $view->base_table = 'entityform';
  $view->human_name = 'cbf2019 local office';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['css_class'] = 'office-view';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
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
  $handler->display->display_options['header']['area']['content'] = 'Find us';
  $handler->display->display_options['header']['area']['format'] = '2';
  /* Relationship: Entityform Submission: Office contact (field_organisation_contact) */
  $handler->display->display_options['relationships']['field_organisation_contact_contact_id']['id'] = 'field_organisation_contact_contact_id';
  $handler->display->display_options['relationships']['field_organisation_contact_contact_id']['table'] = 'field_data_field_organisation_contact';
  $handler->display->display_options['relationships']['field_organisation_contact_contact_id']['field'] = 'field_organisation_contact_contact_id';
  $handler->display->display_options['relationships']['field_organisation_contact_contact_id']['label'] = 'Office contact';
  /* Relationship: CiviCRM Email: Email Address */
  $handler->display->display_options['relationships']['id']['id'] = 'id';
  $handler->display->display_options['relationships']['id']['table'] = 'civicrm_email';
  $handler->display->display_options['relationships']['id']['field'] = 'id';
  $handler->display->display_options['relationships']['id']['relationship'] = 'field_organisation_contact_contact_id';
  $handler->display->display_options['relationships']['id']['label'] = 'Email Address';
  $handler->display->display_options['relationships']['id']['location_type'] = '2';
  $handler->display->display_options['relationships']['id']['location_op'] = '0';
  $handler->display->display_options['relationships']['id']['is_primary'] = 0;
  /* Relationship: CiviCRM Phone Details: Phone */
  $handler->display->display_options['relationships']['id_1']['id'] = 'id_1';
  $handler->display->display_options['relationships']['id_1']['table'] = 'civicrm_phone';
  $handler->display->display_options['relationships']['id_1']['field'] = 'id';
  $handler->display->display_options['relationships']['id_1']['relationship'] = 'field_organisation_contact_contact_id';
  $handler->display->display_options['relationships']['id_1']['label'] = 'Phone';
  $handler->display->display_options['relationships']['id_1']['location_type'] = '2';
  $handler->display->display_options['relationships']['id_1']['location_op'] = '0';
  $handler->display->display_options['relationships']['id_1']['is_primary'] = 0;
  $handler->display->display_options['relationships']['id_1']['phone_type'] = '1';
  /* Relationship: CiviCRM Address: Address */
  $handler->display->display_options['relationships']['id_2']['id'] = 'id_2';
  $handler->display->display_options['relationships']['id_2']['table'] = 'civicrm_address';
  $handler->display->display_options['relationships']['id_2']['field'] = 'id';
  $handler->display->display_options['relationships']['id_2']['relationship'] = 'field_organisation_contact_contact_id';
  $handler->display->display_options['relationships']['id_2']['label'] = 'Physical address';
  $handler->display->display_options['relationships']['id_2']['location_type'] = '2';
  $handler->display->display_options['relationships']['id_2']['location_op'] = '0';
  $handler->display->display_options['relationships']['id_2']['is_primary'] = 0;
  /* Relationship: CiviCRM Address: Address */
  $handler->display->display_options['relationships']['id_3']['id'] = 'id_3';
  $handler->display->display_options['relationships']['id_3']['table'] = 'civicrm_address';
  $handler->display->display_options['relationships']['id_3']['field'] = 'id';
  $handler->display->display_options['relationships']['id_3']['relationship'] = 'field_organisation_contact_contact_id';
  $handler->display->display_options['relationships']['id_3']['label'] = 'Postal address';
  $handler->display->display_options['relationships']['id_3']['location_type'] = '6';
  $handler->display->display_options['relationships']['id_3']['location_op'] = '0';
  $handler->display->display_options['relationships']['id_3']['is_primary'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<i class="fa fa-fw fa-phone"></i>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'view-icon';
  /* Field: CiviCRM Phone Details: Phone */
  $handler->display->display_options['fields']['phone']['id'] = 'phone';
  $handler->display->display_options['fields']['phone']['table'] = 'civicrm_phone';
  $handler->display->display_options['fields']['phone']['field'] = 'phone';
  $handler->display->display_options['fields']['phone']['relationship'] = 'id_1';
  $handler->display->display_options['fields']['phone']['label'] = 'Call us';
  $handler->display->display_options['fields']['phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['phone']['location_type'] = '0';
  $handler->display->display_options['fields']['phone']['location_op'] = '0';
  $handler->display->display_options['fields']['phone']['is_primary'] = 0;
  $handler->display->display_options['fields']['phone']['phone_type'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<i class="fa fa-fw fa-map-marker"></i>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_class'] = 'view-icon';
  /* Field: CiviCRM Address: Supplemental Street Address */
  $handler->display->display_options['fields']['supplemental_address_1']['id'] = 'supplemental_address_1';
  $handler->display->display_options['fields']['supplemental_address_1']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['supplemental_address_1']['field'] = 'supplemental_address_1';
  $handler->display->display_options['fields']['supplemental_address_1']['relationship'] = 'id_2';
  $handler->display->display_options['fields']['supplemental_address_1']['label'] = '';
  $handler->display->display_options['fields']['supplemental_address_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['supplemental_address_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['supplemental_address_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['supplemental_address_1']['location_type'] = '0';
  $handler->display->display_options['fields']['supplemental_address_1']['location_op'] = '0';
  $handler->display->display_options['fields']['supplemental_address_1']['is_primary'] = 0;
  /* Field: CiviCRM Address: Full Street Address */
  $handler->display->display_options['fields']['street_address']['id'] = 'street_address';
  $handler->display->display_options['fields']['street_address']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['street_address']['field'] = 'street_address';
  $handler->display->display_options['fields']['street_address']['relationship'] = 'id_2';
  $handler->display->display_options['fields']['street_address']['label'] = '';
  $handler->display->display_options['fields']['street_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['street_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['street_address']['location_type'] = '0';
  $handler->display->display_options['fields']['street_address']['location_op'] = '0';
  $handler->display->display_options['fields']['street_address']['is_primary'] = 0;
  /* Field: CiviCRM Address: City / Suburb */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['relationship'] = 'id_2';
  $handler->display->display_options['fields']['city']['label'] = '';
  $handler->display->display_options['fields']['city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['city']['location_type'] = '0';
  $handler->display->display_options['fields']['city']['location_op'] = '0';
  $handler->display->display_options['fields']['city']['is_primary'] = 0;
  /* Field: CiviCRM Address: State/Province */
  $handler->display->display_options['fields']['state_province_1']['id'] = 'state_province_1';
  $handler->display->display_options['fields']['state_province_1']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['state_province_1']['field'] = 'state_province';
  $handler->display->display_options['fields']['state_province_1']['relationship'] = 'id_2';
  $handler->display->display_options['fields']['state_province_1']['label'] = 'Address';
  $handler->display->display_options['fields']['state_province_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['state_province_1']['alter']['text'] = '[supplemental_address_1]<div>[street_address]</div><div>[city]</div>';
  $handler->display->display_options['fields']['state_province_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['state_province_1']['location_type'] = '0';
  $handler->display->display_options['fields']['state_province_1']['location_op'] = '0';
  $handler->display->display_options['fields']['state_province_1']['is_primary'] = 0;
  $handler->display->display_options['fields']['state_province_1']['prov_display'] = '1';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<i class="fa fa-fw fa-file-text-o"></i>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_class'] = 'view-icon';
  /* Field: CiviCRM Address: Full Street Address */
  $handler->display->display_options['fields']['street_address_1']['id'] = 'street_address_1';
  $handler->display->display_options['fields']['street_address_1']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['street_address_1']['field'] = 'street_address';
  $handler->display->display_options['fields']['street_address_1']['relationship'] = 'id_3';
  $handler->display->display_options['fields']['street_address_1']['label'] = '';
  $handler->display->display_options['fields']['street_address_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['street_address_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['street_address_1']['location_type'] = '0';
  $handler->display->display_options['fields']['street_address_1']['location_op'] = '0';
  $handler->display->display_options['fields']['street_address_1']['is_primary'] = 0;
  /* Field: CiviCRM Address: City / Suburb */
  $handler->display->display_options['fields']['city_1']['id'] = 'city_1';
  $handler->display->display_options['fields']['city_1']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['city_1']['field'] = 'city';
  $handler->display->display_options['fields']['city_1']['relationship'] = 'id_3';
  $handler->display->display_options['fields']['city_1']['label'] = '';
  $handler->display->display_options['fields']['city_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['city_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['city_1']['location_type'] = '0';
  $handler->display->display_options['fields']['city_1']['location_op'] = '0';
  $handler->display->display_options['fields']['city_1']['is_primary'] = 0;
  /* Field: CiviCRM Address: State/Province */
  $handler->display->display_options['fields']['state_province']['id'] = 'state_province';
  $handler->display->display_options['fields']['state_province']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['state_province']['field'] = 'state_province';
  $handler->display->display_options['fields']['state_province']['relationship'] = 'id_3';
  $handler->display->display_options['fields']['state_province']['label'] = '';
  $handler->display->display_options['fields']['state_province']['exclude'] = TRUE;
  $handler->display->display_options['fields']['state_province']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['state_province']['location_type'] = '0';
  $handler->display->display_options['fields']['state_province']['location_op'] = '0';
  $handler->display->display_options['fields']['state_province']['is_primary'] = 0;
  $handler->display->display_options['fields']['state_province']['prov_display'] = '1';
  /* Field: CiviCRM Address: Postal Code */
  $handler->display->display_options['fields']['postal_code']['id'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['postal_code']['field'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['relationship'] = 'id_3';
  $handler->display->display_options['fields']['postal_code']['label'] = 'Post';
  $handler->display->display_options['fields']['postal_code']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['postal_code']['alter']['text'] = '[street_address_1]<div>[city_1] [state_province] [postal_code]</div>';
  $handler->display->display_options['fields']['postal_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['postal_code']['location_type'] = '0';
  $handler->display->display_options['fields']['postal_code']['location_op'] = '0';
  $handler->display->display_options['fields']['postal_code']['is_primary'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '<i class="fa fa-fw fa-envelope-o"></i>';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_class'] = 'view-icon';
  /* Field: CiviCRM Email: Email Address */
  $handler->display->display_options['fields']['email']['id'] = 'email';
  $handler->display->display_options['fields']['email']['table'] = 'civicrm_email';
  $handler->display->display_options['fields']['email']['field'] = 'email';
  $handler->display->display_options['fields']['email']['relationship'] = 'id';
  $handler->display->display_options['fields']['email']['label'] = 'Address';
  $handler->display->display_options['fields']['email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['email']['location_type'] = '0';
  $handler->display->display_options['fields']['email']['location_op'] = '0';
  $handler->display->display_options['fields']['email']['is_primary'] = 0;
  $handler->display->display_options['fields']['email']['link_to_user'] = '0';
  /* Sort criterion: Field: Weight (field_weight) */
  $handler->display->display_options['sorts']['field_weight_value']['id'] = 'field_weight_value';
  $handler->display->display_options['sorts']['field_weight_value']['table'] = 'field_data_field_weight';
  $handler->display->display_options['sorts']['field_weight_value']['field'] = 'field_weight_value';
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'office' => 'office',
  );
  /* Filter criterion: Entityform Submission: Office (field_office) */
  $handler->display->display_options['filters']['field_office_tid']['id'] = 'field_office_tid';
  $handler->display->display_options['filters']['field_office_tid']['table'] = 'field_data_field_office';
  $handler->display->display_options['filters']['field_office_tid']['field'] = 'field_office_tid';
  $handler->display->display_options['filters']['field_office_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_office_tid']['expose']['operator_id'] = 'field_office_tid_op';
  $handler->display->display_options['filters']['field_office_tid']['expose']['operator'] = 'field_office_tid_op';
  $handler->display->display_options['filters']['field_office_tid']['expose']['identifier'] = 'field_office_tid';
  $handler->display->display_options['filters']['field_office_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_office_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_office_tid']['vocabulary'] = 'office';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Block with map */
  $handler = $view->new_display('block', 'Block with map', 'block_1');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class = "clearfix">
  <div  class = "google-map">
    <div class="map-canvas-view"
      data-zoom="14"
      data-address="[street_address], [city], Australia"
      data-type="roadmap">
    </div>
  </div>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'raw_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $translatables['cbf2019_local_office'] = array(
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
    t('Find us'),
    t('Office contact'),
    t('Email Address'),
    t('Phone'),
    t('Physical address'),
    t('Postal address'),
    t('<i class="fa fa-fw fa-phone"></i>'),
    t('Call us'),
    t('<i class="fa fa-fw fa-map-marker"></i>'),
    t('Address'),
    t('[supplemental_address_1]<div>[street_address]</div><div>[city]</div>'),
    t('<i class="fa fa-fw fa-file-text-o"></i>'),
    t('Post'),
    t('[street_address_1]<div>[city_1] [state_province] [postal_code]</div>'),
    t('<i class="fa fa-fw fa-envelope-o"></i>'),
    t('Block'),
    t('Block with map'),
    t('<div class = "clearfix">
  <div  class = "google-map">
    <div class="map-canvas-view"
      data-zoom="14"
      data-address="[street_address], [city], Australia"
      data-type="roadmap">
    </div>
  </div>
</div>'),
  );
  $export['cbf2019_local_office'] = $view;

  $view = new view();
  $view->name = 'cbf2019_page_header';
  $view->description = 'Page header for all non-home pages';
  $view->tag = 'page-header';
  $view->base_table = 'domain';
  $view->human_name = 'cbf2019 page header';
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
  /* Contextual filter: Domain Access: Domain ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'domain_access';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['gid']['default_argument_options']['code'] = 'return  domain_get_domain()[\'domain_id\'];';
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

  /* Display: Default header */
  $handler = $view->new_display('block', 'Default header', 'block');
  $handler->display->display_options['display_description'] = 'Shows a fixed image plus the breadcrumb';
  $translatables['cbf2019_page_header'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Domain ID'),
    t('All'),
    t('Default header'),
    t('Shows a fixed image plus the breadcrumb'),
  );
  $export['cbf2019_page_header'] = $view;

  $view = new view();
  $view->name = 'cbf2019_page_header_node';
  $view->description = 'Page header for all node pages';
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
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Title image */
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
  /* Filter criterion: Content: Published */
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
    t('All'),
    t('Block'),
  );
  $export['cbf2019_page_header_node'] = $view;

  $view = new view();
  $view->name = 'cbf2019_recent_library';
  $view->description = 'Recent library view for the cbf2019 theme';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'cbf2019 recent library';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['css_class'] = 'container-view-content';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'Our library';
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
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Recent resources';
  $handler->display->display_options['header']['area']['format'] = '3';
  /* Field: Field: Highlight */
  $handler->display->display_options['fields']['field_highlight']['id'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['table'] = 'field_data_field_highlight';
  $handler->display->display_options['fields']['field_highlight']['field'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['label'] = '';
  $handler->display->display_options['fields']['field_highlight']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlight']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_highlight']['settings'] = array(
    'image_style' => 'highlight',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
    'custom_date_format' => 'M j',
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
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'READ MORE';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['nid']['alter']['link_class'] = 'btn btn-mod btn-border btn-medium btn-round';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Sort criterion: Field: Date (field_episode_date) */
  $handler->display->display_options['sorts']['field_episode_date_value']['id'] = 'field_episode_date_value';
  $handler->display->display_options['sorts']['field_episode_date_value']['table'] = 'field_data_field_episode_date';
  $handler->display->display_options['sorts']['field_episode_date_value']['field'] = 'field_episode_date_value';
  $handler->display->display_options['sorts']['field_episode_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['link_url'] = 'library';
  $translatables['cbf2019_recent_library'] = array(
    t('Master'),
    t('<none>'),
    t('Our library'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Title'),
    t('Recent resources'),
    t('[field_speakers] | [field_episode_date]'),
    t('READ MORE'),
    t('Block'),
    t('more'),
  );
  $export['cbf2019_recent_library'] = $view;

  $view = new view();
  $view->name = 'cbf2019_staff_slider';
  $view->description = '';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Our team';
  $handler->display->display_options['header']['area']['format'] = '2';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'person_360x438',
    'image_link' => '',
  );
  /* Field: Entityform Submission: Note */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_summary']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_summary']['alter']['text'] = '<div class="overlaid-image">[field_image]</div><div class="image-overlay">[field_summary]</div>';
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_summary']['element_wrapper_class'] = 'image-plus-hover-overlay';
  /* Field: Entityform Submission: Title */
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['cbf2019_staff_slider'] = array(
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
    t('Our team'),
    t('<div class="overlaid-image">[field_image]</div><div class="image-overlay">[field_summary]</div>'),
    t('Block'),
  );
  $export['cbf2019_staff_slider'] = $view;

  $view = new view();
  $view->name = 'local_civicrm_event_slider';
  $view->description = '';
  $view->tag = 'default, slider, autoplay';
  $view->base_table = 'civicrm_event';
  $view->human_name = 'cbf2019 local event slider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['css_class'] = 'bg-gray-view-content cbf-merge-events';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'All events';
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'none';
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
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Title';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Upcoming events';
  $handler->display->display_options['header']['area']['format'] = '2';
  /* Field: Field: Highlight */
  $handler->display->display_options['fields']['field_highlight']['id'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['table'] = 'field_data_field_highlight';
  $handler->display->display_options['fields']['field_highlight']['field'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['label'] = '';
  $handler->display->display_options['fields']['field_highlight']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlight']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_highlight']['settings'] = array(
    'image_style' => 'highlight',
    'image_link' => '',
  );
  /* Field: CiviCRM Events: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'civicrm_event';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Activity */
  $handler->display->display_options['fields']['field_in_activity']['id'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['field'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['label'] = '';
  $handler->display->display_options['fields']['field_in_activity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_in_activity']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Field: Date text */
  $handler->display->display_options['fields']['field_date_text']['id'] = 'field_date_text';
  $handler->display->display_options['fields']['field_date_text']['table'] = 'field_data_field_date_text';
  $handler->display->display_options['fields']['field_date_text']['field'] = 'field_date_text';
  $handler->display->display_options['fields']['field_date_text']['label'] = '';
  $handler->display->display_options['fields']['field_date_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_text']['element_label_colon'] = FALSE;
  /* Field: CiviCRM Address: City / Suburb */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['label'] = '';
  $handler->display->display_options['fields']['city']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['city']['alter']['text'] = '[field_date_text] | [city]';
  $handler->display->display_options['fields']['city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['city']['location_type'] = '0';
  $handler->display->display_options['fields']['city']['location_op'] = '0';
  $handler->display->display_options['fields']['city']['is_primary'] = 0;
  /* Field: CiviCRM Events: Summary */
  $handler->display->display_options['fields']['summary']['id'] = 'summary';
  $handler->display->display_options['fields']['summary']['table'] = 'civicrm_event';
  $handler->display->display_options['fields']['summary']['field'] = 'summary';
  $handler->display->display_options['fields']['summary']['label'] = '';
  $handler->display->display_options['fields']['summary']['element_label_colon'] = FALSE;
  /* Field: CiviCRM Events: Event ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'civicrm_event';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['id']['alter']['text'] = 'MORE INFO & TICKETS';
  $handler->display->display_options['fields']['id']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['id']['alter']['path'] = 'civicrm-event/[id]';
  $handler->display->display_options['fields']['id']['alter']['link_class'] = 'btn btn-mod btn-border btn-medium btn-round';
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Sort criterion: Field: Sort Order (field_sort_order) */
  $handler->display->display_options['sorts']['field_sort_order_value']['id'] = 'field_sort_order_value';
  $handler->display->display_options['sorts']['field_sort_order_value']['table'] = 'field_data_field_sort_order';
  $handler->display->display_options['sorts']['field_sort_order_value']['field'] = 'field_sort_order_value';
  /* Contextual filter: Field: Ministry Centre (taxonomy_vocabulary_1) */
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['id'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['field'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['default_argument_options']['code'] = 'return cbf_visitor_city_string();';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['validate_options']['vocabularies'] = array(
    'vocabulary_1' => 'vocabulary_1',
  );
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['validate']['fail'] = 'ignore';
  /* Filter criterion: Field: Next action (field_next_action) */
  $handler->display->display_options['filters']['field_next_action_value']['id'] = 'field_next_action_value';
  $handler->display->display_options['filters']['field_next_action_value']['table'] = 'field_data_field_next_action';
  $handler->display->display_options['filters']['field_next_action_value']['field'] = 'field_next_action_value';
  $handler->display->display_options['filters']['field_next_action_value']['operator'] = '!=';
  $handler->display->display_options['filters']['field_next_action_value']['value'] = '0';
  $handler->display->display_options['filters']['field_next_action_value']['group'] = 1;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['link_url'] = 'events';
  $translatables['local_civicrm_event_slider'] = array(
    t('Master'),
    t('<none>'),
    t('All events'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Title'),
    t('Upcoming events'),
    t('[field_date_text] | [city]'),
    t('MORE INFO & TICKETS'),
    t('.'),
    t('All'),
    t('Block'),
    t('more'),
  );
  $export['local_civicrm_event_slider'] = $view;

  return $export;
}
