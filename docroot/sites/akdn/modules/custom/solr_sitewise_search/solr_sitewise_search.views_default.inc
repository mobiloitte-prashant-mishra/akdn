<?php
/**
 * @file
 * solr_sitewise_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function solr_sitewise_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'solr_site_search';
  $view->description = '';
  $view->tag = 'press center';
  $view->base_table = 'search_api_index_akdn';
  $view->human_name = 'solr_site_search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recent Speeches';
  $handler->display->display_options['css_class'] = 'akdn-solr-listing';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '16';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_short_title' => 'field_short_title',
    'body_summary' => 'body_summary',
    'nothing' => 'nothing',
  );
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';

  /* Display: Site Search */
  $handler = $view->new_display('page', 'Site Search', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Search Results';
  $handler->display->display_options['display_description'] = 'Site Search';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
$title = t("Search Results");
/*$view_all_label = t(\'| View All\');
$path = \'search\';
$link = l($view_all_label, $path);
*/
$output = "<div class=\'press-center-header\'><span class=\'press-center-header-label\'>";
$output .= $title;
$output .= "</span>";
/*
$output .= "<span class=\'press-center-header-link\'>";
$output .= $link;
$output .= "</span>";
*/
$output .= "</div>";
print $output;
?>';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results found!';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Type of the Node */
  $handler->display->display_options['fields']['entity_type_1']['id'] = 'entity_type_1';
  $handler->display->display_options['fields']['entity_type_1']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['fields']['entity_type_1']['field'] = 'entity_type';
  $handler->display->display_options['fields']['entity_type_1']['label'] = '';
  $handler->display->display_options['fields']['entity_type_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_type_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_type_1']['link_to_entity'] = 0;
  /* Field: Indexed Node: Media Source */
  $handler->display->display_options['fields']['field_media_source']['id'] = 'field_media_source';
  $handler->display->display_options['fields']['field_media_source']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['fields']['field_media_source']['field'] = 'field_media_source';
  $handler->display->display_options['fields']['field_media_source']['label'] = '';
  $handler->display->display_options['fields']['field_media_source']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_media_source']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_media_source']['alter']['path'] = '[field_media_source-url]';
  $handler->display->display_options['fields']['field_media_source']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_media_source']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_media_source']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_media_source']['type'] = 'link_plain';
  /* Field: Indexed Node: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['text'] = '[field_media_source][url] ';
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Indexed Node: Image Uri for nodes [event/article/publication/speech/gallery/video/page] */
  $handler->display->display_options['fields']['image_public_uri']['id'] = 'image_public_uri';
  $handler->display->display_options['fields']['image_public_uri']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['fields']['image_public_uri']['field'] = 'image_public_uri';
  $handler->display->display_options['fields']['image_public_uri']['label'] = '';
  $handler->display->display_options['fields']['image_public_uri']['element_class'] = 'akdn-solr-img-link';
  $handler->display->display_options['fields']['image_public_uri']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['image_public_uri']['link_to_entity'] = 0;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_class'] = 'akdn-solr-short-link';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php if (isset($data->_entity_properties[\'node_short_title\']) && !empty($data->_entity_properties[\'node_short_title\']) && $data->_entity_properties[\'node_type\'] != \'hub_page\' && $data->_entity_properties[\'node_type\'] != \'page\'): ?>
  <?php print l($data->_entity_properties[\'node_short_title\'], \'node/\' . $data->_entity_properties[\'nid\']); ?>
<?php else : ?>
  <?php print l($data->_entity_properties[\'node_title\'], \'node/\' . $data->_entity_properties[\'nid\']); ?>
<?php endif; ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Indexed Node: Publish Date */
  $handler->display->display_options['fields']['field_publish_date']['id'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['fields']['field_publish_date']['field'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['label'] = '';
  $handler->display->display_options['fields']['field_publish_date']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['field_publish_date']['element_class'] = 'akdn-solr-date-link';
  $handler->display->display_options['fields']['field_publish_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publish_date']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Node: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['field_event_date']['element_class'] = 'akdn-solr-date-link';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_short_title']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['field_short_title']['alter']['link_class'] = 'akdn-solr-short-link';
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_short_title']['empty'] = '[title_field]';
  $handler->display->display_options['fields']['field_short_title']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_short_title']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'More';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['nothing']['alter']['link_class'] = 'akdn-solr-more-link';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Type of the Node */
  $handler->display->display_options['fields']['entity_type']['id'] = 'entity_type';
  $handler->display->display_options['fields']['entity_type']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['fields']['entity_type']['field'] = 'entity_type';
  $handler->display->display_options['fields']['entity_type']['label'] = '';
  $handler->display->display_options['fields']['entity_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['entity_type']['alter']['text'] = '[entity_type]';
  $handler->display->display_options['fields']['entity_type']['element_class'] = 'akdn-solr-type-of-node';
  $handler->display->display_options['fields']['entity_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_type']['link_to_entity'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  $handler->display->display_options['sorts']['search_api_relevance']['expose']['label'] = 'Relevance';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'agency' => 'agency',
    'architecture_project' => 'architecture_project',
    'article' => 'article',
    'award_cycle' => 'award_cycle',
    'page' => 'page',
    'custom_content' => 'custom_content',
    'event' => 'event',
    'gallery' => 'gallery',
    'geography' => 'geography',
    'podcast' => 'podcast',
    'publication' => 'publication',
    'speech' => 'speech',
    'project' => 'project',
    'focus_area' => 'focus_area',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Indexed Node: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['operator'] = 'OR';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Fulltext search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'text';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['mode'] = 'filter';
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'search_api_aggregation_1' => 'search_api_aggregation_1',
  );
  $handler->display->display_options['path'] = 'search';

  /* Display: Site Search */
  $handler = $view->new_display('page', 'Site Search', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'What\'s new';
  $handler->display->display_options['display_description'] = 'Site Search';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results found!';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Indexed Node: Image Uri for nodes [event/article/publication/speech/gallery/video/page] */
  $handler->display->display_options['fields']['image_public_uri']['id'] = 'image_public_uri';
  $handler->display->display_options['fields']['image_public_uri']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['fields']['image_public_uri']['field'] = 'image_public_uri';
  $handler->display->display_options['fields']['image_public_uri']['label'] = '';
  $handler->display->display_options['fields']['image_public_uri']['element_class'] = 'akdn-solr-img-link';
  $handler->display->display_options['fields']['image_public_uri']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['image_public_uri']['link_to_entity'] = 0;
  /* Field: Indexed Node: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_short_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_short_title']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['field_short_title']['alter']['link_class'] = 'akdn-solr-short-link';
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_short_title']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_short_title']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Indexed Node: Publish Date */
  $handler->display->display_options['fields']['field_publish_date']['id'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['fields']['field_publish_date']['field'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['label'] = '';
  $handler->display->display_options['fields']['field_publish_date']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_publish_date']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['field_publish_date']['element_class'] = 'akdn-solr-date-link';
  $handler->display->display_options['fields']['field_publish_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publish_date']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Node: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['field_event_date']['element_class'] = 'akdn-solr-date-link';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Node: Type of the Node */
  $handler->display->display_options['fields']['entity_type']['id'] = 'entity_type';
  $handler->display->display_options['fields']['entity_type']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['fields']['entity_type']['field'] = 'entity_type';
  $handler->display->display_options['fields']['entity_type']['label'] = '';
  $handler->display->display_options['fields']['entity_type']['element_class'] = 'akdn-solr-type-of-node';
  $handler->display->display_options['fields']['entity_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_type']['link_to_entity'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = ' More';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['nothing']['alter']['link_class'] = 'akdn-solr-more-link';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
    'speech' => 'speech',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Indexed Node: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Indexed Node: Promoted to frontpage */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['group'] = 1;
  /* Filter criterion: Indexed Node: Article Type */
  $handler->display->display_options['filters']['field_article_cat']['id'] = 'field_article_cat';
  $handler->display->display_options['filters']['field_article_cat']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['filters']['field_article_cat']['field'] = 'field_article_cat';
  $handler->display->display_options['filters']['field_article_cat']['operator'] = '<>';
  $handler->display->display_options['filters']['field_article_cat']['value'] = array(
    2611 => '2611',
    2612 => '2612',
  );
  $handler->display->display_options['filters']['field_article_cat']['group'] = 2;
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'article' => 'article',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: Indexed Node: Status */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['status_1']['group'] = 2;
  /* Filter criterion: Indexed Node: Promoted to frontpage */
  $handler->display->display_options['filters']['promote_1']['id'] = 'promote_1';
  $handler->display->display_options['filters']['promote_1']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['filters']['promote_1']['field'] = 'promote';
  $handler->display->display_options['filters']['promote_1']['value'] = '1';
  $handler->display->display_options['filters']['promote_1']['group'] = 2;
  $handler->display->display_options['path'] = 'what-is-new';
  $translatables['solr_site_search'] = array(
    t('Master'),
    t('Recent Speeches'),
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
    t('Node ID'),
    t('.'),
    t(','),
    t('Site Search'),
    t('Search Results'),
    t('No results found!'),
    t('[field_media_source][url] '),
    t('[title_field]'),
    t('More'),
    t('[entity_type]'),
    t('Relevance'),
    t('Fulltext search'),
    t('What\'s new'),
    t(' More'),
  );
  $export['solr_site_search'] = $view;

  return $export;
}
