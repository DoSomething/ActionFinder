<?php
/**
 * @file
 * dosomething_action_finder.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function dosomething_action_finder_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'action_finder';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Action Finder';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Action Finder';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: High Season */
  $handler->display->display_options['fields']['field_high_season']['id'] = 'field_high_season';
  $handler->display->display_options['fields']['field_high_season']['table'] = 'field_data_field_high_season';
  $handler->display->display_options['fields']['field_high_season']['field'] = 'field_high_season';
  $handler->display->display_options['fields']['field_high_season']['label'] = '';
  $handler->display->display_options['fields']['field_high_season']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_high_season']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_high_season']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Low Season */
  $handler->display->display_options['fields']['field_low_season']['id'] = 'field_low_season';
  $handler->display->display_options['fields']['field_low_season']['table'] = 'field_data_field_low_season';
  $handler->display->display_options['fields']['field_low_season']['field'] = 'field_low_season';
  $handler->display->display_options['fields']['field_low_season']['label'] = '';
  $handler->display->display_options['fields']['field_low_season']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_low_season']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_low_season']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Sponsored */
  $handler->display->display_options['fields']['field_sponsored']['id'] = 'field_sponsored';
  $handler->display->display_options['fields']['field_sponsored']['table'] = 'field_data_field_sponsored';
  $handler->display->display_options['fields']['field_sponsored']['field'] = 'field_sponsored';
  $handler->display->display_options['fields']['field_sponsored']['label'] = '';
  $handler->display->display_options['fields']['field_sponsored']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sponsored']['element_label_colon'] = FALSE;
  /* Field: Content: Staff pick */
  $handler->display->display_options['fields']['field_staff_pick']['id'] = 'field_staff_pick';
  $handler->display->display_options['fields']['field_staff_pick']['table'] = 'field_data_field_staff_pick';
  $handler->display->display_options['fields']['field_staff_pick']['field'] = 'field_staff_pick';
  $handler->display->display_options['fields']['field_staff_pick']['label'] = '';
  $handler->display->display_options['fields']['field_staff_pick']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_staff_pick']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'action' => 'action',
  );
  /* Filter criterion: Content: What Cause? (field_what_cause) */
  $handler->display->display_options['filters']['field_what_cause_value']['id'] = 'field_what_cause_value';
  $handler->display->display_options['filters']['field_what_cause_value']['table'] = 'field_data_field_what_cause';
  $handler->display->display_options['filters']['field_what_cause_value']['field'] = 'field_what_cause_value';
  $handler->display->display_options['filters']['field_what_cause_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_what_cause_value']['expose']['operator_id'] = 'field_what_cause_value_op';
  $handler->display->display_options['filters']['field_what_cause_value']['expose']['label'] = 'Cause:';
  $handler->display->display_options['filters']['field_what_cause_value']['expose']['operator'] = 'field_what_cause_value_op';
  $handler->display->display_options['filters']['field_what_cause_value']['expose']['identifier'] = 'field_what_cause_value';
  $handler->display->display_options['filters']['field_what_cause_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_what_cause_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_what_cause_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
  );
  $handler->display->display_options['filters']['field_what_cause_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: What type of actions is this? (field_action_type) */
  $handler->display->display_options['filters']['field_action_type_value']['id'] = 'field_action_type_value';
  $handler->display->display_options['filters']['field_action_type_value']['table'] = 'field_data_field_action_type';
  $handler->display->display_options['filters']['field_action_type_value']['field'] = 'field_action_type_value';
  $handler->display->display_options['filters']['field_action_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_action_type_value']['expose']['operator_id'] = 'field_action_type_value_op';
  $handler->display->display_options['filters']['field_action_type_value']['expose']['label'] = 'Action Type:';
  $handler->display->display_options['filters']['field_action_type_value']['expose']['operator'] = 'field_action_type_value_op';
  $handler->display->display_options['filters']['field_action_type_value']['expose']['identifier'] = 'field_action_type_value';
  $handler->display->display_options['filters']['field_action_type_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_action_type_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_action_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
  );
  $handler->display->display_options['filters']['field_action_type_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: How many hours will this take to complete? (field_hours) */
  $handler->display->display_options['filters']['field_hours_value']['id'] = 'field_hours_value';
  $handler->display->display_options['filters']['field_hours_value']['table'] = 'field_data_field_hours';
  $handler->display->display_options['filters']['field_hours_value']['field'] = 'field_hours_value';
  $handler->display->display_options['filters']['field_hours_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_hours_value']['expose']['operator_id'] = 'field_hours_value_op';
  $handler->display->display_options['filters']['field_hours_value']['expose']['label'] = 'Time';
  $handler->display->display_options['filters']['field_hours_value']['expose']['operator'] = 'field_hours_value_op';
  $handler->display->display_options['filters']['field_hours_value']['expose']['identifier'] = 'field_hours_value';
  $handler->display->display_options['filters']['field_hours_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_hours_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_hours_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
  );
  $handler->display->display_options['filters']['field_hours_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: High Season (field_high_season) */
  $handler->display->display_options['filters']['field_high_season_value']['id'] = 'field_high_season_value';
  $handler->display->display_options['filters']['field_high_season_value']['table'] = 'field_data_field_high_season';
  $handler->display->display_options['filters']['field_high_season_value']['field'] = 'field_high_season_value';
  $handler->display->display_options['filters']['field_high_season_value']['value'] = 'BANANA';
  /* Filter criterion: Content: High Season (field_high_season:value2) */
  $handler->display->display_options['filters']['field_high_season_value2']['id'] = 'field_high_season_value2';
  $handler->display->display_options['filters']['field_high_season_value2']['table'] = 'field_data_field_high_season';
  $handler->display->display_options['filters']['field_high_season_value2']['field'] = 'field_high_season_value2';
  $handler->display->display_options['filters']['field_high_season_value2']['value'] = 'BANANA';
  /* Filter criterion: Content: Low Season (field_low_season) */
  $handler->display->display_options['filters']['field_low_season_value']['id'] = 'field_low_season_value';
  $handler->display->display_options['filters']['field_low_season_value']['table'] = 'field_data_field_low_season';
  $handler->display->display_options['filters']['field_low_season_value']['field'] = 'field_low_season_value';
  $handler->display->display_options['filters']['field_low_season_value']['value'] = 'PLACEHOLDER';
  /* Filter criterion: Content: Low Season (field_low_season:value2) */
  $handler->display->display_options['filters']['field_low_season_value2']['id'] = 'field_low_season_value2';
  $handler->display->display_options['filters']['field_low_season_value2']['table'] = 'field_data_field_low_season';
  $handler->display->display_options['filters']['field_low_season_value2']['field'] = 'field_low_season_value2';
  $handler->display->display_options['filters']['field_low_season_value2']['value'] = 'PLACEHOLDER';
  /* Filter criterion: Content: Sponsored (field_sponsored) */
  $handler->display->display_options['filters']['field_sponsored_value']['id'] = 'field_sponsored_value';
  $handler->display->display_options['filters']['field_sponsored_value']['table'] = 'field_data_field_sponsored';
  $handler->display->display_options['filters']['field_sponsored_value']['field'] = 'field_sponsored_value';
  $handler->display->display_options['filters']['field_sponsored_value']['value'] = array(
    0 => '0',
    1 => '1',
  );
  /* Filter criterion: Content: Staff pick (field_staff_pick) */
  $handler->display->display_options['filters']['field_staff_pick_value']['id'] = 'field_staff_pick_value';
  $handler->display->display_options['filters']['field_staff_pick_value']['table'] = 'field_data_field_staff_pick';
  $handler->display->display_options['filters']['field_staff_pick_value']['field'] = 'field_staff_pick_value';
  $handler->display->display_options['filters']['field_staff_pick_value']['value'] = array(
    0 => '0',
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'af';
  $export['action_finder'] = $view;

  return $export;
}
