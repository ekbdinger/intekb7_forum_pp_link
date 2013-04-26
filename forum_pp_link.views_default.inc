<?php
/**
 * @file
 * forum_pp_link.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function forum_pp_link_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'pp_forum_link';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'pp_forum_link';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Forum Posts Linked to Primary Page';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_forum_pp' => 'field_forum_pp',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_forum_pp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Primary Page */
  $handler->display->display_options['fields']['field_forum_pp']['id'] = 'field_forum_pp';
  $handler->display->display_options['fields']['field_forum_pp']['table'] = 'field_data_field_forum_pp';
  $handler->display->display_options['fields']['field_forum_pp']['field'] = 'field_forum_pp';
  $handler->display->display_options['fields']['field_forum_pp']['alter']['text'] = '[field_forum_pp-nid] ';
  $handler->display->display_options['fields']['field_forum_pp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_forum_pp']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Primary Page (field_forum_pp) */
  $handler->display->display_options['arguments']['field_forum_pp_nid']['id'] = 'field_forum_pp_nid';
  $handler->display->display_options['arguments']['field_forum_pp_nid']['table'] = 'field_data_field_forum_pp';
  $handler->display->display_options['arguments']['field_forum_pp_nid']['field'] = 'field_forum_pp_nid';
  $handler->display->display_options['arguments']['field_forum_pp_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_forum_pp_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_forum_pp_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_forum_pp_nid']['summary_options']['items_per_page'] = '25';
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
    'forum' => 'forum',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'pp/test';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'pp/%/test';

  /* Display: Page 2 */
  $handler = $view->new_display('page', 'Page 2', 'page_2');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Primary Page (field_forum_pp) */
  $handler->display->display_options['arguments']['field_forum_pp_nid']['id'] = 'field_forum_pp_nid';
  $handler->display->display_options['arguments']['field_forum_pp_nid']['table'] = 'field_data_field_forum_pp';
  $handler->display->display_options['arguments']['field_forum_pp_nid']['field'] = 'field_forum_pp_nid';
  $handler->display->display_options['arguments']['field_forum_pp_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_forum_pp_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_forum_pp_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_forum_pp_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'pp/%/forum';

  /* Display: EVA Field */
  $handler = $view->new_display('entity_view', 'EVA Field', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'primary_page_content',
  );
  $handler->display->display_options['show_title'] = 1;
  $export['pp_forum_link'] = $view;

  return $export;
}
