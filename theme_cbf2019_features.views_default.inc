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
  /* Filter criterion: Content: Published */
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
  );
  $export['cbf2019_activity_logo'] = $view;

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
  /* Contextual filter: Domain Access: Domain ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'domain_access';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'current_domain';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
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
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Defaults */
  $handler = $view->new_display('block', 'Defaults', 'block');
  $handler->display->display_options['display_description'] = 'This display contains the defaults - don\'t use';
  $handler->display->display_options['link_url'] = 'articles';

  /* Display: For home page */
  $handler = $view->new_display('block', 'For home page', 'block_1');
  $handler->display->display_options['link_url'] = 'articles';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Blog';
  $handler->display->display_options['header']['area']['format'] = '2';
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
    'custom_date_format' => 'j M',
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

  /* Display: Blog */
  $handler = $view->new_display('page', 'Blog', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Blog';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'All news in our blog';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['total_pages'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['title']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  $handler->display->display_options['path'] = 'articles';

  /* Display: For Activity */
  $handler = $view->new_display('block', 'For Activity', 'block_2');
  $handler->display->display_options['display_description'] = 'Recent blog articles for an activity';
  $handler->display->display_options['link_url'] = 'articles';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Blog';
  $handler->display->display_options['header']['area']['format'] = '2';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
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
  $translatables['cbf2019_blog'] = array(
    t('Master'),
    t('<none>'),
    t('All news in our blog'),
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Author'),
    t('[name]'),
    t('[field_speakers] | [field_episode_date]'),
    t('READ MORE'),
    t('All'),
    t('Defaults'),
    t('This display contains the defaults - don\'t use'),
    t('more'),
    t('For home page'),
    t('Blog'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Title'),
    t('For Activity'),
    t('Recent blog articles for an activity'),
    t('Activity'),
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
    t('Activities'),
    t('[field_highlight]'),
    t('<div class="overlaid-image">[field_title_image]</div><div class="image-overlay">###[field_logo]###</div>'),
    t('All cities'),
    t('[taxonomy_vocabulary_1] | [field_regularity]'),
    t('Block'),
  );
  $export['cbf2019_city_activities'] = $view;

  $view = new view();
  $view->name = 'cbf2019_content_details_table';
  $view->description = '';
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
  /* Filter criterion: Content: Published */
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

  /* Display: For node */
  $handler = $view->new_display('block', 'For node', 'block_1');
  $handler->display->display_options['display_description'] = 'Details table for a node';
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
    t('For node'),
    t('Details table for a node'),
    t('All'),
  );
  $export['cbf2019_content_details_table'] = $view;

  $view = new view();
  $view->name = 'cbf2019_content_highlight_slider';
  $view->description = 'Slider showing promotional material for nodes';
  $view->tag = 'slider, fieldwise';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: Highlight video */
  $handler->display->display_options['fields']['field_highlight_video']['id'] = 'field_highlight_video';
  $handler->display->display_options['fields']['field_highlight_video']['table'] = 'field_data_field_highlight_video';
  $handler->display->display_options['fields']['field_highlight_video']['field'] = 'field_highlight_video';
  $handler->display->display_options['fields']['field_highlight_video']['label'] = '';
  $handler->display->display_options['fields']['field_highlight_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlight_video']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_highlight_video']['click_sort_column'] = 'url';
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Field: Highlight video (field_highlight_video:url) */
  $handler->display->display_options['filters']['field_highlight_video_url']['id'] = 'field_highlight_video_url';
  $handler->display->display_options['filters']['field_highlight_video_url']['table'] = 'field_data_field_highlight_video';
  $handler->display->display_options['filters']['field_highlight_video_url']['field'] = 'field_highlight_video_url';
  $handler->display->display_options['filters']['field_highlight_video_url']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_highlight_video_url']['group'] = 2;

  /* Display: Defaults */
  $handler = $view->new_display('block', 'Defaults', 'block');
  $handler->display->display_options['display_description'] = 'This display contains the defaults - don\'t use';

  /* Display: For Activity */
  $handler = $view->new_display('block', 'For Activity', 'block_1');
  $handler->display->display_options['display_description'] = 'Highlights for an Activity and its CiviCRM Events';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: View area */
  $handler->display->display_options['empty']['view']['id'] = 'view';
  $handler->display->display_options['empty']['view']['table'] = 'views';
  $handler->display->display_options['empty']['view']['field'] = 'view';
  $handler->display->display_options['empty']['view']['empty'] = TRUE;
  $handler->display->display_options['empty']['view']['view_to_insert'] = 'cbf2019_content_highlight_slider:block_2';
  $handler->display->display_options['empty']['view']['inherit_arguments'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_in_activity_civicrm_event']['id'] = 'reverse_field_in_activity_civicrm_event';
  $handler->display->display_options['relationships']['reverse_field_in_activity_civicrm_event']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_in_activity_civicrm_event']['field'] = 'reverse_field_in_activity_civicrm_event';
  $handler->display->display_options['relationships']['reverse_field_in_activity_civicrm_event']['label'] = 'CiviCRM Event';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: CiviCRM Events: Event ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'civicrm_event';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['relationship'] = 'reverse_field_in_activity_civicrm_event';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: Field: Highlight video */
  $handler->display->display_options['fields']['field_highlight_video_1']['id'] = 'field_highlight_video_1';
  $handler->display->display_options['fields']['field_highlight_video_1']['table'] = 'field_data_field_highlight_video';
  $handler->display->display_options['fields']['field_highlight_video_1']['field'] = 'field_highlight_video';
  $handler->display->display_options['fields']['field_highlight_video_1']['relationship'] = 'reverse_field_in_activity_civicrm_event';
  $handler->display->display_options['fields']['field_highlight_video_1']['label'] = '';
  $handler->display->display_options['fields']['field_highlight_video_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlight_video_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_highlight_video_1']['click_sort_column'] = 'url';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'reverse_field_in_activity_civicrm_event';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = 'civicrm-event/[id]';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'portfolio_653x368',
    'image_link' => '',
  );
  /* Field: Field: Highlight video */
  $handler->display->display_options['fields']['field_highlight_video']['id'] = 'field_highlight_video';
  $handler->display->display_options['fields']['field_highlight_video']['table'] = 'field_data_field_highlight_video';
  $handler->display->display_options['fields']['field_highlight_video']['field'] = 'field_highlight_video';
  $handler->display->display_options['fields']['field_highlight_video']['label'] = '';
  $handler->display->display_options['fields']['field_highlight_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlight_video']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_highlight_video']['click_sort_column'] = 'url';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Sort Order (field_sort_order) */
  $handler->display->display_options['sorts']['field_sort_order_value']['id'] = 'field_sort_order_value';
  $handler->display->display_options['sorts']['field_sort_order_value']['table'] = 'field_data_field_sort_order';
  $handler->display->display_options['sorts']['field_sort_order_value']['field'] = 'field_sort_order_value';
  $handler->display->display_options['sorts']['field_sort_order_value']['relationship'] = 'reverse_field_in_activity_civicrm_event';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  /* Filter criterion: Field: Next action (field_next_action) */
  $handler->display->display_options['filters']['field_next_action_value']['id'] = 'field_next_action_value';
  $handler->display->display_options['filters']['field_next_action_value']['table'] = 'field_data_field_next_action';
  $handler->display->display_options['filters']['field_next_action_value']['field'] = 'field_next_action_value';
  $handler->display->display_options['filters']['field_next_action_value']['relationship'] = 'reverse_field_in_activity_civicrm_event';
  $handler->display->display_options['filters']['field_next_action_value']['operator'] = '!=';
  $handler->display->display_options['filters']['field_next_action_value']['value'] = '0';
  $handler->display->display_options['filters']['field_next_action_value']['group'] = 1;
  /* Filter criterion: Field: Highlight video (field_highlight_video:url) */
  $handler->display->display_options['filters']['field_highlight_video_url']['id'] = 'field_highlight_video_url';
  $handler->display->display_options['filters']['field_highlight_video_url']['table'] = 'field_data_field_highlight_video';
  $handler->display->display_options['filters']['field_highlight_video_url']['field'] = 'field_highlight_video_url';
  $handler->display->display_options['filters']['field_highlight_video_url']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_highlight_video_url']['group'] = 2;
  /* Filter criterion: Field: Highlight video (field_highlight_video:url) */
  $handler->display->display_options['filters']['field_highlight_video_url_1']['id'] = 'field_highlight_video_url_1';
  $handler->display->display_options['filters']['field_highlight_video_url_1']['table'] = 'field_data_field_highlight_video';
  $handler->display->display_options['filters']['field_highlight_video_url_1']['field'] = 'field_highlight_video_url';
  $handler->display->display_options['filters']['field_highlight_video_url_1']['relationship'] = 'reverse_field_in_activity_civicrm_event';
  $handler->display->display_options['filters']['field_highlight_video_url_1']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_highlight_video_url_1']['group'] = 2;
  /* Filter criterion: Field: Image (field_image:fid) */
  $handler->display->display_options['filters']['field_image_fid']['id'] = 'field_image_fid';
  $handler->display->display_options['filters']['field_image_fid']['table'] = 'field_data_field_image';
  $handler->display->display_options['filters']['field_image_fid']['field'] = 'field_image_fid';
  $handler->display->display_options['filters']['field_image_fid']['relationship'] = 'reverse_field_in_activity_civicrm_event';
  $handler->display->display_options['filters']['field_image_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_image_fid']['group'] = 2;

  /* Display: For Activity with no upcoming events */
  $handler = $view->new_display('block', 'For Activity with no upcoming events', 'block_2');
  $handler->display->display_options['display_description'] = 'Highlights for an Activity';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Field: Highlight video (field_highlight_video:url) */
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
    t('For Activity'),
    t('Highlights for an Activity and its CiviCRM Events'),
    t('CiviCRM Event'),
    t('.'),
    t('For Activity with no upcoming events'),
    t('Highlights for an Activity'),
  );
  $export['cbf2019_content_highlight_slider'] = $view;

  $view = new view();
  $view->name = 'cbf2019_event_admin_view';
  $view->description = 'Allow admin access to CiviCRM Events';
  $view->tag = 'default';
  $view->base_table = 'civicrm_event';
  $view->human_name = 'cbf2019 event admin view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Website events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    6 => '6',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
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
    'start_date' => array(
      'bef_format' => 'bef_datepicker',
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
        'datepicker_options' => 'dateFormat: "yy-mm-dd"',
      ),
    ),
    'taxonomy_vocabulary_3_tid_1' => array(
      'bef_format' => 'default',
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
    'taxonomy_vocabulary_1_tid' => array(
      'bef_format' => 'default',
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
    'display_name' => array(
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
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'start_date' => 'start_date',
    'taxonomy_vocabulary_1' => 'taxonomy_vocabulary_1',
    'taxonomy_vocabulary_3' => 'taxonomy_vocabulary_3',
    'field_in_activity' => 'field_in_activity',
    'field_staff_contact' => 'field_staff_contact',
    'id' => 'id',
  );
  $handler->display->display_options['style_options']['default'] = 'start_date';
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
    'start_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
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
    'field_staff_contact' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['style_options']['empty_table'] = TRUE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'These are CiviCRM Events that have been marked up for display on the website.

To create a new CiviCRM Event

<ol>
<li>Go to <em>CiviCRM > Events > Manage Events</em> and click <em>Add Event</em></li>
<li>Create the event as you normally would</li>
<li>When you\'re ready to put the event on the website, click <em>Event links > View event on website</em></li>
<li>Click on <em>Edit</em> to add the website content to the event</li>
</ol>';
  $handler->display->display_options['header']['area']['format'] = '2';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_in_activity_target_id']['id'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['field'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['label'] = 'Activity';
  /* Relationship: Field: Staff contact (field_staff_contact) */
  $handler->display->display_options['relationships']['field_staff_contact_contact_id']['id'] = 'field_staff_contact_contact_id';
  $handler->display->display_options['relationships']['field_staff_contact_contact_id']['table'] = 'field_data_field_staff_contact';
  $handler->display->display_options['relationships']['field_staff_contact_contact_id']['field'] = 'field_staff_contact_contact_id';
  /* Field: Bulk operations: CiviCRM Event */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_civicrm_event';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Select';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::civicrm_entity_actions_event_delete_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::civicrm_entity_actions_event_edit_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::civicrm_entity_actions_event_view_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: CiviCRM Events: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'civicrm_event';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: CiviCRM Events: Start Date */
  $handler->display->display_options['fields']['start_date']['id'] = 'start_date';
  $handler->display->display_options['fields']['start_date']['table'] = 'civicrm_event';
  $handler->display->display_options['fields']['start_date']['field'] = 'start_date';
  $handler->display->display_options['fields']['start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['start_date']['date_format'] = 'day_month_year';
  $handler->display->display_options['fields']['start_date']['second_date_format'] = 'long';
  /* Field: Field: Ministry Centre */
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['id'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['field'] = 'taxonomy_vocabulary_1';
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_1']['type'] = 'taxonomy_term_reference_plain';
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
    'link' => 0,
  );
  /* Field: Field: Staff contact */
  $handler->display->display_options['fields']['field_staff_contact']['id'] = 'field_staff_contact';
  $handler->display->display_options['fields']['field_staff_contact']['table'] = 'field_data_field_staff_contact';
  $handler->display->display_options['fields']['field_staff_contact']['field'] = 'field_staff_contact';
  $handler->display->display_options['fields']['field_staff_contact']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_contact']['type'] = 'civicrm_contact_ref_plain';
  /* Field: CiviCRM Events: Event ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'civicrm_event';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = 'Operations';
  $handler->display->display_options['fields']['id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['id']['alter']['text'] = '<a href="/civicrm-event/[id]">View</a>&nbsp;&nbsp;&nbsp;<a href="/civicrm-event/[id]/edit">Edit</a>&nbsp;&nbsp;&nbsp;<a href="/civicrm/event/manage/settings?reset=1&action=update&id=[id]">CiviCRM</a>';
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Sort criterion: CiviCRM Events: Start Date */
  $handler->display->display_options['sorts']['start_date']['id'] = 'start_date';
  $handler->display->display_options['sorts']['start_date']['table'] = 'civicrm_event';
  $handler->display->display_options['sorts']['start_date']['field'] = 'start_date';
  $handler->display->display_options['sorts']['start_date']['order'] = 'DESC';
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = '';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['group'] = 1;
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';
  /* Filter criterion: CiviCRM Events: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'civicrm_event';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title contains';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
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
  /* Filter criterion: CiviCRM Events: Start Date */
  $handler->display->display_options['filters']['start_date']['id'] = 'start_date';
  $handler->display->display_options['filters']['start_date']['table'] = 'civicrm_event';
  $handler->display->display_options['filters']['start_date']['field'] = 'start_date';
  $handler->display->display_options['filters']['start_date']['operator'] = 'between';
  $handler->display->display_options['filters']['start_date']['group'] = 1;
  $handler->display->display_options['filters']['start_date']['exposed'] = TRUE;
  $handler->display->display_options['filters']['start_date']['expose']['operator_id'] = 'start_date_op';
  $handler->display->display_options['filters']['start_date']['expose']['label'] = 'Start Date between';
  $handler->display->display_options['filters']['start_date']['expose']['operator'] = 'start_date_op';
  $handler->display->display_options['filters']['start_date']['expose']['identifier'] = 'start_date';
  $handler->display->display_options['filters']['start_date']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['id'] = 'taxonomy_vocabulary_3_tid_1';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['expose']['operator_id'] = 'taxonomy_vocabulary_3_tid_1_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['expose']['label'] = 'Audience';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['expose']['operator'] = 'taxonomy_vocabulary_3_tid_1_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['expose']['identifier'] = 'taxonomy_vocabulary_3_tid_1';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid_1']['vocabulary'] = 'vocabulary_3';
  /* Filter criterion: Field: Ministry Centre (taxonomy_vocabulary_1) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['id'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['field'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_1_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['expose']['label'] = 'Ministry Centre';
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
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['group_info']['label'] = 'Ministry Centre (taxonomy_vocabulary_1)';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['group_info']['identifier'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['vocabulary'] = 'vocabulary_1';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['relationship'] = 'field_in_activity_target_id';
  $handler->display->display_options['filters']['title_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['operator_id'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['label'] = 'Activity name contains';
  $handler->display->display_options['filters']['title_1']['expose']['operator'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['identifier'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['title_1']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title_1']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title_1']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title_1']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title_1']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title_1']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: CiviCRM Contacts: Display Name */
  $handler->display->display_options['filters']['display_name']['id'] = 'display_name';
  $handler->display->display_options['filters']['display_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['filters']['display_name']['field'] = 'display_name';
  $handler->display->display_options['filters']['display_name']['relationship'] = 'field_staff_contact_contact_id';
  $handler->display->display_options['filters']['display_name']['operator'] = 'contains';
  $handler->display->display_options['filters']['display_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['display_name']['expose']['operator_id'] = 'display_name_op';
  $handler->display->display_options['filters']['display_name']['expose']['label'] = 'Staff name contains';
  $handler->display->display_options['filters']['display_name']['expose']['operator'] = 'display_name_op';
  $handler->display->display_options['filters']['display_name']['expose']['identifier'] = 'display_name';
  $handler->display->display_options['filters']['display_name']['expose']['remember_roles'] = array(
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'admin/cbf/civicrm-events';
  $translatables['cbf2019_event_admin_view'] = array(
    t('Master'),
    t('Website events'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Select any filter and click on Apply to see results'),
    t('Advanced options'),
    t('dateFormat: "yy-mm-dd"'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('These are CiviCRM Events that have been marked up for display on the website.

To create a new CiviCRM Event

<ol>
<li>Go to <em>CiviCRM > Events > Manage Events</em> and click <em>Add Event</em></li>
<li>Create the event as you normally would</li>
<li>When you\'re ready to put the event on the website, click <em>Event links > View event on website</em></li>
<li>Click on <em>Edit</em> to add the website content to the event</li>
</ol>'),
    t('Activity'),
    t('field_staff_contact'),
    t('Select'),
    t('- Choose an operation -'),
    t('Title'),
    t('Start Date'),
    t('Ministry Centre'),
    t('Audience'),
    t('Staff contact'),
    t('Operations'),
    t('<a href="/civicrm-event/[id]">View</a>&nbsp;&nbsp;&nbsp;<a href="/civicrm-event/[id]/edit">Edit</a>&nbsp;&nbsp;&nbsp;<a href="/civicrm/event/manage/settings?reset=1&action=update&id=[id]">CiviCRM</a>'),
    t('.'),
    t('Title contains'),
    t('Start Date between'),
    t('Ministry Centre (taxonomy_vocabulary_1)'),
    t('Activity name contains'),
    t('Staff name contains'),
    t('Page'),
  );
  $export['cbf2019_event_admin_view'] = $view;

  $view = new view();
  $view->name = 'cbf2019_event_details';
  $view->description = 'Details of this event such as when, where and cost';
  $view->tag = 'default';
  $view->base_table = 'civicrm_event';
  $view->human_name = 'cbf2019 event details';
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
  /* Relationship: CiviCRM Address: Address */
  $handler->display->display_options['relationships']['id']['id'] = 'id';
  $handler->display->display_options['relationships']['id']['table'] = 'civicrm_address';
  $handler->display->display_options['relationships']['id']['field'] = 'id';
  $handler->display->display_options['relationships']['id']['label'] = 'Address';
  $handler->display->display_options['relationships']['id']['location_type'] = '0';
  $handler->display->display_options['relationships']['id']['location_op'] = '0';
  $handler->display->display_options['relationships']['id']['is_primary'] = 1;
  /* Field: Field: Date text */
  $handler->display->display_options['fields']['field_date_text']['id'] = 'field_date_text';
  $handler->display->display_options['fields']['field_date_text']['table'] = 'field_data_field_date_text';
  $handler->display->display_options['fields']['field_date_text']['field'] = 'field_date_text';
  $handler->display->display_options['fields']['field_date_text']['label'] = 'When';
  $handler->display->display_options['fields']['field_date_text']['element_label_colon'] = FALSE;
  /* Field: CiviCRM Address: Supplemental Street Address */
  $handler->display->display_options['fields']['supplemental_address_1']['id'] = 'supplemental_address_1';
  $handler->display->display_options['fields']['supplemental_address_1']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['supplemental_address_1']['field'] = 'supplemental_address_1';
  $handler->display->display_options['fields']['supplemental_address_1']['label'] = '';
  $handler->display->display_options['fields']['supplemental_address_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['supplemental_address_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['supplemental_address_1']['alter']['text'] = '[supplemental_address_1]<br/>';
  $handler->display->display_options['fields']['supplemental_address_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['supplemental_address_1']['location_type'] = '0';
  $handler->display->display_options['fields']['supplemental_address_1']['location_op'] = '0';
  $handler->display->display_options['fields']['supplemental_address_1']['is_primary'] = 0;
  /* Field: CiviCRM Address: Full Street Address */
  $handler->display->display_options['fields']['street_address']['id'] = 'street_address';
  $handler->display->display_options['fields']['street_address']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['street_address']['field'] = 'street_address';
  $handler->display->display_options['fields']['street_address']['relationship'] = 'id';
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
  $handler->display->display_options['fields']['city']['relationship'] = 'id';
  $handler->display->display_options['fields']['city']['label'] = 'Where';
  $handler->display->display_options['fields']['city']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['city']['alter']['text'] = '[supplemental_address_1] [street_address] [city]';
  $handler->display->display_options['fields']['city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['city']['location_type'] = '0';
  $handler->display->display_options['fields']['city']['location_op'] = '0';
  $handler->display->display_options['fields']['city']['is_primary'] = 0;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'Cost';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'cbf2019_event_price';
  $handler->display->display_options['fields']['view']['display'] = 'block';
  $handler->display->display_options['fields']['view']['arguments'] = '!1';
  /* Contextual filter: CiviCRM Events: Event ID */
  $handler->display->display_options['arguments']['id']['id'] = 'id';
  $handler->display->display_options['arguments']['id']['table'] = 'civicrm_event';
  $handler->display->display_options['arguments']['id']['field'] = 'id';
  $handler->display->display_options['arguments']['id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['id']['summary_options']['items_per_page'] = '25';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['cbf2019_event_details'] = array(
    t('Master'),
    t('<none>'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Address'),
    t('When'),
    t('[supplemental_address_1]<br/>'),
    t('Where'),
    t('[supplemental_address_1] [street_address] [city]'),
    t('Cost'),
    t('All'),
    t('Block'),
  );
  $export['cbf2019_event_details'] = $view;

  $view = new view();
  $view->name = 'cbf2019_event_details_table';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'civicrm_event';
  $view->human_name = 'cbf2019 event details table';
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

  /* Display: Defaults */
  $handler = $view->new_display('block', 'Defaults', 'block');
  $handler->display->display_options['display_description'] = 'This display contains the defaults - don\'t use';

  /* Display: For CiviCRM Event */
  $handler = $view->new_display('block', 'For CiviCRM Event', 'block_1');
  $handler->display->display_options['display_description'] = 'Details table for a CiviCRM Event';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: CiviCRM Events: Event ID */
  $handler->display->display_options['arguments']['id']['id'] = 'id';
  $handler->display->display_options['arguments']['id']['table'] = 'civicrm_event';
  $handler->display->display_options['arguments']['id']['field'] = 'id';
  $handler->display->display_options['arguments']['id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['id']['summary_options']['items_per_page'] = '25';
  $translatables['cbf2019_event_details_table'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Defaults'),
    t('This display contains the defaults - don\'t use'),
    t('For CiviCRM Event'),
    t('Details table for a CiviCRM Event'),
    t('All'),
  );
  $export['cbf2019_event_details_table'] = $view;

  $view = new view();
  $view->name = 'cbf2019_event_highlight_slider';
  $view->description = 'Slider showing promotional material for CiviCRM Events';
  $view->tag = 'slider, fieldwise';
  $view->base_table = 'civicrm_event';
  $view->human_name = 'cbf2019 event promotional slider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'bg-gray-view-content';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: Highlight video */
  $handler->display->display_options['fields']['field_highlight_video']['id'] = 'field_highlight_video';
  $handler->display->display_options['fields']['field_highlight_video']['table'] = 'field_data_field_highlight_video';
  $handler->display->display_options['fields']['field_highlight_video']['field'] = 'field_highlight_video';
  $handler->display->display_options['fields']['field_highlight_video']['label'] = '';
  $handler->display->display_options['fields']['field_highlight_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlight_video']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_highlight_video']['click_sort_column'] = 'url';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'portfolio_653x368',
    'image_link' => '',
  );
  /* Sort criterion: Field: Sort Order (field_sort_order) */
  $handler->display->display_options['sorts']['field_sort_order_value']['id'] = 'field_sort_order_value';
  $handler->display->display_options['sorts']['field_sort_order_value']['table'] = 'field_data_field_sort_order';
  $handler->display->display_options['sorts']['field_sort_order_value']['field'] = 'field_sort_order_value';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
  );
  /* Filter criterion: Field: Highlight video (field_highlight_video:url) */
  $handler->display->display_options['filters']['field_highlight_video_url']['id'] = 'field_highlight_video_url';
  $handler->display->display_options['filters']['field_highlight_video_url']['table'] = 'field_data_field_highlight_video';
  $handler->display->display_options['filters']['field_highlight_video_url']['field'] = 'field_highlight_video_url';
  $handler->display->display_options['filters']['field_highlight_video_url']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_highlight_video_url']['group'] = 1;
  /* Filter criterion: Field: Image (field_image:fid) */
  $handler->display->display_options['filters']['field_image_fid']['id'] = 'field_image_fid';
  $handler->display->display_options['filters']['field_image_fid']['table'] = 'field_data_field_image';
  $handler->display->display_options['filters']['field_image_fid']['field'] = 'field_image_fid';
  $handler->display->display_options['filters']['field_image_fid']['operator'] = 'not empty';

  /* Display: Defaults */
  $handler = $view->new_display('block', 'Defaults', 'block');
  $handler->display->display_options['display_description'] = 'This display contains the defaults - don\'t use';

  /* Display: For CiviCRM Event */
  $handler = $view->new_display('block', 'For CiviCRM Event', 'block_1');
  $handler->display->display_options['display_description'] = 'Highlights for a CiviCRM Event';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: CiviCRM Events: Event ID */
  $handler->display->display_options['arguments']['id']['id'] = 'id';
  $handler->display->display_options['arguments']['id']['table'] = 'civicrm_event';
  $handler->display->display_options['arguments']['id']['field'] = 'id';
  $handler->display->display_options['arguments']['id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['id']['summary_options']['items_per_page'] = '25';
  $translatables['cbf2019_event_highlight_slider'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Defaults'),
    t('This display contains the defaults - don\'t use'),
    t('For CiviCRM Event'),
    t('Highlights for a CiviCRM Event'),
    t('All'),
  );
  $export['cbf2019_event_highlight_slider'] = $view;

  $view = new view();
  $view->name = 'cbf2019_event_price';
  $view->description = '';
  $view->tag = 'event-price';
  $view->base_table = 'civicrm_event';
  $view->human_name = 'cbf2019 event price';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['css_class'] = 'event-price';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'nothing',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Nil';
  $handler->display->display_options['empty']['area']['format'] = '2';
  /* Relationship: CiviCRM Price Set Entities: Price Set */
  $handler->display->display_options['relationships']['price_set']['id'] = 'price_set';
  $handler->display->display_options['relationships']['price_set']['table'] = 'civicrm_price_set_entity';
  $handler->display->display_options['relationships']['price_set']['field'] = 'price_set';
  /* Relationship: Price Field: Price Field */
  $handler->display->display_options['relationships']['civicrm_price_field']['id'] = 'civicrm_price_field';
  $handler->display->display_options['relationships']['civicrm_price_field']['table'] = 'civicrm_price_set';
  $handler->display->display_options['relationships']['civicrm_price_field']['field'] = 'civicrm_price_field';
  $handler->display->display_options['relationships']['civicrm_price_field']['relationship'] = 'price_set';
  /* Relationship: CiviCRM Price Fields: Price Field Value */
  $handler->display->display_options['relationships']['civicrm_price_field_value']['id'] = 'civicrm_price_field_value';
  $handler->display->display_options['relationships']['civicrm_price_field_value']['table'] = 'civicrm_price_field';
  $handler->display->display_options['relationships']['civicrm_price_field_value']['field'] = 'civicrm_price_field_value';
  $handler->display->display_options['relationships']['civicrm_price_field_value']['relationship'] = 'civicrm_price_field';
  /* Field: CiviCRM Events: Event ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'civicrm_event';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: CiviCRM Price Fields: Label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'civicrm_price_field';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['relationship'] = 'civicrm_price_field';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* Field: CiviCRM Price Fields: HTML Type */
  $handler->display->display_options['fields']['html_type']['id'] = 'html_type';
  $handler->display->display_options['fields']['html_type']['table'] = 'civicrm_price_field';
  $handler->display->display_options['fields']['html_type']['field'] = 'html_type';
  $handler->display->display_options['fields']['html_type']['relationship'] = 'civicrm_price_field';
  $handler->display->display_options['fields']['html_type']['label'] = '';
  $handler->display->display_options['fields']['html_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['html_type']['element_label_colon'] = FALSE;
  /* Field: Price field label */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Price field label';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="[html_type]">[label]</span>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: CiviCRM Price Field Values: Label */
  $handler->display->display_options['fields']['label_1']['id'] = 'label_1';
  $handler->display->display_options['fields']['label_1']['table'] = 'civicrm_price_field_value';
  $handler->display->display_options['fields']['label_1']['field'] = 'label';
  $handler->display->display_options['fields']['label_1']['relationship'] = 'civicrm_price_field_value';
  $handler->display->display_options['fields']['label_1']['label'] = '';
  $handler->display->display_options['fields']['label_1']['element_label_colon'] = FALSE;
  /* Field: CiviCRM Price Field Values: Amount */
  $handler->display->display_options['fields']['amount']['id'] = 'amount';
  $handler->display->display_options['fields']['amount']['table'] = 'civicrm_price_field_value';
  $handler->display->display_options['fields']['amount']['field'] = 'amount';
  $handler->display->display_options['fields']['amount']['relationship'] = 'civicrm_price_field_value';
  $handler->display->display_options['fields']['amount']['label'] = '';
  $handler->display->display_options['fields']['amount']['element_label_colon'] = FALSE;
  /* Sort criterion: CiviCRM Price Fields: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'civicrm_price_field';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'civicrm_price_field';
  /* Sort criterion: CiviCRM Price Field Values: Weight */
  $handler->display->display_options['sorts']['weight_1']['id'] = 'weight_1';
  $handler->display->display_options['sorts']['weight_1']['table'] = 'civicrm_price_field_value';
  $handler->display->display_options['sorts']['weight_1']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight_1']['relationship'] = 'civicrm_price_field_value';
  /* Contextual filter: CiviCRM Events: Event ID */
  $handler->display->display_options['arguments']['id']['id'] = 'id';
  $handler->display->display_options['arguments']['id']['table'] = 'civicrm_event';
  $handler->display->display_options['arguments']['id']['field'] = 'id';
  $handler->display->display_options['arguments']['id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    3 => 'OR',
    2 => 'OR',
  );
  /* Filter criterion: CiviCRM Events: Is Online Registration On */
  $handler->display->display_options['filters']['is_online_registration']['id'] = 'is_online_registration';
  $handler->display->display_options['filters']['is_online_registration']['table'] = 'civicrm_event';
  $handler->display->display_options['filters']['is_online_registration']['field'] = 'is_online_registration';
  $handler->display->display_options['filters']['is_online_registration']['value'] = '1';
  $handler->display->display_options['filters']['is_online_registration']['group'] = 1;
  /* Filter criterion: CiviCRM Price Fields: Visibility */
  $handler->display->display_options['filters']['visibility']['id'] = 'visibility';
  $handler->display->display_options['filters']['visibility']['table'] = 'civicrm_price_field';
  $handler->display->display_options['filters']['visibility']['field'] = 'visibility';
  $handler->display->display_options['filters']['visibility']['relationship'] = 'civicrm_price_field';
  $handler->display->display_options['filters']['visibility']['value'] = '1';
  $handler->display->display_options['filters']['visibility']['group'] = 1;
  $handler->display->display_options['filters']['visibility']['expose']['operator_id'] = 'visibility_op';
  $handler->display->display_options['filters']['visibility']['expose']['label'] = 'Visibility';
  $handler->display->display_options['filters']['visibility']['expose']['operator'] = 'visibility_op';
  $handler->display->display_options['filters']['visibility']['expose']['identifier'] = 'visibility';
  /* Filter criterion: CiviCRM Price Fields: Is Active */
  $handler->display->display_options['filters']['is_active']['id'] = 'is_active';
  $handler->display->display_options['filters']['is_active']['table'] = 'civicrm_price_field';
  $handler->display->display_options['filters']['is_active']['field'] = 'is_active';
  $handler->display->display_options['filters']['is_active']['relationship'] = 'civicrm_price_field';
  $handler->display->display_options['filters']['is_active']['value'] = '1';
  $handler->display->display_options['filters']['is_active']['group'] = 1;
  /* Filter criterion: CiviCRM Price Field Values: Is Active */
  $handler->display->display_options['filters']['is_active_1']['id'] = 'is_active_1';
  $handler->display->display_options['filters']['is_active_1']['table'] = 'civicrm_price_field_value';
  $handler->display->display_options['filters']['is_active_1']['field'] = 'is_active';
  $handler->display->display_options['filters']['is_active_1']['relationship'] = 'civicrm_price_field_value';
  $handler->display->display_options['filters']['is_active_1']['value'] = '1';
  $handler->display->display_options['filters']['is_active_1']['group'] = 1;
  /* Filter criterion: CiviCRM Price Fields: Expire On */
  $handler->display->display_options['filters']['expire_on_1']['id'] = 'expire_on_1';
  $handler->display->display_options['filters']['expire_on_1']['table'] = 'civicrm_price_field';
  $handler->display->display_options['filters']['expire_on_1']['field'] = 'expire_on';
  $handler->display->display_options['filters']['expire_on_1']['relationship'] = 'civicrm_price_field';
  $handler->display->display_options['filters']['expire_on_1']['operator'] = '>=';
  $handler->display->display_options['filters']['expire_on_1']['value']['value'] = 'now';
  $handler->display->display_options['filters']['expire_on_1']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['expire_on_1']['group'] = 3;
  /* Filter criterion: CiviCRM Price Fields: Expire On */
  $handler->display->display_options['filters']['expire_on']['id'] = 'expire_on';
  $handler->display->display_options['filters']['expire_on']['table'] = 'civicrm_price_field';
  $handler->display->display_options['filters']['expire_on']['field'] = 'expire_on';
  $handler->display->display_options['filters']['expire_on']['relationship'] = 'civicrm_price_field';
  $handler->display->display_options['filters']['expire_on']['operator'] = 'empty';
  $handler->display->display_options['filters']['expire_on']['group'] = 3;
  /* Filter criterion: CiviCRM Price Fields: Active On */
  $handler->display->display_options['filters']['active_on_1']['id'] = 'active_on_1';
  $handler->display->display_options['filters']['active_on_1']['table'] = 'civicrm_price_field';
  $handler->display->display_options['filters']['active_on_1']['field'] = 'active_on';
  $handler->display->display_options['filters']['active_on_1']['relationship'] = 'civicrm_price_field';
  $handler->display->display_options['filters']['active_on_1']['operator'] = '<=';
  $handler->display->display_options['filters']['active_on_1']['value']['value'] = 'now';
  $handler->display->display_options['filters']['active_on_1']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['active_on_1']['group'] = 2;
  /* Filter criterion: CiviCRM Price Fields: Active On */
  $handler->display->display_options['filters']['active_on']['id'] = 'active_on';
  $handler->display->display_options['filters']['active_on']['table'] = 'civicrm_price_field';
  $handler->display->display_options['filters']['active_on']['field'] = 'active_on';
  $handler->display->display_options['filters']['active_on']['relationship'] = 'civicrm_price_field';
  $handler->display->display_options['filters']['active_on']['operator'] = 'empty';
  $handler->display->display_options['filters']['active_on']['group'] = 2;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['cbf2019_event_price'] = array(
    t('Master'),
    t('<none>'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Nil'),
    t('Price Set'),
    t('Price Field'),
    t('Price Field Value'),
    t('.'),
    t('<span class="[html_type]">[label]</span>'),
    t('All'),
    t('Visibility'),
    t('Block'),
  );
  $export['cbf2019_event_price'] = $view;

  $view = new view();
  $view->name = 'cbf2019_event_registration';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'civicrm_event';
  $view->human_name = 'cbf2019 event registration';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'amount' => 'amount',
    'label' => 'label',
  );
  /* Relationship: The Address allows the rego date filters to test for -empty- */
  $handler->display->display_options['relationships']['id']['id'] = 'id';
  $handler->display->display_options['relationships']['id']['table'] = 'civicrm_address';
  $handler->display->display_options['relationships']['id']['field'] = 'id';
  $handler->display->display_options['relationships']['id']['ui_name'] = 'The Address allows the rego date filters to test for -empty-';
  $handler->display->display_options['relationships']['id']['label'] = 'Address';
  $handler->display->display_options['relationships']['id']['location_type'] = '0';
  $handler->display->display_options['relationships']['id']['location_op'] = '0';
  $handler->display->display_options['relationships']['id']['is_primary'] = 1;
  /* Field: CiviCRM Events: Event ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'civicrm_event';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['id']['alter']['text'] = 'REGISTER NOW';
  $handler->display->display_options['fields']['id']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['id']['alter']['path'] = '/civicrm/event/register?reset=1&id=[id]';
  $handler->display->display_options['fields']['id']['alter']['link_class'] = 'btn btn-mod btn-border btn-medium btn-round';
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: Non-CiviCRM registration link */
  $handler->display->display_options['fields']['field_order_url']['id'] = 'field_order_url';
  $handler->display->display_options['fields']['field_order_url']['table'] = 'field_data_field_order_url';
  $handler->display->display_options['fields']['field_order_url']['field'] = 'field_order_url';
  $handler->display->display_options['fields']['field_order_url']['ui_name'] = 'Non-CiviCRM registration link';
  $handler->display->display_options['fields']['field_order_url']['label'] = '';
  $handler->display->display_options['fields']['field_order_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_order_url']['alter']['text'] = 'REGISTER NOW';
  $handler->display->display_options['fields']['field_order_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_order_url']['alter']['path'] = '[field_order_url-url]';
  $handler->display->display_options['fields']['field_order_url']['alter']['link_class'] = 'btn btn-mod btn-border btn-medium btn-round';
  $handler->display->display_options['fields']['field_order_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_order_url']['empty'] = '[id]';
  $handler->display->display_options['fields']['field_order_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_order_url']['type'] = 'link_plain';
  /* Contextual filter: CiviCRM Events: Event ID */
  $handler->display->display_options['arguments']['id']['id'] = 'id';
  $handler->display->display_options['arguments']['id']['table'] = 'civicrm_event';
  $handler->display->display_options['arguments']['id']['field'] = 'id';
  $handler->display->display_options['arguments']['id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    3 => 'OR',
    2 => 'OR',
  );
  /* Filter criterion: CiviCRM Events: Is Active */
  $handler->display->display_options['filters']['is_active']['id'] = 'is_active';
  $handler->display->display_options['filters']['is_active']['table'] = 'civicrm_event';
  $handler->display->display_options['filters']['is_active']['field'] = 'is_active';
  $handler->display->display_options['filters']['is_active']['value'] = '1';
  $handler->display->display_options['filters']['is_active']['group'] = 1;
  /* Filter criterion: CiviCRM Events: Is Online Registration On */
  $handler->display->display_options['filters']['is_online_registration']['id'] = 'is_online_registration';
  $handler->display->display_options['filters']['is_online_registration']['table'] = 'civicrm_event';
  $handler->display->display_options['filters']['is_online_registration']['field'] = 'is_online_registration';
  $handler->display->display_options['filters']['is_online_registration']['value'] = '1';
  $handler->display->display_options['filters']['is_online_registration']['group'] = 1;
  /* Filter criterion: CiviCRM Events: Is Public */
  $handler->display->display_options['filters']['is_public']['id'] = 'is_public';
  $handler->display->display_options['filters']['is_public']['table'] = 'civicrm_event';
  $handler->display->display_options['filters']['is_public']['field'] = 'is_public';
  $handler->display->display_options['filters']['is_public']['value'] = '1';
  $handler->display->display_options['filters']['is_public']['group'] = 1;
  /* Filter criterion: CiviCRM Events: Start Date */
  $handler->display->display_options['filters']['start_date']['id'] = 'start_date';
  $handler->display->display_options['filters']['start_date']['table'] = 'civicrm_event';
  $handler->display->display_options['filters']['start_date']['field'] = 'start_date';
  $handler->display->display_options['filters']['start_date']['operator'] = '>=';
  $handler->display->display_options['filters']['start_date']['value']['value'] = 'now';
  $handler->display->display_options['filters']['start_date']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['start_date']['group'] = 1;
  /* Filter criterion: CiviCRM Events: Registration End Date */
  $handler->display->display_options['filters']['registration_end_date']['id'] = 'registration_end_date';
  $handler->display->display_options['filters']['registration_end_date']['table'] = 'civicrm_event';
  $handler->display->display_options['filters']['registration_end_date']['field'] = 'registration_end_date';
  $handler->display->display_options['filters']['registration_end_date']['operator'] = '>';
  $handler->display->display_options['filters']['registration_end_date']['value']['value'] = 'now';
  $handler->display->display_options['filters']['registration_end_date']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['registration_end_date']['group'] = 3;
  /* Filter criterion: CiviCRM Events: Registration End Date */
  $handler->display->display_options['filters']['registration_end_date_1']['id'] = 'registration_end_date_1';
  $handler->display->display_options['filters']['registration_end_date_1']['table'] = 'civicrm_event';
  $handler->display->display_options['filters']['registration_end_date_1']['field'] = 'registration_end_date';
  $handler->display->display_options['filters']['registration_end_date_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['registration_end_date_1']['group'] = 3;
  /* Filter criterion: CiviCRM Events: Registration Start Date */
  $handler->display->display_options['filters']['registration_start_date']['id'] = 'registration_start_date';
  $handler->display->display_options['filters']['registration_start_date']['table'] = 'civicrm_event';
  $handler->display->display_options['filters']['registration_start_date']['field'] = 'registration_start_date';
  $handler->display->display_options['filters']['registration_start_date']['operator'] = '<';
  $handler->display->display_options['filters']['registration_start_date']['value']['value'] = 'now';
  $handler->display->display_options['filters']['registration_start_date']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['registration_start_date']['group'] = 2;
  /* Filter criterion: CiviCRM Events: Registration Start Date */
  $handler->display->display_options['filters']['registration_start_date_1']['id'] = 'registration_start_date_1';
  $handler->display->display_options['filters']['registration_start_date_1']['table'] = 'civicrm_event';
  $handler->display->display_options['filters']['registration_start_date_1']['field'] = 'registration_start_date';
  $handler->display->display_options['filters']['registration_start_date_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['registration_start_date_1']['group'] = 2;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['cbf2019_event_registration'] = array(
    t('Master'),
    t('<none>'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Address'),
    t('REGISTER NOW'),
    t('.'),
    t('[id]'),
    t('All'),
    t('Block'),
  );
  $export['cbf2019_event_registration'] = $view;

  $view = new view();
  $view->name = 'cbf2019_key_dates';
  $view->description = 'Show key dates for upcoming CviiCRM Events';
  $view->tag = 'merge-events, key-dates';
  $view->base_table = 'civicrm_event';
  $view->human_name = 'cbf2019 key dates';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'show-50-items';
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Key dates';
  $handler->display->display_options['header']['area']['format'] = '2';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>There are no events scheduled for your city at this time.</p>
<p>Please come back soon or contact us to find out what’s coming up.</p>';
  $handler->display->display_options['empty']['area']['format'] = '2';
  /* Field: Field: Sort Order */
  $handler->display->display_options['fields']['field_sort_order']['id'] = 'field_sort_order';
  $handler->display->display_options['fields']['field_sort_order']['table'] = 'field_data_field_sort_order';
  $handler->display->display_options['fields']['field_sort_order']['field'] = 'field_sort_order';
  $handler->display->display_options['fields']['field_sort_order']['label'] = '';
  $handler->display->display_options['fields']['field_sort_order']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sort_order']['type'] = 'computed_field_computed_value';
  /* Field: CiviCRM Events: Event ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'civicrm_event';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: CiviCRM Events: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'civicrm_event';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '/civicrm-event/[id]';
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
  /* Sort criterion: Field: Sort Order (field_sort_order) */
  $handler->display->display_options['sorts']['field_sort_order_value']['id'] = 'field_sort_order_value';
  $handler->display->display_options['sorts']['field_sort_order_value']['table'] = 'field_data_field_sort_order';
  $handler->display->display_options['sorts']['field_sort_order_value']['field'] = 'field_sort_order_value';
  /* Contextual filter: CiviCRM Event: Domain (field_domain) */
  $handler->display->display_options['arguments']['field_domain_domain_id']['id'] = 'field_domain_domain_id';
  $handler->display->display_options['arguments']['field_domain_domain_id']['table'] = 'field_data_field_domain';
  $handler->display->display_options['arguments']['field_domain_domain_id']['field'] = 'field_domain_domain_id';
  $handler->display->display_options['arguments']['field_domain_domain_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_domain_domain_id']['default_argument_type'] = 'current_domain';
  $handler->display->display_options['arguments']['field_domain_domain_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_domain_domain_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_domain_domain_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Field: Next action (field_next_action) */
  $handler->display->display_options['filters']['field_next_action_value']['id'] = 'field_next_action_value';
  $handler->display->display_options['filters']['field_next_action_value']['table'] = 'field_data_field_next_action';
  $handler->display->display_options['filters']['field_next_action_value']['field'] = 'field_next_action_value';
  $handler->display->display_options['filters']['field_next_action_value']['operator'] = '!=';
  $handler->display->display_options['filters']['field_next_action_value']['value'] = '0';
  $handler->display->display_options['filters']['field_next_action_value']['group'] = 1;
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['cbf2019_key_dates'] = array(
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
    t('Key dates'),
    t('<p>There are no events scheduled for your city at this time.</p>
<p>Please come back soon or contact us to find out what’s coming up.</p>'),
    t('.'),
    t('Block'),
  );
  $export['cbf2019_key_dates'] = $view;

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
  /* Filter criterion: Field: Weight (field_weight) */
  $handler->display->display_options['filters']['field_weight_value']['id'] = 'field_weight_value';
  $handler->display->display_options['filters']['field_weight_value']['table'] = 'field_data_field_weight';
  $handler->display->display_options['filters']['field_weight_value']['field'] = 'field_weight_value';
  $handler->display->display_options['filters']['field_weight_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_weight_value']['value']['value'] = '0';
  $handler->display->display_options['filters']['field_weight_value']['group'] = 1;

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
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Events';
  $handler->display->display_options['header']['area']['format'] = '2';
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
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'civicrm-event/[id]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
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
  /* Contextual filter: CiviCRM Event: Domain (field_domain) */
  $handler->display->display_options['arguments']['field_domain_domain_id']['id'] = 'field_domain_domain_id';
  $handler->display->display_options['arguments']['field_domain_domain_id']['table'] = 'field_data_field_domain';
  $handler->display->display_options['arguments']['field_domain_domain_id']['field'] = 'field_domain_domain_id';
  $handler->display->display_options['arguments']['field_domain_domain_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_domain_domain_id']['default_argument_type'] = 'current_domain';
  $handler->display->display_options['arguments']['field_domain_domain_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_domain_domain_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_domain_domain_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Field: Next action (field_next_action) */
  $handler->display->display_options['filters']['field_next_action_value']['id'] = 'field_next_action_value';
  $handler->display->display_options['filters']['field_next_action_value']['table'] = 'field_data_field_next_action';
  $handler->display->display_options['filters']['field_next_action_value']['field'] = 'field_next_action_value';
  $handler->display->display_options['filters']['field_next_action_value']['operator'] = '!=';
  $handler->display->display_options['filters']['field_next_action_value']['value'] = '0';
  $handler->display->display_options['filters']['field_next_action_value']['group'] = 1;
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

  /* Display: Defaults */
  $handler = $view->new_display('block', 'Defaults', 'block');
  $handler->display->display_options['display_description'] = 'This display contains the defaults - don\'t use';

  /* Display: For What's On */
  $handler = $view->new_display('block', 'For What\'s On', 'block_1');
  $handler->display->display_options['display_description'] = 'Local events for the What\'s on page';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>There are no events scheduled for your city at this time.</p>
<p>Please come back soon or contact us to find out what’s coming up.</p>';
  $handler->display->display_options['empty']['area']['format'] = '2';

  /* Display: For Activity - warning - will merge events */
  $handler = $view->new_display('block', 'For Activity - warning - will merge events', 'block_2');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['display_description'] = 'Local events for an Activity page - should be in a separate view to not merge events';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: CiviCRM Address: Address */
  $handler->display->display_options['relationships']['id']['id'] = 'id';
  $handler->display->display_options['relationships']['id']['table'] = 'civicrm_address';
  $handler->display->display_options['relationships']['id']['field'] = 'id';
  $handler->display->display_options['relationships']['id']['label'] = 'Address';
  $handler->display->display_options['relationships']['id']['location_type'] = '0';
  $handler->display->display_options['relationships']['id']['location_op'] = '0';
  $handler->display->display_options['relationships']['id']['is_primary'] = 0;
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
  /* Contextual filter: CiviCRM Event: Domain (field_domain) */
  $handler->display->display_options['arguments']['field_domain_domain_id']['id'] = 'field_domain_domain_id';
  $handler->display->display_options['arguments']['field_domain_domain_id']['table'] = 'field_data_field_domain';
  $handler->display->display_options['arguments']['field_domain_domain_id']['field'] = 'field_domain_domain_id';
  $handler->display->display_options['arguments']['field_domain_domain_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_domain_domain_id']['default_argument_type'] = 'current_domain';
  $handler->display->display_options['arguments']['field_domain_domain_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_domain_domain_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_domain_domain_id']['summary_options']['items_per_page'] = '25';
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
    t('Events'),
    t('Address'),
    t('.'),
    t('[field_date_text] | [city]'),
    t('Defaults'),
    t('This display contains the defaults - don\'t use'),
    t('For What\'s On'),
    t('Local events for the What\'s on page'),
    t('<p>There are no events scheduled for your city at this time.</p>
<p>Please come back soon or contact us to find out what’s coming up.</p>'),
    t('For Activity - warning - will merge events'),
    t('Local events for an Activity page - should be in a separate view to not merge events'),
    t('Activity'),
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
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<i class="fal fa-fw fa-phone"></i>';
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
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<i class="fal fa-fw fa-map-marker-alt"></i>';
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
  /* Field: CiviCRM Address: Latitude */
  $handler->display->display_options['fields']['geo_code_1']['id'] = 'geo_code_1';
  $handler->display->display_options['fields']['geo_code_1']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['geo_code_1']['field'] = 'geo_code_1';
  $handler->display->display_options['fields']['geo_code_1']['relationship'] = 'id_2';
  $handler->display->display_options['fields']['geo_code_1']['label'] = '';
  $handler->display->display_options['fields']['geo_code_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['geo_code_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['geo_code_1']['location_type'] = '0';
  $handler->display->display_options['fields']['geo_code_1']['location_op'] = '0';
  $handler->display->display_options['fields']['geo_code_1']['is_primary'] = 0;
  /* Field: CiviCRM Address: Longitude */
  $handler->display->display_options['fields']['geo_code_2']['id'] = 'geo_code_2';
  $handler->display->display_options['fields']['geo_code_2']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['geo_code_2']['field'] = 'geo_code_2';
  $handler->display->display_options['fields']['geo_code_2']['relationship'] = 'id_2';
  $handler->display->display_options['fields']['geo_code_2']['label'] = '';
  $handler->display->display_options['fields']['geo_code_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['geo_code_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['geo_code_2']['alter']['text'] = '<div class = "clearfix">
  <div  class = "google-map">
    <div class="map-canvas-view"
      data-zoom="14"
      data-address="[street_address], [city], Australia"
      data-type="roadmap">
    </div>
  </div>
</div>';
  $handler->display->display_options['fields']['geo_code_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['geo_code_2']['location_type'] = '0';
  $handler->display->display_options['fields']['geo_code_2']['location_op'] = '0';
  $handler->display->display_options['fields']['geo_code_2']['is_primary'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<i class="fal fa-fw fa-envelope-open-text"></i>';
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
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '<i class="fal fa-fw fa-at"></i>';
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
  $handler->display->display_options['footer']['area']['content'] = '[geo_code_2]';
  $handler->display->display_options['footer']['area']['format'] = 'raw_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;

  /* Display: Home page - with map */
  $handler = $view->new_display('block', 'Home page - with map', 'block_2');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '[geo_code_2]';
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
    t('<i class="fal fa-fw fa-phone"></i>'),
    t('Call us'),
    t('<i class="fal fa-fw fa-map-marker-alt"></i>'),
    t('Address'),
    t('[supplemental_address_1]<div>[street_address]</div><div>[city]</div>'),
    t('<div class = "clearfix">
  <div  class = "google-map">
    <div class="map-canvas-view"
      data-zoom="14"
      data-address="[street_address], [city], Australia"
      data-type="roadmap">
    </div>
  </div>
</div>'),
    t('<i class="fal fa-fw fa-envelope-open-text"></i>'),
    t('Post'),
    t('[street_address_1]<div>[city_1] [state_province] [postal_code]</div>'),
    t('<i class="fal fa-fw fa-at"></i>'),
    t('Block'),
    t('Block with map'),
    t('[geo_code_2]'),
    t('Home page - with map'),
  );
  $export['cbf2019_local_office'] = $view;

  $view = new view();
  $view->name = 'cbf2019_mappable';
  $view->description = '';
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
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
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
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_summary']['hide_empty'] = TRUE;
  /* Field: Field: Order URL */
  $handler->display->display_options['fields']['field_order_url']['id'] = 'field_order_url';
  $handler->display->display_options['fields']['field_order_url']['table'] = 'field_data_field_order_url';
  $handler->display->display_options['fields']['field_order_url']['field'] = 'field_order_url';
  $handler->display->display_options['fields']['field_order_url']['label'] = '';
  $handler->display->display_options['fields']['field_order_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_order_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_order_url']['alter']['text'] = 'Contact <a href="[field_order_url-url]" target="_blank" rel="noopener noreferrer">[field_order_url-title]</a>';
  $handler->display->display_options['fields']['field_order_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_order_url']['click_sort_column'] = 'url';
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
        data-icon="/sites/all/themes/cbf2019/images/!1/map/marker.png">
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
  /* Filter criterion: Mappable entityforms only */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['ui_name'] = 'Mappable entityforms only';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mappable' => 'mappable',
  );

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
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_summary']['hide_empty'] = TRUE;
  /* Field: Field: Order URL */
  $handler->display->display_options['fields']['field_order_url']['id'] = 'field_order_url';
  $handler->display->display_options['fields']['field_order_url']['table'] = 'field_data_field_order_url';
  $handler->display->display_options['fields']['field_order_url']['field'] = 'field_order_url';
  $handler->display->display_options['fields']['field_order_url']['label'] = '';
  $handler->display->display_options['fields']['field_order_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_order_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_order_url']['alter']['text'] = 'Contact <a href="[field_order_url-url]" target="_blank" rel="noopener noreferrer">[field_order_url-title]</a>';
  $handler->display->display_options['fields']['field_order_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_order_url']['click_sort_column'] = 'url';
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
        data-icon="/sites/all/themes/cbf2019/images/!1/map/marker.png">
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
  /* Contextual filter: Entityform Submission: Domain (domain entity) */
  $handler->display->display_options['arguments']['domain_entityform_domain_id']['id'] = 'domain_entityform_domain_id';
  $handler->display->display_options['arguments']['domain_entityform_domain_id']['table'] = 'field_data_domain_entityform';
  $handler->display->display_options['arguments']['domain_entityform_domain_id']['field'] = 'domain_entityform_domain_id';
  $handler->display->display_options['arguments']['domain_entityform_domain_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['domain_entityform_domain_id']['default_argument_type'] = 'current_domain';
  $handler->display->display_options['arguments']['domain_entityform_domain_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['domain_entityform_domain_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['domain_entityform_domain_id']['summary_options']['items_per_page'] = '25';
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

  /* Display: For CiviCRM Event */
  $handler = $view->new_display('block', 'For CiviCRM Event', 'block_2');
  $handler->display->display_options['display_description'] = 'Mappables for a CiviCRM Event';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Entityform Submission: Domain (domain entity) */
  $handler->display->display_options['arguments']['domain_entityform_domain_id']['id'] = 'domain_entityform_domain_id';
  $handler->display->display_options['arguments']['domain_entityform_domain_id']['table'] = 'field_data_domain_entityform';
  $handler->display->display_options['arguments']['domain_entityform_domain_id']['field'] = 'domain_entityform_domain_id';
  $handler->display->display_options['arguments']['domain_entityform_domain_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['domain_entityform_domain_id']['default_argument_type'] = 'current_domain';
  $handler->display->display_options['arguments']['domain_entityform_domain_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['domain_entityform_domain_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['domain_entityform_domain_id']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Entityform Submission: Source entity id (field_source_entity_id) */
  $handler->display->display_options['arguments']['field_source_entity_id_value']['id'] = 'field_source_entity_id_value';
  $handler->display->display_options['arguments']['field_source_entity_id_value']['table'] = 'field_data_field_source_entity_id';
  $handler->display->display_options['arguments']['field_source_entity_id_value']['field'] = 'field_source_entity_id_value';
  $handler->display->display_options['arguments']['field_source_entity_id_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_source_entity_id_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_source_entity_id_value']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_source_entity_id_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_source_entity_id_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_source_entity_id_value']['summary_options']['items_per_page'] = '25';
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
  /* Filter criterion: Source entity */
  $handler->display->display_options['filters']['field_source_entity_type_value']['id'] = 'field_source_entity_type_value';
  $handler->display->display_options['filters']['field_source_entity_type_value']['table'] = 'field_data_field_source_entity_type';
  $handler->display->display_options['filters']['field_source_entity_type_value']['field'] = 'field_source_entity_type_value';
  $handler->display->display_options['filters']['field_source_entity_type_value']['ui_name'] = 'Source entity';
  $handler->display->display_options['filters']['field_source_entity_type_value']['value'] = 'civicrm_event';

  /* Display: For national Activity */
  $handler = $view->new_display('block', 'For national Activity', 'block_3');
  $handler->display->display_options['display_description'] = 'Mappables for an Activity which is offered in all cities';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
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
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_summary']['hide_empty'] = TRUE;
  /* Field: Field: Order URL */
  $handler->display->display_options['fields']['field_order_url']['id'] = 'field_order_url';
  $handler->display->display_options['fields']['field_order_url']['table'] = 'field_data_field_order_url';
  $handler->display->display_options['fields']['field_order_url']['field'] = 'field_order_url';
  $handler->display->display_options['fields']['field_order_url']['label'] = '';
  $handler->display->display_options['fields']['field_order_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_order_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_order_url']['alter']['text'] = 'Contact <a href="[field_order_url-url]" target="_blank" rel="noopener noreferrer">[field_order_url-title]</a>';
  $handler->display->display_options['fields']['field_order_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_order_url']['click_sort_column'] = 'url';
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
        data-icon="/sites/all/themes/cbf2019/images/!1/map/marker.png">
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
  /* Contextual filter: Entityform Submission: Domain (domain entity) */
  $handler->display->display_options['arguments']['domain_entityform_domain_id']['id'] = 'domain_entityform_domain_id';
  $handler->display->display_options['arguments']['domain_entityform_domain_id']['table'] = 'field_data_domain_entityform';
  $handler->display->display_options['arguments']['domain_entityform_domain_id']['field'] = 'domain_entityform_domain_id';
  $handler->display->display_options['arguments']['domain_entityform_domain_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['domain_entityform_domain_id']['default_argument_type'] = 'current_domain';
  $handler->display->display_options['arguments']['domain_entityform_domain_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['domain_entityform_domain_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['domain_entityform_domain_id']['summary_options']['items_per_page'] = '25';
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

  /* Display: For What's On */
  $handler = $view->new_display('block', 'For What\'s On', 'block_4');
  $handler->display->display_options['display_description'] = 'Mappables for the What\'s On page';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
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
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
  /* Filter criterion: Entityform Submission: Source entity bundle (field_source_entity_bundle) */
  $handler->display->display_options['filters']['field_source_entity_bundle_value']['id'] = 'field_source_entity_bundle_value';
  $handler->display->display_options['filters']['field_source_entity_bundle_value']['table'] = 'field_data_field_source_entity_bundle';
  $handler->display->display_options['filters']['field_source_entity_bundle_value']['field'] = 'field_source_entity_bundle_value';
  $handler->display->display_options['filters']['field_source_entity_bundle_value']['value'] = 'regular_venue';
  $handler->display->display_options['filters']['field_source_entity_bundle_value']['group'] = 2;
  /* Filter criterion: Entityform Submission: Source entity type (field_source_entity_type) */
  $handler->display->display_options['filters']['field_source_entity_type_value']['id'] = 'field_source_entity_type_value';
  $handler->display->display_options['filters']['field_source_entity_type_value']['table'] = 'field_data_field_source_entity_type';
  $handler->display->display_options['filters']['field_source_entity_type_value']['field'] = 'field_source_entity_type_value';
  $handler->display->display_options['filters']['field_source_entity_type_value']['value'] = 'civicrm_event';
  $handler->display->display_options['filters']['field_source_entity_type_value']['group'] = 2;
  $translatables['cbf2019_mappable'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Location'),
    t('Contact <a href="[field_order_url-url]" target="_blank" rel="noopener noreferrer">[field_order_url-title]</a>'),
    t('      <div class="marker"
        data-lat="[latitude]"
        data-long="[longitude]"
        data-icon="/sites/all/themes/cbf2019/images/!1/map/marker.png">
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
        data-icon="/sites/all/themes/cbf2019/images/!1/map/marker.png">
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
    t('For CiviCRM Event'),
    t('Mappables for a CiviCRM Event'),
    t('For national Activity'),
    t('Mappables for an Activity which is offered in all cities'),
    t('Select any filter and click on Apply to see results'),
    t('Advanced options'),
    t('For What\'s On'),
    t('Mappables for the What\'s On page'),
    t('What\'s on nearby'),
  );
  $export['cbf2019_mappable'] = $view;

  $view = new view();
  $view->name = 'cbf2019_ministry_team_admin_view';
  $view->description = 'Ministry teams view for staff';
  $view->tag = 'default';
  $view->base_table = 'entityform';
  $view->human_name = 'cbf2019 ministry team admin view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'cbf2019 ministry team admin view';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    7 => '7',
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
    'display_name' => array(
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
    'meeting_day_time' => array(
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
    'time_of_day' => array(
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
    'name' => array(
      'bef_format' => 'default',
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
    'display_name' => 'display_name',
    'name' => 'name',
    'meeting_day_time' => 'meeting_day_time',
    'time_of_day' => 'time_of_day',
    'id' => 'id',
    'entityform_id' => 'entityform_id',
  );
  $handler->display->display_options['style_options']['default'] = 'display_name';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'display_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
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
    'meeting_day_time' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'time_of_day' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'id' => array(
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
  $handler->display->display_options['header']['area']['content'] = 'These are CiviCRM Teams that have been marked up for display on maps on the website.

To publish a CiviCRM Team on a map, set up the team in CiviCRM then come to this page and click here to <a href="/eform/submit/ministry-team">create a new Ministry Team</a> (this links the CiviCRM team with the map).

To modify the details of a team on the map click on <em>Edit CiviCRM</em> beside the team. When you save the team with its new details these will appear on the map.

To remove a team from the maps, click the checkbox next to the team and choose operation <em>Delete item</em> and press <em>Execute</em>.';
  $handler->display->display_options['header']['area']['format'] = '2';
  /* Relationship: Entityform Submission: Ministry team (field_ministry_team) */
  $handler->display->display_options['relationships']['field_ministry_team_contact_id']['id'] = 'field_ministry_team_contact_id';
  $handler->display->display_options['relationships']['field_ministry_team_contact_id']['table'] = 'field_data_field_ministry_team';
  $handler->display->display_options['relationships']['field_ministry_team_contact_id']['field'] = 'field_ministry_team_contact_id';
  $handler->display->display_options['relationships']['field_ministry_team_contact_id']['label'] = 'CiviCRM Team';
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
  );
  /* Field: CiviCRM Contacts: Display Name */
  $handler->display->display_options['fields']['display_name']['id'] = 'display_name';
  $handler->display->display_options['fields']['display_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['display_name']['field'] = 'display_name';
  $handler->display->display_options['fields']['display_name']['relationship'] = 'field_ministry_team_contact_id';
  $handler->display->display_options['fields']['display_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['display_name']['link_to_civicrm_contact'] = 0;
  /* Field: CiviCRM Tags: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'civicrm_tag';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_ministry_team_contact_id';
  $handler->display->display_options['fields']['name']['label'] = 'Tags';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: CiviCRM Custom: Team details: Meeting day/time */
  $handler->display->display_options['fields']['meeting_day_time']['id'] = 'meeting_day_time';
  $handler->display->display_options['fields']['meeting_day_time']['table'] = 'civicrm_value_1_team_details_5';
  $handler->display->display_options['fields']['meeting_day_time']['field'] = 'meeting_day_time';
  $handler->display->display_options['fields']['meeting_day_time']['relationship'] = 'field_ministry_team_contact_id';
  /* Field: CiviCRM Custom: Team details: Time of day */
  $handler->display->display_options['fields']['time_of_day']['id'] = 'time_of_day';
  $handler->display->display_options['fields']['time_of_day']['table'] = 'civicrm_value_1_team_details_5';
  $handler->display->display_options['fields']['time_of_day']['field'] = 'time_of_day';
  $handler->display->display_options['fields']['time_of_day']['relationship'] = 'field_ministry_team_contact_id';
  $handler->display->display_options['fields']['time_of_day']['element_label_colon'] = FALSE;
  /* Field: CiviCRM Contacts: Contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['relationship'] = 'field_ministry_team_contact_id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: Entityform Submission: Entityform submission ID */
  $handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
  $handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['label'] = 'Operations';
  $handler->display->display_options['fields']['entityform_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['entityform_id']['alter']['text'] = '<a href="/entityform/[entityform_id]/edit">Edit</a>&nbsp;&nbsp;&nbsp;<a href="/civicrm/contact/view?reset=1&cid=[id]">View CiviCRM</a>&nbsp;&nbsp;&nbsp;<a href="/civicrm/contact/add?reset=1&action=update&cid=[id]">Edit CiviCRM</a>';
  $handler->display->display_options['fields']['entityform_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entityform_id']['separator'] = '';
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ministry_team' => 'ministry_team',
  );
  /* Filter criterion: CiviCRM Contacts: Display Name */
  $handler->display->display_options['filters']['display_name']['id'] = 'display_name';
  $handler->display->display_options['filters']['display_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['filters']['display_name']['field'] = 'display_name';
  $handler->display->display_options['filters']['display_name']['relationship'] = 'field_ministry_team_contact_id';
  $handler->display->display_options['filters']['display_name']['operator'] = 'contains';
  $handler->display->display_options['filters']['display_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['display_name']['expose']['operator_id'] = 'display_name_op';
  $handler->display->display_options['filters']['display_name']['expose']['label'] = 'Name contains';
  $handler->display->display_options['filters']['display_name']['expose']['operator'] = 'display_name_op';
  $handler->display->display_options['filters']['display_name']['expose']['identifier'] = 'display_name';
  $handler->display->display_options['filters']['display_name']['expose']['remember_roles'] = array(
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
  /* Filter criterion: CiviCRM Custom: Team details: Meeting day/time */
  $handler->display->display_options['filters']['meeting_day_time']['id'] = 'meeting_day_time';
  $handler->display->display_options['filters']['meeting_day_time']['table'] = 'civicrm_value_1_team_details_5';
  $handler->display->display_options['filters']['meeting_day_time']['field'] = 'meeting_day_time';
  $handler->display->display_options['filters']['meeting_day_time']['relationship'] = 'field_ministry_team_contact_id';
  $handler->display->display_options['filters']['meeting_day_time']['operator'] = 'contains';
  $handler->display->display_options['filters']['meeting_day_time']['exposed'] = TRUE;
  $handler->display->display_options['filters']['meeting_day_time']['expose']['operator_id'] = 'meeting_day_time_op';
  $handler->display->display_options['filters']['meeting_day_time']['expose']['label'] = 'Meeting day/time contains';
  $handler->display->display_options['filters']['meeting_day_time']['expose']['operator'] = 'meeting_day_time_op';
  $handler->display->display_options['filters']['meeting_day_time']['expose']['identifier'] = 'meeting_day_time';
  $handler->display->display_options['filters']['meeting_day_time']['expose']['remember_roles'] = array(
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
  /* Filter criterion: CiviCRM Custom: Team details: Time of day */
  $handler->display->display_options['filters']['time_of_day']['id'] = 'time_of_day';
  $handler->display->display_options['filters']['time_of_day']['table'] = 'civicrm_value_1_team_details_5';
  $handler->display->display_options['filters']['time_of_day']['field'] = 'time_of_day';
  $handler->display->display_options['filters']['time_of_day']['relationship'] = 'field_ministry_team_contact_id';
  $handler->display->display_options['filters']['time_of_day']['operator'] = 'contains';
  $handler->display->display_options['filters']['time_of_day']['exposed'] = TRUE;
  $handler->display->display_options['filters']['time_of_day']['expose']['operator_id'] = 'time_of_day_op';
  $handler->display->display_options['filters']['time_of_day']['expose']['label'] = 'Time of day contains';
  $handler->display->display_options['filters']['time_of_day']['expose']['operator'] = 'time_of_day_op';
  $handler->display->display_options['filters']['time_of_day']['expose']['identifier'] = 'time_of_day';
  $handler->display->display_options['filters']['time_of_day']['expose']['remember_roles'] = array(
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
  /* Filter criterion: CiviCRM Tags: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'civicrm_tag';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'field_ministry_team_contact_id';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Tag';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/cbf/ministry-teams';
  $translatables['cbf2019_ministry_team_admin_view'] = array(
    t('Master'),
    t('cbf2019 ministry team admin view'),
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
    t('These are CiviCRM Teams that have been marked up for display on maps on the website.

To publish a CiviCRM Team on a map, set up the team in CiviCRM then come to this page and click here to <a href="/eform/submit/ministry-team">create a new Ministry Team</a> (this links the CiviCRM team with the map).

To modify the details of a team on the map click on <em>Edit CiviCRM</em> beside the team. When you save the team with its new details these will appear on the map.

To remove a team from the maps, click the checkbox next to the team and choose operation <em>Delete item</em> and press <em>Execute</em>.'),
    t('CiviCRM Team'),
    t('Select'),
    t('- Choose an operation -'),
    t('Display Name'),
    t('Tags'),
    t('Meeting day/time'),
    t('Time of day'),
    t('.'),
    t('Operations'),
    t('<a href="/entityform/[entityform_id]/edit">Edit</a>&nbsp;&nbsp;&nbsp;<a href="/civicrm/contact/view?reset=1&cid=[id]">View CiviCRM</a>&nbsp;&nbsp;&nbsp;<a href="/civicrm/contact/add?reset=1&action=update&cid=[id]">Edit CiviCRM</a>'),
    t('Name contains'),
    t('Meeting day/time contains'),
    t('Time of day contains'),
    t('Tag'),
    t('Page'),
  );
  $export['cbf2019_ministry_team_admin_view'] = $view;

  $view = new view();
  $view->name = 'cbf2019_page_header_civicrm_event';
  $view->description = 'Page header for all CiviCRM Event pages';
  $view->tag = 'page-header';
  $view->base_table = 'civicrm_event';
  $view->human_name = 'cbf2019 page header - CiviCRM Event';
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
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
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
  /* Field: CiviCRM Events: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'civicrm_event';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
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
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'cbf2019_page_header_no_results_image';
  $handler->display->display_options['fields']['view']['display'] = 'block_1';
  $handler->display->display_options['fields']['view']['arguments'] = 'civicrm-event';
  /* Contextual filter: CiviCRM Events: Event ID */
  $handler->display->display_options['arguments']['id']['id'] = 'id';
  $handler->display->display_options['arguments']['id']['table'] = 'civicrm_event';
  $handler->display->display_options['arguments']['id']['field'] = 'id';
  $handler->display->display_options['arguments']['id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['id']['summary_options']['items_per_page'] = '25';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['cbf2019_page_header_civicrm_event'] = array(
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
  $export['cbf2019_page_header_civicrm_event'] = $view;

  $view = new view();
  $view->name = 'cbf2019_page_header_no_results_image';
  $view->description = 'Image FID in cases where there are no results';
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
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
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
  /* Contextual filter: Field: Synopsis (field_synopsis) */
  $handler->display->display_options['arguments']['field_synopsis_value']['id'] = 'field_synopsis_value';
  $handler->display->display_options['arguments']['field_synopsis_value']['table'] = 'field_data_field_synopsis';
  $handler->display->display_options['arguments']['field_synopsis_value']['field'] = 'field_synopsis_value';
  $handler->display->display_options['arguments']['field_synopsis_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_synopsis_value']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_synopsis_value']['default_argument_options']['code'] = 'return parse_url(request_uri())["path"];';
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

  /* Display: Content type */
  $handler = $view->new_display('block', 'Content type', 'block_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Sidebar title (field_sidebar_title) */
  $handler->display->display_options['arguments']['field_sidebar_title_value']['id'] = 'field_sidebar_title_value';
  $handler->display->display_options['arguments']['field_sidebar_title_value']['table'] = 'field_data_field_sidebar_title';
  $handler->display->display_options['arguments']['field_sidebar_title_value']['field'] = 'field_sidebar_title_value';
  $handler->display->display_options['arguments']['field_sidebar_title_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_sidebar_title_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_sidebar_title_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_sidebar_title_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_sidebar_title_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_sidebar_title_value']['limit'] = '0';
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
    t('Content type'),
  );
  $export['cbf2019_page_header_no_results_image'] = $view;

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
    t('Activity'),
    t('All'),
    t('Block'),
  );
  $export['cbf2019_page_header_node'] = $view;

  $view = new view();
  $view->name = 'cbf2019_page_header_paths';
  $view->description = 'Page header for specific cases';
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
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
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
  /* Contextual filter: Field: Synopsis (field_synopsis) */
  $handler->display->display_options['arguments']['field_synopsis_value']['id'] = 'field_synopsis_value';
  $handler->display->display_options['arguments']['field_synopsis_value']['table'] = 'field_data_field_synopsis';
  $handler->display->display_options['arguments']['field_synopsis_value']['field'] = 'field_synopsis_value';
  $handler->display->display_options['arguments']['field_synopsis_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_synopsis_value']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_synopsis_value']['default_argument_options']['code'] = 'return parse_url(request_uri())["path"];';
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
  );
  $export['cbf2019_page_header_paths'] = $view;

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
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_in_activity_target_id']['id'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['field'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['label'] = 'Activity';
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
  $handler->display->display_options['fields']['field_subtitle']['exclude'] = TRUE;
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
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
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
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Defaults */
  $handler = $view->new_display('block', 'Defaults', 'block');
  $handler->display->display_options['display_description'] = 'This display contains the defaults - don\'t use';
  $handler->display->display_options['link_url'] = 'library';

  /* Display: For home page */
  $handler = $view->new_display('block', 'For home page', 'block_1');
  $handler->display->display_options['display_description'] = 'Recent library resources for the home page';
  $handler->display->display_options['link_url'] = 'library';

  /* Display: For Activity */
  $handler = $view->new_display('block', 'For Activity', 'block_2');
  $handler->display->display_options['display_description'] = 'Recent library resources for an activity';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Our library';
  $handler->display->display_options['link_url'] = 'library';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['total_pages'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Title';
  $handler->display->display_options['header']['area']['content'] = 'Recent resources';
  $handler->display->display_options['header']['area']['format'] = '3';
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
  $handler->display->display_options['fields']['field_subtitle']['exclude'] = TRUE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Date (field_episode_date) */
  $handler->display->display_options['filters']['field_episode_date_value']['id'] = 'field_episode_date_value';
  $handler->display->display_options['filters']['field_episode_date_value']['table'] = 'field_data_field_episode_date';
  $handler->display->display_options['filters']['field_episode_date_value']['field'] = 'field_episode_date_value';
  $handler->display->display_options['filters']['field_episode_date_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_episode_date_value']['default_date'] = '4 years ago';

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
    'field_topic_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_select_all_none_nested' => FALSE,
        'bef_term_description' => 0,
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
  $handler->display->display_options['fields']['field_subtitle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_in_activity_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['title']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Topic(s) (field_topic) */
  $handler->display->display_options['filters']['field_topic_tid']['id'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['table'] = 'field_data_field_topic';
  $handler->display->display_options['filters']['field_topic_tid']['field'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_topic_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_topic_tid']['expose']['operator_id'] = 'field_topic_tid_op';
  $handler->display->display_options['filters']['field_topic_tid']['expose']['label'] = 'Topics';
  $handler->display->display_options['filters']['field_topic_tid']['expose']['operator'] = 'field_topic_tid_op';
  $handler->display->display_options['filters']['field_topic_tid']['expose']['identifier'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_topic_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_topic_tid']['vocabulary'] = 'topic';
  $handler->display->display_options['filters']['field_topic_tid']['hierarchy'] = 1;
  /* Filter criterion: Field: Speaker(s) (field_speakers) */
  $handler->display->display_options['filters']['field_speakers_tid']['id'] = 'field_speakers_tid';
  $handler->display->display_options['filters']['field_speakers_tid']['table'] = 'field_data_field_speakers';
  $handler->display->display_options['filters']['field_speakers_tid']['field'] = 'field_speakers_tid';
  $handler->display->display_options['filters']['field_speakers_tid']['value'] = '';
  $handler->display->display_options['filters']['field_speakers_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_speakers_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_speakers_tid']['expose']['operator_id'] = 'field_speakers_tid_op';
  $handler->display->display_options['filters']['field_speakers_tid']['expose']['label'] = 'Speaker';
  $handler->display->display_options['filters']['field_speakers_tid']['expose']['operator'] = 'field_speakers_tid_op';
  $handler->display->display_options['filters']['field_speakers_tid']['expose']['identifier'] = 'field_speakers_tid';
  $handler->display->display_options['filters']['field_speakers_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_speakers_tid']['vocabulary'] = 'speaker';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['relationship'] = 'field_in_activity_target_id';
  $handler->display->display_options['filters']['title_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_1']['group'] = 1;
  $handler->display->display_options['filters']['title_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['operator_id'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['label'] = 'Activity';
  $handler->display->display_options['filters']['title_1']['expose']['operator'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['identifier'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['title_1']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title_1']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title_1']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title_1']['expose']['autocomplete_field'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title_1']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title_1']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Field: Ministry Centre (taxonomy_vocabulary_1) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['id'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['field'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['group'] = 1;
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_1_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_1_tid']['expose']['label'] = 'City';
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
  $handler->display->display_options['filters']['field_resource_type_value']['group_info']['label'] = 'Type';
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
  $handler->display->display_options['path'] = 'library';

  /* Display: For Node's activity */
  $handler = $view->new_display('block', 'For Node\'s activity', 'block_3');
  $handler->display->display_options['display_description'] = 'Recent library resources for a node\'s activity';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Our library';
  $handler->display->display_options['link_url'] = 'library';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Title';
  $handler->display->display_options['header']['area']['content'] = 'Recent resources';
  $handler->display->display_options['header']['area']['format'] = '3';
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Date (field_episode_date) */
  $handler->display->display_options['filters']['field_episode_date_value']['id'] = 'field_episode_date_value';
  $handler->display->display_options['filters']['field_episode_date_value']['table'] = 'field_data_field_episode_date';
  $handler->display->display_options['filters']['field_episode_date_value']['field'] = 'field_episode_date_value';
  $handler->display->display_options['filters']['field_episode_date_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_episode_date_value']['default_date'] = '4 years ago';
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
    t('Activity'),
    t('[field_speakers] | [field_episode_date]'),
    t('All'),
    t('Defaults'),
    t('This display contains the defaults - don\'t use'),
    t('more'),
    t('For home page'),
    t('Recent library resources for the home page'),
    t('For Activity'),
    t('Recent library resources for an activity'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Resource library'),
    t('Search'),
    t('Select any filter and click on Apply to see results'),
    t('Advanced options'),
    t('Topics'),
    t('Speaker'),
    t('City'),
    t('Resource type (field_resource_type)'),
    t('Type'),
    t('For Node\'s activity'),
    t('Recent library resources for a node\'s activity'),
    t('Node referencing Activity'),
  );
  $export['cbf2019_recent_library'] = $view;

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
  $handler->display->display_options['fields']['field_subtitle']['exclude'] = TRUE;
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Defaults */
  $handler = $view->new_display('block', 'Defaults', 'block');
  $handler->display->display_options['display_description'] = 'This display contains the defaults - don\'t use';
  $handler->display->display_options['link_url'] = 'library';

  /* Display: For Episode */
  $handler = $view->new_display('block', 'For Episode', 'block_1');
  $handler->display->display_options['display_description'] = 'Related content for a Library Episode';
  $handler->display->display_options['link_url'] = 'library';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: View (Views field view) */
  $handler->display->display_options['empty']['view_field']['id'] = 'view_field';
  $handler->display->display_options['empty']['view_field']['table'] = 'views';
  $handler->display->display_options['empty']['view_field']['field'] = 'view_field';
  $handler->display->display_options['empty']['view_field']['label'] = '';
  $handler->display->display_options['empty']['view_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['empty']['view_field']['view'] = 'cbf2019_recent_library';
  $handler->display->display_options['empty']['view_field']['display'] = 'block_3';
  $handler->display->display_options['empty']['view_field']['arguments'] = '!1';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_related_content_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'episode' => 'episode',
  );

  /* Display: For non-Episode */
  $handler = $view->new_display('block', 'For non-Episode', 'block_2');
  $handler->display->display_options['display_description'] = 'Related content for a node that is not a Library Episode';
  $handler->display->display_options['link_url'] = 'library';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_related_content_node';
  $handler->display->display_options['filters']['type']['operator'] = 'not in';
  $handler->display->display_options['filters']['type']['value'] = array(
    'episode' => 'episode',
  );
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
  $handler->display->display_options['title'] = 'cbf2019 speaker admin view';
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
  /* Relationship: Taxonomy term: CiviCRM Event using Speaker(s) */
  $handler->display->display_options['relationships']['reverse_field_speakers_civicrm_event']['id'] = 'reverse_field_speakers_civicrm_event';
  $handler->display->display_options['relationships']['reverse_field_speakers_civicrm_event']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_speakers_civicrm_event']['field'] = 'reverse_field_speakers_civicrm_event';
  $handler->display->display_options['relationships']['reverse_field_speakers_civicrm_event']['label'] = 'CiviCRM Event';
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
  /* Field: COUNT(DISTINCT CiviCRM Events: Event ID) */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'civicrm_event';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['relationship'] = 'reverse_field_speakers_civicrm_event';
  $handler->display->display_options['fields']['id']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['id']['label'] = 'Events';
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = 'Description';
  $handler->display->display_options['fields']['description']['alter']['max_length'] = '64';
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
  /* Field: Taxonomy term: Term edit link */
  $handler->display->display_options['fields']['edit_term']['id'] = 'edit_term';
  $handler->display->display_options['fields']['edit_term']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['edit_term']['field'] = 'edit_term';
  $handler->display->display_options['fields']['edit_term']['label'] = 'Operations';
  $handler->display->display_options['fields']['edit_term']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_term']['text'] = 'Edit';
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
    t('cbf2019 speaker admin view'),
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
    t('CiviCRM Event'),
    t('Content'),
    t('Select'),
    t('- Choose an operation -'),
    t('Name'),
    t('Articles'),
    t('Events'),
    t('.'),
    t('Description'),
    t('Landscape image'),
    t('[field_highlight-fid]'),
    t('Portrait image'),
    t('[field_image-fid]'),
    t('Operations'),
    t('Edit'),
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
  $view->name = 'cbf2019_speakers';
  $view->description = 'Slider showing speakers for Activities, CiviCRM Events and Resources';
  $view->tag = 'slider, autoplay';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'cbf2019 speakers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
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
  $handler->display->display_options['header']['area']['content'] = 'Speaker';
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

  /* Display: For CiviCRM Event */
  $handler = $view->new_display('block', 'For CiviCRM Event', 'block_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomy term: CiviCRM Event using Speaker(s) */
  $handler->display->display_options['relationships']['reverse_field_speakers_civicrm_event']['id'] = 'reverse_field_speakers_civicrm_event';
  $handler->display->display_options['relationships']['reverse_field_speakers_civicrm_event']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_speakers_civicrm_event']['field'] = 'reverse_field_speakers_civicrm_event';
  $handler->display->display_options['relationships']['reverse_field_speakers_civicrm_event']['label'] = 'CiviCRM Event';
  $handler->display->display_options['relationships']['reverse_field_speakers_civicrm_event']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: CiviCRM Events: Event ID */
  $handler->display->display_options['arguments']['id']['id'] = 'id';
  $handler->display->display_options['arguments']['id']['table'] = 'civicrm_event';
  $handler->display->display_options['arguments']['id']['field'] = 'id';
  $handler->display->display_options['arguments']['id']['relationship'] = 'reverse_field_speakers_civicrm_event';
  $handler->display->display_options['arguments']['id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['id']['summary_options']['items_per_page'] = '25';

  /* Display: For Activity */
  $handler = $view->new_display('block', 'For Activity', 'block_2');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomy term: CiviCRM Event using Speaker(s) */
  $handler->display->display_options['relationships']['reverse_field_speakers_civicrm_event']['id'] = 'reverse_field_speakers_civicrm_event';
  $handler->display->display_options['relationships']['reverse_field_speakers_civicrm_event']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_speakers_civicrm_event']['field'] = 'reverse_field_speakers_civicrm_event';
  $handler->display->display_options['relationships']['reverse_field_speakers_civicrm_event']['label'] = 'CiviCRM Event';
  $handler->display->display_options['relationships']['reverse_field_speakers_civicrm_event']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_in_activity_target_id']['id'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['field'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['relationship'] = 'reverse_field_speakers_civicrm_event';
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
  /* Filter criterion: Taxonomy term: Term description */
  $handler->display->display_options['filters']['description']['id'] = 'description';
  $handler->display->display_options['filters']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['description']['field'] = 'description';
  $handler->display->display_options['filters']['description']['operator'] = 'longerthan';
  $handler->display->display_options['filters']['description']['value'] = '0';
  $handler->display->display_options['filters']['description']['group'] = 1;
  /* Filter criterion: Field: Next action (field_next_action) */
  $handler->display->display_options['filters']['field_next_action_value']['id'] = 'field_next_action_value';
  $handler->display->display_options['filters']['field_next_action_value']['table'] = 'field_data_field_next_action';
  $handler->display->display_options['filters']['field_next_action_value']['field'] = 'field_next_action_value';
  $handler->display->display_options['filters']['field_next_action_value']['relationship'] = 'reverse_field_speakers_civicrm_event';
  $handler->display->display_options['filters']['field_next_action_value']['operator'] = '!=';
  $handler->display->display_options['filters']['field_next_action_value']['value'] = '0';

  /* Display: For Library resources */
  $handler = $view->new_display('block', 'For Library resources', 'block_3');
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

  /* Display: For Blog articles */
  $handler = $view->new_display('block', 'For Blog articles', 'block_4');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Author';
  $handler->display->display_options['header']['area']['format'] = '2';
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
    t('Speaker'),
    t('<div class="landscape-image-placeholder"><i class="fal fa-user"></i></div>'),
    t('[field_image]'),
    t('Defaults'),
    t('For CiviCRM Event'),
    t('CiviCRM Event'),
    t('All'),
    t('For Activity'),
    t('Activity'),
    t('For Library resources'),
    t('Content'),
    t('For Blog articles'),
    t('Author'),
  );
  $export['cbf2019_speakers'] = $view;

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
  /* Field: Field: Staff contact */
  $handler->display->display_options['fields']['field_staff_contact']['id'] = 'field_staff_contact';
  $handler->display->display_options['fields']['field_staff_contact']['table'] = 'field_data_field_staff_contact';
  $handler->display->display_options['fields']['field_staff_contact']['field'] = 'field_staff_contact';
  $handler->display->display_options['fields']['field_staff_contact']['label'] = '';
  $handler->display->display_options['fields']['field_staff_contact']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_staff_contact']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_contact']['type'] = 'civicrm_contact_ref_raw';
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
  /* Field: Entityform Submission: Note */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_summary']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_summary']['alter']['text'] = '<div class="overlaid-image">[field_image]</div><a href="/staff-contact?cid1=[field_staff_contact]"><div class="image-overlay">[field_summary]</div></a>';
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_summary']['element_wrapper_class'] = 'image-plus-hover-overlay';
  /* Field: Entityform Submission: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_title']['alter']['path'] = '/staff-contact?cid1=[field_staff_contact]';
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
  /* Sort criterion: Entityform Submission: Title (field_title) */
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
    t('<div class="portrait-image-placeholder"><i class="fal fa-user"></i></div>'),
    t('<div class="overlaid-image">[field_image]</div><a href="/staff-contact?cid1=[field_staff_contact]"><div class="image-overlay">[field_summary]</div></a>'),
    t('Block'),
  );
  $export['cbf2019_staff_slider'] = $view;

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
    t('Activities'),
    t('[field_highlight]'),
    t('<div class="overlaid-image">[field_title_image]</div><div class="image-overlay">###[field_logo]###</div>'),
    t('All cities'),
    t('[taxonomy_vocabulary_1] | [field_regularity]'),
    t('All'),
    t('Highlight location (field_highlight_location)'),
    t('Block'),
  );
  $export['cbf2019_whats_on_activities'] = $view;

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
  $handler->display->display_options['fields']['id']['alter']['text'] = 'More info';
  $handler->display->display_options['fields']['id']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['id']['alter']['path'] = 'civicrm-event/[id]';
  $handler->display->display_options['fields']['id']['alter']['link_class'] = 'btn btn-mod btn-border btn-medium btn-round';
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Sort criterion: Field: Sort Order (field_sort_order) */
  $handler->display->display_options['sorts']['field_sort_order_value']['id'] = 'field_sort_order_value';
  $handler->display->display_options['sorts']['field_sort_order_value']['table'] = 'field_data_field_sort_order';
  $handler->display->display_options['sorts']['field_sort_order_value']['field'] = 'field_sort_order_value';
  /* Contextual filter: CiviCRM Event: Domain (field_domain) */
  $handler->display->display_options['arguments']['field_domain_domain_id']['id'] = 'field_domain_domain_id';
  $handler->display->display_options['arguments']['field_domain_domain_id']['table'] = 'field_data_field_domain';
  $handler->display->display_options['arguments']['field_domain_domain_id']['field'] = 'field_domain_domain_id';
  $handler->display->display_options['arguments']['field_domain_domain_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_domain_domain_id']['default_argument_type'] = 'current_domain';
  $handler->display->display_options['arguments']['field_domain_domain_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_domain_domain_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_domain_domain_id']['summary_options']['items_per_page'] = '25';
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
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['group'] = 2;
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';
  /* Filter criterion: CiviCRM Event: Domain (field_domain) */
  $handler->display->display_options['filters']['field_domain_domain_id']['id'] = 'field_domain_domain_id';
  $handler->display->display_options['filters']['field_domain_domain_id']['table'] = 'field_data_field_domain';
  $handler->display->display_options['filters']['field_domain_domain_id']['field'] = 'field_domain_domain_id';
  $handler->display->display_options['filters']['field_domain_domain_id']['operator'] = '!=';
  $handler->display->display_options['filters']['field_domain_domain_id']['value']['value'] = '1';
  $handler->display->display_options['filters']['field_domain_domain_id']['group'] = 2;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['link_url'] = 'whats-on';

  /* Display: Block for Content Full Width */
  $handler = $view->new_display('block', 'Block for Content Full Width', 'block_1');
  $handler->display->display_options['link_url'] = 'whats-on';
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
    t('More info'),
    t('.'),
    t('All'),
    t('Block'),
    t('more'),
    t('Block for Content Full Width'),
  );
  $export['local_civicrm_event_slider'] = $view;

  return $export;
}
