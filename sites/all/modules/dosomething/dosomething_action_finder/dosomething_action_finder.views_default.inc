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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'af';
  $export['action_finder'] = $view;

  return $export;
}