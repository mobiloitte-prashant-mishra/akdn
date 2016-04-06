<?php
/**
 * @file
 * solr_quotes.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function solr_quotes_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'solr_quotes';
  $view->description = '';
  $view->tag = 'press center';
  $view->base_table = 'search_api_index_quote_index';
  $view->human_name = 'solr_quote_finder';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recent Speeches';
  $handler->display->display_options['css_class'] = 'akdn-solr-quote-listing page-press-centre';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_short_title' => 'field_short_title',
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results found!';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Indexed Node: Speech Reference */
  $handler->display->display_options['relationships']['field_speech_reference']['id'] = 'field_speech_reference';
  $handler->display->display_options['relationships']['field_speech_reference']['table'] = 'search_api_index_quote_index';
  $handler->display->display_options['relationships']['field_speech_reference']['field'] = 'field_speech_reference';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_quote_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_quote_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'speech_quote' => 'speech_quote',
  );

  /* Display: Akdn : Speech quotes */
  $handler = $view->new_display('page', 'Akdn : Speech quotes', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Quotes Finder';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'akdn-solr-quote-listing page-press-centre quote-finder-wrap';
  $handler->display->display_options['display_description'] = 'Akdn : Speech quotes';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    1 => array(
      'field' => 'quotes_location',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'row-toggle-[speech_quote_speech_nid]';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_speech_reference' => 'field_speech_reference',
    'php' => 'php',
    'quotes_location' => 'quotes_location',
    'php_2' => 'php_2',
    'body' => 'body',
    'field_speech_themes' => 'field_speech_themes',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<h2 class=\'quotes-main-title\'>Quotations by His Highness the Aga Khan </h2>
<span class=\'quotes-total-records\'>(@total quotations found)</span>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Quotes Publish Date Integer */
  $handler->display->display_options['fields']['field_quotes_publish_date']['id'] = 'field_quotes_publish_date';
  $handler->display->display_options['fields']['field_quotes_publish_date']['table'] = 'search_api_index_quote_index';
  $handler->display->display_options['fields']['field_quotes_publish_date']['field'] = 'field_quotes_publish_date';
  $handler->display->display_options['fields']['field_quotes_publish_date']['label'] = '';
  $handler->display->display_options['fields']['field_quotes_publish_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_quotes_publish_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_quotes_publish_date']['separator'] = '';
  $handler->display->display_options['fields']['field_quotes_publish_date']['link_to_entity'] = 0;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_type'] = 'div';
  $handler->display->display_options['fields']['php']['element_class'] = 'views-field-field-publish-date';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['php']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$pdate = $data->{\'_entity_properties\'}[\'field_quotes_publish_date\'];
$output = date("d F Y", $pdate);
print $output;
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Indexed Node: Quotes Location */
  $handler->display->display_options['fields']['quotes_location']['id'] = 'quotes_location';
  $handler->display->display_options['fields']['quotes_location']['table'] = 'search_api_index_quote_index';
  $handler->display->display_options['fields']['quotes_location']['field'] = 'quotes_location';
  $handler->display->display_options['fields']['quotes_location']['label'] = '';
  $handler->display->display_options['fields']['quotes_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['quotes_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['quotes_location']['alter']['text'] = '<span class=\'quote-date-location\'>[php] - [quotes_location]</span>';
  $handler->display->display_options['fields']['quotes_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['quotes_location']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['quotes_location']['link_to_entity'] = 0;
  /* Field: Indexed Node: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_quote_index';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  /* Field: Indexed Node: Speech Themes */
  $handler->display->display_options['fields']['field_speech_themes']['id'] = 'field_speech_themes';
  $handler->display->display_options['fields']['field_speech_themes']['table'] = 'search_api_index_quote_index';
  $handler->display->display_options['fields']['field_speech_themes']['field'] = 'field_speech_themes';
  $handler->display->display_options['fields']['field_speech_themes']['label'] = '';
  $handler->display->display_options['fields']['field_speech_themes']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speech_themes']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speech_themes']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_speech_themes']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_speech_themes']['bypass_access'] = 0;
  /* Field: Indexed Node: Speech Reference */
  $handler->display->display_options['fields']['field_speech_reference_1']['id'] = 'field_speech_reference_1';
  $handler->display->display_options['fields']['field_speech_reference_1']['table'] = 'search_api_index_quote_index';
  $handler->display->display_options['fields']['field_speech_reference_1']['field'] = 'field_speech_reference';
  $handler->display->display_options['fields']['field_speech_reference_1']['label'] = '';
  $handler->display->display_options['fields']['field_speech_reference_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_speech_reference_1']['element_class'] = 'quotes-title';
  $handler->display->display_options['fields']['field_speech_reference_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speech_reference_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_speech_reference_1']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_speech_reference_1']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_speech_reference_1']['bypass_access'] = 0;
  /* Field: Indexed Node: Speech Quote Speech Nid */
  $handler->display->display_options['fields']['speech_quote_speech_nid']['id'] = 'speech_quote_speech_nid';
  $handler->display->display_options['fields']['speech_quote_speech_nid']['table'] = 'search_api_index_quote_index';
  $handler->display->display_options['fields']['speech_quote_speech_nid']['field'] = 'speech_quote_speech_nid';
  $handler->display->display_options['fields']['speech_quote_speech_nid']['label'] = '';
  $handler->display->display_options['fields']['speech_quote_speech_nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['speech_quote_speech_nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['speech_quote_speech_nid']['link_to_entity'] = 0;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$nid = $data->{\'_entity_properties\'}[\'field_speech_reference\'];
$static->nid[$nid][]= $row->title_field;
if (count($static->nid[$nid]) == 1) {
  $output = "<div class =\'show-more-quotes\'>";
  $output .= "<span class =\'akdn-solr-more-link\'>";
  $output .= l(t("Read full Speech"), "node/" . $nid);
  $output .= "</span>";
  $output .= "<span class =\'more-quotes\'>";
  $label = t("More Quotations");
  $output .= \'<span id="show_more_quotes_for_\' . $nid . \'" class="toggle-\' .  $nid . \'">\' . $label . \'</span>\';
  $output .= "</span>";
  $output .= "</div>";
  print $output;
}
 ?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="quotes-content">
<div class="quotes-body">[body]</div>
[php_1]
</div>';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Node: Quotes Publish Date */
  $handler->display->display_options['sorts']['quote_publish_date']['id'] = 'quote_publish_date';
  $handler->display->display_options['sorts']['quote_publish_date']['table'] = 'search_api_index_quote_index';
  $handler->display->display_options['sorts']['quote_publish_date']['field'] = 'quote_publish_date';
  $handler->display->display_options['sorts']['quote_publish_date']['order'] = 'DESC';
  /* Sort criterion: Indexed Node: Speech Quote Speech Nid */
  $handler->display->display_options['sorts']['speech_quote_speech_nid']['id'] = 'speech_quote_speech_nid';
  $handler->display->display_options['sorts']['speech_quote_speech_nid']['table'] = 'search_api_index_quote_index';
  $handler->display->display_options['sorts']['speech_quote_speech_nid']['field'] = 'speech_quote_speech_nid';
  $handler->display->display_options['path'] = 'speech-quotes';
  $translatables['solr_quotes'] = array(
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
    t('No results found!'),
    t('Speech Reference'),
    t('Node ID'),
    t('.'),
    t(','),
    t('Akdn : Speech quotes'),
    t('Quotes Finder'),
    t('<h2 class=\'quotes-main-title\'>Quotations by His Highness the Aga Khan </h2>
<span class=\'quotes-total-records\'>(@total quotations found)</span>'),
    t('<span class=\'quote-date-location\'>[php] - [quotes_location]</span>'),
    t('<div class="quotes-content">
<div class="quotes-body">[body]</div>
[php_1]
</div>'),
  );
  $export['solr_quotes'] = $view;

  return $export;
}
