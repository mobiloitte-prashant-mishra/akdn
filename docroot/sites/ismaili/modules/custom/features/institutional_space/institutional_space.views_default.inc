<?php
/**
 * @file
 * institutional_space.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function institutional_space_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'institutional_pages';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_ismaili_index';
  $view->human_name = 'Institutional Pages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Institutional Pages';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Content: Summary */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Event Start Date */
  $handler->display->display_options['fields']['field_event_start_date']['id'] = 'field_event_start_date';
  $handler->display->display_options['fields']['field_event_start_date']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['field_event_start_date']['field'] = 'field_event_start_date';
  $handler->display->display_options['fields']['field_event_start_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_start_date']['settings'] = array(
    'format_type' => 'custom_date_for_ismaili',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Content: Image */
  $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_main_image']['settings'] = array(
    'image_style' => 'feature_tiles',
    'image_link' => 'content',
  );
  /* Sort criterion: Indexed Content: Event Start Date */
  $handler->display->display_options['sorts']['field_event_start_date']['id'] = 'field_event_start_date';
  $handler->display->display_options['sorts']['field_event_start_date']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['sorts']['field_event_start_date']['field'] = 'field_event_start_date';
  /* Contextual filter: Indexed Content: Institutional Space */
  $handler->display->display_options['arguments']['field_institutional_space']['id'] = 'field_institutional_space';
  $handler->display->display_options['arguments']['field_institutional_space']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['arguments']['field_institutional_space']['field'] = 'field_institutional_space';
  $handler->display->display_options['arguments']['field_institutional_space']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_institutional_space']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_institutional_space']['default_argument_options']['code'] = '$node = menu_get_object();
$nat = $node->field_institutional_space[und][0][tid];
return $nat;';
  $handler->display->display_options['arguments']['field_institutional_space']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_institutional_space']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_institutional_space']['not'] = 0;
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'calendar_event' => 'calendar_event',
  );
  /* Filter criterion: Indexed Content: Event End Date */
  $handler->display->display_options['filters']['field_event_end_date']['id'] = 'field_event_end_date';
  $handler->display->display_options['filters']['field_event_end_date']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['filters']['field_event_end_date']['field'] = 'field_event_end_date';
  $handler->display->display_options['filters']['field_event_end_date']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_end_date']['value'] = 'now - 36 hours';
  /* Filter criterion: Indexed Content: Event Start Date */
  $handler->display->display_options['filters']['field_event_start_date']['id'] = 'field_event_start_date';
  $handler->display->display_options['filters']['field_event_start_date']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['filters']['field_event_start_date']['field'] = 'field_event_start_date';
  $handler->display->display_options['filters']['field_event_start_date']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_start_date']['value'] = 'now';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-hub-pages';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Content: Image */
  $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_main_image']['settings'] = array(
    'image_style' => 'feature_tiles',
    'image_link' => 'content',
  );
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_short_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_short_title']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Event Start Date */
  $handler->display->display_options['fields']['field_event_start_date']['id'] = 'field_event_start_date';
  $handler->display->display_options['fields']['field_event_start_date']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['field_event_start_date']['field'] = 'field_event_start_date';
  $handler->display->display_options['fields']['field_event_start_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_start_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_start_date']['settings'] = array(
    'format_type' => 'calendar_event',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Content: List Date */
  $handler->display->display_options['fields']['field_list_date']['id'] = 'field_list_date';
  $handler->display->display_options['fields']['field_list_date']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['field_list_date']['field'] = 'field_list_date';
  $handler->display->display_options['fields']['field_list_date']['label'] = '';
  $handler->display->display_options['fields']['field_list_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_list_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_list_date']['settings'] = array(
    'format_type' => 'calendar_event',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
if($data->_field_data[field_main_image][entity]->field_list_date){
$date_value = $data->_field_data[field_main_image][entity]->field_list_date[und][0][value];
$date = new DateTime($date_value);
echo $date->format(\'l,j F Y\');
}
else {
$list_data = $data->_field_data[field_main_image][entity]->field_event_start_date[und][0][value];
$list_date = new DateTime($list_date);
echo $list_date->format(\'l,j F Y\');
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Indexed Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Summary */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Content: Event Start Date */
  $handler->display->display_options['sorts']['field_event_start_date']['id'] = 'field_event_start_date';
  $handler->display->display_options['sorts']['field_event_start_date']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['sorts']['field_event_start_date']['field'] = 'field_event_start_date';
  $handler->display->display_options['sorts']['field_event_start_date']['order'] = 'DESC';
  /* Sort criterion: Indexed Content: List Date */
  $handler->display->display_options['sorts']['field_list_date']['id'] = 'field_list_date';
  $handler->display->display_options['sorts']['field_list_date']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['sorts']['field_list_date']['field'] = 'field_list_date';
  $handler->display->display_options['sorts']['field_list_date']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'calendar_event' => 'calendar_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Indexed Content: Event End Date */
  $handler->display->display_options['filters']['field_event_end_date']['id'] = 'field_event_end_date';
  $handler->display->display_options['filters']['field_event_end_date']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['filters']['field_event_end_date']['field'] = 'field_event_end_date';
  $handler->display->display_options['filters']['field_event_end_date']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_end_date']['value'] = 'now - 36 hours';
  $handler->display->display_options['filters']['field_event_end_date']['group'] = 1;
  /* Filter criterion: Indexed Content: Event Start Date */
  $handler->display->display_options['filters']['field_event_start_date']['id'] = 'field_event_start_date';
  $handler->display->display_options['filters']['field_event_start_date']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['filters']['field_event_start_date']['field'] = 'field_event_start_date';
  $handler->display->display_options['filters']['field_event_start_date']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_start_date']['value'] = 'now';
  $handler->display->display_options['filters']['field_event_start_date']['group'] = 1;
  /* Filter criterion: Indexed Content: Mark as Past */
  $handler->display->display_options['filters']['field_mark_past']['id'] = 'field_mark_past';
  $handler->display->display_options['filters']['field_mark_past']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['filters']['field_mark_past']['field'] = 'field_mark_past';
  $handler->display->display_options['filters']['field_mark_past']['operator'] = '<>';
  $handler->display->display_options['filters']['field_mark_past']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_mark_past']['group'] = 1;
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'calendar_event' => 'calendar_event',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: Indexed Content: List Date */
  $handler->display->display_options['filters']['field_list_date']['id'] = 'field_list_date';
  $handler->display->display_options['filters']['field_list_date']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['filters']['field_list_date']['field'] = 'field_list_date';
  $handler->display->display_options['filters']['field_list_date']['operator'] = '>=';
  $handler->display->display_options['filters']['field_list_date']['value'] = 'now';
  $handler->display->display_options['filters']['field_list_date']['group'] = 2;
  /* Filter criterion: Indexed Content: Mark as Past */
  $handler->display->display_options['filters']['field_mark_past_1']['id'] = 'field_mark_past_1';
  $handler->display->display_options['filters']['field_mark_past_1']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['filters']['field_mark_past_1']['field'] = 'field_mark_past';
  $handler->display->display_options['filters']['field_mark_past_1']['operator'] = '<>';
  $handler->display->display_options['filters']['field_mark_past_1']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_mark_past_1']['group'] = 2;
  $handler->display->display_options['block_description'] = 'IP Upcoming Event ';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-hub-pages';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Content: Image */
  $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_main_image']['settings'] = array(
    'image_style' => 'feature_tiles',
    'image_link' => 'content',
  );
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_short_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_short_title']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Event Start Date */
  $handler->display->display_options['fields']['field_event_start_date']['id'] = 'field_event_start_date';
  $handler->display->display_options['fields']['field_event_start_date']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['field_event_start_date']['field'] = 'field_event_start_date';
  $handler->display->display_options['fields']['field_event_start_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_start_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_start_date']['settings'] = array(
    'format_type' => 'custom_date_for_ismaili',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Content: List Date */
  $handler->display->display_options['fields']['field_list_date']['id'] = 'field_list_date';
  $handler->display->display_options['fields']['field_list_date']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['field_list_date']['field'] = 'field_list_date';
  $handler->display->display_options['fields']['field_list_date']['label'] = '';
  $handler->display->display_options['fields']['field_list_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_list_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_list_date']['settings'] = array(
    'format_type' => 'calendar_event',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
if($data->_field_data[field_main_image][entity]->field_list_date){
$date_value = $data->_field_data[field_main_image][entity]->field_list_date[und][0][value];
$date = new DateTime($date_value);
echo $date->format(\'l,j F Y\');
}
else {
$list_data = $data->_field_data[field_main_image][entity]->field_event_start_date[und][0][value];
$list_date = new DateTime($list_date);
echo $list_date->format(\'l,j F Y\');
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Indexed Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Summary */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'calendar_event' => 'calendar_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Indexed Content: Mark as Past */
  $handler->display->display_options['filters']['field_mark_past']['id'] = 'field_mark_past';
  $handler->display->display_options['filters']['field_mark_past']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['filters']['field_mark_past']['field'] = 'field_mark_past';
  $handler->display->display_options['filters']['field_mark_past']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_mark_past']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Past Event';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-hub-pages';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Content: Image */
  $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_main_image']['settings'] = array(
    'image_style' => 'feature_tiles',
    'image_link' => 'content',
  );
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_short_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_short_title']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: List Date */
  $handler->display->display_options['fields']['field_list_date']['id'] = 'field_list_date';
  $handler->display->display_options['fields']['field_list_date']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['field_list_date']['field'] = 'field_list_date';
  $handler->display->display_options['fields']['field_list_date']['label'] = '';
  $handler->display->display_options['fields']['field_list_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_list_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_list_date']['settings'] = array(
    'format_type' => 'calendar_event',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Content: Event Start Date */
  $handler->display->display_options['fields']['field_event_start_date']['id'] = 'field_event_start_date';
  $handler->display->display_options['fields']['field_event_start_date']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['field_event_start_date']['field'] = 'field_event_start_date';
  $handler->display->display_options['fields']['field_event_start_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_start_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_start_date']['settings'] = array(
    'format_type' => 'calendar_event',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Content: Summary */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
if($data->_field_data[field_main_image][entity]->field_list_date){
$date_value = $data->_field_data[field_main_image][entity]->field_list_date[und][0][value];
$date = new DateTime($date_value);
echo $date->format(\'l,j F Y\');
}
else {
$list_data = $data->_field_data[field_main_image][entity]->field_event_start_date[und][0][value];
$list_date = new DateTime($list_date);
echo $list_date->format(\'l,j F Y\');
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Indexed Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Content: Event Start Date */
  $handler->display->display_options['sorts']['field_event_start_date']['id'] = 'field_event_start_date';
  $handler->display->display_options['sorts']['field_event_start_date']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['sorts']['field_event_start_date']['field'] = 'field_event_start_date';
  $handler->display->display_options['sorts']['field_event_start_date']['order'] = 'DESC';
  /* Sort criterion: Indexed Content: List Date */
  $handler->display->display_options['sorts']['field_list_date']['id'] = 'field_list_date';
  $handler->display->display_options['sorts']['field_list_date']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['sorts']['field_list_date']['field'] = 'field_list_date';
  $handler->display->display_options['sorts']['field_list_date']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Indexed Content: Institutional Space */
  $handler->display->display_options['arguments']['field_institutional_space']['id'] = 'field_institutional_space';
  $handler->display->display_options['arguments']['field_institutional_space']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['arguments']['field_institutional_space']['field'] = 'field_institutional_space';
  $handler->display->display_options['arguments']['field_institutional_space']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_institutional_space']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_institutional_space']['default_argument_options']['code'] = '$node = menu_get_object();
$nat = $node->nat;
reset($nat);
return key($nat);';
  $handler->display->display_options['arguments']['field_institutional_space']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_institutional_space']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_institutional_space']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'calendar_event' => 'calendar_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Indexed Content: Event End Date */
  $handler->display->display_options['filters']['field_event_end_date']['id'] = 'field_event_end_date';
  $handler->display->display_options['filters']['field_event_end_date']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['filters']['field_event_end_date']['field'] = 'field_event_end_date';
  $handler->display->display_options['filters']['field_event_end_date']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_end_date']['value'] = 'now - 36 hours';
  $handler->display->display_options['filters']['field_event_end_date']['group'] = 1;
  /* Filter criterion: Indexed Content: Event Start Date */
  $handler->display->display_options['filters']['field_event_start_date']['id'] = 'field_event_start_date';
  $handler->display->display_options['filters']['field_event_start_date']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['filters']['field_event_start_date']['field'] = 'field_event_start_date';
  $handler->display->display_options['filters']['field_event_start_date']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_start_date']['value'] = 'now';
  $handler->display->display_options['filters']['field_event_start_date']['group'] = 1;
  /* Filter criterion: Indexed Content: Mark as Past */
  $handler->display->display_options['filters']['field_mark_past']['id'] = 'field_mark_past';
  $handler->display->display_options['filters']['field_mark_past']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['filters']['field_mark_past']['field'] = 'field_mark_past';
  $handler->display->display_options['filters']['field_mark_past']['operator'] = '<>';
  $handler->display->display_options['filters']['field_mark_past']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_mark_past']['group'] = 1;
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'calendar_event' => 'calendar_event',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: Indexed Content: List Date */
  $handler->display->display_options['filters']['field_list_date']['id'] = 'field_list_date';
  $handler->display->display_options['filters']['field_list_date']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['filters']['field_list_date']['field'] = 'field_list_date';
  $handler->display->display_options['filters']['field_list_date']['operator'] = '>=';
  $handler->display->display_options['filters']['field_list_date']['value'] = 'now';
  $handler->display->display_options['filters']['field_list_date']['group'] = 2;
  /* Filter criterion: Indexed Content: Mark as Past */
  $handler->display->display_options['filters']['field_mark_past_1']['id'] = 'field_mark_past_1';
  $handler->display->display_options['filters']['field_mark_past_1']['table'] = 'search_api_index_ismaili_index';
  $handler->display->display_options['filters']['field_mark_past_1']['field'] = 'field_mark_past';
  $handler->display->display_options['filters']['field_mark_past_1']['operator'] = '<>';
  $handler->display->display_options['filters']['field_mark_past_1']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_mark_past_1']['group'] = 2;
  $handler->display->display_options['block_description'] = 'Local IP Upcoming Event ';

  /* Display: Block 3 */
  $handler = $view->new_display('block', 'Block 3', 'block_3');
  $translatables['institutional_pages'] = array(
    t('Master'),
    t('Institutional Pages'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Node ID'),
    t('.'),
    t(','),
    t('All'),
    t('Block'),
    t('IP Upcoming Event '),
    t('Past Event'),
    t('Local IP Upcoming Event '),
    t('Block 3'),
  );
  $export['institutional_pages'] = $view;

  $view = new view();
  $view->name = 'institutional_pages_journal';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Institutional Pages Journal';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Institutional Pages Journal';
  $handler->display->display_options['css_class'] = 'view-articles-slideshow';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['caption_field'] = 'none';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'field_main_image' => 0,
    'nid' => 0,
    'field_short_title' => 0,
    'php' => 0,
    'php_1' => 0,
    'field_main_image_1' => 0,
    'field_short_title_1' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_jcarousel_pager_orientation'] = '0';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_jcarousel_pager_scroll'] = '3';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_jcarousel_pager_visible'] = '3';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_jcarousel_pager_wrap'] = '';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'field_main_image' => 0,
    'nid' => 0,
    'field_short_title' => 0,
    'php' => 0,
    'php_1' => 0,
    'field_main_image_1' => 0,
    'field_short_title_1' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_jcarousel_pager_orientation'] = '0';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_jcarousel_pager_scroll'] = '3';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_jcarousel_pager_visible'] = '3';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_jcarousel_pager_wrap'] = '';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Articles for Journal (field_articles_for_journal) */
  $handler->display->display_options['relationships']['field_articles_for_journal_nid']['id'] = 'field_articles_for_journal_nid';
  $handler->display->display_options['relationships']['field_articles_for_journal_nid']['table'] = 'field_data_field_articles_for_journal';
  $handler->display->display_options['relationships']['field_articles_for_journal_nid']['field'] = 'field_articles_for_journal_nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['relationship'] = 'field_articles_for_journal_nid';
  $handler->display->display_options['fields']['field_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_main_image']['settings'] = array(
    'image_style' => 'ic_gallery',
    'image_link' => '',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_articles_for_journal_nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['relationship'] = 'field_articles_for_journal_nid';
  $handler->display->display_options['fields']['field_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_short_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$parent_nid = $data->_field_data[node_field_data_field_articles_for_journal_nid][entity]->field_parent_article[und][0][nid];
print $parent_nid;
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$nid = $data->_field_data[node_field_data_field_articles_for_journal_nid][entity]->nid;print $nid
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_main_image_1']['id'] = 'field_main_image_1';
  $handler->display->display_options['fields']['field_main_image_1']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image_1']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image_1']['relationship'] = 'field_articles_for_journal_nid';
  $handler->display->display_options['fields']['field_main_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_main_image_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_main_image_1']['alter']['path'] = 'node/[php]#node-[php_1]';
  $handler->display->display_options['fields']['field_main_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_main_image_1']['settings'] = array(
    'image_style' => 'recipe_main_image',
    'image_link' => '',
  );
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title_1']['id'] = 'field_short_title_1';
  $handler->display->display_options['fields']['field_short_title_1']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title_1']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title_1']['relationship'] = 'field_articles_for_journal_nid';
  $handler->display->display_options['fields']['field_short_title_1']['label'] = '';
  $handler->display->display_options['fields']['field_short_title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_short_title_1']['alter']['text'] = '<div class="image-caption-credits">
[field_short_title_1]
</div>';
  $handler->display->display_options['fields']['field_short_title_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_short_title_1']['alter']['path'] = 'node/[php]#node-[php_1]';
  $handler->display->display_options['fields']['field_short_title_1']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'institutional_space' => 'institutional_space',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Articles for Journal (field_articles_for_journal) */
  $handler->display->display_options['relationships']['field_articles_for_journal_nid']['id'] = 'field_articles_for_journal_nid';
  $handler->display->display_options['relationships']['field_articles_for_journal_nid']['table'] = 'field_data_field_articles_for_journal';
  $handler->display->display_options['relationships']['field_articles_for_journal_nid']['field'] = 'field_articles_for_journal_nid';
  $handler->display->display_options['relationships']['field_articles_for_journal_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_articles_for_journal_nid']['delta'] = '-1';
  $handler->display->display_options['block_description'] = 'Journal for Pages';
  $translatables['institutional_pages_journal'] = array(
    t('Master'),
    t('Institutional Pages Journal'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('field_articles_for_journal'),
    t('PHP'),
    t('<div class="image-caption-credits">
[field_short_title_1]
</div>'),
    t('All'),
    t('Block'),
    t('Journal for Pages'),
  );
  $export['institutional_pages_journal'] = $view;

  $view = new view();
  $view->name = 'institutional_views';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Institutional views';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Institutional views';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['optionset'] = 'gallery_block';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['caption_field'] = 'none';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_main_image' => 0,
    'nid' => 0,
    'field_short_title' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_jcarousel_pager_orientation'] = '0';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_jcarousel_pager_scroll'] = '3';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_jcarousel_pager_visible'] = '3';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_jcarousel_pager_wrap'] = '';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_main_image' => 0,
    'nid' => 0,
    'field_short_title' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_jcarousel_pager_orientation'] = '0';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_jcarousel_pager_scroll'] = '3';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_jcarousel_pager_visible'] = '3';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_jcarousel_pager_wrap'] = '';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Gallery Items  (field_gallery_items) */
  $handler->display->display_options['relationships']['field_gallery_items_nid']['id'] = 'field_gallery_items_nid';
  $handler->display->display_options['relationships']['field_gallery_items_nid']['table'] = 'field_data_field_gallery_items';
  $handler->display->display_options['relationships']['field_gallery_items_nid']['field'] = 'field_gallery_items_nid';
  $handler->display->display_options['relationships']['field_gallery_items_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_gallery_items_nid']['delta'] = '-1';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_main_image']['settings'] = array(
    'image_style' => 'ic_gallery',
    'image_link' => 'content',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_gallery_items_nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['relationship'] = 'field_gallery_items_nid';
  $handler->display->display_options['fields']['field_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_short_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_short_title']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'institutional_space' => 'institutional_space',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'video-gallery-slider';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['caption_field'] = 'none';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_main_image' => 0,
    'nid' => 0,
    'field_short_title' => 0,
    'field_publish_date' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_jcarousel_pager_orientation'] = '0';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_jcarousel_pager_scroll'] = '3';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_jcarousel_pager_visible'] = '3';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_jcarousel_pager_wrap'] = '';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_main_image' => 0,
    'nid' => 0,
    'field_short_title' => 0,
    'field_publish_date' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_jcarousel_pager_orientation'] = '0';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_jcarousel_pager_scroll'] = '3';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_jcarousel_pager_visible'] = '3';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_jcarousel_pager_wrap'] = '';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['relationship'] = 'field_gallery_items_nid';
  $handler->display->display_options['fields']['field_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_main_image']['settings'] = array(
    'image_style' => 'ic_gallery',
    'image_link' => 'content',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_gallery_items_nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['relationship'] = 'field_gallery_items_nid';
  $handler->display->display_options['fields']['field_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_short_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_short_title']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
  /* Field: Field: Publish date */
  $handler->display->display_options['fields']['field_publish_date']['id'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['field'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['relationship'] = 'field_gallery_items_nid';
  $handler->display->display_options['fields']['field_publish_date']['label'] = '';
  $handler->display->display_options['fields']['field_publish_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_publish_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publish_date']['settings'] = array(
    'format_type' => 'custom_date_for_ismaili',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['block_description'] = 'Institutional Galleries';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: More link */
  $handler->display->display_options['fields']['field_more_link']['id'] = 'field_more_link';
  $handler->display->display_options['fields']['field_more_link']['table'] = 'field_data_field_more_link';
  $handler->display->display_options['fields']['field_more_link']['field'] = 'field_more_link';
  $handler->display->display_options['fields']['field_more_link']['label'] = '';
  $handler->display->display_options['fields']['field_more_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_more_link']['alter']['text'] = 'MORE >>';
  $handler->display->display_options['fields']['field_more_link']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_more_link']['alter']['path'] = 'node/[field_more_link]';
  $handler->display->display_options['fields']['field_more_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_more_link']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_more_link']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_more_link']['type'] = 'node_reference_nid';

  /* Display: Block 2 */
  $handler = $view->new_display('block', 'Block 2', 'block_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Banner Image (field_banner_image:fid) */
  $handler->display->display_options['relationships']['field_banner_image_fid']['id'] = 'field_banner_image_fid';
  $handler->display->display_options['relationships']['field_banner_image_fid']['table'] = 'field_data_field_banner_image';
  $handler->display->display_options['relationships']['field_banner_image_fid']['field'] = 'field_banner_image_fid';
  /* Relationship: Content: Logo Image (field_logo_image:fid) */
  $handler->display->display_options['relationships']['field_logo_image_fid']['id'] = 'field_logo_image_fid';
  $handler->display->display_options['relationships']['field_logo_image_fid']['table'] = 'field_data_field_logo_image';
  $handler->display->display_options['relationships']['field_logo_image_fid']['field'] = 'field_logo_image_fid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Logo Image */
  $handler->display->display_options['fields']['field_logo_image']['id'] = 'field_logo_image';
  $handler->display->display_options['fields']['field_logo_image']['table'] = 'field_data_field_logo_image';
  $handler->display->display_options['fields']['field_logo_image']['field'] = 'field_logo_image';
  $handler->display->display_options['fields']['field_logo_image']['label'] = '';
  $handler->display->display_options['fields']['field_logo_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: NAT: Tid */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'tan';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['code'] = '$n = menu_get_object();
$tid = $n->field_institutional_space[und][0][tid];
return $tid;';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
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
    'institutional_space' => 'institutional_space',
  );
  $handler->display->display_options['block_description'] = 'Institutional Logo';

  /* Display: Block 2 */
  $handler = $view->new_display('block', 'Block 2', 'block_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Banner Image (field_banner_image:fid) */
  $handler->display->display_options['relationships']['field_banner_image_fid']['id'] = 'field_banner_image_fid';
  $handler->display->display_options['relationships']['field_banner_image_fid']['table'] = 'field_data_field_banner_image';
  $handler->display->display_options['relationships']['field_banner_image_fid']['field'] = 'field_banner_image_fid';
  /* Relationship: Content: Logo Image (field_logo_image:fid) */
  $handler->display->display_options['relationships']['field_logo_image_fid']['id'] = 'field_logo_image_fid';
  $handler->display->display_options['relationships']['field_logo_image_fid']['table'] = 'field_data_field_logo_image';
  $handler->display->display_options['relationships']['field_logo_image_fid']['field'] = 'field_logo_image_fid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Banner Image */
  $handler->display->display_options['fields']['field_banner_image']['id'] = 'field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['table'] = 'field_data_field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['field'] = 'field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['label'] = '';
  $handler->display->display_options['fields']['field_banner_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_banner_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_banner_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: NAT: Tid */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'tan';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['code'] = '$n = menu_get_object();
$tid = $n->field_institutional_space[und][0][tid];
return $tid;';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
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
    'institutional_space' => 'institutional_space',
  );
  $handler->display->display_options['block_description'] = 'Institutional Banner';

  /* Display: Block 3 */
  $handler = $view->new_display('block', 'Block 3', 'block_4');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Banner Image (field_banner_image:fid) */
  $handler->display->display_options['relationships']['field_banner_image_fid']['id'] = 'field_banner_image_fid';
  $handler->display->display_options['relationships']['field_banner_image_fid']['table'] = 'field_data_field_banner_image';
  $handler->display->display_options['relationships']['field_banner_image_fid']['field'] = 'field_banner_image_fid';
  /* Relationship: Content: Logo Image (field_logo_image:fid) */
  $handler->display->display_options['relationships']['field_logo_image_fid']['id'] = 'field_logo_image_fid';
  $handler->display->display_options['relationships']['field_logo_image_fid']['table'] = 'field_data_field_logo_image';
  $handler->display->display_options['relationships']['field_logo_image_fid']['field'] = 'field_logo_image_fid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Select Menu items */
  $handler->display->display_options['fields']['field_select_menu_items']['id'] = 'field_select_menu_items';
  $handler->display->display_options['fields']['field_select_menu_items']['table'] = 'field_data_field_select_menu_items';
  $handler->display->display_options['fields']['field_select_menu_items']['field'] = 'field_select_menu_items';
  $handler->display->display_options['fields']['field_select_menu_items']['label'] = '';
  $handler->display->display_options['fields']['field_select_menu_items']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_select_menu_items']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_select_menu_items']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: NAT: Tid */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'tan';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['code'] = '$n = menu_get_object();
$tid = $n->field_institutional_space[und][0][tid];
return $tid;';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
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
    'institutional_space' => 'institutional_space',
  );
  $handler->display->display_options['block_description'] = 'Institutional Menu';

  /* Display: Block 2 */
  $handler = $view->new_display('block', 'Block 2', 'block_5');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'related-recipe-bottom view-articles-slideshow';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['caption_field'] = 'none';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_main_image' => 0,
    'nid' => 0,
    'field_short_title' => 0,
    'field_publish_date' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_jcarousel_pager_orientation'] = '0';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_jcarousel_pager_scroll'] = '3';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_jcarousel_pager_visible'] = '3';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_jcarousel_pager_wrap'] = '';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_main_image' => 0,
    'nid' => 0,
    'field_short_title' => 0,
    'field_publish_date' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_jcarousel_pager_orientation'] = '0';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_jcarousel_pager_scroll'] = '3';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_jcarousel_pager_visible'] = '3';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_jcarousel_pager_wrap'] = '';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Banner Image (field_banner_image:fid) */
  $handler->display->display_options['relationships']['field_banner_image_fid']['id'] = 'field_banner_image_fid';
  $handler->display->display_options['relationships']['field_banner_image_fid']['table'] = 'field_data_field_banner_image';
  $handler->display->display_options['relationships']['field_banner_image_fid']['field'] = 'field_banner_image_fid';
  /* Relationship: Content: Logo Image (field_logo_image:fid) */
  $handler->display->display_options['relationships']['field_logo_image_fid']['id'] = 'field_logo_image_fid';
  $handler->display->display_options['relationships']['field_logo_image_fid']['table'] = 'field_data_field_logo_image';
  $handler->display->display_options['relationships']['field_logo_image_fid']['field'] = 'field_logo_image_fid';
  /* Relationship: Content: Gallery Items  (field_gallery_items) */
  $handler->display->display_options['relationships']['field_gallery_items_nid']['id'] = 'field_gallery_items_nid';
  $handler->display->display_options['relationships']['field_gallery_items_nid']['table'] = 'field_data_field_gallery_items';
  $handler->display->display_options['relationships']['field_gallery_items_nid']['field'] = 'field_gallery_items_nid';
  $handler->display->display_options['relationships']['field_gallery_items_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['relationship'] = 'field_gallery_items_nid';
  $handler->display->display_options['fields']['field_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_main_image']['settings'] = array(
    'image_style' => 'archive_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_gallery_items_nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['relationship'] = 'field_gallery_items_nid';
  $handler->display->display_options['fields']['field_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_short_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_short_title']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
  /* Field: Field: Publish date */
  $handler->display->display_options['fields']['field_publish_date']['id'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['field'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['relationship'] = 'field_gallery_items_nid';
  $handler->display->display_options['fields']['field_publish_date']['label'] = '';
  $handler->display->display_options['fields']['field_publish_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publish_date']['settings'] = array(
    'format_type' => 'custom_date_for_ismaili',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: NAT: Tid */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'tan';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['code'] = '$n = menu_get_object();
$tid = $n->field_institutional_space[und][0][tid];
return $tid;';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
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
    'institutional_space' => 'institutional_space',
  );
  $handler->display->display_options['block_description'] = 'Institutional Photo Galleries';

  /* Display: Block 6 */
  $handler = $view->new_display('block', 'Block 6', 'block_6');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_gallery_items_nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['relationship'] = 'field_gallery_items_nid';
  $handler->display->display_options['fields']['field_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_short_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_short_title']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
  /* Field: Content: Event Start Date */
  $handler->display->display_options['fields']['field_event_start_date']['id'] = 'field_event_start_date';
  $handler->display->display_options['fields']['field_event_start_date']['table'] = 'field_data_field_event_start_date';
  $handler->display->display_options['fields']['field_event_start_date']['field'] = 'field_event_start_date';
  $handler->display->display_options['fields']['field_event_start_date']['settings'] = array(
    'format_type' => 'custom_date_for_ismaili',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Event Duration */
  $handler->display->display_options['fields']['field_event_duration']['id'] = 'field_event_duration';
  $handler->display->display_options['fields']['field_event_duration']['table'] = 'field_data_field_event_duration';
  $handler->display->display_options['fields']['field_event_duration']['field'] = 'field_event_duration';
  $handler->display->display_options['fields']['field_event_duration']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Event End Date */
  $handler->display->display_options['fields']['field_event_end_date']['id'] = 'field_event_end_date';
  $handler->display->display_options['fields']['field_event_end_date']['table'] = 'field_data_field_event_end_date';
  $handler->display->display_options['fields']['field_event_end_date']['field'] = 'field_event_end_date';
  $handler->display->display_options['fields']['field_event_end_date']['settings'] = array(
    'format_type' => 'custom_date_for_ismaili',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Event Start Date (field_event_start_date) */
  $handler->display->display_options['sorts']['field_event_start_date_value']['id'] = 'field_event_start_date_value';
  $handler->display->display_options['sorts']['field_event_start_date_value']['table'] = 'field_data_field_event_start_date';
  $handler->display->display_options['sorts']['field_event_start_date_value']['field'] = 'field_event_start_date_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: NAT: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'nat';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'calendar_event' => 'calendar_event',
  );
  /* Filter criterion: Content: Mark as Past (field_mark_past) */
  $handler->display->display_options['filters']['field_mark_past_value']['id'] = 'field_mark_past_value';
  $handler->display->display_options['filters']['field_mark_past_value']['table'] = 'field_data_field_mark_past';
  $handler->display->display_options['filters']['field_mark_past_value']['field'] = 'field_mark_past_value';
  $handler->display->display_options['filters']['field_mark_past_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_mark_past_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['block_description'] = 'Upcoming Events IP';

  /* Display: IP- Calendar Banner */
  $handler = $view->new_display('block', 'IP- Calendar Banner', 'block_7');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-banner';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_main_image']['settings'] = array(
    'image_style' => 'hub_pages_banner',
    'image_link' => 'content',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="banner-text">
<div class="banner-image">
[field_main_image]
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Institutional Space (field_institutional_space) */
  $handler->display->display_options['arguments']['field_institutional_space_tid']['id'] = 'field_institutional_space_tid';
  $handler->display->display_options['arguments']['field_institutional_space_tid']['table'] = 'field_data_field_institutional_space';
  $handler->display->display_options['arguments']['field_institutional_space_tid']['field'] = 'field_institutional_space_tid';
  $handler->display->display_options['arguments']['field_institutional_space_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_institutional_space_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_institutional_space_tid']['default_argument_options']['code'] = '$n = menu_get_object();
$nat = $n->field_institutional_space[und][0][tid];
return $nat;';
  $handler->display->display_options['arguments']['field_institutional_space_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_institutional_space_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_institutional_space_tid']['summary_options']['items_per_page'] = '25';
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
    'calendar_event' => 'calendar_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Include in banner of Hub page (field_include_in_banner_of_hub_p) */
  $handler->display->display_options['filters']['field_include_in_banner_of_hub_p_value']['id'] = 'field_include_in_banner_of_hub_p_value';
  $handler->display->display_options['filters']['field_include_in_banner_of_hub_p_value']['table'] = 'field_data_field_include_in_banner_of_hub_p';
  $handler->display->display_options['filters']['field_include_in_banner_of_hub_p_value']['field'] = 'field_include_in_banner_of_hub_p_value';
  $handler->display->display_options['filters']['field_include_in_banner_of_hub_p_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_include_in_banner_of_hub_p_value']['group'] = 1;
  $handler->display->display_options['block_description'] = 'IP- Calendar Banner';

  /* Display: Block 8 */
  $handler = $view->new_display('block', 'Block 8', 'block_8');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'custom-footer';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Add Menu (field_add_menu) */
  $handler->display->display_options['relationships']['field_add_menu_value']['id'] = 'field_add_menu_value';
  $handler->display->display_options['relationships']['field_add_menu_value']['table'] = 'field_data_field_add_menu';
  $handler->display->display_options['relationships']['field_add_menu_value']['field'] = 'field_add_menu_value';
  $handler->display->display_options['relationships']['field_add_menu_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Menu Title */
  $handler->display->display_options['fields']['field_menu_title']['id'] = 'field_menu_title';
  $handler->display->display_options['fields']['field_menu_title']['table'] = 'field_data_field_menu_title';
  $handler->display->display_options['fields']['field_menu_title']['field'] = 'field_menu_title';
  $handler->display->display_options['fields']['field_menu_title']['relationship'] = 'field_add_menu_value';
  $handler->display->display_options['fields']['field_menu_title']['label'] = '';
  $handler->display->display_options['fields']['field_menu_title']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Menu Link */
  $handler->display->display_options['fields']['field_menu_link']['id'] = 'field_menu_link';
  $handler->display->display_options['fields']['field_menu_link']['table'] = 'field_data_field_menu_link';
  $handler->display->display_options['fields']['field_menu_link']['field'] = 'field_menu_link';
  $handler->display->display_options['fields']['field_menu_link']['relationship'] = 'field_add_menu_value';
  $handler->display->display_options['fields']['field_menu_link']['label'] = '';
  $handler->display->display_options['fields']['field_menu_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_menu_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_menu_link']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_menu_link']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: NAT: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'nat';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'footer_menu' => 'footer_menu',
  );
  $handler->display->display_options['block_description'] = 'Main -Institutional Footer';

  /* Display: Block 2 */
  $handler = $view->new_display('block', 'Block 2', 'block_9');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Add Menu (field_add_menu) */
  $handler->display->display_options['relationships']['field_add_menu_value']['id'] = 'field_add_menu_value';
  $handler->display->display_options['relationships']['field_add_menu_value']['table'] = 'field_data_field_add_menu';
  $handler->display->display_options['relationships']['field_add_menu_value']['field'] = 'field_add_menu_value';
  $handler->display->display_options['relationships']['field_add_menu_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Menu Title */
  $handler->display->display_options['fields']['field_menu_title']['id'] = 'field_menu_title';
  $handler->display->display_options['fields']['field_menu_title']['table'] = 'field_data_field_menu_title';
  $handler->display->display_options['fields']['field_menu_title']['field'] = 'field_menu_title';
  $handler->display->display_options['fields']['field_menu_title']['relationship'] = 'field_add_menu_value';
  $handler->display->display_options['fields']['field_menu_title']['label'] = '';
  $handler->display->display_options['fields']['field_menu_title']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Menu Link */
  $handler->display->display_options['fields']['field_menu_link']['id'] = 'field_menu_link';
  $handler->display->display_options['fields']['field_menu_link']['table'] = 'field_data_field_menu_link';
  $handler->display->display_options['fields']['field_menu_link']['field'] = 'field_menu_link';
  $handler->display->display_options['fields']['field_menu_link']['relationship'] = 'field_add_menu_value';
  $handler->display->display_options['fields']['field_menu_link']['label'] = '';
  $handler->display->display_options['fields']['field_menu_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_menu_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_menu_link']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_menu_link']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Institutional Space (field_institutional_space) */
  $handler->display->display_options['arguments']['field_institutional_space_tid']['id'] = 'field_institutional_space_tid';
  $handler->display->display_options['arguments']['field_institutional_space_tid']['table'] = 'field_data_field_institutional_space';
  $handler->display->display_options['arguments']['field_institutional_space_tid']['field'] = 'field_institutional_space_tid';
  $handler->display->display_options['arguments']['field_institutional_space_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_institutional_space_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_institutional_space_tid']['default_argument_options']['code'] = '$node = menu_get_object();
$tid = $node->field_institutional_space[und][0][tid];
return $tid;';
  $handler->display->display_options['arguments']['field_institutional_space_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_institutional_space_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_institutional_space_tid']['summary_options']['items_per_page'] = '25';
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
    'footer_menu' => 'footer_menu',
  );
  $handler->display->display_options['block_description'] = 'Institutional Footer menu pages';

  /* Display: Block 10 */
  $handler = $view->new_display('block', 'Block 10', 'block_10');

  /* Display: Block 2 */
  $handler = $view->new_display('block', 'Block 2', 'block_11');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Copyright Notice */
  $handler->display->display_options['fields']['field_copyright_notice']['id'] = 'field_copyright_notice';
  $handler->display->display_options['fields']['field_copyright_notice']['table'] = 'field_data_field_copyright_notice';
  $handler->display->display_options['fields']['field_copyright_notice']['field'] = 'field_copyright_notice';
  $handler->display->display_options['fields']['field_copyright_notice']['label'] = '';
  $handler->display->display_options['fields']['field_copyright_notice']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: NAT: Tid */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'tan';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['code'] = '$n = menu_get_object();
$tid = $n->field_institutional_space[und][0][tid];
return $tid;';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
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
    'institutional_space' => 'institutional_space',
  );
  $handler->display->display_options['block_description'] = 'Institutional copyright pages';

  /* Display: IS Banner */
  $handler = $view->new_display('block', 'IS Banner', 'block_12');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Banner Image (field_banner_image:fid) */
  $handler->display->display_options['relationships']['field_banner_image_fid']['id'] = 'field_banner_image_fid';
  $handler->display->display_options['relationships']['field_banner_image_fid']['table'] = 'field_data_field_banner_image';
  $handler->display->display_options['relationships']['field_banner_image_fid']['field'] = 'field_banner_image_fid';
  /* Relationship: Content: Logo Image (field_logo_image:fid) */
  $handler->display->display_options['relationships']['field_logo_image_fid']['id'] = 'field_logo_image_fid';
  $handler->display->display_options['relationships']['field_logo_image_fid']['table'] = 'field_data_field_logo_image';
  $handler->display->display_options['relationships']['field_logo_image_fid']['field'] = 'field_logo_image_fid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Banner Image */
  $handler->display->display_options['fields']['field_banner_image']['id'] = 'field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['table'] = 'field_data_field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['field'] = 'field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['label'] = '';
  $handler->display->display_options['fields']['field_banner_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_banner_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_banner_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = '$nid = arg(3);
return $nid;';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'institutional_space' => 'institutional_space',
  );
  $handler->display->display_options['block_description'] = 'Institutional search Banner';

  /* Display: IS Banner */
  $handler = $view->new_display('block', 'IS Banner', 'block_13');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Banner Image (field_banner_image:fid) */
  $handler->display->display_options['relationships']['field_banner_image_fid']['id'] = 'field_banner_image_fid';
  $handler->display->display_options['relationships']['field_banner_image_fid']['table'] = 'field_data_field_banner_image';
  $handler->display->display_options['relationships']['field_banner_image_fid']['field'] = 'field_banner_image_fid';
  /* Relationship: Content: Logo Image (field_logo_image:fid) */
  $handler->display->display_options['relationships']['field_logo_image_fid']['id'] = 'field_logo_image_fid';
  $handler->display->display_options['relationships']['field_logo_image_fid']['table'] = 'field_data_field_logo_image';
  $handler->display->display_options['relationships']['field_logo_image_fid']['field'] = 'field_logo_image_fid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Logo Image */
  $handler->display->display_options['fields']['field_logo_image']['id'] = 'field_logo_image';
  $handler->display->display_options['fields']['field_logo_image']['table'] = 'field_data_field_logo_image';
  $handler->display->display_options['fields']['field_logo_image']['field'] = 'field_logo_image';
  $handler->display->display_options['fields']['field_logo_image']['label'] = '';
  $handler->display->display_options['fields']['field_logo_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = '$nid = arg(3);
return $nid;';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'institutional_space' => 'institutional_space',
  );
  $handler->display->display_options['block_description'] = 'Institutional search Logo';

  /* Display: Block 3 */
  $handler = $view->new_display('block', 'Block 3', 'block_14');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Banner Image (field_banner_image:fid) */
  $handler->display->display_options['relationships']['field_banner_image_fid']['id'] = 'field_banner_image_fid';
  $handler->display->display_options['relationships']['field_banner_image_fid']['table'] = 'field_data_field_banner_image';
  $handler->display->display_options['relationships']['field_banner_image_fid']['field'] = 'field_banner_image_fid';
  /* Relationship: Content: Logo Image (field_logo_image:fid) */
  $handler->display->display_options['relationships']['field_logo_image_fid']['id'] = 'field_logo_image_fid';
  $handler->display->display_options['relationships']['field_logo_image_fid']['table'] = 'field_data_field_logo_image';
  $handler->display->display_options['relationships']['field_logo_image_fid']['field'] = 'field_logo_image_fid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Select Menu items */
  $handler->display->display_options['fields']['field_select_menu_items']['id'] = 'field_select_menu_items';
  $handler->display->display_options['fields']['field_select_menu_items']['table'] = 'field_data_field_select_menu_items';
  $handler->display->display_options['fields']['field_select_menu_items']['field'] = 'field_select_menu_items';
  $handler->display->display_options['fields']['field_select_menu_items']['label'] = '';
  $handler->display->display_options['fields']['field_select_menu_items']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_select_menu_items']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_select_menu_items']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = '$nid = arg(3);
return $nid;';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'institutional_space' => 'institutional_space',
  );
  $handler->display->display_options['block_description'] = 'Institutional space search Menu';

  /* Display: Block 15 */
  $handler = $view->new_display('block', 'Block 15', 'block_15');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-search';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Upcoming News (field_upcoming_news) */
  $handler->display->display_options['relationships']['field_upcoming_news_nid']['id'] = 'field_upcoming_news_nid';
  $handler->display->display_options['relationships']['field_upcoming_news_nid']['table'] = 'field_data_field_upcoming_news';
  $handler->display->display_options['relationships']['field_upcoming_news_nid']['field'] = 'field_upcoming_news_nid';
  $handler->display->display_options['relationships']['field_upcoming_news_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_upcoming_news_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['relationship'] = 'field_upcoming_news_nid';
  $handler->display->display_options['fields']['field_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_main_image']['settings'] = array(
    'image_style' => 'feature_tiles',
    'image_link' => 'content',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_upcoming_news_nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['relationship'] = 'field_upcoming_news_nid';
  $handler->display->display_options['fields']['field_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_short_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_short_title']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['relationship'] = 'field_upcoming_news_nid';
  $handler->display->display_options['fields']['field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['block_description'] = 'Space Upcoming News';

  /* Display: Block 16 */
  $handler = $view->new_display('block', 'Block 16', 'block_16');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event Start Date */
  $handler->display->display_options['fields']['field_event_start_date']['id'] = 'field_event_start_date';
  $handler->display->display_options['fields']['field_event_start_date']['table'] = 'field_data_field_event_start_date';
  $handler->display->display_options['fields']['field_event_start_date']['field'] = 'field_event_start_date';
  $handler->display->display_options['fields']['field_event_start_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_start_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_start_date']['settings'] = array(
    'format_type' => 'calendar_event',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Event Start Date */
  $handler->display->display_options['fields']['field_event_start_date_1']['id'] = 'field_event_start_date_1';
  $handler->display->display_options['fields']['field_event_start_date_1']['table'] = 'field_data_field_event_start_date';
  $handler->display->display_options['fields']['field_event_start_date_1']['field'] = 'field_event_start_date';
  $handler->display->display_options['fields']['field_event_start_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_start_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_start_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_start_date_1']['settings'] = array(
    'format_type' => 'time_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: List Date */
  $handler->display->display_options['fields']['field_list_date']['id'] = 'field_list_date';
  $handler->display->display_options['fields']['field_list_date']['table'] = 'field_data_field_list_date';
  $handler->display->display_options['fields']['field_list_date']['field'] = 'field_list_date';
  $handler->display->display_options['fields']['field_list_date']['label'] = '';
  $handler->display->display_options['fields']['field_list_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_list_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_list_date']['settings'] = array(
    'format_type' => 'calendar_event',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: List Date */
  $handler->display->display_options['fields']['field_list_date_1']['id'] = 'field_list_date_1';
  $handler->display->display_options['fields']['field_list_date_1']['table'] = 'field_data_field_list_date';
  $handler->display->display_options['fields']['field_list_date_1']['field'] = 'field_list_date';
  $handler->display->display_options['fields']['field_list_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_list_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_list_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_list_date_1']['settings'] = array(
    'format_type' => 'time_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php

if($data->_field_data[nid][entity]->field_list_date){
$date_value = $data->_field_data[nid][entity]->field_list_date[und][0][value];
$date = new DateTime($date_value);
echo $date->format(\'l,j F Y\');
}
else {
$list_data = $data->_field_data[field_main_image][entity]->field_event_start_date[und][0][value];
$list_date = new DateTime($list_date);
echo $list_date->format(\'l,j F Y\');
}
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['label'] = '';
  $handler->display->display_options['fields']['php_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<?php
if($data->_field_data[nid][entity]->field_list_date){
$date_value = $data->_field_data[nid][entity]->field_list_date[und][0][value];
$date = new DateTime($date_value);
echo $date->format(\'g:i A\');
}
else {
$list_data = $data->_field_data[field_main_image][entity]->field_event_start_date[und][0][value];
$list_date = new DateTime($list_date);
echo $list_date->format(\'g:i A\');
}
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: Content: Event Duration */
  $handler->display->display_options['fields']['field_event_duration']['id'] = 'field_event_duration';
  $handler->display->display_options['fields']['field_event_duration']['table'] = 'field_data_field_event_duration';
  $handler->display->display_options['fields']['field_event_duration']['field'] = 'field_event_duration';
  $handler->display->display_options['fields']['field_event_duration']['label'] = '';
  $handler->display->display_options['fields']['field_event_duration']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_duration']['alter']['text'] = '([field_event_duration] hours)';
  $handler->display->display_options['fields']['field_event_duration']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_duration']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '1',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Mapping Location */
  $handler->display->display_options['fields']['field_mapping_location']['id'] = 'field_mapping_location';
  $handler->display->display_options['fields']['field_mapping_location']['table'] = 'field_data_field_mapping_location';
  $handler->display->display_options['fields']['field_mapping_location']['field'] = 'field_mapping_location';
  $handler->display->display_options['fields']['field_mapping_location']['label'] = '';
  $handler->display->display_options['fields']['field_mapping_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mapping_location']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$n =node_load($data->nid);
$name = $n->field_mapping_location[und][0][name];
$street = $n->field_mapping_location[und][0][street];
$additional = $n->field_mapping_location[und][0][additional];
$city = $n->field_mapping_location[und][0][city];
$postal_code = $n->field_mapping_location[und][0][postal_code];
$province_name = $n->field_mapping_location[und][0][province_name];
$country_name = $n->field_mapping_location[und][0][country_name];
print $name.$street.$additional.$city.$postal_code.$province_name.$country_name;
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['text'] = '<a href = "http://maps.google.com/?q=[php]">[field_location] </a>';
  $handler->display->display_options['fields']['field_location']['alter']['path'] = '[field_mapping_location]';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
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
    'calendar_event' => 'calendar_event',
  );
  $handler->display->display_options['block_description'] = 'calendar event';

  /* Display: Block 17 */
  $handler = $view->new_display('block', 'Block 17', 'block_17');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-articles-slideshow';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['caption_field'] = 'none';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_main_image' => 0,
    'nid' => 0,
    'field_short_title' => 0,
    'php' => 0,
    'php_1' => 0,
    'field_main_image_1' => 0,
    'field_short_title_1' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_jcarousel_pager_orientation'] = '0';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_jcarousel_pager_scroll'] = '3';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_jcarousel_pager_visible'] = '3';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_jcarousel_pager_wrap'] = '';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_main_image' => 0,
    'nid' => 0,
    'field_short_title' => 0,
    'php' => 0,
    'php_1' => 0,
    'field_main_image_1' => 0,
    'field_short_title_1' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_jcarousel_pager_orientation'] = '0';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_jcarousel_pager_scroll'] = '3';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_jcarousel_pager_visible'] = '3';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_jcarousel_pager_wrap'] = '';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['hide_on_single_slide'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'none';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Articles for Journal (field_articles_for_journal) */
  $handler->display->display_options['relationships']['field_articles_for_journal_nid']['id'] = 'field_articles_for_journal_nid';
  $handler->display->display_options['relationships']['field_articles_for_journal_nid']['table'] = 'field_data_field_articles_for_journal';
  $handler->display->display_options['relationships']['field_articles_for_journal_nid']['field'] = 'field_articles_for_journal_nid';
  $handler->display->display_options['relationships']['field_articles_for_journal_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_articles_for_journal_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['relationship'] = 'field_articles_for_journal_nid';
  $handler->display->display_options['fields']['field_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_main_image']['settings'] = array(
    'image_style' => 'recipe_main_image',
    'image_link' => '',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['relationship'] = 'field_articles_for_journal_nid';
  $handler->display->display_options['fields']['field_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_short_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_short_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_short_title']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$parent_nid = $data->_field_data[node_field_data_field_articles_for_journal_nid][entity]->field_parent_article[und][0][nid];
print $parent_nid;
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$nid = $data->_field_data[node_field_data_field_articles_for_journal_nid][entity]->nid;print $nid
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_main_image_1']['id'] = 'field_main_image_1';
  $handler->display->display_options['fields']['field_main_image_1']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image_1']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image_1']['relationship'] = 'field_articles_for_journal_nid';
  $handler->display->display_options['fields']['field_main_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_main_image_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_main_image_1']['alter']['path'] = 'node/[php]#node-[php_1]';
  $handler->display->display_options['fields']['field_main_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_main_image_1']['settings'] = array(
    'image_style' => 'recipe_main_image',
    'image_link' => '',
  );
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title_1']['id'] = 'field_short_title_1';
  $handler->display->display_options['fields']['field_short_title_1']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title_1']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title_1']['relationship'] = 'field_articles_for_journal_nid';
  $handler->display->display_options['fields']['field_short_title_1']['label'] = '';
  $handler->display->display_options['fields']['field_short_title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_short_title_1']['alter']['text'] = '<div class="image-caption-credits">
[field_short_title_1]
</div>';
  $handler->display->display_options['fields']['field_short_title_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_short_title_1']['alter']['path'] = 'node/[php]#node-[php_1]';
  $handler->display->display_options['fields']['field_short_title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['block_description'] = 'IP-Journos';

  /* Display: Block 18 */
  $handler = $view->new_display('block', 'Block 18', 'block_18');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'video-gallery-slider';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: NAT: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'nat';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'article' => 'article',
  );
  /* Filter criterion: Content: Article Type (field_article_type) */
  $handler->display->display_options['filters']['field_article_type_tid']['id'] = 'field_article_type_tid';
  $handler->display->display_options['filters']['field_article_type_tid']['table'] = 'field_data_field_article_type';
  $handler->display->display_options['filters']['field_article_type_tid']['field'] = 'field_article_type_tid';
  $handler->display->display_options['filters']['field_article_type_tid']['value'] = array(
    9076 => '9076',
  );
  $handler->display->display_options['filters']['field_article_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_article_type_tid']['vocabulary'] = 'article_types';
  $handler->display->display_options['filters']['field_article_type_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Admin Tags (field_admin_tags) */
  $handler->display->display_options['filters']['field_admin_tags_tid']['id'] = 'field_admin_tags_tid';
  $handler->display->display_options['filters']['field_admin_tags_tid']['table'] = 'field_data_field_admin_tags';
  $handler->display->display_options['filters']['field_admin_tags_tid']['field'] = 'field_admin_tags_tid';
  $handler->display->display_options['filters']['field_admin_tags_tid']['value'] = array(
    10386 => '10386',
  );
  $handler->display->display_options['filters']['field_admin_tags_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_admin_tags_tid']['vocabulary'] = 'administration_tags';
  $handler->display->display_options['filters']['field_admin_tags_tid']['hierarchy'] = 1;
  $handler->display->display_options['block_description'] = 'IP video block';

  /* Display: Block 19 */
  $handler = $view->new_display('block', 'Block 19', 'block_19');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'This is a past event that has concluded.';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'calendar_event' => 'calendar_event',
  );
  /* Filter criterion: Content: Mark as Past (field_mark_past) */
  $handler->display->display_options['filters']['field_mark_past_value']['id'] = 'field_mark_past_value';
  $handler->display->display_options['filters']['field_mark_past_value']['table'] = 'field_data_field_mark_past';
  $handler->display->display_options['filters']['field_mark_past_value']['field'] = 'field_mark_past_value';
  $handler->display->display_options['filters']['field_mark_past_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['block_description'] = 'Mark as Past';
  $translatables['institutional_views'] = array(
    t('Master'),
    t('Institutional views'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('field_gallery_items'),
    t('All'),
    t('Block'),
    t('Institutional Galleries'),
    t('MORE >>'),
    t('Block 2'),
    t('image from field_banner_image'),
    t('image from field_logo_image'),
    t('Institutional Logo'),
    t('Institutional Banner'),
    t('Block 3'),
    t('Institutional Menu'),
    t('Institutional Photo Galleries'),
    t('Block 6'),
    t('Event Start Date'),
    t('Event Duration'),
    t('Event End Date'),
    t('Upcoming Events IP'),
    t('IP- Calendar Banner'),
    t('<div class="banner-text">
<div class="banner-image">
[field_main_image]
</div>'),
    t('Block 8'),
    t('field collection item from field_add_menu'),
    t('Main -Institutional Footer'),
    t('Institutional Footer menu pages'),
    t('Block 10'),
    t('Institutional copyright pages'),
    t('IS Banner'),
    t('Institutional search Banner'),
    t('Institutional search Logo'),
    t('Institutional space search Menu'),
    t('Block 15'),
    t('field_upcoming_news'),
    t('Space Upcoming News'),
    t('Block 16'),
    t('([field_event_duration] hours)'),
    t('<a href = "http://maps.google.com/?q=[php]">[field_location] </a>'),
    t('calendar event'),
    t('Block 17'),
    t('field_articles_for_journal'),
    t('PHP'),
    t('<div class="image-caption-credits">
[field_short_title_1]
</div>'),
    t('IP-Journos'),
    t('Block 18'),
    t('IP video block'),
    t('Block 19'),
    t('This is a past event that has concluded.'),
    t('Mark as Past'),
  );
  $export['institutional_views'] = $view;

  $view = new view();
  $view->name = 'ismaili_space_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Instituitional Space Content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Archive';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
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
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
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
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Content Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    16 => 0,
    21 => 0,
    26 => 0,
    31 => 0,
  );

  /* Display: Content */
  $handler = $view->new_display('page', 'Content', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Institutional Space Content';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    36 => '36',
    41 => '41',
    46 => '46',
    51 => '51',
    26 => '26',
    11 => '11',
  );
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'sort' => array(
      'bef_format' => 'default',
      'advanced' => array(
        'collapsible' => 0,
        'collapsible_label' => 'Sort options',
        'combine' => 0,
        'combine_rewrite' => '',
        'reset' => 0,
        'reset_label' => '',
        'is_secondary' => 0,
      ),
    ),
    'title' => array(
      'bef_format' => 'default',
      'more_options' => array(
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
    'status' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
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
    'type' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
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
    'field_microsite_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
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
    'field_primary_category_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
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
    'state_1' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
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
    'current' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
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
    'field_tags_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
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
    'field_short_title_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
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
    'field_summary_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
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
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'type' => 'type',
    'name' => 'name',
    'status' => 'status',
    'state' => 'state',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
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
    'type' => array(
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
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'state' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::nodequeue_add_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::scs_views_create_newsletter_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_fire_trigger' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Add/Replace Tags',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'article::field_geographies' => 'article::field_geographies',
          'article::field_tags' => 'article::field_tags',
          'article::field_primary_category' => 'article::field_primary_category',
          'article::field_microsite' => 'article::field_microsite',
          'article::field_admin_tags' => 'article::field_admin_tags',
          'page::field_tags' => 'page::field_tags',
          'page::field_microsite' => 'page::field_microsite',
          'page::field_admin_tags' => 'page::field_admin_tags',
          'child_compound_articles::field_primary_category' => 'child_compound_articles::field_primary_category',
          'child_compound_articles::field_microsite' => 'child_compound_articles::field_microsite',
          'events::field_geographies' => 'events::field_geographies',
          'events::field_tags' => 'events::field_tags',
          'events::field_primary_category' => 'events::field_primary_category',
          'events::field_microsite' => 'events::field_microsite',
          'events::field_admin_tags' => 'events::field_admin_tags',
          'photo_gallery::field_geographies' => 'photo_gallery::field_geographies',
          'photo_gallery::field_tags' => 'photo_gallery::field_tags',
          'photo_gallery::field_primary_category' => 'photo_gallery::field_primary_category',
          'photo_gallery::field_microsite' => 'photo_gallery::field_microsite',
          'photo_gallery::field_admin_tags' => 'photo_gallery::field_admin_tags',
          'hub_page::field_microsite' => 'hub_page::field_microsite',
          'ismaili_centres::field_admin_tags' => 'ismaili_centres::field_admin_tags',
          'parent_compound_articles::field_tags' => 'parent_compound_articles::field_tags',
          'parent_compound_articles::field_primary_category' => 'parent_compound_articles::field_primary_category',
          'parent_compound_articles::field_geographies' => 'parent_compound_articles::field_geographies',
          'parent_compound_articles::field_microsite' => 'parent_compound_articles::field_microsite',
          'parent_compound_articles::field_admin_tags' => 'parent_compound_articles::field_admin_tags',
          'recipe::field_tags' => 'recipe::field_tags',
          'speech::field_microsite' => 'speech::field_microsite',
          'speech::field_primary_category' => 'speech::field_primary_category',
          'speech::field_geographies' => 'speech::field_geographies',
          'speech::field_tags' => 'speech::field_tags',
          'speech_quote::field_microsite' => 'speech_quote::field_microsite',
          'video::field_geographies' => 'video::field_geographies',
          'video::field_tags' => 'video::field_tags',
          'video::field_primary_category' => 'video::field_primary_category',
          'video::field_microsite' => 'video::field_microsite',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::nodequeue_remove_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::1021' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::workbench_moderation_set_state_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
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
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'OP';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['sorts']['changed']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['changed']['expose']['label'] = 'Updated date';
  /* Sort criterion: Field: Publish date (field_publish_date) */
  $handler->display->display_options['sorts']['field_publish_date_value']['id'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['sorts']['field_publish_date_value']['field'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_publish_date_value']['expose']['label'] = 'Publish date';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Institutional Space (field_institutional_space) */
  $handler->display->display_options['arguments']['field_institutional_space_tid']['id'] = 'field_institutional_space_tid';
  $handler->display->display_options['arguments']['field_institutional_space_tid']['table'] = 'field_data_field_institutional_space';
  $handler->display->display_options['arguments']['field_institutional_space_tid']['field'] = 'field_institutional_space_tid';
  $handler->display->display_options['arguments']['field_institutional_space_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_institutional_space_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_institutional_space_tid']['default_argument_options']['code'] = 'global $user;
 if(in_array(\'JI Contributor\', $user->roles) || in_array(\'JI Editor\', $user->roles) || in_array(\'JI Publisher\', $user->roles)) {
     $space = get_ji_user_selected_space($user->uid);
     $default_space = nat_get_terms_by_vocabulary($space);
     reset($default_space);
     if(key($default_space) > 0) {
      return key($default_space);
     } else {
     return 0;
   }
}

if(in_array(\'JI Administrator\', $user->roles)) {
$spaces = get_ji_user_selected_all_space($user->uid);
$sp = array();
foreach($spaces as $space){
$default_space = nat_get_terms_by_vocabulary($space);
reset($default_space);
if(key($default_space) > 0) {
$sp[] = key($default_space);
}
}

$sps= implode(\'+\', $sp);
    return $sps;
}  
return \'all\';';
  $handler->display->display_options['arguments']['field_institutional_space_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_institutional_space_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_institutional_space_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_institutional_space_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_institutional_space_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_institutional_space_tid']['validate_options']['vocabularies'] = array(
    'institutional_space' => 'institutional_space',
  );
  $handler->display->display_options['arguments']['field_institutional_space_tid']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['field_institutional_space_tid']['validate']['fail'] = 'access denied';
  $handler->display->display_options['arguments']['field_institutional_space_tid']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    11 => 0,
    16 => 0,
    21 => 0,
    26 => 0,
    31 => 0,
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    16 => 0,
    21 => 0,
    26 => 0,
    31 => 0,
    41 => 0,
    46 => 0,
    51 => 0,
    36 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'page' => 'page',
    'calendar_event' => 'calendar_event',
    'calendar_pages' => 'calendar_pages',
    'child_compound_articles' => 'child_compound_articles',
    'events' => 'events',
    'footer_menu' => 'footer_menu',
    'photo_gallery' => 'photo_gallery',
    'hub_page' => 'hub_page',
    'parent_compound_articles' => 'parent_compound_articles',
    'webform' => 'webform',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Content Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    16 => 0,
    21 => 0,
    26 => 0,
    31 => 0,
    36 => 0,
    41 => 0,
    46 => 0,
    51 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator_id'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['label'] = 'Tags';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['identifier'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    16 => 0,
    21 => 0,
    26 => 0,
    31 => 0,
  );
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';
  /* Filter criterion: Content: Short Title (field_short_title) */
  $handler->display->display_options['filters']['field_short_title_value']['id'] = 'field_short_title_value';
  $handler->display->display_options['filters']['field_short_title_value']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['filters']['field_short_title_value']['field'] = 'field_short_title_value';
  $handler->display->display_options['filters']['field_short_title_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_short_title_value']['group'] = 1;
  $handler->display->display_options['filters']['field_short_title_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_short_title_value']['expose']['operator_id'] = 'field_short_title_value_op';
  $handler->display->display_options['filters']['field_short_title_value']['expose']['label'] = 'Short Title';
  $handler->display->display_options['filters']['field_short_title_value']['expose']['operator'] = 'field_short_title_value_op';
  $handler->display->display_options['filters']['field_short_title_value']['expose']['identifier'] = 'field_short_title_value';
  $handler->display->display_options['filters']['field_short_title_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    16 => 0,
    21 => 0,
    26 => 0,
    31 => 0,
  );
  /* Filter criterion: Content: Summary (field_summary) */
  $handler->display->display_options['filters']['field_summary_value']['id'] = 'field_summary_value';
  $handler->display->display_options['filters']['field_summary_value']['table'] = 'field_data_field_summary';
  $handler->display->display_options['filters']['field_summary_value']['field'] = 'field_summary_value';
  $handler->display->display_options['filters']['field_summary_value']['operator'] = 'word';
  $handler->display->display_options['filters']['field_summary_value']['group'] = 1;
  $handler->display->display_options['filters']['field_summary_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_summary_value']['expose']['operator_id'] = 'field_summary_value_op';
  $handler->display->display_options['filters']['field_summary_value']['expose']['label'] = 'Summary';
  $handler->display->display_options['filters']['field_summary_value']['expose']['operator'] = 'field_summary_value_op';
  $handler->display->display_options['filters']['field_summary_value']['expose']['identifier'] = 'field_summary_value';
  $handler->display->display_options['filters']['field_summary_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    16 => 0,
    21 => 0,
    26 => 0,
    31 => 0,
  );
  /* Filter criterion: Content: Microsite / Institutional Space (field_microsite_institutional_sp) */
  $handler->display->display_options['filters']['field_microsite_institutional_sp_tid']['id'] = 'field_microsite_institutional_sp_tid';
  $handler->display->display_options['filters']['field_microsite_institutional_sp_tid']['table'] = 'field_data_field_microsite_institutional_sp';
  $handler->display->display_options['filters']['field_microsite_institutional_sp_tid']['field'] = 'field_microsite_institutional_sp_tid';
  $handler->display->display_options['filters']['field_microsite_institutional_sp_tid']['value'] = array(
    10316 => '10316',
  );
  $handler->display->display_options['filters']['field_microsite_institutional_sp_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_microsite_institutional_sp_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_microsite_institutional_sp_tid']['vocabulary'] = 'microsite_space';
  /* Filter criterion: Workbench Moderation: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['group'] = 1;
  $handler->display->display_options['filters']['state']['exposed'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['operator_id'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['label'] = 'State';
  $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
  $handler->display->display_options['filters']['state']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    16 => 0,
    21 => 0,
    26 => 0,
    31 => 0,
    36 => 0,
    41 => 0,
    46 => 0,
    51 => 0,
  );
  $handler->display->display_options['path'] = 'admin/institutional-space/content';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Institutional Space';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Assigned Institutional space';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    36 => '36',
    41 => '41',
    46 => '46',
    51 => '51',
    26 => '26',
    11 => '11',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h3>Assigned institutional space</h3>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'OP';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: NAT: Tid */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'tan';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['code'] = 'global $user;
 if(in_array(\'JI Contributor\', $user->roles) || in_array(\'JI Editor\', $user->roles) || in_array(\'JI Publisher\', $user->roles)) {
     $space = get_ji_user_selected_space($user->uid);
     $default_space = nat_get_terms_by_vocabulary($space);
     reset($default_space);
     if(key($default_space) > 0) {
      return key($default_space);
     } else {
     return 0;
   }
}

if(in_array(\'JI Administrator\', $user->roles)) {
$spaces = get_ji_user_selected_all_space($user->uid);
$sp = array();
foreach($spaces as $space){
$default_space = nat_get_terms_by_vocabulary($space);
reset($default_space);
if(key($default_space) > 0) {
$sp[] = key($default_space);
}
}

$sps= implode(\'+\', $sp);
    return $sps;
}  
return \'all\';';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'institutional_space' => 'institutional_space',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['tid']['validate']['fail'] = 'access denied';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = TRUE;
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = TRUE;
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
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'institutional_space' => 'institutional_space',
  );
  $handler->display->display_options['displays'] = array(
    'page_5' => 'page_5',
    'default' => 0,
  );
  $translatables['ismaili_space_content'] = array(
    t('Master'),
    t('Archive'),
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
    t('author'),
    t('Title'),
    t('Content Type'),
    t('Content'),
    t('Institutional Space Content'),
    t('Select any filter and click on Apply to see results'),
    t('- Choose an operation -'),
    t('Add/Replace Tags'),
    t('Type'),
    t('Published'),
    t('OP'),
    t('Updated date'),
    t('Publish date'),
    t('All'),
    t('Tags'),
    t('Short Title'),
    t('Summary'),
    t('State'),
    t('Attachment'),
    t('Assigned Institutional space'),
    t('<h3>Assigned institutional space</h3>'),
  );
  $export['ismaili_space_content'] = $view;

  return $export;
}
