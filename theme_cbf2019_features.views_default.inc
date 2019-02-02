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
  $view->name = 'local_civicrm_event_slider';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'civicrm_event';
  $view->human_name = 'Local CiviCRM Event slider';
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
