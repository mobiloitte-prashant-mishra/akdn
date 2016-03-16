<?php
/**
 * @file
 * ak_syndication_source.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ak_syndication_source_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'agency';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Agency';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Agency';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    1 => '1',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_speech_audio' => 'field_speech_audio',
    'field_speech_image' => 'field_speech_image',
    'field_speech_location' => 'field_speech_location',
    'field_publication_date' => 'field_publication_date',
    'field_publish_date' => 'field_publish_date',
    'field_short_title' => 'field_short_title',
    'field_speech_themes' => 'field_speech_themes',
    'field_speech_type' => 'field_speech_type',
    'field_country' => 'field_country',
    'field_speech_author' => 'field_speech_author',
    'field_date_decade' => 'field_date_decade',
    'field_speech_event' => 'field_speech_event',
    'field_press_releases' => 'field_press_releases',
    'field_publication_url' => 'field_publication_url',
    'field_speech_speaker' => 'field_speech_speaker',
    'field_speech_video' => 'field_speech_video',
    'field_caption' => 'field_caption',
    'field_create_featured_content' => 'field_create_featured_content',
    'field_cycle_year' => 'field_cycle_year',
    'field_enable_project_slider' => 'field_enable_project_slider',
    'field_external_media' => 'field_external_media',
    'field_hub_page' => 'field_hub_page',
    'field_simplenews_term' => 'field_simplenews_term',
    'field_pages_to_exclude' => 'field_pages_to_exclude',
    'field_podcasts_reference' => 'field_podcasts_reference',
    'field_events_reference' => 'field_events_reference',
    'field_related_in_the_media' => 'field_related_in_the_media',
    'field_related_news' => 'field_related_news',
    'field_photos_reference' => 'field_photos_reference',
    'field_press_reference' => 'field_press_reference',
    'field_related_project' => 'field_related_project',
    'field_related_publications' => 'field_related_publications',
    'field_speeches_reference' => 'field_speeches_reference',
    'field_feature_image' => 'field_feature_image',
    'field_agency' => 'field_agency',
    'field_tags' => 'field_tags',
    'field_focus_area' => 'field_focus_area',
    'body' => 'body',
    'nid' => 'nid',
    'nothing' => 'nothing',
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
    'field_speech_audio' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publication_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publish_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_short_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_themes' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_country' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_author' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_decade' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_event' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_press_releases' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publication_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_speaker' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_video' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_caption' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_create_featured_content' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cycle_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_enable_project_slider' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_external_media' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hub_page' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_simplenews_term' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pages_to_exclude' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_podcasts_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_events_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_in_the_media' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_news' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_photos_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_press_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_project' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_publications' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speeches_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_feature_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_agency' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tags' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_focus_area' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
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
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_akdn' => 'deploy_to_akdn',
    'list_of_contents' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Acronym */
  $handler->display->display_options['fields']['field_agency_acronym']['id'] = 'field_agency_acronym';
  $handler->display->display_options['fields']['field_agency_acronym']['table'] = 'field_data_field_agency_acronym';
  $handler->display->display_options['fields']['field_agency_acronym']['field'] = 'field_agency_acronym';
  /* Field: Content: About Page */
  $handler->display->display_options['fields']['field_about_page']['id'] = 'field_about_page';
  $handler->display->display_options['fields']['field_about_page']['table'] = 'field_data_field_about_page';
  $handler->display->display_options['fields']['field_about_page']['field'] = 'field_about_page';
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_agency_logo']['id'] = 'field_agency_logo';
  $handler->display->display_options['fields']['field_agency_logo']['table'] = 'field_data_field_agency_logo';
  $handler->display->display_options['fields']['field_agency_logo']['field'] = 'field_agency_logo';
  $handler->display->display_options['fields']['field_agency_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_agency_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Logo with Title */
  $handler->display->display_options['fields']['field_agency_logo_with_title']['id'] = 'field_agency_logo_with_title';
  $handler->display->display_options['fields']['field_agency_logo_with_title']['table'] = 'field_data_field_agency_logo_with_title';
  $handler->display->display_options['fields']['field_agency_logo_with_title']['field'] = 'field_agency_logo_with_title';
  $handler->display->display_options['fields']['field_agency_logo_with_title']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_agency_logo_with_title']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Banner Item Area */
  $handler->display->display_options['fields']['field_featured_content_area']['id'] = 'field_featured_content_area';
  $handler->display->display_options['fields']['field_featured_content_area']['table'] = 'field_data_field_featured_content_area';
  $handler->display->display_options['fields']['field_featured_content_area']['field'] = 'field_featured_content_area';
  $handler->display->display_options['fields']['field_featured_content_area']['type'] = 'list_key';
  /* Field: Content: Banner Item Content */
  $handler->display->display_options['fields']['field_featured_content_nodes']['id'] = 'field_featured_content_nodes';
  $handler->display->display_options['fields']['field_featured_content_nodes']['table'] = 'field_data_field_featured_content_nodes';
  $handler->display->display_options['fields']['field_featured_content_nodes']['field'] = 'field_featured_content_nodes';
  $handler->display->display_options['fields']['field_featured_content_nodes']['delta_offset'] = '0';
  /* Field: Content: Enable Project Carousel */
  $handler->display->display_options['fields']['field_enable_project_slider']['id'] = 'field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['table'] = 'field_data_field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['field'] = 'field_enable_project_slider';
  /* Field: Content: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  /* Field: Content: Turn on secondary footer */
  $handler->display->display_options['fields']['field_turn_on_secondary_footer']['id'] = 'field_turn_on_secondary_footer';
  $handler->display->display_options['fields']['field_turn_on_secondary_footer']['table'] = 'field_data_field_turn_on_secondary_footer';
  $handler->display->display_options['fields']['field_turn_on_secondary_footer']['field'] = 'field_turn_on_secondary_footer';
  /* Field: Content: Footer Video */
  $handler->display->display_options['fields']['field_footer_video']['id'] = 'field_footer_video';
  $handler->display->display_options['fields']['field_footer_video']['table'] = 'field_data_field_footer_video';
  $handler->display->display_options['fields']['field_footer_video']['field'] = 'field_footer_video';
  $handler->display->display_options['fields']['field_footer_video']['click_sort_column'] = 'brightcove_id';
  $handler->display->display_options['fields']['field_footer_video']['settings'] = array(
    'width' => '425',
    'height' => '350',
  );
  /* Field: Content: 3rd Party RSS */
  $handler->display->display_options['fields']['field_3rd_party_rss']['id'] = 'field_3rd_party_rss';
  $handler->display->display_options['fields']['field_3rd_party_rss']['table'] = 'field_data_field_3rd_party_rss';
  $handler->display->display_options['fields']['field_3rd_party_rss']['field'] = 'field_3rd_party_rss';
  /* Field: Content: Brochure Link */
  $handler->display->display_options['fields']['field_brochure_link']['id'] = 'field_brochure_link';
  $handler->display->display_options['fields']['field_brochure_link']['table'] = 'field_data_field_brochure_link';
  $handler->display->display_options['fields']['field_brochure_link']['field'] = 'field_brochure_link';
  $handler->display->display_options['fields']['field_brochure_link']['click_sort_column'] = 'url';
  /* Field: Content: Sub-title */
  $handler->display->display_options['fields']['field_sub_title']['id'] = 'field_sub_title';
  $handler->display->display_options['fields']['field_sub_title']['table'] = 'field_data_field_sub_title';
  $handler->display->display_options['fields']['field_sub_title']['field'] = 'field_sub_title';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  /* Field: Content: About */
  $handler->display->display_options['fields']['field_agency_about']['id'] = 'field_agency_about';
  $handler->display->display_options['fields']['field_agency_about']['table'] = 'field_data_field_agency_about';
  $handler->display->display_options['fields']['field_agency_about']['field'] = 'field_agency_about';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_agency_image']['id'] = 'field_agency_image';
  $handler->display->display_options['fields']['field_agency_image']['table'] = 'field_data_field_agency_image';
  $handler->display->display_options['fields']['field_agency_image']['field'] = 'field_agency_image';
  $handler->display->display_options['fields']['field_agency_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_agency_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'GUID';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'agency_[nid]';
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
    'agency' => 'agency',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'agencies';

  /* Display: CSV export */
  $handler = $view->new_display('views_data_export', 'CSV export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'agencies/csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['segment_size'] = '100';

  /* Display: Feeds AKDN */
  $handler = $view->new_display('services', 'Feeds AKDN', 'services_1');
  $handler->display->display_options['path'] = 'agencies-feeds';

  /* Display: Filtered feeds */
  $handler = $view->new_display('services', 'Filtered feeds', 'services_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Acronym */
  $handler->display->display_options['fields']['field_agency_acronym']['id'] = 'field_agency_acronym';
  $handler->display->display_options['fields']['field_agency_acronym']['table'] = 'field_data_field_agency_acronym';
  $handler->display->display_options['fields']['field_agency_acronym']['field'] = 'field_agency_acronym';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: About Page */
  $handler->display->display_options['fields']['field_about_page']['id'] = 'field_about_page';
  $handler->display->display_options['fields']['field_about_page']['table'] = 'field_data_field_about_page';
  $handler->display->display_options['fields']['field_about_page']['field'] = 'field_about_page';
  /* Field: Content: Logo with Title */
  $handler->display->display_options['fields']['field_agency_logo_with_title']['id'] = 'field_agency_logo_with_title';
  $handler->display->display_options['fields']['field_agency_logo_with_title']['table'] = 'field_data_field_agency_logo_with_title';
  $handler->display->display_options['fields']['field_agency_logo_with_title']['field'] = 'field_agency_logo_with_title';
  $handler->display->display_options['fields']['field_agency_logo_with_title']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_agency_logo_with_title']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Banner Item Area */
  $handler->display->display_options['fields']['field_featured_content_area']['id'] = 'field_featured_content_area';
  $handler->display->display_options['fields']['field_featured_content_area']['table'] = 'field_data_field_featured_content_area';
  $handler->display->display_options['fields']['field_featured_content_area']['field'] = 'field_featured_content_area';
  /* Field: Content: Banner Item Content */
  $handler->display->display_options['fields']['field_featured_content_nodes']['id'] = 'field_featured_content_nodes';
  $handler->display->display_options['fields']['field_featured_content_nodes']['table'] = 'field_data_field_featured_content_nodes';
  $handler->display->display_options['fields']['field_featured_content_nodes']['field'] = 'field_featured_content_nodes';
  $handler->display->display_options['fields']['field_featured_content_nodes']['delta_offset'] = '0';
  /* Field: Content: Enable Project Carousel */
  $handler->display->display_options['fields']['field_enable_project_slider']['id'] = 'field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['table'] = 'field_data_field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['field'] = 'field_enable_project_slider';
  /* Field: Content: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  /* Field: Content: Turn on secondary footer */
  $handler->display->display_options['fields']['field_turn_on_secondary_footer']['id'] = 'field_turn_on_secondary_footer';
  $handler->display->display_options['fields']['field_turn_on_secondary_footer']['table'] = 'field_data_field_turn_on_secondary_footer';
  $handler->display->display_options['fields']['field_turn_on_secondary_footer']['field'] = 'field_turn_on_secondary_footer';
  /* Field: Content: Footer Video */
  $handler->display->display_options['fields']['field_footer_video']['id'] = 'field_footer_video';
  $handler->display->display_options['fields']['field_footer_video']['table'] = 'field_data_field_footer_video';
  $handler->display->display_options['fields']['field_footer_video']['field'] = 'field_footer_video';
  $handler->display->display_options['fields']['field_footer_video']['click_sort_column'] = 'brightcove_id';
  $handler->display->display_options['fields']['field_footer_video']['settings'] = array(
    'width' => '425',
    'height' => '350',
  );
  /* Field: Content: 3rd Party RSS */
  $handler->display->display_options['fields']['field_3rd_party_rss']['id'] = 'field_3rd_party_rss';
  $handler->display->display_options['fields']['field_3rd_party_rss']['table'] = 'field_data_field_3rd_party_rss';
  $handler->display->display_options['fields']['field_3rd_party_rss']['field'] = 'field_3rd_party_rss';
  /* Field: Content: Brochure Link */
  $handler->display->display_options['fields']['field_brochure_link']['id'] = 'field_brochure_link';
  $handler->display->display_options['fields']['field_brochure_link']['table'] = 'field_data_field_brochure_link';
  $handler->display->display_options['fields']['field_brochure_link']['field'] = 'field_brochure_link';
  $handler->display->display_options['fields']['field_brochure_link']['click_sort_column'] = 'url';
  /* Field: Content: Sub-title */
  $handler->display->display_options['fields']['field_sub_title']['id'] = 'field_sub_title';
  $handler->display->display_options['fields']['field_sub_title']['table'] = 'field_data_field_sub_title';
  $handler->display->display_options['fields']['field_sub_title']['field'] = 'field_sub_title';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  /* Field: Content: About */
  $handler->display->display_options['fields']['field_agency_about']['id'] = 'field_agency_about';
  $handler->display->display_options['fields']['field_agency_about']['table'] = 'field_data_field_agency_about';
  $handler->display->display_options['fields']['field_agency_about']['field'] = 'field_agency_about';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_hub_page_image']['id'] = 'field_hub_page_image';
  $handler->display->display_options['fields']['field_hub_page_image']['table'] = 'field_data_field_hub_page_image';
  $handler->display->display_options['fields']['field_hub_page_image']['field'] = 'field_hub_page_image';
  $handler->display->display_options['fields']['field_hub_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_hub_page_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'GUID';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'agency_[nid]';
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
    'agency' => 'agency',
  );
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    986 => '986',
    936 => '936',
    926 => '926',
    866 => '866',
    921 => '921',
    906 => '906',
    891 => '891',
    886 => '886',
    951 => '951',
    956 => '956',
    1491 => '1491',
    1016 => '1016',
    1151 => '1151',
    1146 => '1146',
    851 => '851',
    726 => '726',
    1026 => '1026',
    966 => '966',
    116 => '116',
    1186 => '1186',
    741 => '741',
    861 => '861',
    776 => '776',
    686 => '686',
    1001 => '1001',
    1376 => '1376',
    1666 => '1666',
    1711 => '1711',
    1676 => '1676',
    1356 => '1356',
    1396 => '1396',
    1366 => '1366',
    1251 => '1251',
    1826 => '1826',
    1626 => '1626',
    1501 => '1501',
    1076 => '1076',
    1416 => '1416',
    1236 => '1236',
    1546 => '1546',
    826 => '826',
    801 => '801',
    981 => '981',
    1051 => '1051',
    1346 => '1346',
    556 => '556',
    1556 => '1556',
    1271 => '1271',
    1511 => '1511',
    1856 => '1856',
    1531 => '1531',
    1521 => '1521',
    1756 => '1756',
    656 => '656',
    946 => '946',
    1171 => '1171',
    1691 => '1691',
    1301 => '1301',
    1216 => '1216',
    1121 => '1121',
    1331 => '1331',
    1586 => '1586',
    1441 => '1441',
    1741 => '1741',
    1771 => '1771',
    1701 => '1701',
    1871 => '1871',
    1601 => '1601',
    1636 => '1636',
    1651 => '1651',
    811 => '811',
    1286 => '1286',
    1476 => '1476',
    1201 => '1201',
    1841 => '1841',
    1456 => '1456',
    1796 => '1796',
    1466 => '1466',
    1776 => '1776',
    1811 => '1811',
    1086 => '1086',
    671 => '671',
    681 => '681',
    1061 => '1061',
    1036 => '1036',
    991 => '991',
  );
  $handler->display->display_options['filters']['field_tags_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';
  $handler->display->display_options['path'] = 'agencies-feeds-filtered';

  /* Display: Feeds Ismaili */
  $handler = $view->new_display('services', 'Feeds Ismaili', 'services_3');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_ismaili' => 'deploy_to_ismaili',
    'list_of_contents' => 0,
    'deploy_to_akdn' => 0,
    'deploy_to_iis' => 0,
  );
  $handler->display->display_options['path'] = 'agencies-feeds-ismaili';

  /* Display: Feeds IIS */
  $handler = $view->new_display('services', 'Feeds IIS', 'services_4');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_iis' => 'deploy_to_iis',
    'list_of_contents' => 0,
    'deploy_to_akdn' => 0,
    'deploy_to_ismaili' => 0,
  );
  $handler->display->display_options['path'] = 'agencies-feeds-iis';
  $translatables['agency'] = array(
    t('Master'),
    t('Agency'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('queue'),
    t('Title'),
    t('Body'),
    t('Acronym'),
    t('About Page'),
    t('Logo'),
    t('Logo with Title'),
    t('Banner Item Area'),
    t('Banner Item Content'),
    t('Enable Project Carousel'),
    t('Language'),
    t('Turn on secondary footer'),
    t('Footer Video'),
    t('3rd Party RSS'),
    t('Brochure Link'),
    t('Sub-title'),
    t('Tags'),
    t('Summary'),
    t('About'),
    t('Image'),
    t('GUID'),
    t('agency_[nid]'),
    t('Page'),
    t('CSV export'),
    t('Feeds AKDN'),
    t('Filtered feeds'),
    t('Nid'),
    t('Feeds Ismaili'),
    t('Feeds IIS'),
  );
  $export['agency'] = $view;

  $view = new view();
  $view->name = 'article';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Article';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Article Page';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    1 => '1',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_speech_audio' => 'field_speech_audio',
    'field_speech_image' => 'field_speech_image',
    'field_speech_location' => 'field_speech_location',
    'field_publication_date' => 'field_publication_date',
    'field_publish_date' => 'field_publish_date',
    'field_short_title' => 'field_short_title',
    'field_speech_themes' => 'field_speech_themes',
    'field_speech_type' => 'field_speech_type',
    'field_country' => 'field_country',
    'field_speech_author' => 'field_speech_author',
    'field_date_decade' => 'field_date_decade',
    'field_speech_event' => 'field_speech_event',
    'field_press_releases' => 'field_press_releases',
    'field_publication_url' => 'field_publication_url',
    'field_speech_speaker' => 'field_speech_speaker',
    'field_speech_video' => 'field_speech_video',
    'field_caption' => 'field_caption',
    'field_create_featured_content' => 'field_create_featured_content',
    'field_cycle_year' => 'field_cycle_year',
    'field_enable_project_slider' => 'field_enable_project_slider',
    'field_external_media' => 'field_external_media',
    'field_hub_page' => 'field_hub_page',
    'field_simplenews_term' => 'field_simplenews_term',
    'field_pages_to_exclude' => 'field_pages_to_exclude',
    'field_podcasts_reference' => 'field_podcasts_reference',
    'field_events_reference' => 'field_events_reference',
    'field_related_in_the_media' => 'field_related_in_the_media',
    'field_related_news' => 'field_related_news',
    'field_photos_reference' => 'field_photos_reference',
    'field_press_reference' => 'field_press_reference',
    'field_related_project' => 'field_related_project',
    'field_related_publications' => 'field_related_publications',
    'field_speeches_reference' => 'field_speeches_reference',
    'field_feature_image' => 'field_feature_image',
    'field_agency' => 'field_agency',
    'field_tags' => 'field_tags',
    'field_focus_area' => 'field_focus_area',
    'body' => 'body',
    'nid' => 'nid',
    'nothing' => 'nothing',
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
    'field_speech_audio' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publication_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publish_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_short_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_themes' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_country' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_author' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_decade' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_event' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_press_releases' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publication_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_speaker' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_video' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_caption' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_create_featured_content' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cycle_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_enable_project_slider' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_external_media' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hub_page' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_simplenews_term' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pages_to_exclude' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_podcasts_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_events_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_in_the_media' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_news' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_photos_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_press_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_project' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_publications' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speeches_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_feature_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_agency' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tags' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_focus_area' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
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
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_akdn' => 'deploy_to_akdn',
    'list_of_contents' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Article Image */
  $handler->display->display_options['fields']['field_article_img']['id'] = 'field_article_img';
  $handler->display->display_options['fields']['field_article_img']['table'] = 'field_data_field_article_img';
  $handler->display->display_options['fields']['field_article_img']['field'] = 'field_article_img';
  $handler->display->display_options['fields']['field_article_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_article_img']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  /* Field: Content: Media Source */
  $handler->display->display_options['fields']['field_media_source']['id'] = 'field_media_source';
  $handler->display->display_options['fields']['field_media_source']['table'] = 'field_data_field_media_source';
  $handler->display->display_options['fields']['field_media_source']['field'] = 'field_media_source';
  $handler->display->display_options['fields']['field_media_source']['click_sort_column'] = 'url';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Article Image */
  $handler->display->display_options['fields']['field_article_img_1']['id'] = 'field_article_img_1';
  $handler->display->display_options['fields']['field_article_img_1']['table'] = 'field_data_field_article_img';
  $handler->display->display_options['fields']['field_article_img_1']['field'] = 'field_article_img';
  $handler->display->display_options['fields']['field_article_img_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_article_img_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Article Author */
  $handler->display->display_options['fields']['field_article_author']['id'] = 'field_article_author';
  $handler->display->display_options['fields']['field_article_author']['table'] = 'field_data_field_article_author';
  $handler->display->display_options['fields']['field_article_author']['field'] = 'field_article_author';
  /* Field: Content: Publish Date */
  $handler->display->display_options['fields']['field_publish_date']['id'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['field'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field: Geography (field_country:delta) */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  /* Field: Field: Agency (field_agency:delta) */
  $handler->display->display_options['fields']['delta_1']['id'] = 'delta_1';
  $handler->display->display_options['fields']['delta_1']['table'] = 'field_data_field_agency';
  $handler->display->display_options['fields']['delta_1']['field'] = 'delta';
  /* Field: Field: Thematic Area (field_focus_area:delta) */
  $handler->display->display_options['fields']['delta_2']['id'] = 'delta_2';
  $handler->display->display_options['fields']['delta_2']['table'] = 'field_data_field_focus_area';
  $handler->display->display_options['fields']['delta_2']['field'] = 'delta';
  /* Field: Content: Tags (field_tags:delta) */
  $handler->display->display_options['fields']['delta_3']['id'] = 'delta_3';
  $handler->display->display_options['fields']['delta_3']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['delta_3']['field'] = 'delta';
  /* Field: Content: Cycle Year */
  $handler->display->display_options['fields']['field_cycle_year']['id'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['table'] = 'field_data_field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['field'] = 'field_cycle_year';
  /* Field: Content: Create Banner Item */
  $handler->display->display_options['fields']['field_create_featured_content']['id'] = 'field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['table'] = 'field_data_field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['field'] = 'field_create_featured_content';
  /* Field: Content: Slideshow Image */
  $handler->display->display_options['fields']['field_feature_image']['id'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['field'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  /* Field: Content: Pages to exclude (field_pages_to_exclude:delta) */
  $handler->display->display_options['fields']['delta_4']['id'] = 'delta_4';
  $handler->display->display_options['fields']['delta_4']['table'] = 'field_data_field_pages_to_exclude';
  $handler->display->display_options['fields']['delta_4']['field'] = 'delta';
  /* Field: Content: Hub page (field_hub_page:delta) */
  $handler->display->display_options['fields']['delta_5']['id'] = 'delta_5';
  $handler->display->display_options['fields']['delta_5']['table'] = 'field_data_field_hub_page';
  $handler->display->display_options['fields']['delta_5']['field'] = 'delta';
  /* Field: Content: Related Projects (field_related_project:delta) */
  $handler->display->display_options['fields']['delta_6']['id'] = 'delta_6';
  $handler->display->display_options['fields']['delta_6']['table'] = 'field_data_field_related_project';
  $handler->display->display_options['fields']['delta_6']['field'] = 'delta';
  /* Field: Content: Enable Project Carousel */
  $handler->display->display_options['fields']['field_enable_project_slider']['id'] = 'field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['table'] = 'field_data_field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['field'] = 'field_enable_project_slider';
  /* Field: Content: Related Links (field_article_link:delta) */
  $handler->display->display_options['fields']['delta_7']['id'] = 'delta_7';
  $handler->display->display_options['fields']['delta_7']['table'] = 'field_data_field_article_link';
  $handler->display->display_options['fields']['delta_7']['field'] = 'delta';
  /* Field: Content: Related Speeches (field_speeches_reference:delta) */
  $handler->display->display_options['fields']['delta_8']['id'] = 'delta_8';
  $handler->display->display_options['fields']['delta_8']['table'] = 'field_data_field_speeches_reference';
  $handler->display->display_options['fields']['delta_8']['field'] = 'delta';
  /* Field: Field: Related Events (field_events_reference:delta) */
  $handler->display->display_options['fields']['delta_9']['id'] = 'delta_9';
  $handler->display->display_options['fields']['delta_9']['table'] = 'field_data_field_events_reference';
  $handler->display->display_options['fields']['delta_9']['field'] = 'delta';
  /* Field: Content: Related Audio/Video (field_podcasts_reference:delta) */
  $handler->display->display_options['fields']['delta_10']['id'] = 'delta_10';
  $handler->display->display_options['fields']['delta_10']['table'] = 'field_data_field_podcasts_reference';
  $handler->display->display_options['fields']['delta_10']['field'] = 'delta';
  /* Field: Content: Related Photos (field_photos_reference:delta) */
  $handler->display->display_options['fields']['delta_11']['id'] = 'delta_11';
  $handler->display->display_options['fields']['delta_11']['table'] = 'field_data_field_photos_reference';
  $handler->display->display_options['fields']['delta_11']['field'] = 'delta';
  /* Field: Content: Related Press Releases (field_press_reference:delta) */
  $handler->display->display_options['fields']['delta_12']['id'] = 'delta_12';
  $handler->display->display_options['fields']['delta_12']['table'] = 'field_data_field_press_reference';
  $handler->display->display_options['fields']['delta_12']['field'] = 'delta';
  /* Field: Content: Related News (field_related_news:delta) */
  $handler->display->display_options['fields']['delta_13']['id'] = 'delta_13';
  $handler->display->display_options['fields']['delta_13']['table'] = 'field_data_field_related_news';
  $handler->display->display_options['fields']['delta_13']['field'] = 'delta';
  /* Field: Content: Related In the Media (field_related_in_the_media:delta) */
  $handler->display->display_options['fields']['delta_14']['id'] = 'delta_14';
  $handler->display->display_options['fields']['delta_14']['table'] = 'field_data_field_related_in_the_media';
  $handler->display->display_options['fields']['delta_14']['field'] = 'delta';
  /* Field: Content: Related Publications (field_related_publications:delta) */
  $handler->display->display_options['fields']['delta_15']['id'] = 'delta_15';
  $handler->display->display_options['fields']['delta_15']['table'] = 'field_data_field_related_publications';
  $handler->display->display_options['fields']['delta_15']['field'] = 'delta';
  /* Field: Content: Date Decade */
  $handler->display->display_options['fields']['field_date_decade']['id'] = 'field_date_decade';
  $handler->display->display_options['fields']['field_date_decade']['table'] = 'field_data_field_date_decade';
  $handler->display->display_options['fields']['field_date_decade']['field'] = 'field_date_decade';
  /* Field: Content: AKMI Page */
  $handler->display->display_options['fields']['field_akmi_page']['id'] = 'field_akmi_page';
  $handler->display->display_options['fields']['field_akmi_page']['table'] = 'field_data_field_akmi_page';
  $handler->display->display_options['fields']['field_akmi_page']['field'] = 'field_akmi_page';
  /* Field: Content: AKMI ACTIVITY */
  $handler->display->display_options['fields']['field_akmi_activity']['id'] = 'field_akmi_activity';
  $handler->display->display_options['fields']['field_akmi_activity']['table'] = 'field_data_field_akmi_activity';
  $handler->display->display_options['fields']['field_akmi_activity']['field'] = 'field_akmi_activity';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'GUID';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'article_[nid]';
  /* Field: Content: Article Type */
  $handler->display->display_options['fields']['field_article_cat']['id'] = 'field_article_cat';
  $handler->display->display_options['fields']['field_article_cat']['table'] = 'field_data_field_article_cat';
  $handler->display->display_options['fields']['field_article_cat']['field'] = 'field_article_cat';
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
    'article' => 'article',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'articles';

  /* Display: CSV export */
  $handler = $view->new_display('views_data_export', 'CSV export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'articles/csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['segment_size'] = '100';

  /* Display: Feeds AKDN */
  $handler = $view->new_display('services', 'Feeds AKDN', 'services_1');
  $handler->display->display_options['path'] = 'articles-feeds';

  /* Display: Filtered feeds */
  $handler = $view->new_display('services', 'Filtered feeds', 'services_2');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_akdn' => 'deploy_to_akdn',
    'list_of_contents' => 0,
    'deploy_to_ismaili' => 0,
    'deploy_to_iis' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Article Type */
  $handler->display->display_options['fields']['field_article_cat']['id'] = 'field_article_cat';
  $handler->display->display_options['fields']['field_article_cat']['table'] = 'field_data_field_article_cat';
  $handler->display->display_options['fields']['field_article_cat']['field'] = 'field_article_cat';
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  /* Field: Content: Media Source */
  $handler->display->display_options['fields']['field_media_source']['id'] = 'field_media_source';
  $handler->display->display_options['fields']['field_media_source']['table'] = 'field_data_field_media_source';
  $handler->display->display_options['fields']['field_media_source']['field'] = 'field_media_source';
  $handler->display->display_options['fields']['field_media_source']['click_sort_column'] = 'url';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Article Image */
  $handler->display->display_options['fields']['field_article_img']['id'] = 'field_article_img';
  $handler->display->display_options['fields']['field_article_img']['table'] = 'field_data_field_article_img';
  $handler->display->display_options['fields']['field_article_img']['field'] = 'field_article_img';
  $handler->display->display_options['fields']['field_article_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_article_img']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Article Author */
  $handler->display->display_options['fields']['field_article_author']['id'] = 'field_article_author';
  $handler->display->display_options['fields']['field_article_author']['table'] = 'field_data_field_article_author';
  $handler->display->display_options['fields']['field_article_author']['field'] = 'field_article_author';
  /* Field: Content: Publish Date */
  $handler->display->display_options['fields']['field_publish_date']['id'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['field'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field: Geography (field_country:delta) */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  /* Field: Field: Agency (field_agency:delta) */
  $handler->display->display_options['fields']['delta_1']['id'] = 'delta_1';
  $handler->display->display_options['fields']['delta_1']['table'] = 'field_data_field_agency';
  $handler->display->display_options['fields']['delta_1']['field'] = 'delta';
  /* Field: Field: Thematic Area (field_focus_area:delta) */
  $handler->display->display_options['fields']['delta_2']['id'] = 'delta_2';
  $handler->display->display_options['fields']['delta_2']['table'] = 'field_data_field_focus_area';
  $handler->display->display_options['fields']['delta_2']['field'] = 'delta';
  /* Field: Content: Tags (field_tags:delta) */
  $handler->display->display_options['fields']['delta_3']['id'] = 'delta_3';
  $handler->display->display_options['fields']['delta_3']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['delta_3']['field'] = 'delta';
  /* Field: Content: Cycle Year */
  $handler->display->display_options['fields']['field_cycle_year']['id'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['table'] = 'field_data_field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['field'] = 'field_cycle_year';
  /* Field: Content: Create Banner Item */
  $handler->display->display_options['fields']['field_create_featured_content']['id'] = 'field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['table'] = 'field_data_field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['field'] = 'field_create_featured_content';
  /* Field: Content: Slideshow Image */
  $handler->display->display_options['fields']['field_feature_image']['id'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['field'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  /* Field: Content: Pages to exclude (field_pages_to_exclude:delta) */
  $handler->display->display_options['fields']['delta_4']['id'] = 'delta_4';
  $handler->display->display_options['fields']['delta_4']['table'] = 'field_data_field_pages_to_exclude';
  $handler->display->display_options['fields']['delta_4']['field'] = 'delta';
  /* Field: Content: Hub page (field_hub_page:delta) */
  $handler->display->display_options['fields']['delta_5']['id'] = 'delta_5';
  $handler->display->display_options['fields']['delta_5']['table'] = 'field_data_field_hub_page';
  $handler->display->display_options['fields']['delta_5']['field'] = 'delta';
  /* Field: Content: Related Projects (field_related_project:delta) */
  $handler->display->display_options['fields']['delta_6']['id'] = 'delta_6';
  $handler->display->display_options['fields']['delta_6']['table'] = 'field_data_field_related_project';
  $handler->display->display_options['fields']['delta_6']['field'] = 'delta';
  /* Field: Content: Enable Project Carousel */
  $handler->display->display_options['fields']['field_enable_project_slider']['id'] = 'field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['table'] = 'field_data_field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['field'] = 'field_enable_project_slider';
  /* Field: Content: Related Links */
  $handler->display->display_options['fields']['field_article_link']['id'] = 'field_article_link';
  $handler->display->display_options['fields']['field_article_link']['table'] = 'field_data_field_article_link';
  $handler->display->display_options['fields']['field_article_link']['field'] = 'field_article_link';
  $handler->display->display_options['fields']['field_article_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_article_link']['delta_offset'] = '0';
  /* Field: Content: Related Speeches (field_speeches_reference:delta) */
  $handler->display->display_options['fields']['delta_7']['id'] = 'delta_7';
  $handler->display->display_options['fields']['delta_7']['table'] = 'field_data_field_speeches_reference';
  $handler->display->display_options['fields']['delta_7']['field'] = 'delta';
  /* Field: Field: Related Events */
  $handler->display->display_options['fields']['field_events_reference']['id'] = 'field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['table'] = 'field_data_field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['field'] = 'field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['delta_offset'] = '0';
  /* Field: Content: Related Audio/Video (field_podcasts_reference:delta) */
  $handler->display->display_options['fields']['delta_8']['id'] = 'delta_8';
  $handler->display->display_options['fields']['delta_8']['table'] = 'field_data_field_podcasts_reference';
  $handler->display->display_options['fields']['delta_8']['field'] = 'delta';
  /* Field: Content: Related Photos (field_photos_reference:delta) */
  $handler->display->display_options['fields']['delta_9']['id'] = 'delta_9';
  $handler->display->display_options['fields']['delta_9']['table'] = 'field_data_field_photos_reference';
  $handler->display->display_options['fields']['delta_9']['field'] = 'delta';
  /* Field: Content: Related Press Releases (field_press_reference:delta) */
  $handler->display->display_options['fields']['delta_10']['id'] = 'delta_10';
  $handler->display->display_options['fields']['delta_10']['table'] = 'field_data_field_press_reference';
  $handler->display->display_options['fields']['delta_10']['field'] = 'delta';
  /* Field: Content: Related News (field_related_news:delta) */
  $handler->display->display_options['fields']['delta_11']['id'] = 'delta_11';
  $handler->display->display_options['fields']['delta_11']['table'] = 'field_data_field_related_news';
  $handler->display->display_options['fields']['delta_11']['field'] = 'delta';
  /* Field: Content: Related In the Media (field_related_in_the_media:delta) */
  $handler->display->display_options['fields']['delta_12']['id'] = 'delta_12';
  $handler->display->display_options['fields']['delta_12']['table'] = 'field_data_field_related_in_the_media';
  $handler->display->display_options['fields']['delta_12']['field'] = 'delta';
  /* Field: Content: Related Publications (field_related_publications:delta) */
  $handler->display->display_options['fields']['delta_13']['id'] = 'delta_13';
  $handler->display->display_options['fields']['delta_13']['table'] = 'field_data_field_related_publications';
  $handler->display->display_options['fields']['delta_13']['field'] = 'delta';
  /* Field: Content: Date Decade */
  $handler->display->display_options['fields']['field_date_decade']['id'] = 'field_date_decade';
  $handler->display->display_options['fields']['field_date_decade']['table'] = 'field_data_field_date_decade';
  $handler->display->display_options['fields']['field_date_decade']['field'] = 'field_date_decade';
  /* Field: Content: AKMI Page */
  $handler->display->display_options['fields']['field_akmi_page']['id'] = 'field_akmi_page';
  $handler->display->display_options['fields']['field_akmi_page']['table'] = 'field_data_field_akmi_page';
  $handler->display->display_options['fields']['field_akmi_page']['field'] = 'field_akmi_page';
  /* Field: Content: AKMI ACTIVITY */
  $handler->display->display_options['fields']['field_akmi_activity']['id'] = 'field_akmi_activity';
  $handler->display->display_options['fields']['field_akmi_activity']['table'] = 'field_data_field_akmi_activity';
  $handler->display->display_options['fields']['field_akmi_activity']['field'] = 'field_akmi_activity';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'GUID';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'article_[nid]';
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
    'speech' => 'speech',
  );
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    986 => '986',
    936 => '936',
    926 => '926',
    866 => '866',
    921 => '921',
    906 => '906',
    891 => '891',
    886 => '886',
    951 => '951',
    956 => '956',
    1491 => '1491',
    1016 => '1016',
    1151 => '1151',
    1146 => '1146',
    851 => '851',
    726 => '726',
    1026 => '1026',
    966 => '966',
    116 => '116',
    1186 => '1186',
    741 => '741',
    861 => '861',
    776 => '776',
    686 => '686',
    1001 => '1001',
    1376 => '1376',
    1666 => '1666',
    1711 => '1711',
    1676 => '1676',
    1356 => '1356',
    1396 => '1396',
    1366 => '1366',
    1251 => '1251',
    1826 => '1826',
    1626 => '1626',
    1501 => '1501',
    1076 => '1076',
    1416 => '1416',
    1236 => '1236',
    1546 => '1546',
    826 => '826',
    801 => '801',
    981 => '981',
    1051 => '1051',
    1346 => '1346',
    556 => '556',
    1556 => '1556',
    1271 => '1271',
    1511 => '1511',
    1856 => '1856',
    1531 => '1531',
    1521 => '1521',
    1756 => '1756',
    656 => '656',
    946 => '946',
    1171 => '1171',
    1691 => '1691',
    1301 => '1301',
    1216 => '1216',
    1121 => '1121',
    1331 => '1331',
    1586 => '1586',
    1441 => '1441',
    1741 => '1741',
    1771 => '1771',
    1701 => '1701',
    1871 => '1871',
    1601 => '1601',
    1636 => '1636',
    1651 => '1651',
    811 => '811',
    1286 => '1286',
    1476 => '1476',
    1201 => '1201',
    1841 => '1841',
    1456 => '1456',
    1796 => '1796',
    1466 => '1466',
    1776 => '1776',
    1811 => '1811',
    1086 => '1086',
    671 => '671',
    681 => '681',
    1061 => '1061',
    1036 => '1036',
    991 => '991',
  );
  $handler->display->display_options['filters']['field_tags_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';
  $handler->display->display_options['path'] = 'article-filtered-feeds';

  /* Display: Feeds Ismaili */
  $handler = $view->new_display('services', 'Feeds Ismaili', 'services_3');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_ismaili' => 'deploy_to_ismaili',
    'list_of_contents' => 0,
    'deploy_to_akdn' => 0,
    'deploy_to_iis' => 0,
  );
  $handler->display->display_options['path'] = 'aricles-feeds-ismaili';

  /* Display: Feeds IIS */
  $handler = $view->new_display('services', 'Feeds IIS', 'services_4');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_iis' => 'deploy_to_iis',
    'list_of_contents' => 0,
    'deploy_to_akdn' => 0,
    'deploy_to_ismaili' => 0,
  );
  $handler->display->display_options['path'] = 'aricles-feeds-iis';
  $translatables['article'] = array(
    t('Master'),
    t('Article Page'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('queue'),
    t('Title'),
    t('Article Image'),
    t('Short Title'),
    t('Media Source'),
    t('Body'),
    t('Article Author'),
    t('Publish Date'),
    t('Geography (field_country:delta)'),
    t('.'),
    t(','),
    t('Agency (field_agency:delta)'),
    t('Thematic Area (field_focus_area:delta)'),
    t('Tags (field_tags:delta)'),
    t('Cycle Year'),
    t('Create Banner Item'),
    t('Slideshow Image'),
    t('Caption'),
    t('Pages to exclude (field_pages_to_exclude:delta)'),
    t('Hub page (field_hub_page:delta)'),
    t('Related Projects (field_related_project:delta)'),
    t('Enable Project Carousel'),
    t('Related Links (field_article_link:delta)'),
    t('Related Speeches (field_speeches_reference:delta)'),
    t('Related Events (field_events_reference:delta)'),
    t('Related Audio/Video (field_podcasts_reference:delta)'),
    t('Related Photos (field_photos_reference:delta)'),
    t('Related Press Releases (field_press_reference:delta)'),
    t('Related News (field_related_news:delta)'),
    t('Related In the Media (field_related_in_the_media:delta)'),
    t('Related Publications (field_related_publications:delta)'),
    t('Date Decade'),
    t('AKMI Page'),
    t('AKMI ACTIVITY'),
    t('GUID'),
    t('article_[nid]'),
    t('Article Type'),
    t('Page'),
    t('CSV export'),
    t('Feeds AKDN'),
    t('Filtered feeds'),
    t('Related Links'),
    t('Related Events'),
    t('Nid'),
    t('Feeds Ismaili'),
    t('Feeds IIS'),
  );
  $export['article'] = $view;

  $view = new view();
  $view->name = 'events_syndication';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events Syndication';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Feeds IIS';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    1 => '1',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_speech_audio' => 'field_speech_audio',
    'field_speech_image' => 'field_speech_image',
    'field_speech_location' => 'field_speech_location',
    'field_publication_date' => 'field_publication_date',
    'field_publish_date' => 'field_publish_date',
    'field_short_title' => 'field_short_title',
    'field_speech_themes' => 'field_speech_themes',
    'field_speech_type' => 'field_speech_type',
    'field_country' => 'field_country',
    'field_speech_author' => 'field_speech_author',
    'field_date_decade' => 'field_date_decade',
    'field_speech_event' => 'field_speech_event',
    'field_press_releases' => 'field_press_releases',
    'field_publication_url' => 'field_publication_url',
    'field_speech_speaker' => 'field_speech_speaker',
    'field_speech_video' => 'field_speech_video',
    'field_caption' => 'field_caption',
    'field_create_featured_content' => 'field_create_featured_content',
    'field_cycle_year' => 'field_cycle_year',
    'field_enable_project_slider' => 'field_enable_project_slider',
    'field_external_media' => 'field_external_media',
    'field_hub_page' => 'field_hub_page',
    'field_simplenews_term' => 'field_simplenews_term',
    'field_pages_to_exclude' => 'field_pages_to_exclude',
    'field_podcasts_reference' => 'field_podcasts_reference',
    'field_events_reference' => 'field_events_reference',
    'field_related_in_the_media' => 'field_related_in_the_media',
    'field_related_news' => 'field_related_news',
    'field_photos_reference' => 'field_photos_reference',
    'field_press_reference' => 'field_press_reference',
    'field_related_project' => 'field_related_project',
    'field_related_publications' => 'field_related_publications',
    'field_speeches_reference' => 'field_speeches_reference',
    'field_feature_image' => 'field_feature_image',
    'field_agency' => 'field_agency',
    'field_tags' => 'field_tags',
    'field_focus_area' => 'field_focus_area',
    'body' => 'body',
    'nid' => 'nid',
    'nothing' => 'nothing',
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
    'field_speech_audio' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publication_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publish_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_short_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_themes' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_country' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_author' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_decade' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_event' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_press_releases' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publication_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_speaker' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_video' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_caption' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_create_featured_content' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cycle_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_enable_project_slider' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_external_media' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hub_page' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_simplenews_term' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pages_to_exclude' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_podcasts_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_events_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_in_the_media' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_news' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_photos_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_press_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_project' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_publications' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speeches_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_feature_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_agency' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tags' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_focus_area' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
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
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_akdn' => 'deploy_to_akdn',
    'list_of_contents' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Event Image */
  $handler->display->display_options['fields']['field_event_image']['id'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['table'] = 'field_data_field_event_image';
  $handler->display->display_options['fields']['field_event_image']['field'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_event_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['type'] = 'services';
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  /* Field: Content: Cycle Year */
  $handler->display->display_options['fields']['field_cycle_year']['id'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['table'] = 'field_data_field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['field'] = 'field_cycle_year';
  /* Field: Content: Create Banner Item */
  $handler->display->display_options['fields']['field_create_featured_content']['id'] = 'field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['table'] = 'field_data_field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['field'] = 'field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['type'] = 'list_key';
  /* Field: Content: Slideshow Image */
  $handler->display->display_options['fields']['field_feature_image']['id'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['field'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_feature_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  /* Field: Content: Pages to exclude */
  $handler->display->display_options['fields']['field_pages_to_exclude']['id'] = 'field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['table'] = 'field_data_field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['field'] = 'field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['delta_offset'] = '0';
  /* Field: Content: Hub page */
  $handler->display->display_options['fields']['field_hub_page']['id'] = 'field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['table'] = 'field_data_field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['field'] = 'field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['delta_offset'] = '0';
  /* Field: Content: Enable Project Carousel */
  $handler->display->display_options['fields']['field_enable_project_slider']['id'] = 'field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['table'] = 'field_data_field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['field'] = 'field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['type'] = 'list_key';
  /* Field: Content: Newsletter category */
  $handler->display->display_options['fields']['field_simplenews_term']['id'] = 'field_simplenews_term';
  $handler->display->display_options['fields']['field_simplenews_term']['table'] = 'field_data_field_simplenews_term';
  $handler->display->display_options['fields']['field_simplenews_term']['field'] = 'field_simplenews_term';
  $handler->display->display_options['fields']['field_simplenews_term']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: AKMI Pages */
  $handler->display->display_options['fields']['field_akmi_pages']['id'] = 'field_akmi_pages';
  $handler->display->display_options['fields']['field_akmi_pages']['table'] = 'field_data_field_akmi_pages';
  $handler->display->display_options['fields']['field_akmi_pages']['field'] = 'field_akmi_pages';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'GUID';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'event_[nid]';
  /* Field: Field: Geography */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_country']['delta_offset'] = '0';
  /* Field: Content: Related Projects */
  $handler->display->display_options['fields']['field_related_project']['id'] = 'field_related_project';
  $handler->display->display_options['fields']['field_related_project']['table'] = 'field_data_field_related_project';
  $handler->display->display_options['fields']['field_related_project']['field'] = 'field_related_project';
  $handler->display->display_options['fields']['field_related_project']['delta_offset'] = '0';
  /* Field: Field: Thematic Area */
  $handler->display->display_options['fields']['field_focus_area']['id'] = 'field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['table'] = 'field_data_field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['field'] = 'field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_focus_area']['delta_offset'] = '0';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  /* Field: Field: Agency */
  $handler->display->display_options['fields']['field_agency']['id'] = 'field_agency';
  $handler->display->display_options['fields']['field_agency']['table'] = 'field_data_field_agency';
  $handler->display->display_options['fields']['field_agency']['field'] = 'field_agency';
  $handler->display->display_options['fields']['field_agency']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_agency']['delta_offset'] = '0';
  /* Field: Field: Related Events */
  $handler->display->display_options['fields']['field_events_reference']['id'] = 'field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['table'] = 'field_data_field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['field'] = 'field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['delta_offset'] = '0';
  /* Field: Content: Related Links */
  $handler->display->display_options['fields']['field_event_links']['id'] = 'field_event_links';
  $handler->display->display_options['fields']['field_event_links']['table'] = 'field_data_field_event_links';
  $handler->display->display_options['fields']['field_event_links']['field'] = 'field_event_links';
  $handler->display->display_options['fields']['field_event_links']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_event_links']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_event_links']['delta_offset'] = '0';
  /* Field: Content: Related Links */
  $handler->display->display_options['fields']['field_event_links_1']['id'] = 'field_event_links_1';
  $handler->display->display_options['fields']['field_event_links_1']['table'] = 'field_data_field_event_links';
  $handler->display->display_options['fields']['field_event_links_1']['field'] = 'field_event_links';
  $handler->display->display_options['fields']['field_event_links_1']['label'] = 'Related Links Title';
  $handler->display->display_options['fields']['field_event_links_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_event_links_1']['type'] = 'link_title_plain';
  $handler->display->display_options['fields']['field_event_links_1']['delta_offset'] = '0';
  /* Field: Content: Related Speeches */
  $handler->display->display_options['fields']['field_speeches_reference']['id'] = 'field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['table'] = 'field_data_field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['field'] = 'field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['delta_offset'] = '0';
  /* Field: Content: Related Press Releases */
  $handler->display->display_options['fields']['field_press_reference']['id'] = 'field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['table'] = 'field_data_field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['field'] = 'field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['delta_offset'] = '0';
  /* Field: Content: Related Audio/Video */
  $handler->display->display_options['fields']['field_podcasts_reference']['id'] = 'field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['table'] = 'field_data_field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['field'] = 'field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['delta_offset'] = '0';
  /* Field: Content: Related Photos */
  $handler->display->display_options['fields']['field_photos_reference']['id'] = 'field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['table'] = 'field_data_field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['field'] = 'field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['delta_offset'] = '0';
  /* Field: Content: Related News */
  $handler->display->display_options['fields']['field_related_news']['id'] = 'field_related_news';
  $handler->display->display_options['fields']['field_related_news']['table'] = 'field_data_field_related_news';
  $handler->display->display_options['fields']['field_related_news']['field'] = 'field_related_news';
  $handler->display->display_options['fields']['field_related_news']['delta_offset'] = '0';
  /* Field: Content: Related In the Media */
  $handler->display->display_options['fields']['field_related_in_the_media']['id'] = 'field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['table'] = 'field_data_field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['field'] = 'field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['delta_offset'] = '0';
  /* Field: Content: Related Publications */
  $handler->display->display_options['fields']['field_related_publications']['id'] = 'field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['table'] = 'field_data_field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['field'] = 'field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['delta_offset'] = '0';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
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
    'event' => 'event',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'events-syndication';

  /* Display: CSV export */
  $handler = $view->new_display('views_data_export', 'CSV export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'events/csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['segment_size'] = '100';

  /* Display: Feeds AKDN */
  $handler = $view->new_display('services', 'Feeds AKDN', 'services_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_akdn' => 'deploy_to_akdn',
    'list_of_contents' => 0,
    'deploy_to_ismaili' => 0,
    'deploy_to_iis' => 0,
  );
  $handler->display->display_options['path'] = 'events-feeds';

  /* Display: Feeds Ismaili */
  $handler = $view->new_display('services', 'Feeds Ismaili', 'services_3');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_ismaili' => 'deploy_to_ismaili',
    'list_of_contents' => 0,
    'deploy_to_akdn' => 0,
    'deploy_to_iis' => 0,
  );
  $handler->display->display_options['path'] = 'events-feeds-ismaili';

  /* Display: Feeds IIS */
  $handler = $view->new_display('services', 'Feeds IIS', 'services_4');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_iis' => 'deploy_to_iis',
    'list_of_contents' => 0,
    'deploy_to_akdn' => 0,
    'deploy_to_ismaili' => 0,
  );
  $handler->display->display_options['path'] = 'events-feeds-iis';
  $translatables['events_syndication'] = array(
    t('Master'),
    t('Feeds IIS'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('queue'),
    t('Title'),
    t('Short Title'),
    t('Body'),
    t('Event Image'),
    t('Date'),
    t('Cycle Year'),
    t('Create Banner Item'),
    t('Slideshow Image'),
    t('Caption'),
    t('Pages to exclude'),
    t('Hub page'),
    t('Enable Project Carousel'),
    t('Newsletter category'),
    t('AKMI Pages'),
    t('Nid'),
    t('GUID'),
    t('event_[nid]'),
    t('Geography'),
    t('Related Projects'),
    t('Thematic Area'),
    t('Location'),
    t('Agency'),
    t('Related Events'),
    t('Related Links'),
    t('Related Links Title'),
    t('Related Speeches'),
    t('Related Press Releases'),
    t('Related Audio/Video'),
    t('Related Photos'),
    t('Related News'),
    t('Related In the Media'),
    t('Related Publications'),
    t('Tags'),
    t('Page'),
    t('CSV export'),
    t('Feeds AKDN'),
    t('Feeds Ismaili'),
  );
  $export['events_syndication'] = $view;

  $view = new view();
  $view->name = 'gallery_syndication';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gallery Syndication';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Feeds IIS';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    1 => '1',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_speech_audio' => 'field_speech_audio',
    'field_speech_image' => 'field_speech_image',
    'field_speech_location' => 'field_speech_location',
    'field_publication_date' => 'field_publication_date',
    'field_publish_date' => 'field_publish_date',
    'field_short_title' => 'field_short_title',
    'field_speech_themes' => 'field_speech_themes',
    'field_speech_type' => 'field_speech_type',
    'field_country' => 'field_country',
    'field_speech_author' => 'field_speech_author',
    'field_date_decade' => 'field_date_decade',
    'field_speech_event' => 'field_speech_event',
    'field_press_releases' => 'field_press_releases',
    'field_publication_url' => 'field_publication_url',
    'field_speech_speaker' => 'field_speech_speaker',
    'field_speech_video' => 'field_speech_video',
    'field_caption' => 'field_caption',
    'field_create_featured_content' => 'field_create_featured_content',
    'field_cycle_year' => 'field_cycle_year',
    'field_enable_project_slider' => 'field_enable_project_slider',
    'field_external_media' => 'field_external_media',
    'field_hub_page' => 'field_hub_page',
    'field_simplenews_term' => 'field_simplenews_term',
    'field_pages_to_exclude' => 'field_pages_to_exclude',
    'field_podcasts_reference' => 'field_podcasts_reference',
    'field_events_reference' => 'field_events_reference',
    'field_related_in_the_media' => 'field_related_in_the_media',
    'field_related_news' => 'field_related_news',
    'field_photos_reference' => 'field_photos_reference',
    'field_press_reference' => 'field_press_reference',
    'field_related_project' => 'field_related_project',
    'field_related_publications' => 'field_related_publications',
    'field_speeches_reference' => 'field_speeches_reference',
    'field_feature_image' => 'field_feature_image',
    'field_agency' => 'field_agency',
    'field_tags' => 'field_tags',
    'field_focus_area' => 'field_focus_area',
    'body' => 'body',
    'nid' => 'nid',
    'nothing' => 'nothing',
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
    'field_speech_audio' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publication_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publish_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_short_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_themes' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_country' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_author' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_decade' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_event' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_press_releases' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publication_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_speaker' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_video' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_caption' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_create_featured_content' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cycle_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_enable_project_slider' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_external_media' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hub_page' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_simplenews_term' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pages_to_exclude' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_podcasts_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_events_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_in_the_media' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_news' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_photos_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_press_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_project' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_publications' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speeches_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_feature_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_agency' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tags' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_focus_area' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
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
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_akdn' => 'deploy_to_akdn',
    'list_of_contents' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Publish Date */
  $handler->display->display_options['fields']['field_publish_date']['id'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['field'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_publish_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_gallery_images']['id'] = 'field_gallery_images';
  $handler->display->display_options['fields']['field_gallery_images']['table'] = 'field_data_field_gallery_images';
  $handler->display->display_options['fields']['field_gallery_images']['field'] = 'field_gallery_images';
  $handler->display->display_options['fields']['field_gallery_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_images']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_gallery_images']['settings'] = array(
    'url_type' => '',
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_gallery_images']['delta_offset'] = '0';
  /* Field: Content: Related Links */
  $handler->display->display_options['fields']['field_gallery_link']['id'] = 'field_gallery_link';
  $handler->display->display_options['fields']['field_gallery_link']['table'] = 'field_data_field_gallery_link';
  $handler->display->display_options['fields']['field_gallery_link']['field'] = 'field_gallery_link';
  $handler->display->display_options['fields']['field_gallery_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_gallery_link']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_gallery_link']['delta_offset'] = '0';
  /* Field: Content: Related Links */
  $handler->display->display_options['fields']['field_gallery_link_1']['id'] = 'field_gallery_link_1';
  $handler->display->display_options['fields']['field_gallery_link_1']['table'] = 'field_data_field_gallery_link';
  $handler->display->display_options['fields']['field_gallery_link_1']['field'] = 'field_gallery_link';
  $handler->display->display_options['fields']['field_gallery_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_gallery_link_1']['type'] = 'link_title_plain';
  $handler->display->display_options['fields']['field_gallery_link_1']['delta_offset'] = '0';
  /* Field: Content: Related Speeches */
  $handler->display->display_options['fields']['field_speeches_reference']['id'] = 'field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['table'] = 'field_data_field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['field'] = 'field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['delta_offset'] = '0';
  /* Field: Content: Related Press Releases */
  $handler->display->display_options['fields']['field_press_reference']['id'] = 'field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['table'] = 'field_data_field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['field'] = 'field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['delta_offset'] = '0';
  /* Field: Field: Related Events */
  $handler->display->display_options['fields']['field_events_reference']['id'] = 'field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['table'] = 'field_data_field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['field'] = 'field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['delta_offset'] = '0';
  /* Field: Content: Related Audio/Video */
  $handler->display->display_options['fields']['field_podcasts_reference']['id'] = 'field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['table'] = 'field_data_field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['field'] = 'field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['delta_offset'] = '0';
  /* Field: Content: Related Photos */
  $handler->display->display_options['fields']['field_photos_reference']['id'] = 'field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['table'] = 'field_data_field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['field'] = 'field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['delta_offset'] = '0';
  /* Field: Content: Related Projects */
  $handler->display->display_options['fields']['field_related_project']['id'] = 'field_related_project';
  $handler->display->display_options['fields']['field_related_project']['table'] = 'field_data_field_related_project';
  $handler->display->display_options['fields']['field_related_project']['field'] = 'field_related_project';
  $handler->display->display_options['fields']['field_related_project']['delta_offset'] = '0';
  /* Field: Content: Related News */
  $handler->display->display_options['fields']['field_related_news']['id'] = 'field_related_news';
  $handler->display->display_options['fields']['field_related_news']['table'] = 'field_data_field_related_news';
  $handler->display->display_options['fields']['field_related_news']['field'] = 'field_related_news';
  $handler->display->display_options['fields']['field_related_news']['delta_offset'] = '0';
  /* Field: Content: Related In the Media */
  $handler->display->display_options['fields']['field_related_in_the_media']['id'] = 'field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['table'] = 'field_data_field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['field'] = 'field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['delta_offset'] = '0';
  /* Field: Content: Related Publications */
  $handler->display->display_options['fields']['field_related_publications']['id'] = 'field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['table'] = 'field_data_field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['field'] = 'field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['delta_offset'] = '0';
  /* Field: Content: Enable Project Carousel */
  $handler->display->display_options['fields']['field_enable_project_slider']['id'] = 'field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['table'] = 'field_data_field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['field'] = 'field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['type'] = 'list_key';
  /* Field: Content: Create Banner Item */
  $handler->display->display_options['fields']['field_create_featured_content']['id'] = 'field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['table'] = 'field_data_field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['field'] = 'field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['type'] = 'list_key';
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  /* Field: Content: Pages to exclude */
  $handler->display->display_options['fields']['field_pages_to_exclude']['id'] = 'field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['table'] = 'field_data_field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['field'] = 'field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['delta_offset'] = '0';
  /* Field: Content: Hub page */
  $handler->display->display_options['fields']['field_hub_page']['id'] = 'field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['table'] = 'field_data_field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['field'] = 'field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['delta_offset'] = '0';
  /* Field: Field: Geography */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_country']['delta_offset'] = '0';
  /* Field: Field: Agency */
  $handler->display->display_options['fields']['field_agency']['id'] = 'field_agency';
  $handler->display->display_options['fields']['field_agency']['table'] = 'field_data_field_agency';
  $handler->display->display_options['fields']['field_agency']['field'] = 'field_agency';
  $handler->display->display_options['fields']['field_agency']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_agency']['delta_offset'] = '0';
  /* Field: Field: Thematic Area */
  $handler->display->display_options['fields']['field_focus_area']['id'] = 'field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['table'] = 'field_data_field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['field'] = 'field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_focus_area']['delta_offset'] = '0';
  /* Field: Content: Cycle Year */
  $handler->display->display_options['fields']['field_cycle_year']['id'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['table'] = 'field_data_field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['field'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Date Decade */
  $handler->display->display_options['fields']['field_date_decade']['id'] = 'field_date_decade';
  $handler->display->display_options['fields']['field_date_decade']['table'] = 'field_data_field_date_decade';
  $handler->display->display_options['fields']['field_date_decade']['field'] = 'field_date_decade';
  $handler->display->display_options['fields']['field_date_decade']['type'] = 'text_plain';
  /* Field: Content: Newsletter category */
  $handler->display->display_options['fields']['field_simplenews_term']['id'] = 'field_simplenews_term';
  $handler->display->display_options['fields']['field_simplenews_term']['table'] = 'field_data_field_simplenews_term';
  $handler->display->display_options['fields']['field_simplenews_term']['field'] = 'field_simplenews_term';
  $handler->display->display_options['fields']['field_simplenews_term']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Slideshow Image */
  $handler->display->display_options['fields']['field_feature_image']['id'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['field'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_feature_image']['settings'] = array(
    'url_type' => '',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'GUID';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'gallery_[nid]';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
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
    'gallery' => 'gallery',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'gallery-syndication';

  /* Display: CSV export */
  $handler = $view->new_display('views_data_export', 'CSV export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'gallery/csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['segment_size'] = '100';

  /* Display: Feeds AKDN */
  $handler = $view->new_display('services', 'Feeds AKDN', 'services_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_akdn' => 'deploy_to_akdn',
    'list_of_contents' => 0,
    'deploy_to_ismaili' => 0,
    'deploy_to_iis' => 0,
  );
  $handler->display->display_options['path'] = 'gallery-feeds';

  /* Display: Feeds Ismaili */
  $handler = $view->new_display('services', 'Feeds Ismaili', 'services_3');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_ismaili' => 'deploy_to_ismaili',
    'list_of_contents' => 0,
    'deploy_to_akdn' => 0,
    'deploy_to_iis' => 0,
  );
  $handler->display->display_options['path'] = 'gallery-feeds-ismaili';

  /* Display: Feeds IIS */
  $handler = $view->new_display('services', 'Feeds IIS', 'services_4');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_iis' => 'deploy_to_iis',
    'list_of_contents' => 0,
    'deploy_to_akdn' => 0,
    'deploy_to_ismaili' => 0,
  );
  $handler->display->display_options['path'] = 'gallery-feeds-iis';
  $translatables['gallery_syndication'] = array(
    t('Master'),
    t('Feeds IIS'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('queue'),
    t('Title'),
    t('Short Title'),
    t('Body'),
    t('Publish Date'),
    t('Tags'),
    t('Images'),
    t('Related Links'),
    t('Related Speeches'),
    t('Related Press Releases'),
    t('Related Events'),
    t('Related Audio/Video'),
    t('Related Photos'),
    t('Related Projects'),
    t('Related News'),
    t('Related In the Media'),
    t('Related Publications'),
    t('Enable Project Carousel'),
    t('Create Banner Item'),
    t('Caption'),
    t('Pages to exclude'),
    t('Hub page'),
    t('Geography'),
    t('Agency'),
    t('Thematic Area'),
    t('Cycle Year'),
    t('Date Decade'),
    t('Newsletter category'),
    t('Slideshow Image'),
    t('GUID'),
    t('gallery_[nid]'),
    t('Nid'),
    t('Page'),
    t('CSV export'),
    t('Feeds AKDN'),
    t('Feeds Ismaili'),
  );
  $export['gallery_syndication'] = $view;

  $view = new view();
  $view->name = 'geography_syndication';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Geography Syndication';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Feeds IIS';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    1 => '1',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_speech_audio' => 'field_speech_audio',
    'field_speech_image' => 'field_speech_image',
    'field_speech_location' => 'field_speech_location',
    'field_publication_date' => 'field_publication_date',
    'field_publish_date' => 'field_publish_date',
    'field_short_title' => 'field_short_title',
    'field_speech_themes' => 'field_speech_themes',
    'field_speech_type' => 'field_speech_type',
    'field_country' => 'field_country',
    'field_speech_author' => 'field_speech_author',
    'field_date_decade' => 'field_date_decade',
    'field_speech_event' => 'field_speech_event',
    'field_press_releases' => 'field_press_releases',
    'field_publication_url' => 'field_publication_url',
    'field_speech_speaker' => 'field_speech_speaker',
    'field_speech_video' => 'field_speech_video',
    'field_caption' => 'field_caption',
    'field_create_featured_content' => 'field_create_featured_content',
    'field_cycle_year' => 'field_cycle_year',
    'field_enable_project_slider' => 'field_enable_project_slider',
    'field_external_media' => 'field_external_media',
    'field_hub_page' => 'field_hub_page',
    'field_simplenews_term' => 'field_simplenews_term',
    'field_pages_to_exclude' => 'field_pages_to_exclude',
    'field_podcasts_reference' => 'field_podcasts_reference',
    'field_events_reference' => 'field_events_reference',
    'field_related_in_the_media' => 'field_related_in_the_media',
    'field_related_news' => 'field_related_news',
    'field_photos_reference' => 'field_photos_reference',
    'field_press_reference' => 'field_press_reference',
    'field_related_project' => 'field_related_project',
    'field_related_publications' => 'field_related_publications',
    'field_speeches_reference' => 'field_speeches_reference',
    'field_feature_image' => 'field_feature_image',
    'field_agency' => 'field_agency',
    'field_tags' => 'field_tags',
    'field_focus_area' => 'field_focus_area',
    'body' => 'body',
    'nid' => 'nid',
    'nothing' => 'nothing',
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
    'field_speech_audio' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publication_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publish_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_short_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_themes' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_country' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_author' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_decade' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_event' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_press_releases' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publication_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_speaker' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_video' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_caption' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_create_featured_content' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cycle_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_enable_project_slider' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_external_media' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hub_page' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_simplenews_term' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pages_to_exclude' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_podcasts_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_events_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_in_the_media' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_news' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_photos_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_press_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_project' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_publications' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speeches_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_feature_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_agency' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tags' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_focus_area' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
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
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_akdn' => 'deploy_to_akdn',
    'list_of_contents' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Newsletter category */
  $handler->display->display_options['fields']['field_simplenews_term']['id'] = 'field_simplenews_term';
  $handler->display->display_options['fields']['field_simplenews_term']['table'] = 'field_data_field_simplenews_term';
  $handler->display->display_options['fields']['field_simplenews_term']['field'] = 'field_simplenews_term';
  $handler->display->display_options['fields']['field_simplenews_term']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Sub-title */
  $handler->display->display_options['fields']['field_sub_title']['id'] = 'field_sub_title';
  $handler->display->display_options['fields']['field_sub_title']['table'] = 'field_data_field_sub_title';
  $handler->display->display_options['fields']['field_sub_title']['field'] = 'field_sub_title';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_hub_page_image']['id'] = 'field_hub_page_image';
  $handler->display->display_options['fields']['field_hub_page_image']['table'] = 'field_data_field_hub_page_image';
  $handler->display->display_options['fields']['field_hub_page_image']['field'] = 'field_hub_page_image';
  $handler->display->display_options['fields']['field_hub_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_hub_page_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_hub_page_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: About Page */
  $handler->display->display_options['fields']['field_about_page']['id'] = 'field_about_page';
  $handler->display->display_options['fields']['field_about_page']['table'] = 'field_data_field_about_page';
  $handler->display->display_options['fields']['field_about_page']['field'] = 'field_about_page';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Banner Item Area */
  $handler->display->display_options['fields']['field_featured_content_area']['id'] = 'field_featured_content_area';
  $handler->display->display_options['fields']['field_featured_content_area']['table'] = 'field_data_field_featured_content_area';
  $handler->display->display_options['fields']['field_featured_content_area']['field'] = 'field_featured_content_area';
  $handler->display->display_options['fields']['field_featured_content_area']['type'] = 'list_key';
  /* Field: Content: Banner Item Content */
  $handler->display->display_options['fields']['field_featured_content_nodes']['id'] = 'field_featured_content_nodes';
  $handler->display->display_options['fields']['field_featured_content_nodes']['table'] = 'field_data_field_featured_content_nodes';
  $handler->display->display_options['fields']['field_featured_content_nodes']['field'] = 'field_featured_content_nodes';
  $handler->display->display_options['fields']['field_featured_content_nodes']['delta_offset'] = '0';
  /* Field: Content: Enable Project Carousel */
  $handler->display->display_options['fields']['field_enable_project_slider']['id'] = 'field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['table'] = 'field_data_field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['field'] = 'field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['type'] = 'list_key';
  /* Field: Content: About */
  $handler->display->display_options['fields']['field_hub_page_about']['id'] = 'field_hub_page_about';
  $handler->display->display_options['fields']['field_hub_page_about']['table'] = 'field_data_field_hub_page_about';
  $handler->display->display_options['fields']['field_hub_page_about']['field'] = 'field_hub_page_about';
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  /* Field: Content: Project */
  $handler->display->display_options['fields']['field_hub_page_project']['id'] = 'field_hub_page_project';
  $handler->display->display_options['fields']['field_hub_page_project']['table'] = 'field_data_field_hub_page_project';
  $handler->display->display_options['fields']['field_hub_page_project']['field'] = 'field_hub_page_project';
  /* Field: Content: More Link */
  $handler->display->display_options['fields']['field_more_link']['id'] = 'field_more_link';
  $handler->display->display_options['fields']['field_more_link']['table'] = 'field_data_field_more_link';
  $handler->display->display_options['fields']['field_more_link']['field'] = 'field_more_link';
  $handler->display->display_options['fields']['field_more_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_more_link']['type'] = 'link_plain';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'GUID';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'geography_[nid]';
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
    'geography' => 'geography',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'geography-syndication';

  /* Display: CSV export */
  $handler = $view->new_display('views_data_export', 'CSV export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'geography/csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['segment_size'] = '100';

  /* Display: Feeds AKDN */
  $handler = $view->new_display('services', 'Feeds AKDN', 'services_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_akdn' => 'deploy_to_akdn',
    'list_of_contents' => 0,
    'deploy_to_ismaili' => 0,
    'deploy_to_iis' => 0,
  );
  $handler->display->display_options['path'] = 'geography-feeds';

  /* Display: Feeds Ismaili */
  $handler = $view->new_display('services', 'Feeds Ismaili', 'services_3');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_ismaili' => 'deploy_to_ismaili',
    'list_of_contents' => 0,
    'deploy_to_akdn' => 0,
    'deploy_to_iis' => 0,
  );
  $handler->display->display_options['path'] = 'geography-feeds-ismaili';

  /* Display: Feeds IIS */
  $handler = $view->new_display('services', 'Feeds IIS', 'services_4');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_iis' => 'deploy_to_iis',
    'list_of_contents' => 0,
    'deploy_to_akdn' => 0,
    'deploy_to_ismaili' => 0,
  );
  $handler->display->display_options['path'] = 'geography-feeds-iis';
  $translatables['geography_syndication'] = array(
    t('Master'),
    t('Feeds IIS'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('queue'),
    t('Title'),
    t('Newsletter category'),
    t('Sub-title'),
    t('Image'),
    t('About Page'),
    t('Body'),
    t('Banner Item Area'),
    t('Banner Item Content'),
    t('Enable Project Carousel'),
    t('About'),
    t('Summary'),
    t('Tags'),
    t('Project'),
    t('More Link'),
    t('Nid'),
    t('GUID'),
    t('geography_[nid]'),
    t('Page'),
    t('CSV export'),
    t('Feeds AKDN'),
    t('Feeds Ismaili'),
  );
  $export['geography_syndication'] = $view;

  $view = new view();
  $view->name = 'in_the_media_syndication';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'In the media syndication';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Press release syndication';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    1 => '1',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: AKMI ACTIVITY */
  $handler->display->display_options['fields']['field_akmi_activity']['id'] = 'field_akmi_activity';
  $handler->display->display_options['fields']['field_akmi_activity']['table'] = 'field_data_field_akmi_activity';
  $handler->display->display_options['fields']['field_akmi_activity']['field'] = 'field_akmi_activity';
  $handler->display->display_options['fields']['field_akmi_activity']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: AKMI Page */
  $handler->display->display_options['fields']['field_akmi_page']['id'] = 'field_akmi_page';
  $handler->display->display_options['fields']['field_akmi_page']['table'] = 'field_data_field_akmi_page';
  $handler->display->display_options['fields']['field_akmi_page']['field'] = 'field_akmi_page';
  $handler->display->display_options['fields']['field_akmi_page']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Article Author */
  $handler->display->display_options['fields']['field_article_author']['id'] = 'field_article_author';
  $handler->display->display_options['fields']['field_article_author']['table'] = 'field_data_field_article_author';
  $handler->display->display_options['fields']['field_article_author']['field'] = 'field_article_author';
  /* Field: Content: Article Image */
  $handler->display->display_options['fields']['field_article_img']['id'] = 'field_article_img';
  $handler->display->display_options['fields']['field_article_img']['table'] = 'field_data_field_article_img';
  $handler->display->display_options['fields']['field_article_img']['field'] = 'field_article_img';
  $handler->display->display_options['fields']['field_article_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_article_img']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_article_img']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Article Type */
  $handler->display->display_options['fields']['field_article_cat']['id'] = 'field_article_cat';
  $handler->display->display_options['fields']['field_article_cat']['table'] = 'field_data_field_article_cat';
  $handler->display->display_options['fields']['field_article_cat']['field'] = 'field_article_cat';
  $handler->display->display_options['fields']['field_article_cat']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Article URL */
  $handler->display->display_options['fields']['field_article_url']['id'] = 'field_article_url';
  $handler->display->display_options['fields']['field_article_url']['table'] = 'field_data_field_article_url';
  $handler->display->display_options['fields']['field_article_url']['field'] = 'field_article_url';
  $handler->display->display_options['fields']['field_article_url']['settings'] = array(
    'trim_length' => '80',
    'nofollow' => 0,
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  /* Field: Content: Caption Override */
  $handler->display->display_options['fields']['field_caption_override']['id'] = 'field_caption_override';
  $handler->display->display_options['fields']['field_caption_override']['table'] = 'field_data_field_caption_override';
  $handler->display->display_options['fields']['field_caption_override']['field'] = 'field_caption_override';
  /* Field: Content: Create Banner Item */
  $handler->display->display_options['fields']['field_create_featured_content']['id'] = 'field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['table'] = 'field_data_field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['field'] = 'field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['type'] = 'list_key';
  /* Field: Content: Cycle Year */
  $handler->display->display_options['fields']['field_cycle_year']['id'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['table'] = 'field_data_field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['field'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Date Decade */
  $handler->display->display_options['fields']['field_date_decade']['id'] = 'field_date_decade';
  $handler->display->display_options['fields']['field_date_decade']['table'] = 'field_data_field_date_decade';
  $handler->display->display_options['fields']['field_date_decade']['field'] = 'field_date_decade';
  /* Field: Content: Enable Project Carousel */
  $handler->display->display_options['fields']['field_enable_project_slider']['id'] = 'field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['table'] = 'field_data_field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['field'] = 'field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['type'] = 'list_key';
  /* Field: Content: Hub page */
  $handler->display->display_options['fields']['field_hub_page']['id'] = 'field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['table'] = 'field_data_field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['field'] = 'field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_hub_page']['delta_offset'] = '0';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Media Source */
  $handler->display->display_options['fields']['field_media_source']['id'] = 'field_media_source';
  $handler->display->display_options['fields']['field_media_source']['table'] = 'field_data_field_media_source';
  $handler->display->display_options['fields']['field_media_source']['field'] = 'field_media_source';
  $handler->display->display_options['fields']['field_media_source']['label'] = 'Media Source Title';
  $handler->display->display_options['fields']['field_media_source']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_media_source']['type'] = 'link_title_plain';
  /* Field: Content: Media Type */
  $handler->display->display_options['fields']['field_media_type']['id'] = 'field_media_type';
  $handler->display->display_options['fields']['field_media_type']['table'] = 'field_data_field_media_type';
  $handler->display->display_options['fields']['field_media_type']['field'] = 'field_media_type';
  $handler->display->display_options['fields']['field_media_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Pages to exclude */
  $handler->display->display_options['fields']['field_pages_to_exclude']['id'] = 'field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['table'] = 'field_data_field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['field'] = 'field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_pages_to_exclude']['delta_offset'] = '0';
  /* Field: Content: Projects */
  $handler->display->display_options['fields']['field_projects']['id'] = 'field_projects';
  $handler->display->display_options['fields']['field_projects']['table'] = 'field_data_field_projects';
  $handler->display->display_options['fields']['field_projects']['field'] = 'field_projects';
  $handler->display->display_options['fields']['field_projects']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Publication Source Link */
  $handler->display->display_options['fields']['field_publication_source_link']['id'] = 'field_publication_source_link';
  $handler->display->display_options['fields']['field_publication_source_link']['table'] = 'field_data_field_publication_source_link';
  $handler->display->display_options['fields']['field_publication_source_link']['field'] = 'field_publication_source_link';
  $handler->display->display_options['fields']['field_publication_source_link']['settings'] = array(
    'trim_length' => '80',
    'nofollow' => 0,
  );
  /* Field: Content: Publication Source Title */
  $handler->display->display_options['fields']['field_publication_source_title']['id'] = 'field_publication_source_title';
  $handler->display->display_options['fields']['field_publication_source_title']['table'] = 'field_data_field_publication_source_title';
  $handler->display->display_options['fields']['field_publication_source_title']['field'] = 'field_publication_source_title';
  /* Field: Content: Publish Date */
  $handler->display->display_options['fields']['field_publish_date']['id'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['field'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_publish_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Related Audio/Video */
  $handler->display->display_options['fields']['field_podcasts_reference']['id'] = 'field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['table'] = 'field_data_field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['field'] = 'field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_podcasts_reference']['delta_offset'] = '0';
  /* Field: Content: Related In the Media */
  $handler->display->display_options['fields']['field_related_in_the_media']['id'] = 'field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['table'] = 'field_data_field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['field'] = 'field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_related_in_the_media']['delta_offset'] = '0';
  /* Field: Content: Related Links */
  $handler->display->display_options['fields']['field_article_link']['id'] = 'field_article_link';
  $handler->display->display_options['fields']['field_article_link']['table'] = 'field_data_field_article_link';
  $handler->display->display_options['fields']['field_article_link']['field'] = 'field_article_link';
  $handler->display->display_options['fields']['field_article_link']['label'] = 'Related Links Title';
  $handler->display->display_options['fields']['field_article_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_article_link']['type'] = 'link_title_plain';
  $handler->display->display_options['fields']['field_article_link']['delta_offset'] = '0';
  /* Field: Content: Related News */
  $handler->display->display_options['fields']['field_related_news']['id'] = 'field_related_news';
  $handler->display->display_options['fields']['field_related_news']['table'] = 'field_data_field_related_news';
  $handler->display->display_options['fields']['field_related_news']['field'] = 'field_related_news';
  $handler->display->display_options['fields']['field_related_news']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_related_news']['delta_offset'] = '0';
  /* Field: Content: Related Photos */
  $handler->display->display_options['fields']['field_photos_reference']['id'] = 'field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['table'] = 'field_data_field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['field'] = 'field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_photos_reference']['delta_offset'] = '0';
  /* Field: Content: Related Press Releases */
  $handler->display->display_options['fields']['field_press_reference']['id'] = 'field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['table'] = 'field_data_field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['field'] = 'field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_press_reference']['delta_offset'] = '0';
  /* Field: Content: Related Projects */
  $handler->display->display_options['fields']['field_related_project']['id'] = 'field_related_project';
  $handler->display->display_options['fields']['field_related_project']['table'] = 'field_data_field_related_project';
  $handler->display->display_options['fields']['field_related_project']['field'] = 'field_related_project';
  $handler->display->display_options['fields']['field_related_project']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_related_project']['delta_offset'] = '0';
  /* Field: Content: Related Publications */
  $handler->display->display_options['fields']['field_related_publications']['id'] = 'field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['table'] = 'field_data_field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['field'] = 'field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_related_publications']['delta_offset'] = '0';
  /* Field: Content: Related Speeches */
  $handler->display->display_options['fields']['field_speeches_reference']['id'] = 'field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['table'] = 'field_data_field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['field'] = 'field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_speeches_reference']['delta_offset'] = '0';
  /* Field: Content: Select reviewer */
  $handler->display->display_options['fields']['field_select_reviewer']['id'] = 'field_select_reviewer';
  $handler->display->display_options['fields']['field_select_reviewer']['table'] = 'field_data_field_select_reviewer';
  $handler->display->display_options['fields']['field_select_reviewer']['field'] = 'field_select_reviewer';
  $handler->display->display_options['fields']['field_select_reviewer']['type'] = 'user_reference_uid';
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  /* Field: Content: Slideshow Image */
  $handler->display->display_options['fields']['field_feature_image']['id'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['field'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_feature_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = '*';
  /* Field: Field: Agency */
  $handler->display->display_options['fields']['field_agency']['id'] = 'field_agency';
  $handler->display->display_options['fields']['field_agency']['table'] = 'field_data_field_agency';
  $handler->display->display_options['fields']['field_agency']['field'] = 'field_agency';
  $handler->display->display_options['fields']['field_agency']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_agency']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_agency']['separator'] = '*';
  /* Field: Field: Geography */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_country']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_country']['separator'] = '* ';
  /* Field: Field: Related Events */
  $handler->display->display_options['fields']['field_events_reference']['id'] = 'field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['table'] = 'field_data_field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['field'] = 'field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_events_reference']['delta_offset'] = '0';
  /* Field: Field: Thematic Area */
  $handler->display->display_options['fields']['field_focus_area']['id'] = 'field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['table'] = 'field_data_field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['field'] = 'field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_focus_area']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_focus_area']['separator'] = '*';
  /* Field: Content: Media Source */
  $handler->display->display_options['fields']['field_media_source_1']['id'] = 'field_media_source_1';
  $handler->display->display_options['fields']['field_media_source_1']['table'] = 'field_data_field_media_source';
  $handler->display->display_options['fields']['field_media_source_1']['field'] = 'field_media_source';
  $handler->display->display_options['fields']['field_media_source_1']['label'] = 'Media Source URL';
  $handler->display->display_options['fields']['field_media_source_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_media_source_1']['type'] = 'link_plain';
  /* Field: Content: Related Links */
  $handler->display->display_options['fields']['field_article_link_1']['id'] = 'field_article_link_1';
  $handler->display->display_options['fields']['field_article_link_1']['table'] = 'field_data_field_article_link';
  $handler->display->display_options['fields']['field_article_link_1']['field'] = 'field_article_link';
  $handler->display->display_options['fields']['field_article_link_1']['label'] = 'Related Links URL';
  $handler->display->display_options['fields']['field_article_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_article_link_1']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_article_link_1']['delta_offset'] = '0';
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
    'article' => 'article',
  );
  /* Filter criterion: Content: Article Type (field_article_cat) */
  $handler->display->display_options['filters']['field_article_cat_tid']['id'] = 'field_article_cat_tid';
  $handler->display->display_options['filters']['field_article_cat_tid']['table'] = 'field_data_field_article_cat';
  $handler->display->display_options['filters']['field_article_cat_tid']['field'] = 'field_article_cat_tid';
  $handler->display->display_options['filters']['field_article_cat_tid']['value'] = array(
    0 => '2516',
  );
  $handler->display->display_options['filters']['field_article_cat_tid']['vocabulary'] = 'article_type';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'in-the-media-syndication';

  /* Display: Services feeds AKDN */
  $handler = $view->new_display('services', 'Services feeds AKDN', 'services_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_akdn' => 'deploy_to_akdn',
    'list_of_contents' => 0,
    'deploy_to_ismaili' => 0,
    'deploy_to_iis' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: AKMI ACTIVITY */
  $handler->display->display_options['fields']['field_akmi_activity']['id'] = 'field_akmi_activity';
  $handler->display->display_options['fields']['field_akmi_activity']['table'] = 'field_data_field_akmi_activity';
  $handler->display->display_options['fields']['field_akmi_activity']['field'] = 'field_akmi_activity';
  $handler->display->display_options['fields']['field_akmi_activity']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: AKMI Page */
  $handler->display->display_options['fields']['field_akmi_page']['id'] = 'field_akmi_page';
  $handler->display->display_options['fields']['field_akmi_page']['table'] = 'field_data_field_akmi_page';
  $handler->display->display_options['fields']['field_akmi_page']['field'] = 'field_akmi_page';
  $handler->display->display_options['fields']['field_akmi_page']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Article Author */
  $handler->display->display_options['fields']['field_article_author']['id'] = 'field_article_author';
  $handler->display->display_options['fields']['field_article_author']['table'] = 'field_data_field_article_author';
  $handler->display->display_options['fields']['field_article_author']['field'] = 'field_article_author';
  /* Field: Content: Article Image */
  $handler->display->display_options['fields']['field_article_img']['id'] = 'field_article_img';
  $handler->display->display_options['fields']['field_article_img']['table'] = 'field_data_field_article_img';
  $handler->display->display_options['fields']['field_article_img']['field'] = 'field_article_img';
  $handler->display->display_options['fields']['field_article_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_article_img']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_article_img']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Article Type */
  $handler->display->display_options['fields']['field_article_cat']['id'] = 'field_article_cat';
  $handler->display->display_options['fields']['field_article_cat']['table'] = 'field_data_field_article_cat';
  $handler->display->display_options['fields']['field_article_cat']['field'] = 'field_article_cat';
  $handler->display->display_options['fields']['field_article_cat']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Article URL */
  $handler->display->display_options['fields']['field_article_url']['id'] = 'field_article_url';
  $handler->display->display_options['fields']['field_article_url']['table'] = 'field_data_field_article_url';
  $handler->display->display_options['fields']['field_article_url']['field'] = 'field_article_url';
  $handler->display->display_options['fields']['field_article_url']['settings'] = array(
    'trim_length' => '80',
    'nofollow' => 0,
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  /* Field: Content: Caption Override */
  $handler->display->display_options['fields']['field_caption_override']['id'] = 'field_caption_override';
  $handler->display->display_options['fields']['field_caption_override']['table'] = 'field_data_field_caption_override';
  $handler->display->display_options['fields']['field_caption_override']['field'] = 'field_caption_override';
  /* Field: Content: Create Banner Item */
  $handler->display->display_options['fields']['field_create_featured_content']['id'] = 'field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['table'] = 'field_data_field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['field'] = 'field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['type'] = 'list_key';
  /* Field: Content: Cycle Year */
  $handler->display->display_options['fields']['field_cycle_year']['id'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['table'] = 'field_data_field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['field'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_cycle_year']['settings'] = array(
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  /* Field: Content: Date Decade */
  $handler->display->display_options['fields']['field_date_decade']['id'] = 'field_date_decade';
  $handler->display->display_options['fields']['field_date_decade']['table'] = 'field_data_field_date_decade';
  $handler->display->display_options['fields']['field_date_decade']['field'] = 'field_date_decade';
  /* Field: Content: Enable Project Carousel */
  $handler->display->display_options['fields']['field_enable_project_slider']['id'] = 'field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['table'] = 'field_data_field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['field'] = 'field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['type'] = 'list_key';
  /* Field: Content: Hub page */
  $handler->display->display_options['fields']['field_hub_page']['id'] = 'field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['table'] = 'field_data_field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['field'] = 'field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_hub_page']['delta_offset'] = '0';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Media Source */
  $handler->display->display_options['fields']['field_media_source']['id'] = 'field_media_source';
  $handler->display->display_options['fields']['field_media_source']['table'] = 'field_data_field_media_source';
  $handler->display->display_options['fields']['field_media_source']['field'] = 'field_media_source';
  $handler->display->display_options['fields']['field_media_source']['label'] = 'Media Source Title';
  $handler->display->display_options['fields']['field_media_source']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_media_source']['type'] = 'link_title_plain';
  /* Field: Content: Media Type */
  $handler->display->display_options['fields']['field_media_type']['id'] = 'field_media_type';
  $handler->display->display_options['fields']['field_media_type']['table'] = 'field_data_field_media_type';
  $handler->display->display_options['fields']['field_media_type']['field'] = 'field_media_type';
  $handler->display->display_options['fields']['field_media_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Pages to exclude */
  $handler->display->display_options['fields']['field_pages_to_exclude']['id'] = 'field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['table'] = 'field_data_field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['field'] = 'field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_pages_to_exclude']['delta_offset'] = '0';
  /* Field: Content: Projects */
  $handler->display->display_options['fields']['field_projects']['id'] = 'field_projects';
  $handler->display->display_options['fields']['field_projects']['table'] = 'field_data_field_projects';
  $handler->display->display_options['fields']['field_projects']['field'] = 'field_projects';
  $handler->display->display_options['fields']['field_projects']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Publication Source Link */
  $handler->display->display_options['fields']['field_publication_source_link']['id'] = 'field_publication_source_link';
  $handler->display->display_options['fields']['field_publication_source_link']['table'] = 'field_data_field_publication_source_link';
  $handler->display->display_options['fields']['field_publication_source_link']['field'] = 'field_publication_source_link';
  $handler->display->display_options['fields']['field_publication_source_link']['settings'] = array(
    'trim_length' => '80',
    'nofollow' => 0,
  );
  /* Field: Content: Publication Source Title */
  $handler->display->display_options['fields']['field_publication_source_title']['id'] = 'field_publication_source_title';
  $handler->display->display_options['fields']['field_publication_source_title']['table'] = 'field_data_field_publication_source_title';
  $handler->display->display_options['fields']['field_publication_source_title']['field'] = 'field_publication_source_title';
  /* Field: Content: Publish Date */
  $handler->display->display_options['fields']['field_publish_date']['id'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['field'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_publish_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Related Audio/Video */
  $handler->display->display_options['fields']['field_podcasts_reference']['id'] = 'field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['table'] = 'field_data_field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['field'] = 'field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_podcasts_reference']['delta_offset'] = '0';
  /* Field: Content: Related In the Media */
  $handler->display->display_options['fields']['field_related_in_the_media']['id'] = 'field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['table'] = 'field_data_field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['field'] = 'field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_related_in_the_media']['delta_offset'] = '0';
  /* Field: Content: Related Links */
  $handler->display->display_options['fields']['field_article_link']['id'] = 'field_article_link';
  $handler->display->display_options['fields']['field_article_link']['table'] = 'field_data_field_article_link';
  $handler->display->display_options['fields']['field_article_link']['field'] = 'field_article_link';
  $handler->display->display_options['fields']['field_article_link']['label'] = 'Related Links Title';
  $handler->display->display_options['fields']['field_article_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_article_link']['type'] = 'link_title_plain';
  $handler->display->display_options['fields']['field_article_link']['delta_offset'] = '0';
  /* Field: Content: Related News */
  $handler->display->display_options['fields']['field_related_news']['id'] = 'field_related_news';
  $handler->display->display_options['fields']['field_related_news']['table'] = 'field_data_field_related_news';
  $handler->display->display_options['fields']['field_related_news']['field'] = 'field_related_news';
  $handler->display->display_options['fields']['field_related_news']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_related_news']['delta_offset'] = '0';
  /* Field: Content: Related Photos */
  $handler->display->display_options['fields']['field_photos_reference']['id'] = 'field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['table'] = 'field_data_field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['field'] = 'field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_photos_reference']['delta_offset'] = '0';
  /* Field: Content: Related Press Releases */
  $handler->display->display_options['fields']['field_press_reference']['id'] = 'field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['table'] = 'field_data_field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['field'] = 'field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_press_reference']['delta_offset'] = '0';
  /* Field: Content: Related Projects */
  $handler->display->display_options['fields']['field_related_project']['id'] = 'field_related_project';
  $handler->display->display_options['fields']['field_related_project']['table'] = 'field_data_field_related_project';
  $handler->display->display_options['fields']['field_related_project']['field'] = 'field_related_project';
  $handler->display->display_options['fields']['field_related_project']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_related_project']['delta_offset'] = '0';
  /* Field: Content: Related Publications */
  $handler->display->display_options['fields']['field_related_publications']['id'] = 'field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['table'] = 'field_data_field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['field'] = 'field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_related_publications']['delta_offset'] = '0';
  /* Field: Content: Related Speeches */
  $handler->display->display_options['fields']['field_speeches_reference']['id'] = 'field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['table'] = 'field_data_field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['field'] = 'field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_speeches_reference']['delta_offset'] = '0';
  /* Field: Content: Select reviewer */
  $handler->display->display_options['fields']['field_select_reviewer']['id'] = 'field_select_reviewer';
  $handler->display->display_options['fields']['field_select_reviewer']['table'] = 'field_data_field_select_reviewer';
  $handler->display->display_options['fields']['field_select_reviewer']['field'] = 'field_select_reviewer';
  $handler->display->display_options['fields']['field_select_reviewer']['type'] = 'user_reference_uid';
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  /* Field: Content: Slideshow Image */
  $handler->display->display_options['fields']['field_feature_image']['id'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['field'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_feature_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = '*';
  /* Field: Field: Agency */
  $handler->display->display_options['fields']['field_agency']['id'] = 'field_agency';
  $handler->display->display_options['fields']['field_agency']['table'] = 'field_data_field_agency';
  $handler->display->display_options['fields']['field_agency']['field'] = 'field_agency';
  $handler->display->display_options['fields']['field_agency']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_agency']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_agency']['separator'] = '*';
  /* Field: Field: Geography */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_country']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_country']['separator'] = '* ';
  /* Field: Field: Related Events */
  $handler->display->display_options['fields']['field_events_reference']['id'] = 'field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['table'] = 'field_data_field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['field'] = 'field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_events_reference']['delta_offset'] = '0';
  /* Field: Field: Thematic Area */
  $handler->display->display_options['fields']['field_focus_area']['id'] = 'field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['table'] = 'field_data_field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['field'] = 'field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_focus_area']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_focus_area']['separator'] = '*';
  /* Field: Content: Media Source */
  $handler->display->display_options['fields']['field_media_source_1']['id'] = 'field_media_source_1';
  $handler->display->display_options['fields']['field_media_source_1']['table'] = 'field_data_field_media_source';
  $handler->display->display_options['fields']['field_media_source_1']['field'] = 'field_media_source';
  $handler->display->display_options['fields']['field_media_source_1']['label'] = 'Media Source URL';
  $handler->display->display_options['fields']['field_media_source_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_media_source_1']['type'] = 'link_plain';
  /* Field: Content: Related Links */
  $handler->display->display_options['fields']['field_article_link_1']['id'] = 'field_article_link_1';
  $handler->display->display_options['fields']['field_article_link_1']['table'] = 'field_data_field_article_link';
  $handler->display->display_options['fields']['field_article_link_1']['field'] = 'field_article_link';
  $handler->display->display_options['fields']['field_article_link_1']['label'] = 'Related Links URL';
  $handler->display->display_options['fields']['field_article_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_article_link_1']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_article_link_1']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'in-the-media-feeds';

  /* Display: Services feeds Ismaili */
  $handler = $view->new_display('services', 'Services feeds Ismaili', 'services_2');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_ismaili' => 'deploy_to_ismaili',
    'list_of_contents' => 0,
    'deploy_to_akdn' => 0,
    'deploy_to_iis' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: AKMI ACTIVITY */
  $handler->display->display_options['fields']['field_akmi_activity']['id'] = 'field_akmi_activity';
  $handler->display->display_options['fields']['field_akmi_activity']['table'] = 'field_data_field_akmi_activity';
  $handler->display->display_options['fields']['field_akmi_activity']['field'] = 'field_akmi_activity';
  $handler->display->display_options['fields']['field_akmi_activity']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: AKMI Page */
  $handler->display->display_options['fields']['field_akmi_page']['id'] = 'field_akmi_page';
  $handler->display->display_options['fields']['field_akmi_page']['table'] = 'field_data_field_akmi_page';
  $handler->display->display_options['fields']['field_akmi_page']['field'] = 'field_akmi_page';
  $handler->display->display_options['fields']['field_akmi_page']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Article Author */
  $handler->display->display_options['fields']['field_article_author']['id'] = 'field_article_author';
  $handler->display->display_options['fields']['field_article_author']['table'] = 'field_data_field_article_author';
  $handler->display->display_options['fields']['field_article_author']['field'] = 'field_article_author';
  /* Field: Content: Article Image */
  $handler->display->display_options['fields']['field_article_img']['id'] = 'field_article_img';
  $handler->display->display_options['fields']['field_article_img']['table'] = 'field_data_field_article_img';
  $handler->display->display_options['fields']['field_article_img']['field'] = 'field_article_img';
  $handler->display->display_options['fields']['field_article_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_article_img']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_article_img']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Article Type */
  $handler->display->display_options['fields']['field_article_cat']['id'] = 'field_article_cat';
  $handler->display->display_options['fields']['field_article_cat']['table'] = 'field_data_field_article_cat';
  $handler->display->display_options['fields']['field_article_cat']['field'] = 'field_article_cat';
  $handler->display->display_options['fields']['field_article_cat']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Article URL */
  $handler->display->display_options['fields']['field_article_url']['id'] = 'field_article_url';
  $handler->display->display_options['fields']['field_article_url']['table'] = 'field_data_field_article_url';
  $handler->display->display_options['fields']['field_article_url']['field'] = 'field_article_url';
  $handler->display->display_options['fields']['field_article_url']['settings'] = array(
    'trim_length' => '80',
    'nofollow' => 0,
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  /* Field: Content: Caption Override */
  $handler->display->display_options['fields']['field_caption_override']['id'] = 'field_caption_override';
  $handler->display->display_options['fields']['field_caption_override']['table'] = 'field_data_field_caption_override';
  $handler->display->display_options['fields']['field_caption_override']['field'] = 'field_caption_override';
  /* Field: Content: Create Banner Item */
  $handler->display->display_options['fields']['field_create_featured_content']['id'] = 'field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['table'] = 'field_data_field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['field'] = 'field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['type'] = 'list_key';
  /* Field: Content: Cycle Year */
  $handler->display->display_options['fields']['field_cycle_year']['id'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['table'] = 'field_data_field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['field'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_cycle_year']['settings'] = array(
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  /* Field: Content: Date Decade */
  $handler->display->display_options['fields']['field_date_decade']['id'] = 'field_date_decade';
  $handler->display->display_options['fields']['field_date_decade']['table'] = 'field_data_field_date_decade';
  $handler->display->display_options['fields']['field_date_decade']['field'] = 'field_date_decade';
  /* Field: Content: Enable Project Carousel */
  $handler->display->display_options['fields']['field_enable_project_slider']['id'] = 'field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['table'] = 'field_data_field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['field'] = 'field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['type'] = 'list_key';
  /* Field: Content: Hub page */
  $handler->display->display_options['fields']['field_hub_page']['id'] = 'field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['table'] = 'field_data_field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['field'] = 'field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_hub_page']['delta_offset'] = '0';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Media Source */
  $handler->display->display_options['fields']['field_media_source']['id'] = 'field_media_source';
  $handler->display->display_options['fields']['field_media_source']['table'] = 'field_data_field_media_source';
  $handler->display->display_options['fields']['field_media_source']['field'] = 'field_media_source';
  $handler->display->display_options['fields']['field_media_source']['label'] = 'Media Source Title';
  $handler->display->display_options['fields']['field_media_source']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_media_source']['type'] = 'link_title_plain';
  /* Field: Content: Media Type */
  $handler->display->display_options['fields']['field_media_type']['id'] = 'field_media_type';
  $handler->display->display_options['fields']['field_media_type']['table'] = 'field_data_field_media_type';
  $handler->display->display_options['fields']['field_media_type']['field'] = 'field_media_type';
  $handler->display->display_options['fields']['field_media_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Pages to exclude */
  $handler->display->display_options['fields']['field_pages_to_exclude']['id'] = 'field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['table'] = 'field_data_field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['field'] = 'field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_pages_to_exclude']['delta_offset'] = '0';
  /* Field: Content: Projects */
  $handler->display->display_options['fields']['field_projects']['id'] = 'field_projects';
  $handler->display->display_options['fields']['field_projects']['table'] = 'field_data_field_projects';
  $handler->display->display_options['fields']['field_projects']['field'] = 'field_projects';
  $handler->display->display_options['fields']['field_projects']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Publication Source Link */
  $handler->display->display_options['fields']['field_publication_source_link']['id'] = 'field_publication_source_link';
  $handler->display->display_options['fields']['field_publication_source_link']['table'] = 'field_data_field_publication_source_link';
  $handler->display->display_options['fields']['field_publication_source_link']['field'] = 'field_publication_source_link';
  $handler->display->display_options['fields']['field_publication_source_link']['settings'] = array(
    'trim_length' => '80',
    'nofollow' => 0,
  );
  /* Field: Content: Publication Source Title */
  $handler->display->display_options['fields']['field_publication_source_title']['id'] = 'field_publication_source_title';
  $handler->display->display_options['fields']['field_publication_source_title']['table'] = 'field_data_field_publication_source_title';
  $handler->display->display_options['fields']['field_publication_source_title']['field'] = 'field_publication_source_title';
  /* Field: Content: Publish Date */
  $handler->display->display_options['fields']['field_publish_date']['id'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['field'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_publish_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Related Audio/Video */
  $handler->display->display_options['fields']['field_podcasts_reference']['id'] = 'field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['table'] = 'field_data_field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['field'] = 'field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_podcasts_reference']['delta_offset'] = '0';
  /* Field: Content: Related In the Media */
  $handler->display->display_options['fields']['field_related_in_the_media']['id'] = 'field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['table'] = 'field_data_field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['field'] = 'field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_related_in_the_media']['delta_offset'] = '0';
  /* Field: Content: Related Links */
  $handler->display->display_options['fields']['field_article_link']['id'] = 'field_article_link';
  $handler->display->display_options['fields']['field_article_link']['table'] = 'field_data_field_article_link';
  $handler->display->display_options['fields']['field_article_link']['field'] = 'field_article_link';
  $handler->display->display_options['fields']['field_article_link']['label'] = 'Related Links Title';
  $handler->display->display_options['fields']['field_article_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_article_link']['type'] = 'link_title_plain';
  $handler->display->display_options['fields']['field_article_link']['delta_offset'] = '0';
  /* Field: Content: Related News */
  $handler->display->display_options['fields']['field_related_news']['id'] = 'field_related_news';
  $handler->display->display_options['fields']['field_related_news']['table'] = 'field_data_field_related_news';
  $handler->display->display_options['fields']['field_related_news']['field'] = 'field_related_news';
  $handler->display->display_options['fields']['field_related_news']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_related_news']['delta_offset'] = '0';
  /* Field: Content: Related Photos */
  $handler->display->display_options['fields']['field_photos_reference']['id'] = 'field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['table'] = 'field_data_field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['field'] = 'field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_photos_reference']['delta_offset'] = '0';
  /* Field: Content: Related Press Releases */
  $handler->display->display_options['fields']['field_press_reference']['id'] = 'field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['table'] = 'field_data_field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['field'] = 'field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_press_reference']['delta_offset'] = '0';
  /* Field: Content: Related Projects */
  $handler->display->display_options['fields']['field_related_project']['id'] = 'field_related_project';
  $handler->display->display_options['fields']['field_related_project']['table'] = 'field_data_field_related_project';
  $handler->display->display_options['fields']['field_related_project']['field'] = 'field_related_project';
  $handler->display->display_options['fields']['field_related_project']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_related_project']['delta_offset'] = '0';
  /* Field: Content: Related Publications */
  $handler->display->display_options['fields']['field_related_publications']['id'] = 'field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['table'] = 'field_data_field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['field'] = 'field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_related_publications']['delta_offset'] = '0';
  /* Field: Content: Related Speeches */
  $handler->display->display_options['fields']['field_speeches_reference']['id'] = 'field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['table'] = 'field_data_field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['field'] = 'field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_speeches_reference']['delta_offset'] = '0';
  /* Field: Content: Select reviewer */
  $handler->display->display_options['fields']['field_select_reviewer']['id'] = 'field_select_reviewer';
  $handler->display->display_options['fields']['field_select_reviewer']['table'] = 'field_data_field_select_reviewer';
  $handler->display->display_options['fields']['field_select_reviewer']['field'] = 'field_select_reviewer';
  $handler->display->display_options['fields']['field_select_reviewer']['type'] = 'user_reference_uid';
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  /* Field: Content: Slideshow Image */
  $handler->display->display_options['fields']['field_feature_image']['id'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['field'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_feature_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = '*';
  /* Field: Field: Agency */
  $handler->display->display_options['fields']['field_agency']['id'] = 'field_agency';
  $handler->display->display_options['fields']['field_agency']['table'] = 'field_data_field_agency';
  $handler->display->display_options['fields']['field_agency']['field'] = 'field_agency';
  $handler->display->display_options['fields']['field_agency']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_agency']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_agency']['separator'] = '*';
  /* Field: Field: Geography */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_country']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_country']['separator'] = '* ';
  /* Field: Field: Related Events */
  $handler->display->display_options['fields']['field_events_reference']['id'] = 'field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['table'] = 'field_data_field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['field'] = 'field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_events_reference']['delta_offset'] = '0';
  /* Field: Field: Thematic Area */
  $handler->display->display_options['fields']['field_focus_area']['id'] = 'field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['table'] = 'field_data_field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['field'] = 'field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_focus_area']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_focus_area']['separator'] = '*';
  /* Field: Content: Media Source */
  $handler->display->display_options['fields']['field_media_source_1']['id'] = 'field_media_source_1';
  $handler->display->display_options['fields']['field_media_source_1']['table'] = 'field_data_field_media_source';
  $handler->display->display_options['fields']['field_media_source_1']['field'] = 'field_media_source';
  $handler->display->display_options['fields']['field_media_source_1']['label'] = 'Media Source URL';
  $handler->display->display_options['fields']['field_media_source_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_media_source_1']['type'] = 'link_plain';
  /* Field: Content: Related Links */
  $handler->display->display_options['fields']['field_article_link_1']['id'] = 'field_article_link_1';
  $handler->display->display_options['fields']['field_article_link_1']['table'] = 'field_data_field_article_link';
  $handler->display->display_options['fields']['field_article_link_1']['field'] = 'field_article_link';
  $handler->display->display_options['fields']['field_article_link_1']['label'] = 'Related Links URL';
  $handler->display->display_options['fields']['field_article_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_article_link_1']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_article_link_1']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'in-the-media-feeds-ismaili';

  /* Display: Services feeds IIS */
  $handler = $view->new_display('services', 'Services feeds IIS', 'services_3');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_iis' => 'deploy_to_iis',
    'list_of_contents' => 0,
    'deploy_to_akdn' => 0,
    'deploy_to_ismaili' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: AKMI ACTIVITY */
  $handler->display->display_options['fields']['field_akmi_activity']['id'] = 'field_akmi_activity';
  $handler->display->display_options['fields']['field_akmi_activity']['table'] = 'field_data_field_akmi_activity';
  $handler->display->display_options['fields']['field_akmi_activity']['field'] = 'field_akmi_activity';
  $handler->display->display_options['fields']['field_akmi_activity']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: AKMI Page */
  $handler->display->display_options['fields']['field_akmi_page']['id'] = 'field_akmi_page';
  $handler->display->display_options['fields']['field_akmi_page']['table'] = 'field_data_field_akmi_page';
  $handler->display->display_options['fields']['field_akmi_page']['field'] = 'field_akmi_page';
  $handler->display->display_options['fields']['field_akmi_page']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Article Author */
  $handler->display->display_options['fields']['field_article_author']['id'] = 'field_article_author';
  $handler->display->display_options['fields']['field_article_author']['table'] = 'field_data_field_article_author';
  $handler->display->display_options['fields']['field_article_author']['field'] = 'field_article_author';
  /* Field: Content: Article Image */
  $handler->display->display_options['fields']['field_article_img']['id'] = 'field_article_img';
  $handler->display->display_options['fields']['field_article_img']['table'] = 'field_data_field_article_img';
  $handler->display->display_options['fields']['field_article_img']['field'] = 'field_article_img';
  $handler->display->display_options['fields']['field_article_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_article_img']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_article_img']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Article Type */
  $handler->display->display_options['fields']['field_article_cat']['id'] = 'field_article_cat';
  $handler->display->display_options['fields']['field_article_cat']['table'] = 'field_data_field_article_cat';
  $handler->display->display_options['fields']['field_article_cat']['field'] = 'field_article_cat';
  $handler->display->display_options['fields']['field_article_cat']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Article URL */
  $handler->display->display_options['fields']['field_article_url']['id'] = 'field_article_url';
  $handler->display->display_options['fields']['field_article_url']['table'] = 'field_data_field_article_url';
  $handler->display->display_options['fields']['field_article_url']['field'] = 'field_article_url';
  $handler->display->display_options['fields']['field_article_url']['settings'] = array(
    'trim_length' => '80',
    'nofollow' => 0,
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  /* Field: Content: Caption Override */
  $handler->display->display_options['fields']['field_caption_override']['id'] = 'field_caption_override';
  $handler->display->display_options['fields']['field_caption_override']['table'] = 'field_data_field_caption_override';
  $handler->display->display_options['fields']['field_caption_override']['field'] = 'field_caption_override';
  /* Field: Content: Create Banner Item */
  $handler->display->display_options['fields']['field_create_featured_content']['id'] = 'field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['table'] = 'field_data_field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['field'] = 'field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['type'] = 'list_key';
  /* Field: Content: Cycle Year */
  $handler->display->display_options['fields']['field_cycle_year']['id'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['table'] = 'field_data_field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['field'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_cycle_year']['settings'] = array(
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  /* Field: Content: Date Decade */
  $handler->display->display_options['fields']['field_date_decade']['id'] = 'field_date_decade';
  $handler->display->display_options['fields']['field_date_decade']['table'] = 'field_data_field_date_decade';
  $handler->display->display_options['fields']['field_date_decade']['field'] = 'field_date_decade';
  /* Field: Content: Enable Project Carousel */
  $handler->display->display_options['fields']['field_enable_project_slider']['id'] = 'field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['table'] = 'field_data_field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['field'] = 'field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['type'] = 'list_key';
  /* Field: Content: Hub page */
  $handler->display->display_options['fields']['field_hub_page']['id'] = 'field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['table'] = 'field_data_field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['field'] = 'field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_hub_page']['delta_offset'] = '0';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Media Source */
  $handler->display->display_options['fields']['field_media_source']['id'] = 'field_media_source';
  $handler->display->display_options['fields']['field_media_source']['table'] = 'field_data_field_media_source';
  $handler->display->display_options['fields']['field_media_source']['field'] = 'field_media_source';
  $handler->display->display_options['fields']['field_media_source']['label'] = 'Media Source Title';
  $handler->display->display_options['fields']['field_media_source']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_media_source']['type'] = 'link_title_plain';
  /* Field: Content: Media Type */
  $handler->display->display_options['fields']['field_media_type']['id'] = 'field_media_type';
  $handler->display->display_options['fields']['field_media_type']['table'] = 'field_data_field_media_type';
  $handler->display->display_options['fields']['field_media_type']['field'] = 'field_media_type';
  $handler->display->display_options['fields']['field_media_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Pages to exclude */
  $handler->display->display_options['fields']['field_pages_to_exclude']['id'] = 'field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['table'] = 'field_data_field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['field'] = 'field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_pages_to_exclude']['delta_offset'] = '0';
  /* Field: Content: Projects */
  $handler->display->display_options['fields']['field_projects']['id'] = 'field_projects';
  $handler->display->display_options['fields']['field_projects']['table'] = 'field_data_field_projects';
  $handler->display->display_options['fields']['field_projects']['field'] = 'field_projects';
  $handler->display->display_options['fields']['field_projects']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Publication Source Link */
  $handler->display->display_options['fields']['field_publication_source_link']['id'] = 'field_publication_source_link';
  $handler->display->display_options['fields']['field_publication_source_link']['table'] = 'field_data_field_publication_source_link';
  $handler->display->display_options['fields']['field_publication_source_link']['field'] = 'field_publication_source_link';
  $handler->display->display_options['fields']['field_publication_source_link']['settings'] = array(
    'trim_length' => '80',
    'nofollow' => 0,
  );
  /* Field: Content: Publication Source Title */
  $handler->display->display_options['fields']['field_publication_source_title']['id'] = 'field_publication_source_title';
  $handler->display->display_options['fields']['field_publication_source_title']['table'] = 'field_data_field_publication_source_title';
  $handler->display->display_options['fields']['field_publication_source_title']['field'] = 'field_publication_source_title';
  /* Field: Content: Publish Date */
  $handler->display->display_options['fields']['field_publish_date']['id'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['field'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_publish_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Related Audio/Video */
  $handler->display->display_options['fields']['field_podcasts_reference']['id'] = 'field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['table'] = 'field_data_field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['field'] = 'field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_podcasts_reference']['delta_offset'] = '0';
  /* Field: Content: Related In the Media */
  $handler->display->display_options['fields']['field_related_in_the_media']['id'] = 'field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['table'] = 'field_data_field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['field'] = 'field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_related_in_the_media']['delta_offset'] = '0';
  /* Field: Content: Related Links */
  $handler->display->display_options['fields']['field_article_link']['id'] = 'field_article_link';
  $handler->display->display_options['fields']['field_article_link']['table'] = 'field_data_field_article_link';
  $handler->display->display_options['fields']['field_article_link']['field'] = 'field_article_link';
  $handler->display->display_options['fields']['field_article_link']['label'] = 'Related Links Title';
  $handler->display->display_options['fields']['field_article_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_article_link']['type'] = 'link_title_plain';
  $handler->display->display_options['fields']['field_article_link']['delta_offset'] = '0';
  /* Field: Content: Related News */
  $handler->display->display_options['fields']['field_related_news']['id'] = 'field_related_news';
  $handler->display->display_options['fields']['field_related_news']['table'] = 'field_data_field_related_news';
  $handler->display->display_options['fields']['field_related_news']['field'] = 'field_related_news';
  $handler->display->display_options['fields']['field_related_news']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_related_news']['delta_offset'] = '0';
  /* Field: Content: Related Photos */
  $handler->display->display_options['fields']['field_photos_reference']['id'] = 'field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['table'] = 'field_data_field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['field'] = 'field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_photos_reference']['delta_offset'] = '0';
  /* Field: Content: Related Press Releases */
  $handler->display->display_options['fields']['field_press_reference']['id'] = 'field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['table'] = 'field_data_field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['field'] = 'field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_press_reference']['delta_offset'] = '0';
  /* Field: Content: Related Projects */
  $handler->display->display_options['fields']['field_related_project']['id'] = 'field_related_project';
  $handler->display->display_options['fields']['field_related_project']['table'] = 'field_data_field_related_project';
  $handler->display->display_options['fields']['field_related_project']['field'] = 'field_related_project';
  $handler->display->display_options['fields']['field_related_project']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_related_project']['delta_offset'] = '0';
  /* Field: Content: Related Publications */
  $handler->display->display_options['fields']['field_related_publications']['id'] = 'field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['table'] = 'field_data_field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['field'] = 'field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_related_publications']['delta_offset'] = '0';
  /* Field: Content: Related Speeches */
  $handler->display->display_options['fields']['field_speeches_reference']['id'] = 'field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['table'] = 'field_data_field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['field'] = 'field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_speeches_reference']['delta_offset'] = '0';
  /* Field: Content: Select reviewer */
  $handler->display->display_options['fields']['field_select_reviewer']['id'] = 'field_select_reviewer';
  $handler->display->display_options['fields']['field_select_reviewer']['table'] = 'field_data_field_select_reviewer';
  $handler->display->display_options['fields']['field_select_reviewer']['field'] = 'field_select_reviewer';
  $handler->display->display_options['fields']['field_select_reviewer']['type'] = 'user_reference_uid';
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  /* Field: Content: Slideshow Image */
  $handler->display->display_options['fields']['field_feature_image']['id'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['field'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_feature_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = '*';
  /* Field: Field: Agency */
  $handler->display->display_options['fields']['field_agency']['id'] = 'field_agency';
  $handler->display->display_options['fields']['field_agency']['table'] = 'field_data_field_agency';
  $handler->display->display_options['fields']['field_agency']['field'] = 'field_agency';
  $handler->display->display_options['fields']['field_agency']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_agency']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_agency']['separator'] = '*';
  /* Field: Field: Geography */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_country']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_country']['separator'] = '* ';
  /* Field: Field: Related Events */
  $handler->display->display_options['fields']['field_events_reference']['id'] = 'field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['table'] = 'field_data_field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['field'] = 'field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_events_reference']['delta_offset'] = '0';
  /* Field: Field: Thematic Area */
  $handler->display->display_options['fields']['field_focus_area']['id'] = 'field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['table'] = 'field_data_field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['field'] = 'field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_focus_area']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_focus_area']['separator'] = '*';
  /* Field: Content: Media Source */
  $handler->display->display_options['fields']['field_media_source_1']['id'] = 'field_media_source_1';
  $handler->display->display_options['fields']['field_media_source_1']['table'] = 'field_data_field_media_source';
  $handler->display->display_options['fields']['field_media_source_1']['field'] = 'field_media_source';
  $handler->display->display_options['fields']['field_media_source_1']['label'] = 'Media Source URL';
  $handler->display->display_options['fields']['field_media_source_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_media_source_1']['type'] = 'link_plain';
  /* Field: Content: Related Links */
  $handler->display->display_options['fields']['field_article_link_1']['id'] = 'field_article_link_1';
  $handler->display->display_options['fields']['field_article_link_1']['table'] = 'field_data_field_article_link';
  $handler->display->display_options['fields']['field_article_link_1']['field'] = 'field_article_link';
  $handler->display->display_options['fields']['field_article_link_1']['label'] = 'Related Links URL';
  $handler->display->display_options['fields']['field_article_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_article_link_1']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_article_link_1']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'in-the-media-feeds-iis';
  $translatables['in_the_media_syndication'] = array(
    t('Master'),
    t('Press release syndication'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Title'),
    t('AKMI ACTIVITY'),
    t('AKMI Page'),
    t('Article Author'),
    t('Article Image'),
    t('Article Type'),
    t('Article URL'),
    t('Body'),
    t('Caption'),
    t('Caption Override'),
    t('Create Banner Item'),
    t('Cycle Year'),
    t('Date Decade'),
    t('Enable Project Carousel'),
    t('Hub page'),
    t('Image'),
    t('Media Source Title'),
    t('Media Type'),
    t('Pages to exclude'),
    t('Projects'),
    t('Publication Source Link'),
    t('Publication Source Title'),
    t('Publish Date'),
    t('Related Audio/Video'),
    t('Related In the Media'),
    t('Related Links Title'),
    t('Related News'),
    t('Related Photos'),
    t('Related Press Releases'),
    t('Related Projects'),
    t('Related Publications'),
    t('Related Speeches'),
    t('Select reviewer'),
    t('Short Title'),
    t('Slideshow Image'),
    t('Tags'),
    t('Agency'),
    t('Geography'),
    t('Related Events'),
    t('Thematic Area'),
    t('Media Source URL'),
    t('Related Links URL'),
    t('Page'),
    t('Services feeds AKDN'),
    t('queue'),
    t('Services feeds Ismaili'),
    t('Services feeds IIS'),
  );
  $export['in_the_media_syndication'] = $view;

  $view = new view();
  $view->name = 'person_syndication';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Person Syndication';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Feeds IIS';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    1 => '1',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_speech_audio' => 'field_speech_audio',
    'field_speech_image' => 'field_speech_image',
    'field_speech_location' => 'field_speech_location',
    'field_publication_date' => 'field_publication_date',
    'field_publish_date' => 'field_publish_date',
    'field_short_title' => 'field_short_title',
    'field_speech_themes' => 'field_speech_themes',
    'field_speech_type' => 'field_speech_type',
    'field_country' => 'field_country',
    'field_speech_author' => 'field_speech_author',
    'field_date_decade' => 'field_date_decade',
    'field_speech_event' => 'field_speech_event',
    'field_press_releases' => 'field_press_releases',
    'field_publication_url' => 'field_publication_url',
    'field_speech_speaker' => 'field_speech_speaker',
    'field_speech_video' => 'field_speech_video',
    'field_caption' => 'field_caption',
    'field_create_featured_content' => 'field_create_featured_content',
    'field_cycle_year' => 'field_cycle_year',
    'field_enable_project_slider' => 'field_enable_project_slider',
    'field_external_media' => 'field_external_media',
    'field_hub_page' => 'field_hub_page',
    'field_simplenews_term' => 'field_simplenews_term',
    'field_pages_to_exclude' => 'field_pages_to_exclude',
    'field_podcasts_reference' => 'field_podcasts_reference',
    'field_events_reference' => 'field_events_reference',
    'field_related_in_the_media' => 'field_related_in_the_media',
    'field_related_news' => 'field_related_news',
    'field_photos_reference' => 'field_photos_reference',
    'field_press_reference' => 'field_press_reference',
    'field_related_project' => 'field_related_project',
    'field_related_publications' => 'field_related_publications',
    'field_speeches_reference' => 'field_speeches_reference',
    'field_feature_image' => 'field_feature_image',
    'field_agency' => 'field_agency',
    'field_tags' => 'field_tags',
    'field_focus_area' => 'field_focus_area',
    'body' => 'body',
    'nid' => 'nid',
    'nothing' => 'nothing',
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
    'field_speech_audio' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publication_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publish_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_short_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_themes' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_country' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_author' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_decade' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_event' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_press_releases' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publication_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_speaker' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_video' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_caption' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_create_featured_content' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cycle_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_enable_project_slider' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_external_media' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hub_page' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_simplenews_term' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pages_to_exclude' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_podcasts_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_events_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_in_the_media' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_news' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_photos_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_press_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_project' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_publications' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speeches_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_feature_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_agency' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tags' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_focus_area' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
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
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_akdn' => 'deploy_to_akdn',
    'list_of_contents' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_person_image']['id'] = 'field_person_image';
  $handler->display->display_options['fields']['field_person_image']['table'] = 'field_data_field_person_image';
  $handler->display->display_options['fields']['field_person_image']['field'] = 'field_person_image';
  $handler->display->display_options['fields']['field_person_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_person_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_person_image']['settings'] = array(
    'url_type' => '',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Related Projects */
  $handler->display->display_options['fields']['field_related_project']['id'] = 'field_related_project';
  $handler->display->display_options['fields']['field_related_project']['table'] = 'field_data_field_related_project';
  $handler->display->display_options['fields']['field_related_project']['field'] = 'field_related_project';
  $handler->display->display_options['fields']['field_related_project']['delta_offset'] = '0';
  /* Field: Content: Geography */
  $handler->display->display_options['fields']['field_geography_term']['id'] = 'field_geography_term';
  $handler->display->display_options['fields']['field_geography_term']['table'] = 'field_data_field_geography_term';
  $handler->display->display_options['fields']['field_geography_term']['field'] = 'field_geography_term';
  $handler->display->display_options['fields']['field_geography_term']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Geography */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_country']['delta_offset'] = '0';
  /* Field: Field: Agency */
  $handler->display->display_options['fields']['field_agency']['id'] = 'field_agency';
  $handler->display->display_options['fields']['field_agency']['table'] = 'field_data_field_agency';
  $handler->display->display_options['fields']['field_agency']['field'] = 'field_agency';
  $handler->display->display_options['fields']['field_agency']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_agency']['delta_offset'] = '0';
  /* Field: Field: Thematic Area */
  $handler->display->display_options['fields']['field_focus_area']['id'] = 'field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['table'] = 'field_data_field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['field'] = 'field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_focus_area']['delta_offset'] = '0';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  /* Field: Content: Enable Project Carousel */
  $handler->display->display_options['fields']['field_enable_project_slider']['id'] = 'field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['table'] = 'field_data_field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['field'] = 'field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['type'] = 'list_key';
  /* Field: Content: Person Type */
  $handler->display->display_options['fields']['field_person_type']['id'] = 'field_person_type';
  $handler->display->display_options['fields']['field_person_type']['table'] = 'field_data_field_person_type';
  $handler->display->display_options['fields']['field_person_type']['field'] = 'field_person_type';
  $handler->display->display_options['fields']['field_person_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_person_type']['delta_offset'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'GUID';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'person_[nid]';
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
    'person' => 'person',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'person-syndication';

  /* Display: CSV export */
  $handler = $view->new_display('views_data_export', 'CSV export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'person/csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['segment_size'] = '100';

  /* Display: Feeds AKDN */
  $handler = $view->new_display('services', 'Feeds AKDN', 'services_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_akdn' => 'deploy_to_akdn',
    'list_of_contents' => 0,
    'deploy_to_ismaili' => 0,
    'deploy_to_iis' => 0,
  );
  $handler->display->display_options['path'] = 'person-feeds';

  /* Display: Feeds Ismaili */
  $handler = $view->new_display('services', 'Feeds Ismaili', 'services_3');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_ismaili' => 'deploy_to_ismaili',
    'list_of_contents' => 0,
    'deploy_to_akdn' => 0,
    'deploy_to_iis' => 0,
  );
  $handler->display->display_options['path'] = 'person-feeds-ismaili';

  /* Display: Feeds IIS */
  $handler = $view->new_display('services', 'Feeds IIS', 'services_4');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_iis' => 'deploy_to_iis',
    'list_of_contents' => 0,
    'deploy_to_akdn' => 0,
    'deploy_to_ismaili' => 0,
  );
  $handler->display->display_options['path'] = 'person-feeds-iis';
  $translatables['person_syndication'] = array(
    t('Master'),
    t('Feeds IIS'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('queue'),
    t('Title'),
    t('Body'),
    t('Image'),
    t('Related Projects'),
    t('Geography'),
    t('Agency'),
    t('Thematic Area'),
    t('Tags'),
    t('Enable Project Carousel'),
    t('Person Type'),
    t('Nid'),
    t('GUID'),
    t('person_[nid]'),
    t('Page'),
    t('CSV export'),
    t('Feeds AKDN'),
    t('Feeds Ismaili'),
  );
  $export['person_syndication'] = $view;

  $view = new view();
  $view->name = 'podcast_syndication';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Podcast Syndication';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Feeds IIS';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    1 => '1',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_speech_audio' => 'field_speech_audio',
    'field_speech_image' => 'field_speech_image',
    'field_speech_location' => 'field_speech_location',
    'field_publication_date' => 'field_publication_date',
    'field_publish_date' => 'field_publish_date',
    'field_short_title' => 'field_short_title',
    'field_speech_themes' => 'field_speech_themes',
    'field_speech_type' => 'field_speech_type',
    'field_country' => 'field_country',
    'field_speech_author' => 'field_speech_author',
    'field_date_decade' => 'field_date_decade',
    'field_speech_event' => 'field_speech_event',
    'field_press_releases' => 'field_press_releases',
    'field_publication_url' => 'field_publication_url',
    'field_speech_speaker' => 'field_speech_speaker',
    'field_speech_video' => 'field_speech_video',
    'field_caption' => 'field_caption',
    'field_create_featured_content' => 'field_create_featured_content',
    'field_cycle_year' => 'field_cycle_year',
    'field_enable_project_slider' => 'field_enable_project_slider',
    'field_external_media' => 'field_external_media',
    'field_hub_page' => 'field_hub_page',
    'field_simplenews_term' => 'field_simplenews_term',
    'field_pages_to_exclude' => 'field_pages_to_exclude',
    'field_podcasts_reference' => 'field_podcasts_reference',
    'field_events_reference' => 'field_events_reference',
    'field_related_in_the_media' => 'field_related_in_the_media',
    'field_related_news' => 'field_related_news',
    'field_photos_reference' => 'field_photos_reference',
    'field_press_reference' => 'field_press_reference',
    'field_related_project' => 'field_related_project',
    'field_related_publications' => 'field_related_publications',
    'field_speeches_reference' => 'field_speeches_reference',
    'field_feature_image' => 'field_feature_image',
    'field_agency' => 'field_agency',
    'field_tags' => 'field_tags',
    'field_focus_area' => 'field_focus_area',
    'body' => 'body',
    'nid' => 'nid',
    'nothing' => 'nothing',
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
    'field_speech_audio' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publication_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publish_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_short_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_themes' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_country' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_author' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_decade' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_event' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_press_releases' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publication_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_speaker' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_video' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_caption' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_create_featured_content' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cycle_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_enable_project_slider' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_external_media' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hub_page' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_simplenews_term' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pages_to_exclude' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_podcasts_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_events_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_in_the_media' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_news' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_photos_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_press_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_project' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_publications' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speeches_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_feature_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_agency' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tags' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_focus_area' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
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
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_akdn' => 'deploy_to_akdn',
    'list_of_contents' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_podcast_type']['id'] = 'field_podcast_type';
  $handler->display->display_options['fields']['field_podcast_type']['table'] = 'field_data_field_podcast_type';
  $handler->display->display_options['fields']['field_podcast_type']['field'] = 'field_podcast_type';
  $handler->display->display_options['fields']['field_podcast_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Publish Date */
  $handler->display->display_options['fields']['field_publish_date']['id'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['field'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_publish_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_podcast_image']['id'] = 'field_podcast_image';
  $handler->display->display_options['fields']['field_podcast_image']['table'] = 'field_data_field_podcast_image';
  $handler->display->display_options['fields']['field_podcast_image']['field'] = 'field_podcast_image';
  $handler->display->display_options['fields']['field_podcast_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_podcast_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_podcast_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Create Banner Item */
  $handler->display->display_options['fields']['field_create_featured_content']['id'] = 'field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['table'] = 'field_data_field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['field'] = 'field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['type'] = 'list_key';
  /* Field: Content: Slideshow Image */
  $handler->display->display_options['fields']['field_feature_image']['id'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['field'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_feature_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  /* Field: Content: Pages to exclude */
  $handler->display->display_options['fields']['field_pages_to_exclude']['id'] = 'field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['table'] = 'field_data_field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['field'] = 'field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['delta_offset'] = '0';
  /* Field: Content: Hub page */
  $handler->display->display_options['fields']['field_hub_page']['id'] = 'field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['table'] = 'field_data_field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['field'] = 'field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['delta_offset'] = '0';
  /* Field: Content: Date Decade */
  $handler->display->display_options['fields']['field_date_decade']['id'] = 'field_date_decade';
  $handler->display->display_options['fields']['field_date_decade']['table'] = 'field_data_field_date_decade';
  $handler->display->display_options['fields']['field_date_decade']['field'] = 'field_date_decade';
  $handler->display->display_options['fields']['field_date_decade']['type'] = 'text_plain';
  /* Field: Field: Geography */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_country']['delta_offset'] = '0';
  /* Field: Content: Related Links */
  $handler->display->display_options['fields']['field_podcast_links']['id'] = 'field_podcast_links';
  $handler->display->display_options['fields']['field_podcast_links']['table'] = 'field_data_field_podcast_links';
  $handler->display->display_options['fields']['field_podcast_links']['field'] = 'field_podcast_links';
  $handler->display->display_options['fields']['field_podcast_links']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_podcast_links']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_podcast_links']['delta_offset'] = '0';
  /* Field: Content: Related Links */
  $handler->display->display_options['fields']['field_podcast_links_1']['id'] = 'field_podcast_links_1';
  $handler->display->display_options['fields']['field_podcast_links_1']['table'] = 'field_data_field_podcast_links';
  $handler->display->display_options['fields']['field_podcast_links_1']['field'] = 'field_podcast_links';
  $handler->display->display_options['fields']['field_podcast_links_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_podcast_links_1']['type'] = 'link_title_plain';
  $handler->display->display_options['fields']['field_podcast_links_1']['delta_offset'] = '0';
  /* Field: Field: Agency */
  $handler->display->display_options['fields']['field_agency']['id'] = 'field_agency';
  $handler->display->display_options['fields']['field_agency']['table'] = 'field_data_field_agency';
  $handler->display->display_options['fields']['field_agency']['field'] = 'field_agency';
  $handler->display->display_options['fields']['field_agency']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_agency']['delta_offset'] = '0';
  /* Field: Content: Related Speeches */
  $handler->display->display_options['fields']['field_speeches_reference']['id'] = 'field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['table'] = 'field_data_field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['field'] = 'field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['delta_offset'] = '0';
  /* Field: Field: Thematic Area */
  $handler->display->display_options['fields']['field_focus_area']['id'] = 'field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['table'] = 'field_data_field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['field'] = 'field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_focus_area']['delta_offset'] = '0';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  /* Field: Content: Related Press Releases */
  $handler->display->display_options['fields']['field_press_reference']['id'] = 'field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['table'] = 'field_data_field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['field'] = 'field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['delta_offset'] = '0';
  /* Field: Content: Cycle Year */
  $handler->display->display_options['fields']['field_cycle_year']['id'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['table'] = 'field_data_field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['field'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Related Events */
  $handler->display->display_options['fields']['field_events_reference']['id'] = 'field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['table'] = 'field_data_field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['field'] = 'field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['delta_offset'] = '0';
  /* Field: Content: Related Audio/Video */
  $handler->display->display_options['fields']['field_podcasts_reference']['id'] = 'field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['table'] = 'field_data_field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['field'] = 'field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['delta_offset'] = '0';
  /* Field: Content: Related Photos */
  $handler->display->display_options['fields']['field_photos_reference']['id'] = 'field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['table'] = 'field_data_field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['field'] = 'field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['delta_offset'] = '0';
  /* Field: Content: Related Projects */
  $handler->display->display_options['fields']['field_related_project']['id'] = 'field_related_project';
  $handler->display->display_options['fields']['field_related_project']['table'] = 'field_data_field_related_project';
  $handler->display->display_options['fields']['field_related_project']['field'] = 'field_related_project';
  $handler->display->display_options['fields']['field_related_project']['delta_offset'] = '0';
  /* Field: Content: Related News */
  $handler->display->display_options['fields']['field_related_news']['id'] = 'field_related_news';
  $handler->display->display_options['fields']['field_related_news']['table'] = 'field_data_field_related_news';
  $handler->display->display_options['fields']['field_related_news']['field'] = 'field_related_news';
  $handler->display->display_options['fields']['field_related_news']['delta_offset'] = '0';
  /* Field: Content: Related In the Media */
  $handler->display->display_options['fields']['field_related_in_the_media']['id'] = 'field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['table'] = 'field_data_field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['field'] = 'field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['delta_offset'] = '0';
  /* Field: Content: Related Publications */
  $handler->display->display_options['fields']['field_related_publications']['id'] = 'field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['table'] = 'field_data_field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['field'] = 'field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['delta_offset'] = '0';
  /* Field: Content: Enable Project Carousel */
  $handler->display->display_options['fields']['field_enable_project_slider']['id'] = 'field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['table'] = 'field_data_field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['field'] = 'field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['type'] = 'list_key';
  /* Field: Content: Newsletter category */
  $handler->display->display_options['fields']['field_simplenews_term']['id'] = 'field_simplenews_term';
  $handler->display->display_options['fields']['field_simplenews_term']['table'] = 'field_data_field_simplenews_term';
  $handler->display->display_options['fields']['field_simplenews_term']['field'] = 'field_simplenews_term';
  $handler->display->display_options['fields']['field_simplenews_term']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Video */
  $handler->display->display_options['fields']['field_podcast_video']['id'] = 'field_podcast_video';
  $handler->display->display_options['fields']['field_podcast_video']['table'] = 'field_data_field_podcast_video';
  $handler->display->display_options['fields']['field_podcast_video']['field'] = 'field_podcast_video';
  $handler->display->display_options['fields']['field_podcast_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_podcast_video']['type'] = 'file_url_plain';
  /* Field: Content: Audio */
  $handler->display->display_options['fields']['field_podcast_audio']['id'] = 'field_podcast_audio';
  $handler->display->display_options['fields']['field_podcast_audio']['table'] = 'field_data_field_podcast_audio';
  $handler->display->display_options['fields']['field_podcast_audio']['field'] = 'field_podcast_audio';
  $handler->display->display_options['fields']['field_podcast_audio']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_podcast_audio']['type'] = 'file_url_plain';
  /* Field: Content: AKMI Pages */
  $handler->display->display_options['fields']['field_akmi_pages']['id'] = 'field_akmi_pages';
  $handler->display->display_options['fields']['field_akmi_pages']['table'] = 'field_data_field_akmi_pages';
  $handler->display->display_options['fields']['field_akmi_pages']['field'] = 'field_akmi_pages';
  $handler->display->display_options['fields']['field_akmi_pages']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: AKMI ACTIVITY */
  $handler->display->display_options['fields']['field_akmi_activity']['id'] = 'field_akmi_activity';
  $handler->display->display_options['fields']['field_akmi_activity']['table'] = 'field_data_field_akmi_activity';
  $handler->display->display_options['fields']['field_akmi_activity']['field'] = 'field_akmi_activity';
  $handler->display->display_options['fields']['field_akmi_activity']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Speaker and Location */
  $handler->display->display_options['fields']['field_speaker_and_location']['id'] = 'field_speaker_and_location';
  $handler->display->display_options['fields']['field_speaker_and_location']['table'] = 'field_data_field_speaker_and_location';
  $handler->display->display_options['fields']['field_speaker_and_location']['field'] = 'field_speaker_and_location';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'GUID';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'podcast_[nid]';
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
    'podcast' => 'podcast',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'podcast-syndication';

  /* Display: CSV export */
  $handler = $view->new_display('views_data_export', 'CSV export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'podcast/csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['segment_size'] = '100';

  /* Display: Feeds AKDN */
  $handler = $view->new_display('services', 'Feeds AKDN', 'services_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_akdn' => 'deploy_to_akdn',
    'list_of_contents' => 0,
    'deploy_to_ismaili' => 0,
    'deploy_to_iis' => 0,
  );
  $handler->display->display_options['path'] = 'podcast-feeds';

  /* Display: Feeds Ismaili */
  $handler = $view->new_display('services', 'Feeds Ismaili', 'services_3');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_ismaili' => 'deploy_to_ismaili',
    'list_of_contents' => 0,
    'deploy_to_akdn' => 0,
    'deploy_to_iis' => 0,
  );
  $handler->display->display_options['path'] = 'podcast-feeds-ismaili';

  /* Display: Feeds IIS */
  $handler = $view->new_display('services', 'Feeds IIS', 'services_4');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_iis' => 'deploy_to_iis',
    'list_of_contents' => 0,
    'deploy_to_akdn' => 0,
    'deploy_to_ismaili' => 0,
  );
  $handler->display->display_options['path'] = 'podcast-feeds-iis';
  $translatables['podcast_syndication'] = array(
    t('Master'),
    t('Feeds IIS'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('queue'),
    t('Title'),
    t('Type'),
    t('Short Title'),
    t('Body'),
    t('Publish Date'),
    t('Image'),
    t('Create Banner Item'),
    t('Slideshow Image'),
    t('Caption'),
    t('Pages to exclude'),
    t('Hub page'),
    t('Date Decade'),
    t('Geography'),
    t('Related Links'),
    t('Agency'),
    t('Related Speeches'),
    t('Thematic Area'),
    t('Tags'),
    t('Related Press Releases'),
    t('Cycle Year'),
    t('Related Events'),
    t('Related Audio/Video'),
    t('Related Photos'),
    t('Related Projects'),
    t('Related News'),
    t('Related In the Media'),
    t('Related Publications'),
    t('Enable Project Carousel'),
    t('Newsletter category'),
    t('Video'),
    t('Audio'),
    t('AKMI Pages'),
    t('AKMI ACTIVITY'),
    t('Speaker and Location'),
    t('Nid'),
    t('GUID'),
    t('podcast_[nid]'),
    t('Page'),
    t('CSV export'),
    t('Feeds AKDN'),
    t('Feeds Ismaili'),
  );
  $export['podcast_syndication'] = $view;

  $view = new view();
  $view->name = 'project_syndication';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Project Syndication';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Feeds IIS';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    1 => '1',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_speech_audio' => 'field_speech_audio',
    'field_speech_image' => 'field_speech_image',
    'field_speech_location' => 'field_speech_location',
    'field_publication_date' => 'field_publication_date',
    'field_publish_date' => 'field_publish_date',
    'field_short_title' => 'field_short_title',
    'field_speech_themes' => 'field_speech_themes',
    'field_speech_type' => 'field_speech_type',
    'field_country' => 'field_country',
    'field_speech_author' => 'field_speech_author',
    'field_date_decade' => 'field_date_decade',
    'field_speech_event' => 'field_speech_event',
    'field_press_releases' => 'field_press_releases',
    'field_publication_url' => 'field_publication_url',
    'field_speech_speaker' => 'field_speech_speaker',
    'field_speech_video' => 'field_speech_video',
    'field_caption' => 'field_caption',
    'field_create_featured_content' => 'field_create_featured_content',
    'field_cycle_year' => 'field_cycle_year',
    'field_enable_project_slider' => 'field_enable_project_slider',
    'field_external_media' => 'field_external_media',
    'field_hub_page' => 'field_hub_page',
    'field_simplenews_term' => 'field_simplenews_term',
    'field_pages_to_exclude' => 'field_pages_to_exclude',
    'field_podcasts_reference' => 'field_podcasts_reference',
    'field_events_reference' => 'field_events_reference',
    'field_related_in_the_media' => 'field_related_in_the_media',
    'field_related_news' => 'field_related_news',
    'field_photos_reference' => 'field_photos_reference',
    'field_press_reference' => 'field_press_reference',
    'field_related_project' => 'field_related_project',
    'field_related_publications' => 'field_related_publications',
    'field_speeches_reference' => 'field_speeches_reference',
    'field_feature_image' => 'field_feature_image',
    'field_agency' => 'field_agency',
    'field_tags' => 'field_tags',
    'field_focus_area' => 'field_focus_area',
    'body' => 'body',
    'nid' => 'nid',
    'nothing' => 'nothing',
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
    'field_speech_audio' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publication_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publish_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_short_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_themes' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_country' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_author' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_decade' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_event' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_press_releases' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publication_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_speaker' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_video' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_caption' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_create_featured_content' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cycle_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_enable_project_slider' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_external_media' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hub_page' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_simplenews_term' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pages_to_exclude' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_podcasts_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_events_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_in_the_media' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_news' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_photos_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_press_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_project' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_publications' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speeches_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_feature_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_agency' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tags' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_focus_area' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
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
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_akdn' => 'deploy_to_akdn',
    'list_of_contents' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  /* Field: Content: Sub-title */
  $handler->display->display_options['fields']['field_sub_title']['id'] = 'field_sub_title';
  $handler->display->display_options['fields']['field_sub_title']['table'] = 'field_data_field_sub_title';
  $handler->display->display_options['fields']['field_sub_title']['field'] = 'field_sub_title';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Budget */
  $handler->display->display_options['fields']['field_project_budget']['id'] = 'field_project_budget';
  $handler->display->display_options['fields']['field_project_budget']['table'] = 'field_data_field_project_budget';
  $handler->display->display_options['fields']['field_project_budget']['field'] = 'field_project_budget';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_project_location']['id'] = 'field_project_location';
  $handler->display->display_options['fields']['field_project_location']['table'] = 'field_data_field_project_location';
  $handler->display->display_options['fields']['field_project_location']['field'] = 'field_project_location';
  /* Field: Content: Partners */
  $handler->display->display_options['fields']['field_project_partners']['id'] = 'field_project_partners';
  $handler->display->display_options['fields']['field_project_partners']['table'] = 'field_data_field_project_partners';
  $handler->display->display_options['fields']['field_project_partners']['field'] = 'field_project_partners';
  /* Field: Content: Beneficiaries */
  $handler->display->display_options['fields']['field_project_beneficiaries']['id'] = 'field_project_beneficiaries';
  $handler->display->display_options['fields']['field_project_beneficiaries']['table'] = 'field_data_field_project_beneficiaries';
  $handler->display->display_options['fields']['field_project_beneficiaries']['field'] = 'field_project_beneficiaries';
  /* Field: Content: Publish Date */
  $handler->display->display_options['fields']['field_publish_date']['id'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['field'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_publish_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_project_image']['id'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['fields']['field_project_image']['field'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_project_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_project_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Field: Geography */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_country']['delta_offset'] = '0';
  /* Field: Field: Agency */
  $handler->display->display_options['fields']['field_agency']['id'] = 'field_agency';
  $handler->display->display_options['fields']['field_agency']['table'] = 'field_data_field_agency';
  $handler->display->display_options['fields']['field_agency']['field'] = 'field_agency';
  $handler->display->display_options['fields']['field_agency']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_agency']['delta_offset'] = '0';
  /* Field: Field: Thematic Area */
  $handler->display->display_options['fields']['field_focus_area']['id'] = 'field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['table'] = 'field_data_field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['field'] = 'field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_focus_area']['delta_offset'] = '0';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  /* Field: Content: Enable Project Carousel */
  $handler->display->display_options['fields']['field_enable_project_slider']['id'] = 'field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['table'] = 'field_data_field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['field'] = 'field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['type'] = 'list_key';
  /* Field: Content: Hub page */
  $handler->display->display_options['fields']['field_hub_page']['id'] = 'field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['table'] = 'field_data_field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['field'] = 'field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['delta_offset'] = '0';
  /* Field: Content: Create Banner Item */
  $handler->display->display_options['fields']['field_create_featured_content']['id'] = 'field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['table'] = 'field_data_field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['field'] = 'field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['type'] = 'list_key';
  /* Field: Content: Pages to exclude */
  $handler->display->display_options['fields']['field_pages_to_exclude']['id'] = 'field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['table'] = 'field_data_field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['field'] = 'field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['delta_offset'] = '0';
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  /* Field: Content: Date Decade */
  $handler->display->display_options['fields']['field_date_decade']['id'] = 'field_date_decade';
  $handler->display->display_options['fields']['field_date_decade']['table'] = 'field_data_field_date_decade';
  $handler->display->display_options['fields']['field_date_decade']['field'] = 'field_date_decade';
  $handler->display->display_options['fields']['field_date_decade']['type'] = 'text_plain';
  /* Field: Content: Newsletter category */
  $handler->display->display_options['fields']['field_simplenews_term']['id'] = 'field_simplenews_term';
  $handler->display->display_options['fields']['field_simplenews_term']['table'] = 'field_data_field_simplenews_term';
  $handler->display->display_options['fields']['field_simplenews_term']['field'] = 'field_simplenews_term';
  $handler->display->display_options['fields']['field_simplenews_term']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'GUID';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'project_[nid]';
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_project_image_caption']['id'] = 'field_project_image_caption';
  $handler->display->display_options['fields']['field_project_image_caption']['table'] = 'field_data_field_project_image_caption';
  $handler->display->display_options['fields']['field_project_image_caption']['field'] = 'field_project_image_caption';
  $handler->display->display_options['fields']['field_project_image_caption']['label'] = 'Captions';
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
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
    'project' => 'project',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'project-syndication';

  /* Display: CSV export */
  $handler = $view->new_display('views_data_export', 'CSV export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'project/csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['segment_size'] = '100';

  /* Display: Feeds AKDN */
  $handler = $view->new_display('services', 'Feeds AKDN', 'services_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_akdn' => 'deploy_to_akdn',
    'list_of_contents' => 0,
    'deploy_to_ismaili' => 0,
    'deploy_to_iis' => 0,
  );
  $handler->display->display_options['path'] = 'project-feeds';

  /* Display: Feeds Ismaili */
  $handler = $view->new_display('services', 'Feeds Ismaili', 'services_3');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_ismaili' => 'deploy_to_ismaili',
    'list_of_contents' => 0,
    'deploy_to_akdn' => 0,
    'deploy_to_iis' => 0,
  );
  $handler->display->display_options['path'] = 'project-feeds-ismaili';

  /* Display: Feeds IIS */
  $handler = $view->new_display('services', 'Feeds IIS', 'services_4');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_iis' => 'deploy_to_iis',
    'list_of_contents' => 0,
    'deploy_to_akdn' => 0,
    'deploy_to_ismaili' => 0,
  );
  $handler->display->display_options['path'] = 'project-feeds-iis';
  $translatables['project_syndication'] = array(
    t('Master'),
    t('Feeds IIS'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('queue'),
    t('Title'),
    t('Short Title'),
    t('Sub-title'),
    t('Body'),
    t('Budget'),
    t('Location'),
    t('Partners'),
    t('Beneficiaries'),
    t('Publish Date'),
    t('Image'),
    t('Geography'),
    t('Agency'),
    t('Thematic Area'),
    t('Tags'),
    t('Enable Project Carousel'),
    t('Hub page'),
    t('Create Banner Item'),
    t('Pages to exclude'),
    t('Summary'),
    t('Date Decade'),
    t('Newsletter category'),
    t('Nid'),
    t('GUID'),
    t('project_[nid]'),
    t('Captions'),
    t('Caption'),
    t('Page'),
    t('CSV export'),
    t('Feeds AKDN'),
    t('Feeds Ismaili'),
  );
  $export['project_syndication'] = $view;

  $view = new view();
  $view->name = 'publication_syndication';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Publication Syndication';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Feeds IIS';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    1 => '1',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_speech_audio' => 'field_speech_audio',
    'field_speech_image' => 'field_speech_image',
    'field_speech_location' => 'field_speech_location',
    'field_publication_date' => 'field_publication_date',
    'field_publish_date' => 'field_publish_date',
    'field_short_title' => 'field_short_title',
    'field_speech_themes' => 'field_speech_themes',
    'field_speech_type' => 'field_speech_type',
    'field_country' => 'field_country',
    'field_speech_author' => 'field_speech_author',
    'field_date_decade' => 'field_date_decade',
    'field_speech_event' => 'field_speech_event',
    'field_press_releases' => 'field_press_releases',
    'field_publication_url' => 'field_publication_url',
    'field_speech_speaker' => 'field_speech_speaker',
    'field_speech_video' => 'field_speech_video',
    'field_caption' => 'field_caption',
    'field_create_featured_content' => 'field_create_featured_content',
    'field_cycle_year' => 'field_cycle_year',
    'field_enable_project_slider' => 'field_enable_project_slider',
    'field_external_media' => 'field_external_media',
    'field_hub_page' => 'field_hub_page',
    'field_simplenews_term' => 'field_simplenews_term',
    'field_pages_to_exclude' => 'field_pages_to_exclude',
    'field_podcasts_reference' => 'field_podcasts_reference',
    'field_events_reference' => 'field_events_reference',
    'field_related_in_the_media' => 'field_related_in_the_media',
    'field_related_news' => 'field_related_news',
    'field_photos_reference' => 'field_photos_reference',
    'field_press_reference' => 'field_press_reference',
    'field_related_project' => 'field_related_project',
    'field_related_publications' => 'field_related_publications',
    'field_speeches_reference' => 'field_speeches_reference',
    'field_feature_image' => 'field_feature_image',
    'field_agency' => 'field_agency',
    'field_tags' => 'field_tags',
    'field_focus_area' => 'field_focus_area',
    'body' => 'body',
    'nid' => 'nid',
    'nothing' => 'nothing',
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
    'field_speech_audio' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publication_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publish_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_short_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_themes' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_country' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_author' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_decade' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_event' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_press_releases' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publication_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_speaker' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_video' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_caption' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_create_featured_content' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cycle_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_enable_project_slider' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_external_media' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hub_page' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_simplenews_term' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pages_to_exclude' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_podcasts_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_events_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_in_the_media' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_news' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_photos_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_press_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_project' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_publications' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speeches_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_feature_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_agency' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tags' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_focus_area' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
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
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_akdn' => 'deploy_to_akdn',
    'list_of_contents' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Publish Date */
  $handler->display->display_options['fields']['field_publish_date']['id'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['field'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_publish_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: ISBN */
  $handler->display->display_options['fields']['field_publication_isbn']['id'] = 'field_publication_isbn';
  $handler->display->display_options['fields']['field_publication_isbn']['table'] = 'field_data_field_publication_isbn';
  $handler->display->display_options['fields']['field_publication_isbn']['field'] = 'field_publication_isbn';
  $handler->display->display_options['fields']['field_publication_isbn']['delta_offset'] = '0';
  /* Field: Content: Purchase Link */
  $handler->display->display_options['fields']['field_publication_purchase_link']['id'] = 'field_publication_purchase_link';
  $handler->display->display_options['fields']['field_publication_purchase_link']['table'] = 'field_data_field_publication_purchase_link';
  $handler->display->display_options['fields']['field_publication_purchase_link']['field'] = 'field_publication_purchase_link';
  $handler->display->display_options['fields']['field_publication_purchase_link']['label'] = 'Purchase Link URL';
  $handler->display->display_options['fields']['field_publication_purchase_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_publication_purchase_link']['type'] = 'link_plain';
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_publication_file']['id'] = 'field_publication_file';
  $handler->display->display_options['fields']['field_publication_file']['table'] = 'field_data_field_publication_file';
  $handler->display->display_options['fields']['field_publication_file']['field'] = 'field_publication_file';
  $handler->display->display_options['fields']['field_publication_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_publication_file']['type'] = 'file_url_plain';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_publication_image']['id'] = 'field_publication_image';
  $handler->display->display_options['fields']['field_publication_image']['table'] = 'field_data_field_publication_image';
  $handler->display->display_options['fields']['field_publication_image']['field'] = 'field_publication_image';
  $handler->display->display_options['fields']['field_publication_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_publication_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_publication_image']['settings'] = array(
    'url_type' => '',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Publication Type */
  $handler->display->display_options['fields']['field_publication_type']['id'] = 'field_publication_type';
  $handler->display->display_options['fields']['field_publication_type']['table'] = 'field_data_field_publication_type';
  $handler->display->display_options['fields']['field_publication_type']['field'] = 'field_publication_type';
  $handler->display->display_options['fields']['field_publication_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Publication Category */
  $handler->display->display_options['fields']['field_publication_category']['id'] = 'field_publication_category';
  $handler->display->display_options['fields']['field_publication_category']['table'] = 'field_data_field_publication_category';
  $handler->display->display_options['fields']['field_publication_category']['field'] = 'field_publication_category';
  $handler->display->display_options['fields']['field_publication_category']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Geography */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_country']['delta_offset'] = '0';
  /* Field: Field: Agency */
  $handler->display->display_options['fields']['field_agency']['id'] = 'field_agency';
  $handler->display->display_options['fields']['field_agency']['table'] = 'field_data_field_agency';
  $handler->display->display_options['fields']['field_agency']['field'] = 'field_agency';
  $handler->display->display_options['fields']['field_agency']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_agency']['delta_offset'] = '0';
  /* Field: Field: Thematic Area */
  $handler->display->display_options['fields']['field_focus_area']['id'] = 'field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['table'] = 'field_data_field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['field'] = 'field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_focus_area']['delta_offset'] = '0';
  /* Field: Content: Cycle Year */
  $handler->display->display_options['fields']['field_cycle_year']['id'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['table'] = 'field_data_field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['field'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Related Links */
  $handler->display->display_options['fields']['field_project_links']['id'] = 'field_project_links';
  $handler->display->display_options['fields']['field_project_links']['table'] = 'field_data_field_project_links';
  $handler->display->display_options['fields']['field_project_links']['field'] = 'field_project_links';
  $handler->display->display_options['fields']['field_project_links']['label'] = 'Related Links URL';
  $handler->display->display_options['fields']['field_project_links']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_project_links']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_project_links']['delta_offset'] = '0';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  /* Field: Content: Create Banner Item */
  $handler->display->display_options['fields']['field_create_featured_content']['id'] = 'field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['table'] = 'field_data_field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['field'] = 'field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['type'] = 'list_key';
  /* Field: Content: Enable Project Carousel */
  $handler->display->display_options['fields']['field_enable_project_slider']['id'] = 'field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['table'] = 'field_data_field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['field'] = 'field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['type'] = 'list_key';
  /* Field: Content: Pages to exclude */
  $handler->display->display_options['fields']['field_pages_to_exclude']['id'] = 'field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['table'] = 'field_data_field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['field'] = 'field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_pages_to_exclude']['delta_offset'] = '0';
  /* Field: Content: Related Audio/Video */
  $handler->display->display_options['fields']['field_podcasts_reference']['id'] = 'field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['table'] = 'field_data_field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['field'] = 'field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_podcasts_reference']['settings'] = array(
    'node_reference_view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_podcasts_reference']['delta_offset'] = '0';
  /* Field: Content: Related In the Media */
  $handler->display->display_options['fields']['field_related_in_the_media']['id'] = 'field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['table'] = 'field_data_field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['field'] = 'field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_related_in_the_media']['delta_offset'] = '0';
  /* Field: Content: Related News */
  $handler->display->display_options['fields']['field_related_news']['id'] = 'field_related_news';
  $handler->display->display_options['fields']['field_related_news']['table'] = 'field_data_field_related_news';
  $handler->display->display_options['fields']['field_related_news']['field'] = 'field_related_news';
  $handler->display->display_options['fields']['field_related_news']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_related_news']['delta_offset'] = '0';
  /* Field: Content: Related Photos */
  $handler->display->display_options['fields']['field_photos_reference']['id'] = 'field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['table'] = 'field_data_field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['field'] = 'field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_photos_reference']['delta_offset'] = '0';
  /* Field: Content: Related Press Releases */
  $handler->display->display_options['fields']['field_press_reference']['id'] = 'field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['table'] = 'field_data_field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['field'] = 'field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_press_reference']['delta_offset'] = '0';
  /* Field: Content: Related Projects */
  $handler->display->display_options['fields']['field_related_project']['id'] = 'field_related_project';
  $handler->display->display_options['fields']['field_related_project']['table'] = 'field_data_field_related_project';
  $handler->display->display_options['fields']['field_related_project']['field'] = 'field_related_project';
  $handler->display->display_options['fields']['field_related_project']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_related_project']['delta_offset'] = '0';
  /* Field: Content: Related Publications */
  $handler->display->display_options['fields']['field_related_publications']['id'] = 'field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['table'] = 'field_data_field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['field'] = 'field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_related_publications']['delta_offset'] = '0';
  /* Field: Content: Related Speeches */
  $handler->display->display_options['fields']['field_speeches_reference']['id'] = 'field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['table'] = 'field_data_field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['field'] = 'field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_speeches_reference']['delta_offset'] = '0';
  /* Field: Content: Slideshow Image */
  $handler->display->display_options['fields']['field_feature_image']['id'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['field'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_feature_image']['settings'] = array(
    'url_type' => '',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Field: Related Events */
  $handler->display->display_options['fields']['field_events_reference']['id'] = 'field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['table'] = 'field_data_field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['field'] = 'field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_events_reference']['delta_offset'] = '0';
  /* Field: Content: Hub page */
  $handler->display->display_options['fields']['field_hub_page']['id'] = 'field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['table'] = 'field_data_field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['field'] = 'field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_hub_page']['delta_offset'] = '0';
  /* Field: Content: Date Decade */
  $handler->display->display_options['fields']['field_date_decade']['id'] = 'field_date_decade';
  $handler->display->display_options['fields']['field_date_decade']['table'] = 'field_data_field_date_decade';
  $handler->display->display_options['fields']['field_date_decade']['field'] = 'field_date_decade';
  $handler->display->display_options['fields']['field_date_decade']['type'] = 'text_plain';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Purchase Link */
  $handler->display->display_options['fields']['field_publication_purchase_link_1']['id'] = 'field_publication_purchase_link_1';
  $handler->display->display_options['fields']['field_publication_purchase_link_1']['table'] = 'field_data_field_publication_purchase_link';
  $handler->display->display_options['fields']['field_publication_purchase_link_1']['field'] = 'field_publication_purchase_link';
  $handler->display->display_options['fields']['field_publication_purchase_link_1']['label'] = 'Purchase Link Title';
  $handler->display->display_options['fields']['field_publication_purchase_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_publication_purchase_link_1']['type'] = 'link_title_plain';
  /* Field: Content: Related Links */
  $handler->display->display_options['fields']['field_project_links_2']['id'] = 'field_project_links_2';
  $handler->display->display_options['fields']['field_project_links_2']['table'] = 'field_data_field_project_links';
  $handler->display->display_options['fields']['field_project_links_2']['field'] = 'field_project_links';
  $handler->display->display_options['fields']['field_project_links_2']['label'] = 'Related Links Title';
  $handler->display->display_options['fields']['field_project_links_2']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_project_links_2']['type'] = 'link_title_plain';
  $handler->display->display_options['fields']['field_project_links_2']['delta_offset'] = '0';
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
    'publication' => 'publication',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'publication-syndication';

  /* Display: CSV export */
  $handler = $view->new_display('views_data_export', 'CSV export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'publication/csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['segment_size'] = '100';

  /* Display: Feeds AKDN */
  $handler = $view->new_display('services', 'Feeds AKDN', 'services_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_akdn' => 'deploy_to_akdn',
    'list_of_contents' => 0,
    'deploy_to_ismaili' => 0,
    'deploy_to_iis' => 0,
  );
  $handler->display->display_options['path'] = 'publication-feeds';

  /* Display: Feeds Ismaili */
  $handler = $view->new_display('services', 'Feeds Ismaili', 'services_3');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_ismaili' => 'deploy_to_ismaili',
    'list_of_contents' => 0,
    'deploy_to_akdn' => 0,
    'deploy_to_iis' => 0,
  );
  $handler->display->display_options['path'] = 'publication-feeds-ismaili';

  /* Display: Feeds IIS */
  $handler = $view->new_display('services', 'Feeds IIS', 'services_4');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_iis' => 'deploy_to_iis',
    'list_of_contents' => 0,
    'deploy_to_akdn' => 0,
    'deploy_to_ismaili' => 0,
  );
  $handler->display->display_options['path'] = 'publication-feeds-iis';
  $translatables['publication_syndication'] = array(
    t('Master'),
    t('Feeds IIS'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('queue'),
    t('Title'),
    t('Short Title'),
    t('Body'),
    t('Publish Date'),
    t('ISBN'),
    t('Purchase Link URL'),
    t('File'),
    t('Image'),
    t('Publication Type'),
    t('Publication Category'),
    t('Geography'),
    t('Agency'),
    t('Thematic Area'),
    t('Cycle Year'),
    t('Related Links URL'),
    t('Tags'),
    t('Caption'),
    t('Create Banner Item'),
    t('Enable Project Carousel'),
    t('Pages to exclude'),
    t('Related Audio/Video'),
    t('Related In the Media'),
    t('Related News'),
    t('Related Photos'),
    t('Related Press Releases'),
    t('Related Projects'),
    t('Related Publications'),
    t('Related Speeches'),
    t('Slideshow Image'),
    t('Related Events'),
    t('Hub page'),
    t('Date Decade'),
    t('Nid'),
    t('Purchase Link Title'),
    t('Related Links Title'),
    t('Page'),
    t('CSV export'),
    t('Feeds AKDN'),
    t('Feeds Ismaili'),
  );
  $export['publication_syndication'] = $view;

  $view = new view();
  $view->name = 'speech_center_export';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Speech center';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Feeds IIS';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    1 => '1',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_speech_audio' => 'field_speech_audio',
    'field_speech_image' => 'field_speech_image',
    'field_speech_location' => 'field_speech_location',
    'field_publication_date' => 'field_publication_date',
    'field_publish_date' => 'field_publish_date',
    'field_short_title' => 'field_short_title',
    'field_speech_themes' => 'field_speech_themes',
    'field_speech_type' => 'field_speech_type',
    'field_country' => 'field_country',
    'field_speech_author' => 'field_speech_author',
    'field_date_decade' => 'field_date_decade',
    'field_speech_event' => 'field_speech_event',
    'field_press_releases' => 'field_press_releases',
    'field_publication_url' => 'field_publication_url',
    'field_speech_speaker' => 'field_speech_speaker',
    'field_speech_video' => 'field_speech_video',
    'field_caption' => 'field_caption',
    'field_create_featured_content' => 'field_create_featured_content',
    'field_cycle_year' => 'field_cycle_year',
    'field_enable_project_slider' => 'field_enable_project_slider',
    'field_external_media' => 'field_external_media',
    'field_hub_page' => 'field_hub_page',
    'field_simplenews_term' => 'field_simplenews_term',
    'field_pages_to_exclude' => 'field_pages_to_exclude',
    'field_podcasts_reference' => 'field_podcasts_reference',
    'field_events_reference' => 'field_events_reference',
    'field_related_in_the_media' => 'field_related_in_the_media',
    'field_related_news' => 'field_related_news',
    'field_photos_reference' => 'field_photos_reference',
    'field_press_reference' => 'field_press_reference',
    'field_related_project' => 'field_related_project',
    'field_related_publications' => 'field_related_publications',
    'field_speeches_reference' => 'field_speeches_reference',
    'field_feature_image' => 'field_feature_image',
    'field_agency' => 'field_agency',
    'field_tags' => 'field_tags',
    'field_focus_area' => 'field_focus_area',
    'body' => 'body',
    'nid' => 'nid',
    'nothing' => 'nothing',
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
    'field_speech_audio' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publication_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publish_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_short_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_themes' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_country' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_author' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_decade' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_event' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_press_releases' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publication_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_speaker' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_video' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_caption' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_create_featured_content' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cycle_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_enable_project_slider' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_external_media' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hub_page' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_simplenews_term' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pages_to_exclude' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_podcasts_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_events_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_in_the_media' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_news' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_photos_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_press_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_project' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_publications' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speeches_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_feature_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_agency' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tags' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_focus_area' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
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
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_akdn' => 'deploy_to_akdn',
    'list_of_contents' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Audio */
  $handler->display->display_options['fields']['field_speech_audio']['id'] = 'field_speech_audio';
  $handler->display->display_options['fields']['field_speech_audio']['table'] = 'field_data_field_speech_audio';
  $handler->display->display_options['fields']['field_speech_audio']['field'] = 'field_speech_audio';
  $handler->display->display_options['fields']['field_speech_audio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speech_audio']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_speech_audio']['type'] = 'file_url_plain';
  /* Field: Content: Speech image */
  $handler->display->display_options['fields']['field_speech_image']['id'] = 'field_speech_image';
  $handler->display->display_options['fields']['field_speech_image']['table'] = 'field_data_field_speech_image';
  $handler->display->display_options['fields']['field_speech_image']['field'] = 'field_speech_image';
  $handler->display->display_options['fields']['field_speech_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speech_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_speech_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_speech_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Speech location */
  $handler->display->display_options['fields']['field_speech_location']['id'] = 'field_speech_location';
  $handler->display->display_options['fields']['field_speech_location']['table'] = 'field_data_field_speech_location';
  $handler->display->display_options['fields']['field_speech_location']['field'] = 'field_speech_location';
  $handler->display->display_options['fields']['field_speech_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speech_location']['type'] = 'text_plain';
  /* Field: Content: Publication Date */
  $handler->display->display_options['fields']['field_publication_date']['id'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['field'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_publication_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Publish Date */
  $handler->display->display_options['fields']['field_publish_date']['id'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['field'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['label'] = 'Speech Date';
  $handler->display->display_options['fields']['field_publish_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_publish_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
  /* Field: Content: Speech Themes */
  $handler->display->display_options['fields']['field_speech_themes']['id'] = 'field_speech_themes';
  $handler->display->display_options['fields']['field_speech_themes']['table'] = 'field_data_field_speech_themes';
  $handler->display->display_options['fields']['field_speech_themes']['field'] = 'field_speech_themes';
  $handler->display->display_options['fields']['field_speech_themes']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speech_themes']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_speech_themes']['delta_offset'] = '0';
  /* Field: Content: Speech Type */
  $handler->display->display_options['fields']['field_speech_type']['id'] = 'field_speech_type';
  $handler->display->display_options['fields']['field_speech_type']['table'] = 'field_data_field_speech_type';
  $handler->display->display_options['fields']['field_speech_type']['field'] = 'field_speech_type';
  $handler->display->display_options['fields']['field_speech_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speech_type']['type'] = 'services';
  $handler->display->display_options['fields']['field_speech_type']['settings'] = array(
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  /* Field: Field: Geography */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_country']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_country']['delta_offset'] = '0';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_speech_author']['id'] = 'field_speech_author';
  $handler->display->display_options['fields']['field_speech_author']['table'] = 'field_data_field_speech_author';
  $handler->display->display_options['fields']['field_speech_author']['field'] = 'field_speech_author';
  $handler->display->display_options['fields']['field_speech_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speech_author']['type'] = 'text_plain';
  /* Field: Content: Date Decade */
  $handler->display->display_options['fields']['field_date_decade']['id'] = 'field_date_decade';
  $handler->display->display_options['fields']['field_date_decade']['table'] = 'field_data_field_date_decade';
  $handler->display->display_options['fields']['field_date_decade']['field'] = 'field_date_decade';
  $handler->display->display_options['fields']['field_date_decade']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_decade']['type'] = 'text_plain';
  /* Field: Content: Event */
  $handler->display->display_options['fields']['field_speech_event']['id'] = 'field_speech_event';
  $handler->display->display_options['fields']['field_speech_event']['table'] = 'field_data_field_speech_event';
  $handler->display->display_options['fields']['field_speech_event']['field'] = 'field_speech_event';
  $handler->display->display_options['fields']['field_speech_event']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speech_event']['type'] = 'node_reference_path';
  $handler->display->display_options['fields']['field_speech_event']['settings'] = array(
    'alias' => 1,
    'absolute' => 0,
  );
  /* Field: Content: Press Releases */
  $handler->display->display_options['fields']['field_press_releases']['id'] = 'field_press_releases';
  $handler->display->display_options['fields']['field_press_releases']['table'] = 'field_data_field_press_releases';
  $handler->display->display_options['fields']['field_press_releases']['field'] = 'field_press_releases';
  $handler->display->display_options['fields']['field_press_releases']['label'] = 'Press Releases URL';
  $handler->display->display_options['fields']['field_press_releases']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_press_releases']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_press_releases']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_press_releases']['delta_offset'] = '0';
  /* Field: Content: Publication URL */
  $handler->display->display_options['fields']['field_publication_url']['id'] = 'field_publication_url';
  $handler->display->display_options['fields']['field_publication_url']['table'] = 'field_data_field_publication_url';
  $handler->display->display_options['fields']['field_publication_url']['field'] = 'field_publication_url';
  $handler->display->display_options['fields']['field_publication_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_publication_url']['type'] = 'link_plain';
  /* Field: Content: Speaker */
  $handler->display->display_options['fields']['field_speech_speaker']['id'] = 'field_speech_speaker';
  $handler->display->display_options['fields']['field_speech_speaker']['table'] = 'field_data_field_speech_speaker';
  $handler->display->display_options['fields']['field_speech_speaker']['field'] = 'field_speech_speaker';
  $handler->display->display_options['fields']['field_speech_speaker']['element_label_colon'] = FALSE;
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_caption']['type'] = 'text_plain';
  /* Field: Content: Create Banner Item */
  $handler->display->display_options['fields']['field_create_featured_content']['id'] = 'field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['table'] = 'field_data_field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['field'] = 'field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_create_featured_content']['type'] = 'list_key';
  /* Field: Content: Cycle Year */
  $handler->display->display_options['fields']['field_cycle_year']['id'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['table'] = 'field_data_field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['field'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cycle_year']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Enable Project Carousel */
  $handler->display->display_options['fields']['field_enable_project_slider']['id'] = 'field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['table'] = 'field_data_field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['field'] = 'field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_enable_project_slider']['type'] = 'list_key';
  /* Field: Content: External Media */
  $handler->display->display_options['fields']['field_external_media']['id'] = 'field_external_media';
  $handler->display->display_options['fields']['field_external_media']['table'] = 'field_data_field_external_media';
  $handler->display->display_options['fields']['field_external_media']['field'] = 'field_external_media';
  $handler->display->display_options['fields']['field_external_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_external_media']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_external_media']['type'] = 'link_plain';
  /* Field: Content: Hub page */
  $handler->display->display_options['fields']['field_hub_page']['id'] = 'field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['table'] = 'field_data_field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['field'] = 'field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hub_page']['delta_offset'] = '0';
  /* Field: Content: Newsletter category */
  $handler->display->display_options['fields']['field_simplenews_term']['id'] = 'field_simplenews_term';
  $handler->display->display_options['fields']['field_simplenews_term']['table'] = 'field_data_field_simplenews_term';
  $handler->display->display_options['fields']['field_simplenews_term']['field'] = 'field_simplenews_term';
  $handler->display->display_options['fields']['field_simplenews_term']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_simplenews_term']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Pages to exclude */
  $handler->display->display_options['fields']['field_pages_to_exclude']['id'] = 'field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['table'] = 'field_data_field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['field'] = 'field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pages_to_exclude']['delta_offset'] = '0';
  /* Field: Content: Related Audio/Video */
  $handler->display->display_options['fields']['field_podcasts_reference']['id'] = 'field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['table'] = 'field_data_field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['field'] = 'field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_podcasts_reference']['delta_offset'] = '0';
  /* Field: Field: Related Events */
  $handler->display->display_options['fields']['field_events_reference']['id'] = 'field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['table'] = 'field_data_field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['field'] = 'field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_events_reference']['delta_offset'] = '0';
  /* Field: Content: Related In the Media */
  $handler->display->display_options['fields']['field_related_in_the_media']['id'] = 'field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['table'] = 'field_data_field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['field'] = 'field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_in_the_media']['delta_offset'] = '0';
  /* Field: Content: Related News */
  $handler->display->display_options['fields']['field_related_news']['id'] = 'field_related_news';
  $handler->display->display_options['fields']['field_related_news']['table'] = 'field_data_field_related_news';
  $handler->display->display_options['fields']['field_related_news']['field'] = 'field_related_news';
  $handler->display->display_options['fields']['field_related_news']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_news']['delta_offset'] = '0';
  /* Field: Content: Related Photos */
  $handler->display->display_options['fields']['field_photos_reference']['id'] = 'field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['table'] = 'field_data_field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['field'] = 'field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photos_reference']['delta_offset'] = '0';
  /* Field: Content: Related Press Releases */
  $handler->display->display_options['fields']['field_press_reference']['id'] = 'field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['table'] = 'field_data_field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['field'] = 'field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_press_reference']['delta_offset'] = '0';
  /* Field: Content: Related Projects */
  $handler->display->display_options['fields']['field_related_project']['id'] = 'field_related_project';
  $handler->display->display_options['fields']['field_related_project']['table'] = 'field_data_field_related_project';
  $handler->display->display_options['fields']['field_related_project']['field'] = 'field_related_project';
  $handler->display->display_options['fields']['field_related_project']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_project']['delta_offset'] = '0';
  /* Field: Content: Related Publications */
  $handler->display->display_options['fields']['field_related_publications']['id'] = 'field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['table'] = 'field_data_field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['field'] = 'field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_publications']['delta_offset'] = '0';
  /* Field: Content: Related Speeches */
  $handler->display->display_options['fields']['field_speeches_reference']['id'] = 'field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['table'] = 'field_data_field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['field'] = 'field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speeches_reference']['delta_offset'] = '0';
  /* Field: Content: Slideshow Image */
  $handler->display->display_options['fields']['field_feature_image']['id'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['field'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feature_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_feature_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Field: Agency */
  $handler->display->display_options['fields']['field_agency']['id'] = 'field_agency';
  $handler->display->display_options['fields']['field_agency']['table'] = 'field_data_field_agency';
  $handler->display->display_options['fields']['field_agency']['field'] = 'field_agency';
  $handler->display->display_options['fields']['field_agency']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_agency']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_agency']['delta_offset'] = '0';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'GUID';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'speech_[nid]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Field: Thematic Area */
  $handler->display->display_options['fields']['field_focus_area']['id'] = 'field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['table'] = 'field_data_field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['field'] = 'field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_focus_area']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_focus_area']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Field: Content: Press Releases */
  $handler->display->display_options['fields']['field_press_releases_1']['id'] = 'field_press_releases_1';
  $handler->display->display_options['fields']['field_press_releases_1']['table'] = 'field_data_field_press_releases';
  $handler->display->display_options['fields']['field_press_releases_1']['field'] = 'field_press_releases';
  $handler->display->display_options['fields']['field_press_releases_1']['label'] = 'Press Releases Title';
  $handler->display->display_options['fields']['field_press_releases_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_press_releases_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_press_releases_1']['type'] = 'link_title_plain';
  $handler->display->display_options['fields']['field_press_releases_1']['delta_offset'] = '0';
  /* Field: Content: Publication URL */
  $handler->display->display_options['fields']['field_publication_url_1']['id'] = 'field_publication_url_1';
  $handler->display->display_options['fields']['field_publication_url_1']['table'] = 'field_data_field_publication_url';
  $handler->display->display_options['fields']['field_publication_url_1']['field'] = 'field_publication_url';
  $handler->display->display_options['fields']['field_publication_url_1']['label'] = 'Publication URL Title';
  $handler->display->display_options['fields']['field_publication_url_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_url_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_publication_url_1']['type'] = 'link_title_plain';
  /* Field: Content: External Media */
  $handler->display->display_options['fields']['field_external_media_1']['id'] = 'field_external_media_1';
  $handler->display->display_options['fields']['field_external_media_1']['table'] = 'field_data_field_external_media';
  $handler->display->display_options['fields']['field_external_media_1']['field'] = 'field_external_media';
  $handler->display->display_options['fields']['field_external_media_1']['label'] = 'External Media Title';
  $handler->display->display_options['fields']['field_external_media_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_external_media_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_external_media_1']['type'] = 'link_title_plain';
  /* Field: Content: Publication Source */
  $handler->display->display_options['fields']['field_publication_source']['id'] = 'field_publication_source';
  $handler->display->display_options['fields']['field_publication_source']['table'] = 'field_data_field_publication_source';
  $handler->display->display_options['fields']['field_publication_source']['field'] = 'field_publication_source';
  $handler->display->display_options['fields']['field_publication_source']['label'] = 'Publication Source Link';
  $handler->display->display_options['fields']['field_publication_source']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_source']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_publication_source']['type'] = 'link_plain';
  /* Field: Content: Publication Source */
  $handler->display->display_options['fields']['field_publication_source_1']['id'] = 'field_publication_source_1';
  $handler->display->display_options['fields']['field_publication_source_1']['table'] = 'field_data_field_publication_source';
  $handler->display->display_options['fields']['field_publication_source_1']['field'] = 'field_publication_source';
  $handler->display->display_options['fields']['field_publication_source_1']['label'] = 'Publication Source Title';
  $handler->display->display_options['fields']['field_publication_source_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_source_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_publication_source_1']['type'] = 'link_title_plain';
  /* Field: Content: Introductory text */
  $handler->display->display_options['fields']['field_introductory_text']['id'] = 'field_introductory_text';
  $handler->display->display_options['fields']['field_introductory_text']['table'] = 'field_data_field_introductory_text';
  $handler->display->display_options['fields']['field_introductory_text']['field'] = 'field_introductory_text';
  $handler->display->display_options['fields']['field_introductory_text']['element_label_colon'] = FALSE;
  /* Field: Content: Publication Author */
  $handler->display->display_options['fields']['field_publication_author']['id'] = 'field_publication_author';
  $handler->display->display_options['fields']['field_publication_author']['table'] = 'field_data_field_publication_author';
  $handler->display->display_options['fields']['field_publication_author']['field'] = 'field_publication_author';
  $handler->display->display_options['fields']['field_publication_author']['element_label_colon'] = FALSE;
  /* Field: Content: Cycle Year */
  $handler->display->display_options['fields']['field_cycle_year_1']['id'] = 'field_cycle_year_1';
  $handler->display->display_options['fields']['field_cycle_year_1']['table'] = 'field_data_field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year_1']['field'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cycle_year_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Related Links */
  $handler->display->display_options['fields']['field_speech_links']['id'] = 'field_speech_links';
  $handler->display->display_options['fields']['field_speech_links']['table'] = 'field_data_field_speech_links';
  $handler->display->display_options['fields']['field_speech_links']['field'] = 'field_speech_links';
  $handler->display->display_options['fields']['field_speech_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speech_links']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_speech_links']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_speech_links']['delta_offset'] = '0';
  /* Field: Content: Related Links */
  $handler->display->display_options['fields']['field_speech_links_1']['id'] = 'field_speech_links_1';
  $handler->display->display_options['fields']['field_speech_links_1']['table'] = 'field_data_field_speech_links';
  $handler->display->display_options['fields']['field_speech_links_1']['field'] = 'field_speech_links';
  $handler->display->display_options['fields']['field_speech_links_1']['label'] = 'Related Links Title';
  $handler->display->display_options['fields']['field_speech_links_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speech_links_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_speech_links_1']['type'] = 'link_title_plain';
  $handler->display->display_options['fields']['field_speech_links_1']['delta_offset'] = '0';
  /* Field: Content: Brightcove ID */
  $handler->display->display_options['fields']['field_brightcove_id']['id'] = 'field_brightcove_id';
  $handler->display->display_options['fields']['field_brightcove_id']['table'] = 'field_data_field_brightcove_id';
  $handler->display->display_options['fields']['field_brightcove_id']['field'] = 'field_brightcove_id';
  $handler->display->display_options['fields']['field_brightcove_id']['element_label_colon'] = FALSE;
  /* Field: Content: Destination site */
  $handler->display->display_options['fields']['field_destination_site']['id'] = 'field_destination_site';
  $handler->display->display_options['fields']['field_destination_site']['table'] = 'field_data_field_destination_site';
  $handler->display->display_options['fields']['field_destination_site']['field'] = 'field_destination_site';
  $handler->display->display_options['fields']['field_destination_site']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_destination_site']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_destination_site']['delta_offset'] = '0';
  /* Field: Content: Serial ID */
  $handler->display->display_options['fields']['field_serial_id']['id'] = 'field_serial_id';
  $handler->display->display_options['fields']['field_serial_id']['table'] = 'field_data_field_serial_id';
  $handler->display->display_options['fields']['field_serial_id']['field'] = 'field_serial_id';
  $handler->display->display_options['fields']['field_serial_id']['element_label_colon'] = FALSE;
  /* Field: Content: Youtube/Vimeo Video */
  $handler->display->display_options['fields']['field_youtube_vimeo_video']['id'] = 'field_youtube_vimeo_video';
  $handler->display->display_options['fields']['field_youtube_vimeo_video']['table'] = 'field_data_field_youtube_vimeo_video';
  $handler->display->display_options['fields']['field_youtube_vimeo_video']['field'] = 'field_youtube_vimeo_video';
  $handler->display->display_options['fields']['field_youtube_vimeo_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_youtube_vimeo_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_youtube_vimeo_video']['type'] = 'file_url_plain';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
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
    'speech' => 'speech',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'speeches';

  /* Display: CSV export */
  $handler = $view->new_display('views_data_export', 'CSV export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'speeches/csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['segment_size'] = '100';

  /* Display: Feeds AKDN */
  $handler = $view->new_display('services', 'Feeds AKDN', 'services_1');
  $handler->display->display_options['path'] = 'speeches-feeds';

  /* Display: Filtered feeds */
  $handler = $view->new_display('services', 'Filtered feeds', 'services_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Audio */
  $handler->display->display_options['fields']['field_speech_audio']['id'] = 'field_speech_audio';
  $handler->display->display_options['fields']['field_speech_audio']['table'] = 'field_data_field_speech_audio';
  $handler->display->display_options['fields']['field_speech_audio']['field'] = 'field_speech_audio';
  $handler->display->display_options['fields']['field_speech_audio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speech_audio']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_speech_audio']['type'] = 'file_url_plain';
  /* Field: Content: Speech image */
  $handler->display->display_options['fields']['field_speech_image']['id'] = 'field_speech_image';
  $handler->display->display_options['fields']['field_speech_image']['table'] = 'field_data_field_speech_image';
  $handler->display->display_options['fields']['field_speech_image']['field'] = 'field_speech_image';
  $handler->display->display_options['fields']['field_speech_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speech_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_speech_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_speech_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Speech location */
  $handler->display->display_options['fields']['field_speech_location']['id'] = 'field_speech_location';
  $handler->display->display_options['fields']['field_speech_location']['table'] = 'field_data_field_speech_location';
  $handler->display->display_options['fields']['field_speech_location']['field'] = 'field_speech_location';
  $handler->display->display_options['fields']['field_speech_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speech_location']['type'] = 'text_plain';
  /* Field: Content: Publication Date */
  $handler->display->display_options['fields']['field_publication_date']['id'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['field'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_publication_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Publish Date */
  $handler->display->display_options['fields']['field_publish_date']['id'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['field'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['label'] = 'Speech Date';
  $handler->display->display_options['fields']['field_publish_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_publish_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
  /* Field: Content: Speech Themes */
  $handler->display->display_options['fields']['field_speech_themes']['id'] = 'field_speech_themes';
  $handler->display->display_options['fields']['field_speech_themes']['table'] = 'field_data_field_speech_themes';
  $handler->display->display_options['fields']['field_speech_themes']['field'] = 'field_speech_themes';
  $handler->display->display_options['fields']['field_speech_themes']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speech_themes']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_speech_themes']['delta_offset'] = '0';
  /* Field: Content: Speech Type */
  $handler->display->display_options['fields']['field_speech_type']['id'] = 'field_speech_type';
  $handler->display->display_options['fields']['field_speech_type']['table'] = 'field_data_field_speech_type';
  $handler->display->display_options['fields']['field_speech_type']['field'] = 'field_speech_type';
  $handler->display->display_options['fields']['field_speech_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speech_type']['type'] = 'list_key';
  /* Field: Field: Geography */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_country']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_country']['delta_offset'] = '0';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_speech_author']['id'] = 'field_speech_author';
  $handler->display->display_options['fields']['field_speech_author']['table'] = 'field_data_field_speech_author';
  $handler->display->display_options['fields']['field_speech_author']['field'] = 'field_speech_author';
  $handler->display->display_options['fields']['field_speech_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speech_author']['type'] = 'text_plain';
  /* Field: Content: Date Decade */
  $handler->display->display_options['fields']['field_date_decade']['id'] = 'field_date_decade';
  $handler->display->display_options['fields']['field_date_decade']['table'] = 'field_data_field_date_decade';
  $handler->display->display_options['fields']['field_date_decade']['field'] = 'field_date_decade';
  $handler->display->display_options['fields']['field_date_decade']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_decade']['type'] = 'text_plain';
  /* Field: Content: Event */
  $handler->display->display_options['fields']['field_speech_event']['id'] = 'field_speech_event';
  $handler->display->display_options['fields']['field_speech_event']['table'] = 'field_data_field_speech_event';
  $handler->display->display_options['fields']['field_speech_event']['field'] = 'field_speech_event';
  $handler->display->display_options['fields']['field_speech_event']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speech_event']['type'] = 'node_reference_path';
  $handler->display->display_options['fields']['field_speech_event']['settings'] = array(
    'alias' => 1,
    'absolute' => 0,
  );
  /* Field: Content: Press Releases */
  $handler->display->display_options['fields']['field_press_releases']['id'] = 'field_press_releases';
  $handler->display->display_options['fields']['field_press_releases']['table'] = 'field_data_field_press_releases';
  $handler->display->display_options['fields']['field_press_releases']['field'] = 'field_press_releases';
  $handler->display->display_options['fields']['field_press_releases']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_press_releases']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_press_releases']['delta_offset'] = '0';
  /* Field: Content: Publication URL */
  $handler->display->display_options['fields']['field_publication_url']['id'] = 'field_publication_url';
  $handler->display->display_options['fields']['field_publication_url']['table'] = 'field_data_field_publication_url';
  $handler->display->display_options['fields']['field_publication_url']['field'] = 'field_publication_url';
  $handler->display->display_options['fields']['field_publication_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_url']['click_sort_column'] = 'url';
  /* Field: Content: Speaker */
  $handler->display->display_options['fields']['field_speech_speaker']['id'] = 'field_speech_speaker';
  $handler->display->display_options['fields']['field_speech_speaker']['table'] = 'field_data_field_speech_speaker';
  $handler->display->display_options['fields']['field_speech_speaker']['field'] = 'field_speech_speaker';
  $handler->display->display_options['fields']['field_speech_speaker']['element_label_colon'] = FALSE;
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_caption']['type'] = 'text_plain';
  /* Field: Content: Create Banner Item */
  $handler->display->display_options['fields']['field_create_featured_content']['id'] = 'field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['table'] = 'field_data_field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['field'] = 'field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_create_featured_content']['type'] = 'list_key';
  /* Field: Content: Cycle Year */
  $handler->display->display_options['fields']['field_cycle_year']['id'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['table'] = 'field_data_field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['field'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cycle_year']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Enable Project Carousel */
  $handler->display->display_options['fields']['field_enable_project_slider']['id'] = 'field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['table'] = 'field_data_field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['field'] = 'field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_enable_project_slider']['type'] = 'list_key';
  /* Field: Content: External Media */
  $handler->display->display_options['fields']['field_external_media']['id'] = 'field_external_media';
  $handler->display->display_options['fields']['field_external_media']['table'] = 'field_data_field_external_media';
  $handler->display->display_options['fields']['field_external_media']['field'] = 'field_external_media';
  $handler->display->display_options['fields']['field_external_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_external_media']['click_sort_column'] = 'url';
  /* Field: Content: Hub page */
  $handler->display->display_options['fields']['field_hub_page']['id'] = 'field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['table'] = 'field_data_field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['field'] = 'field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hub_page']['delta_offset'] = '0';
  /* Field: Content: Newsletter category */
  $handler->display->display_options['fields']['field_simplenews_term']['id'] = 'field_simplenews_term';
  $handler->display->display_options['fields']['field_simplenews_term']['table'] = 'field_data_field_simplenews_term';
  $handler->display->display_options['fields']['field_simplenews_term']['field'] = 'field_simplenews_term';
  $handler->display->display_options['fields']['field_simplenews_term']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_simplenews_term']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Pages to exclude */
  $handler->display->display_options['fields']['field_pages_to_exclude']['id'] = 'field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['table'] = 'field_data_field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['field'] = 'field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pages_to_exclude']['delta_offset'] = '0';
  /* Field: Content: Related Audio/Video */
  $handler->display->display_options['fields']['field_podcasts_reference']['id'] = 'field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['table'] = 'field_data_field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['field'] = 'field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_podcasts_reference']['delta_offset'] = '0';
  /* Field: Field: Related Events */
  $handler->display->display_options['fields']['field_events_reference']['id'] = 'field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['table'] = 'field_data_field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['field'] = 'field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_events_reference']['delta_offset'] = '0';
  /* Field: Content: Related In the Media */
  $handler->display->display_options['fields']['field_related_in_the_media']['id'] = 'field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['table'] = 'field_data_field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['field'] = 'field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_in_the_media']['delta_offset'] = '0';
  /* Field: Content: Related News */
  $handler->display->display_options['fields']['field_related_news']['id'] = 'field_related_news';
  $handler->display->display_options['fields']['field_related_news']['table'] = 'field_data_field_related_news';
  $handler->display->display_options['fields']['field_related_news']['field'] = 'field_related_news';
  $handler->display->display_options['fields']['field_related_news']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_news']['delta_offset'] = '0';
  /* Field: Content: Related Photos */
  $handler->display->display_options['fields']['field_photos_reference']['id'] = 'field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['table'] = 'field_data_field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['field'] = 'field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photos_reference']['delta_offset'] = '0';
  /* Field: Content: Related Press Releases */
  $handler->display->display_options['fields']['field_press_reference']['id'] = 'field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['table'] = 'field_data_field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['field'] = 'field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_press_reference']['delta_offset'] = '0';
  /* Field: Content: Related Projects */
  $handler->display->display_options['fields']['field_related_project']['id'] = 'field_related_project';
  $handler->display->display_options['fields']['field_related_project']['table'] = 'field_data_field_related_project';
  $handler->display->display_options['fields']['field_related_project']['field'] = 'field_related_project';
  $handler->display->display_options['fields']['field_related_project']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_project']['delta_offset'] = '0';
  /* Field: Content: Related Publications */
  $handler->display->display_options['fields']['field_related_publications']['id'] = 'field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['table'] = 'field_data_field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['field'] = 'field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_publications']['delta_offset'] = '0';
  /* Field: Content: Related Speeches */
  $handler->display->display_options['fields']['field_speeches_reference']['id'] = 'field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['table'] = 'field_data_field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['field'] = 'field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speeches_reference']['delta_offset'] = '0';
  /* Field: Content: Slideshow Image */
  $handler->display->display_options['fields']['field_feature_image']['id'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['field'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feature_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_feature_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Field: Agency */
  $handler->display->display_options['fields']['field_agency']['id'] = 'field_agency';
  $handler->display->display_options['fields']['field_agency']['table'] = 'field_data_field_agency';
  $handler->display->display_options['fields']['field_agency']['field'] = 'field_agency';
  $handler->display->display_options['fields']['field_agency']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_agency']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_agency']['delta_offset'] = '0';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tags']['settings'] = array(
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = '*';
  /* Field: Field: Thematic Area */
  $handler->display->display_options['fields']['field_focus_area']['id'] = 'field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['table'] = 'field_data_field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['field'] = 'field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_focus_area']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_focus_area']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'GUID';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'speech_[nid]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Introductory text */
  $handler->display->display_options['fields']['field_introductory_text']['id'] = 'field_introductory_text';
  $handler->display->display_options['fields']['field_introductory_text']['table'] = 'field_data_field_introductory_text';
  $handler->display->display_options['fields']['field_introductory_text']['field'] = 'field_introductory_text';
  $handler->display->display_options['fields']['field_introductory_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_introductory_text']['type'] = 'text_plain';
  /* Field: Content: Publication Source */
  $handler->display->display_options['fields']['field_publication_source']['id'] = 'field_publication_source';
  $handler->display->display_options['fields']['field_publication_source']['table'] = 'field_data_field_publication_source';
  $handler->display->display_options['fields']['field_publication_source']['field'] = 'field_publication_source';
  $handler->display->display_options['fields']['field_publication_source']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_source']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_publication_source']['type'] = 'services';
  $handler->display->display_options['fields']['field_publication_source']['settings'] = array(
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  /* Field: Content: Publication Author */
  $handler->display->display_options['fields']['field_publication_author']['id'] = 'field_publication_author';
  $handler->display->display_options['fields']['field_publication_author']['table'] = 'field_data_field_publication_author';
  $handler->display->display_options['fields']['field_publication_author']['field'] = 'field_publication_author';
  $handler->display->display_options['fields']['field_publication_author']['type'] = 'text_plain';
  /* Field: Content: Serial ID */
  $handler->display->display_options['fields']['field_serial_id']['id'] = 'field_serial_id';
  $handler->display->display_options['fields']['field_serial_id']['table'] = 'field_data_field_serial_id';
  $handler->display->display_options['fields']['field_serial_id']['field'] = 'field_serial_id';
  /* Field: Content: Brightcove ID */
  $handler->display->display_options['fields']['field_brightcove_id']['id'] = 'field_brightcove_id';
  $handler->display->display_options['fields']['field_brightcove_id']['table'] = 'field_data_field_brightcove_id';
  $handler->display->display_options['fields']['field_brightcove_id']['field'] = 'field_brightcove_id';
  $handler->display->display_options['fields']['field_brightcove_id']['type'] = 'text_plain';
  /* Field: Content: Brightcove video */
  $handler->display->display_options['fields']['field_brightcove_video']['id'] = 'field_brightcove_video';
  $handler->display->display_options['fields']['field_brightcove_video']['table'] = 'field_data_field_brightcove_video';
  $handler->display->display_options['fields']['field_brightcove_video']['field'] = 'field_brightcove_video';
  $handler->display->display_options['fields']['field_brightcove_video']['click_sort_column'] = 'brightcove_id';
  $handler->display->display_options['fields']['field_brightcove_video']['type'] = 'services';
  $handler->display->display_options['fields']['field_brightcove_video']['settings'] = array(
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
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
    'speech' => 'speech',
  );
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    986 => '986',
    936 => '936',
    926 => '926',
    866 => '866',
    921 => '921',
    906 => '906',
    891 => '891',
    886 => '886',
    951 => '951',
    956 => '956',
    1491 => '1491',
    1016 => '1016',
    1151 => '1151',
    1146 => '1146',
    851 => '851',
    726 => '726',
    1026 => '1026',
    966 => '966',
    116 => '116',
    1186 => '1186',
    741 => '741',
    861 => '861',
    776 => '776',
    686 => '686',
    1001 => '1001',
    1376 => '1376',
    1666 => '1666',
    1711 => '1711',
    1676 => '1676',
    1356 => '1356',
    1396 => '1396',
    1366 => '1366',
    1251 => '1251',
    1826 => '1826',
    1626 => '1626',
    1501 => '1501',
    1076 => '1076',
    1416 => '1416',
    1236 => '1236',
    1546 => '1546',
    826 => '826',
    801 => '801',
    981 => '981',
    1051 => '1051',
    1346 => '1346',
    556 => '556',
    1556 => '1556',
    1271 => '1271',
    1511 => '1511',
    1856 => '1856',
    1531 => '1531',
    1521 => '1521',
    1756 => '1756',
    656 => '656',
    946 => '946',
    1171 => '1171',
    1691 => '1691',
    1301 => '1301',
    1216 => '1216',
    1121 => '1121',
    1331 => '1331',
    1586 => '1586',
    1441 => '1441',
    1741 => '1741',
    1771 => '1771',
    1701 => '1701',
    1871 => '1871',
    1601 => '1601',
    1636 => '1636',
    1651 => '1651',
    811 => '811',
    1286 => '1286',
    1476 => '1476',
    1201 => '1201',
    1841 => '1841',
    1456 => '1456',
    1796 => '1796',
    1466 => '1466',
    1776 => '1776',
    1811 => '1811',
    1086 => '1086',
    671 => '671',
    681 => '681',
    1061 => '1061',
    1036 => '1036',
    991 => '991',
  );
  $handler->display->display_options['filters']['field_tags_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';
  $handler->display->display_options['path'] = 'speech-filtered-feeds';

  /* Display: Feeds Ismaili */
  $handler = $view->new_display('services', 'Feeds Ismaili', 'services_3');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_ismaili' => 'deploy_to_ismaili',
    'list_of_contents' => 0,
    'deploy_to_akdn' => 0,
  );
  $handler->display->display_options['path'] = 'speeches-feeds-ismaili';

  /* Display: Feeds IIS */
  $handler = $view->new_display('services', 'Feeds IIS', 'services_4');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_iis' => 'deploy_to_iis',
    'list_of_contents' => 0,
    'deploy_to_akdn' => 0,
    'deploy_to_ismaili' => 0,
  );
  $handler->display->display_options['path'] = 'speeches-feeds-iis';
  $translatables['speech_center_export'] = array(
    t('Master'),
    t('Feeds IIS'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('queue'),
    t('Title'),
    t('Audio'),
    t('Speech image'),
    t('Speech location'),
    t('Publication Date'),
    t('Speech Date'),
    t('Short Title'),
    t('Speech Themes'),
    t('Speech Type'),
    t('Geography'),
    t('Author'),
    t('Date Decade'),
    t('Event'),
    t('Press Releases URL'),
    t('Publication URL'),
    t('Speaker'),
    t('Caption'),
    t('Create Banner Item'),
    t('Cycle Year'),
    t('Enable Project Carousel'),
    t('External Media'),
    t('Hub page'),
    t('Newsletter category'),
    t('Pages to exclude'),
    t('Related Audio/Video'),
    t('Related Events'),
    t('Related In the Media'),
    t('Related News'),
    t('Related Photos'),
    t('Related Press Releases'),
    t('Related Projects'),
    t('Related Publications'),
    t('Related Speeches'),
    t('Slideshow Image'),
    t('Agency'),
    t('Tags'),
    t('GUID'),
    t('speech_[nid]'),
    t('Thematic Area'),
    t('Body'),
    t('Press Releases Title'),
    t('Publication URL Title'),
    t('External Media Title'),
    t('Publication Source Link'),
    t('Publication Source Title'),
    t('Introductory text'),
    t('Publication Author'),
    t('Related Links'),
    t('Related Links Title'),
    t('Brightcove ID'),
    t('Destination site'),
    t('Serial ID'),
    t('Youtube/Vimeo Video'),
    t('Image'),
    t('Page'),
    t('CSV export'),
    t('Feeds AKDN'),
    t('Filtered feeds'),
    t('Press Releases'),
    t('Nid'),
    t('Publication Source'),
    t('Brightcove video'),
    t('Feeds Ismaili'),
  );
  $export['speech_center_export'] = $view;

  $view = new view();
  $view->name = 'speech_quotes_xml';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Speech quotes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Speech quotes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    1 => '1',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'body' => 'body',
    'field_caption' => 'field_caption',
    'field_create_featured_content' => 'field_create_featured_content',
    'field_feature_image' => 'field_feature_image',
    'field_speech_reference' => 'field_speech_reference',
    'field_speech_themes' => 'field_speech_themes',
    'nid' => 'nid',
    'nothing' => 'nothing',
    'nothing_1' => 'nothing_1',
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
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_caption' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_create_featured_content' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_feature_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_reference' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_themes' => array(
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
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_akdn' => 'deploy_to_akdn',
    'list_of_contents' => 0,
    'deploy_to_ismaili' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_caption']['type'] = 'text_plain';
  /* Field: Content: Create Banner Item */
  $handler->display->display_options['fields']['field_create_featured_content']['id'] = 'field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['table'] = 'field_data_field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['field'] = 'field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_create_featured_content']['type'] = 'list_key';
  /* Field: Content: Slideshow Image */
  $handler->display->display_options['fields']['field_feature_image']['id'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['field'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feature_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_feature_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Speech Reference */
  $handler->display->display_options['fields']['field_speech_reference']['id'] = 'field_speech_reference';
  $handler->display->display_options['fields']['field_speech_reference']['table'] = 'field_data_field_speech_reference';
  $handler->display->display_options['fields']['field_speech_reference']['field'] = 'field_speech_reference';
  $handler->display->display_options['fields']['field_speech_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speech_reference']['type'] = 'node_reference_nid';
  /* Field: Content: Speech Themes */
  $handler->display->display_options['fields']['field_speech_themes']['id'] = 'field_speech_themes';
  $handler->display->display_options['fields']['field_speech_themes']['table'] = 'field_data_field_speech_themes';
  $handler->display->display_options['fields']['field_speech_themes']['field'] = 'field_speech_themes';
  $handler->display->display_options['fields']['field_speech_themes']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speech_themes']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_speech_themes']['delta_offset'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
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
    'speech_quote' => 'speech_quote',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'speech-quotes-xml';

  /* Display: CSV export */
  $handler = $view->new_display('views_data_export', 'CSV export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'speech-quotes-xml/csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['segment_size'] = '100';

  /* Display: Feeds AKDN */
  $handler = $view->new_display('services', 'Feeds AKDN', 'services_1');
  $handler->display->display_options['path'] = 'speech-quotes-feeds';

  /* Display: Feeds Ismaili */
  $handler = $view->new_display('services', 'Feeds Ismaili', 'services_2');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_ismaili' => 'deploy_to_ismaili',
    'list_of_contents' => 0,
    'deploy_to_akdn' => 0,
    'deploy_to_iis' => 0,
  );
  $handler->display->display_options['path'] = 'speech-quotes-feeds-ismaili';

  /* Display: Feeds IIS */
  $handler = $view->new_display('services', 'Feeds IIS', 'services_3');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_iis' => 'deploy_to_iis',
    'list_of_contents' => 0,
    'deploy_to_akdn' => 0,
    'deploy_to_ismaili' => 0,
  );
  $handler->display->display_options['path'] = 'speech-quotes-feeds-iis';
  $translatables['speech_quotes_xml'] = array(
    t('Master'),
    t('Speech quotes'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('queue'),
    t('Title'),
    t('Body'),
    t('Caption'),
    t('Create Banner Item'),
    t('Slideshow Image'),
    t('Speech Reference'),
    t('Speech Themes'),
    t('Nid'),
    t('Page'),
    t('CSV export'),
    t('Feeds AKDN'),
    t('Feeds Ismaili'),
    t('Feeds IIS'),
  );
  $export['speech_quotes_xml'] = $view;

  $view = new view();
  $view->name = 'views_banner_item_syndication';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Banner item syndication';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Article Page';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    1 => '1',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_speech_audio' => 'field_speech_audio',
    'field_speech_image' => 'field_speech_image',
    'field_speech_location' => 'field_speech_location',
    'field_publication_date' => 'field_publication_date',
    'field_publish_date' => 'field_publish_date',
    'field_short_title' => 'field_short_title',
    'field_speech_themes' => 'field_speech_themes',
    'field_speech_type' => 'field_speech_type',
    'field_country' => 'field_country',
    'field_speech_author' => 'field_speech_author',
    'field_date_decade' => 'field_date_decade',
    'field_speech_event' => 'field_speech_event',
    'field_press_releases' => 'field_press_releases',
    'field_publication_url' => 'field_publication_url',
    'field_speech_speaker' => 'field_speech_speaker',
    'field_speech_video' => 'field_speech_video',
    'field_caption' => 'field_caption',
    'field_create_featured_content' => 'field_create_featured_content',
    'field_cycle_year' => 'field_cycle_year',
    'field_enable_project_slider' => 'field_enable_project_slider',
    'field_external_media' => 'field_external_media',
    'field_hub_page' => 'field_hub_page',
    'field_simplenews_term' => 'field_simplenews_term',
    'field_pages_to_exclude' => 'field_pages_to_exclude',
    'field_podcasts_reference' => 'field_podcasts_reference',
    'field_events_reference' => 'field_events_reference',
    'field_related_in_the_media' => 'field_related_in_the_media',
    'field_related_news' => 'field_related_news',
    'field_photos_reference' => 'field_photos_reference',
    'field_press_reference' => 'field_press_reference',
    'field_related_project' => 'field_related_project',
    'field_related_publications' => 'field_related_publications',
    'field_speeches_reference' => 'field_speeches_reference',
    'field_feature_image' => 'field_feature_image',
    'field_agency' => 'field_agency',
    'field_tags' => 'field_tags',
    'field_focus_area' => 'field_focus_area',
    'body' => 'body',
    'nid' => 'nid',
    'nothing' => 'nothing',
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
    'field_speech_audio' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publication_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publish_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_short_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_themes' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_country' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_author' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_decade' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_event' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_press_releases' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publication_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_speaker' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speech_video' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_caption' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_create_featured_content' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cycle_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_enable_project_slider' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_external_media' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hub_page' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_simplenews_term' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pages_to_exclude' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_podcasts_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_events_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_in_the_media' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_news' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_photos_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_press_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_project' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_publications' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speeches_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_feature_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_agency' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tags' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_focus_area' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
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
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_akdn' => 'deploy_to_akdn',
    'list_of_contents' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: AKMI ACTIVITY */
  $handler->display->display_options['fields']['field_akmi_activity']['id'] = 'field_akmi_activity';
  $handler->display->display_options['fields']['field_akmi_activity']['table'] = 'field_data_field_akmi_activity';
  $handler->display->display_options['fields']['field_akmi_activity']['field'] = 'field_akmi_activity';
  $handler->display->display_options['fields']['field_akmi_activity']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Slideshow Image */
  $handler->display->display_options['fields']['field_feature_image']['id'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['field'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['label'] = 'Image';
  $handler->display->display_options['fields']['field_feature_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_feature_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_feature_link']['id'] = 'field_feature_link';
  $handler->display->display_options['fields']['field_feature_link']['table'] = 'field_data_field_feature_link';
  $handler->display->display_options['fields']['field_feature_link']['field'] = 'field_feature_link';
  $handler->display->display_options['fields']['field_feature_link']['label'] = 'Link title';
  $handler->display->display_options['fields']['field_feature_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_feature_link']['type'] = 'link_title_plain';
  /* Field: Content: Select reviewer */
  $handler->display->display_options['fields']['field_select_reviewer']['id'] = 'field_select_reviewer';
  $handler->display->display_options['fields']['field_select_reviewer']['table'] = 'field_data_field_select_reviewer';
  $handler->display->display_options['fields']['field_select_reviewer']['field'] = 'field_select_reviewer';
  $handler->display->display_options['fields']['field_select_reviewer']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_select_reviewer']['type'] = 'user_reference_uid';
  /* Field: Field: Agency */
  $handler->display->display_options['fields']['field_agency']['id'] = 'field_agency';
  $handler->display->display_options['fields']['field_agency']['table'] = 'field_data_field_agency';
  $handler->display->display_options['fields']['field_agency']['field'] = 'field_agency';
  $handler->display->display_options['fields']['field_agency']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_agency']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_agency']['delta_offset'] = '0';
  /* Field: Field: Geography */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_country']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_country']['delta_offset'] = '0';
  /* Field: Field: Thematic Area */
  $handler->display->display_options['fields']['field_focus_area']['id'] = 'field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['table'] = 'field_data_field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['field'] = 'field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_focus_area']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_focus_area']['delta_offset'] = '0';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_feature_link_1']['id'] = 'field_feature_link_1';
  $handler->display->display_options['fields']['field_feature_link_1']['table'] = 'field_data_field_feature_link';
  $handler->display->display_options['fields']['field_feature_link_1']['field'] = 'field_feature_link';
  $handler->display->display_options['fields']['field_feature_link_1']['label'] = 'Link url';
  $handler->display->display_options['fields']['field_feature_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feature_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_feature_link_1']['type'] = 'link_plain';
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
    'featured_content' => 'featured_content',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'articles';

  /* Display: CSV export */
  $handler = $view->new_display('views_data_export', 'CSV export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'articles/csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['segment_size'] = '100';

  /* Display: Feeds AKDN */
  $handler = $view->new_display('services', 'Feeds AKDN', 'services_1');
  $handler->display->display_options['path'] = 'banner-item-feeds';

  /* Display: Feeds Ismaili */
  $handler = $view->new_display('services', 'Feeds Ismaili', 'services_3');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_ismaili' => 'deploy_to_ismaili',
    'list_of_contents' => 0,
    'deploy_to_akdn' => 0,
    'deploy_to_iis' => 0,
  );
  $handler->display->display_options['path'] = 'banner-item-feeds-ismaili';

  /* Display: Feeds IIS */
  $handler = $view->new_display('services', 'Feeds IIS', 'services_4');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_iis' => 'deploy_to_iis',
    'list_of_contents' => 0,
    'deploy_to_akdn' => 0,
    'deploy_to_ismaili' => 0,
  );
  $handler->display->display_options['path'] = 'banner-item-feeds-iis';
  $translatables['views_banner_item_syndication'] = array(
    t('Master'),
    t('Article Page'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('queue'),
    t('Title'),
    t('AKMI ACTIVITY'),
    t('Image'),
    t('Caption'),
    t('Link title'),
    t('Select reviewer'),
    t('Agency'),
    t('Geography'),
    t('Thematic Area'),
    t('Link url'),
    t('Page'),
    t('CSV export'),
    t('Feeds AKDN'),
    t('Feeds Ismaili'),
    t('Feeds IIS'),
  );
  $export['views_banner_item_syndication'] = $view;

  $view = new view();
  $view->name = 'views_basic_page_syndication';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Basic page syndication';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Basic page';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    1 => '1',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_agency_term' => 'field_agency_term',
    'body' => 'body',
    'field_caption' => 'field_caption',
    'field_create_featured_content' => 'field_create_featured_content',
    'field_geography_term' => 'field_geography_term',
    'field_hub_page' => 'field_hub_page',
    'field_hub_page_image' => 'field_hub_page_image',
    'field_article_link' => 'field_article_link',
    'field_more_blocks' => 'field_more_blocks',
    'field_more_link' => 'field_more_link',
    'field_simplenews_term' => 'field_simplenews_term',
    'field_pages_to_exclude' => 'field_pages_to_exclude',
    'field_select_reviewer' => 'field_select_reviewer',
    'field_short_title' => 'field_short_title',
    'field_feature_image' => 'field_feature_image',
    'field_tags' => 'field_tags',
    'field_article_link_1' => 'field_article_link_1',
    'field_more_link_1' => 'field_more_link_1',
    'field_podcast_video' => 'field_podcast_video',
    'field_body' => 'field_body',
    'field_video_size' => 'field_video_size',
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
    'field_agency_term' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_caption' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_create_featured_content' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_geography_term' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hub_page' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hub_page_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_article_link' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_more_blocks' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_more_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_simplenews_term' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pages_to_exclude' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_select_reviewer' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_short_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_feature_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tags' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_article_link_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_more_link_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_podcast_video' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_video_size' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_akdn' => 'deploy_to_akdn',
    'list_of_contents' => 0,
  );
  /* Relationship: Content: Videos (field_videos) */
  $handler->display->display_options['relationships']['field_videos_value']['id'] = 'field_videos_value';
  $handler->display->display_options['relationships']['field_videos_value']['table'] = 'field_data_field_videos';
  $handler->display->display_options['relationships']['field_videos_value']['field'] = 'field_videos_value';
  $handler->display->display_options['relationships']['field_videos_value']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Agency */
  $handler->display->display_options['fields']['field_agency_term']['id'] = 'field_agency_term';
  $handler->display->display_options['fields']['field_agency_term']['table'] = 'field_data_field_agency_term';
  $handler->display->display_options['fields']['field_agency_term']['field'] = 'field_agency_term';
  $handler->display->display_options['fields']['field_agency_term']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_agency_term']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['element_label_colon'] = FALSE;
  /* Field: Content: Create Banner Item */
  $handler->display->display_options['fields']['field_create_featured_content']['id'] = 'field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['table'] = 'field_data_field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['field'] = 'field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_create_featured_content']['type'] = 'list_key';
  /* Field: Content: Geography */
  $handler->display->display_options['fields']['field_geography_term']['id'] = 'field_geography_term';
  $handler->display->display_options['fields']['field_geography_term']['table'] = 'field_data_field_geography_term';
  $handler->display->display_options['fields']['field_geography_term']['field'] = 'field_geography_term';
  $handler->display->display_options['fields']['field_geography_term']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geography_term']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Hub page */
  $handler->display->display_options['fields']['field_hub_page']['id'] = 'field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['table'] = 'field_data_field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['field'] = 'field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hub_page']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_hub_page']['delta_offset'] = '0';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_hub_page_image']['id'] = 'field_hub_page_image';
  $handler->display->display_options['fields']['field_hub_page_image']['table'] = 'field_data_field_hub_page_image';
  $handler->display->display_options['fields']['field_hub_page_image']['field'] = 'field_hub_page_image';
  $handler->display->display_options['fields']['field_hub_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hub_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_hub_page_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_hub_page_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Related Links */
  $handler->display->display_options['fields']['field_article_link']['id'] = 'field_article_link';
  $handler->display->display_options['fields']['field_article_link']['table'] = 'field_data_field_article_link';
  $handler->display->display_options['fields']['field_article_link']['field'] = 'field_article_link';
  $handler->display->display_options['fields']['field_article_link']['label'] = 'Link title';
  $handler->display->display_options['fields']['field_article_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_article_link']['type'] = 'link_title_plain';
  $handler->display->display_options['fields']['field_article_link']['delta_offset'] = '0';
  /* Field: Content: More Blocks */
  $handler->display->display_options['fields']['field_more_blocks']['id'] = 'field_more_blocks';
  $handler->display->display_options['fields']['field_more_blocks']['table'] = 'field_data_field_more_blocks';
  $handler->display->display_options['fields']['field_more_blocks']['field'] = 'field_more_blocks';
  $handler->display->display_options['fields']['field_more_blocks']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_more_blocks']['type'] = 'list_key';
  /* Field: Content: More Link */
  $handler->display->display_options['fields']['field_more_link']['id'] = 'field_more_link';
  $handler->display->display_options['fields']['field_more_link']['table'] = 'field_data_field_more_link';
  $handler->display->display_options['fields']['field_more_link']['field'] = 'field_more_link';
  $handler->display->display_options['fields']['field_more_link']['label'] = 'More Link title';
  $handler->display->display_options['fields']['field_more_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_more_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_more_link']['type'] = 'link_title_plain';
  /* Field: Content: Newsletter category */
  $handler->display->display_options['fields']['field_simplenews_term']['id'] = 'field_simplenews_term';
  $handler->display->display_options['fields']['field_simplenews_term']['table'] = 'field_data_field_simplenews_term';
  $handler->display->display_options['fields']['field_simplenews_term']['field'] = 'field_simplenews_term';
  $handler->display->display_options['fields']['field_simplenews_term']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_simplenews_term']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Pages to exclude */
  $handler->display->display_options['fields']['field_pages_to_exclude']['id'] = 'field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['table'] = 'field_data_field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['field'] = 'field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pages_to_exclude']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_pages_to_exclude']['delta_offset'] = '0';
  /* Field: Content: Select reviewer */
  $handler->display->display_options['fields']['field_select_reviewer']['id'] = 'field_select_reviewer';
  $handler->display->display_options['fields']['field_select_reviewer']['table'] = 'field_data_field_select_reviewer';
  $handler->display->display_options['fields']['field_select_reviewer']['field'] = 'field_select_reviewer';
  $handler->display->display_options['fields']['field_select_reviewer']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_select_reviewer']['type'] = 'user_reference_uid';
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
  /* Field: Content: Slideshow Image */
  $handler->display->display_options['fields']['field_feature_image']['id'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['field'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feature_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_feature_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  /* Field: Content: Related Links */
  $handler->display->display_options['fields']['field_article_link_1']['id'] = 'field_article_link_1';
  $handler->display->display_options['fields']['field_article_link_1']['table'] = 'field_data_field_article_link';
  $handler->display->display_options['fields']['field_article_link_1']['field'] = 'field_article_link';
  $handler->display->display_options['fields']['field_article_link_1']['label'] = 'Link url';
  $handler->display->display_options['fields']['field_article_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_article_link_1']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_article_link_1']['delta_offset'] = '0';
  /* Field: Content: More Link */
  $handler->display->display_options['fields']['field_more_link_1']['id'] = 'field_more_link_1';
  $handler->display->display_options['fields']['field_more_link_1']['table'] = 'field_data_field_more_link';
  $handler->display->display_options['fields']['field_more_link_1']['field'] = 'field_more_link';
  $handler->display->display_options['fields']['field_more_link_1']['label'] = 'More Link url';
  $handler->display->display_options['fields']['field_more_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_more_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_more_link_1']['type'] = 'link_plain';
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
    'page' => 'page',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_agency_term' => 'field_agency_term',
    'body' => 'body',
    'field_caption' => 'field_caption',
    'field_create_featured_content' => 'field_create_featured_content',
    'field_geography_term' => 'field_geography_term',
    'field_hub_page' => 'field_hub_page',
    'field_hub_page_image' => 'field_hub_page_image',
    'field_article_link' => 'field_article_link',
    'field_more_blocks' => 'field_more_blocks',
    'field_more_link' => 'field_more_link',
    'field_simplenews_term' => 'field_simplenews_term',
    'field_pages_to_exclude' => 'field_pages_to_exclude',
    'field_select_reviewer' => 'field_select_reviewer',
    'field_short_title' => 'field_short_title',
    'field_feature_image' => 'field_feature_image',
    'field_tags' => 'field_tags',
    'field_article_link_1' => 'field_article_link_1',
    'field_more_link_1' => 'field_more_link_1',
    'field_podcast_video' => 'field_podcast_video',
    'field_body' => 'field_body',
    'field_video_size' => 'field_video_size',
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
    'field_agency_term' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_caption' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_create_featured_content' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_geography_term' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hub_page' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hub_page_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_article_link' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_more_blocks' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_more_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_simplenews_term' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pages_to_exclude' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_select_reviewer' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_short_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_feature_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tags' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_article_link_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_more_link_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_podcast_video' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_video_size' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'basic-pages';

  /* Display: CSV export */
  $handler = $view->new_display('views_data_export', 'CSV export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'basic-pages/csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;
  $handler->display->display_options['segment_size'] = '100';

  /* Display: Feeds AKDN */
  $handler = $view->new_display('services', 'Feeds AKDN', 'services_1');
  $handler->display->display_options['path'] = 'basic-page-feeds';

  /* Display: Feeds Ismaili */
  $handler = $view->new_display('services', 'Feeds Ismaili', 'services_3');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_ismaili' => 'deploy_to_ismaili',
    'list_of_contents' => 0,
    'deploy_to_akdn' => 0,
    'deploy_to_iis' => 0,
  );
  /* Relationship: Content: Videos (field_videos) */
  $handler->display->display_options['relationships']['field_videos_value']['id'] = 'field_videos_value';
  $handler->display->display_options['relationships']['field_videos_value']['table'] = 'field_data_field_videos';
  $handler->display->display_options['relationships']['field_videos_value']['field'] = 'field_videos_value';
  $handler->display->display_options['relationships']['field_videos_value']['delta'] = '-1';
  $handler->display->display_options['path'] = 'basic-page-feeds-ismaili';

  /* Display: Feeds IIS */
  $handler = $view->new_display('services', 'Feeds IIS', 'services_4');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_iis' => 'deploy_to_iis',
    'list_of_contents' => 0,
    'deploy_to_akdn' => 0,
    'deploy_to_ismaili' => 0,
  );
  /* Relationship: Content: Videos (field_videos) */
  $handler->display->display_options['relationships']['field_videos_value']['id'] = 'field_videos_value';
  $handler->display->display_options['relationships']['field_videos_value']['table'] = 'field_data_field_videos';
  $handler->display->display_options['relationships']['field_videos_value']['field'] = 'field_videos_value';
  $handler->display->display_options['relationships']['field_videos_value']['delta'] = '-1';
  $handler->display->display_options['path'] = 'basic-page-feeds-iis';
  $translatables['views_basic_page_syndication'] = array(
    t('Master'),
    t('Basic page'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('queue'),
    t('field collection item from field_videos'),
    t('Title'),
    t('Agency'),
    t('Body'),
    t('Caption'),
    t('Create Banner Item'),
    t('Geography'),
    t('Hub page'),
    t('Image'),
    t('Link title'),
    t('More Blocks'),
    t('More Link title'),
    t('Newsletter category'),
    t('Pages to exclude'),
    t('Select reviewer'),
    t('Short Title'),
    t('Slideshow Image'),
    t('Tags'),
    t('Link url'),
    t('More Link url'),
    t('Page'),
    t('CSV export'),
    t('Feeds AKDN'),
    t('Feeds Ismaili'),
    t('Feeds IIS'),
  );
  $export['views_basic_page_syndication'] = $view;

  $view = new view();
  $view->name = 'views_field_videos_field_collection';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'field_videos field collection';
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
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'item_id' => 'item_id',
    'field_path' => 'field_path',
    'host_entity_id' => 'host_entity_id',
    'host_entity_path' => 'host_entity_path',
    'host_entity_type' => 'host_entity_type',
    'nothing' => 'nothing',
    'nothing_1' => 'nothing_1',
    'nothing_2' => 'nothing_2',
    'field_podcast_video' => 'field_podcast_video',
    'field_body' => 'field_body',
    'field_video_size' => 'field_video_size',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'item_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'host_entity_id' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'host_entity_path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'host_entity_type' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_podcast_video' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_video_size' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Field collection item: Entity with the Videos (field_videos) */
  $handler->display->display_options['relationships']['field_videos_node']['id'] = 'field_videos_node';
  $handler->display->display_options['relationships']['field_videos_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_videos_node']['field'] = 'field_videos_node';
  $handler->display->display_options['relationships']['field_videos_node']['required'] = TRUE;
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Field: Field collection item: Field path */
  $handler->display->display_options['fields']['field_path']['id'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['field_path']['field'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['label'] = '';
  $handler->display->display_options['fields']['field_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_path']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity ID */
  $handler->display->display_options['fields']['host_entity_id']['id'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_id']['field'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['label'] = 'entity_id';
  $handler->display->display_options['fields']['host_entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_id']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity Path */
  $handler->display->display_options['fields']['host_entity_path']['id'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_path']['field'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['label'] = '';
  $handler->display->display_options['fields']['host_entity_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_path']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity Type */
  $handler->display->display_options['fields']['host_entity_type']['id'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_type']['field'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['label'] = '';
  $handler->display->display_options['fields']['host_entity_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_type']['hide_alter_empty'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[field_path]/[item_id]/edit?destination=[host_entity_path]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Delete';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Delete';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = '[field_path]/[item_id]/delete?destination=[host_entity_path]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Add';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = '[field_path]/add/[host_entity_type]/[host_entity_id]?destination=[host_entity_path]';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Field: Field: Video */
  $handler->display->display_options['fields']['field_podcast_video']['id'] = 'field_podcast_video';
  $handler->display->display_options['fields']['field_podcast_video']['table'] = 'field_data_field_podcast_video';
  $handler->display->display_options['fields']['field_podcast_video']['field'] = 'field_podcast_video';
  $handler->display->display_options['fields']['field_podcast_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_podcast_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_podcast_video']['type'] = 'file_url_plain';
  /* Field: Field collection item: Body */
  $handler->display->display_options['fields']['field_body']['id'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['table'] = 'field_data_field_body';
  $handler->display->display_options['fields']['field_body']['field'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['label'] = 'Body video';
  $handler->display->display_options['fields']['field_body']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Video size */
  $handler->display->display_options['fields']['field_video_size']['id'] = 'field_video_size';
  $handler->display->display_options['fields']['field_video_size']['table'] = 'field_data_field_video_size';
  $handler->display->display_options['fields']['field_video_size']['field'] = 'field_video_size';
  $handler->display->display_options['fields']['field_video_size']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_size']['type'] = 'list_key';
  /* Field: Field collection item: Host Entity ID */
  $handler->display->display_options['fields']['host_entity_id_1']['id'] = 'host_entity_id_1';
  $handler->display->display_options['fields']['host_entity_id_1']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_id_1']['field'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id_1']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_videos_node';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Sort criterion: Field collection item: Field collection item ID */
  $handler->display->display_options['sorts']['item_id']['id'] = 'item_id';
  $handler->display->display_options['sorts']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['sorts']['item_id']['field'] = 'item_id';

  /* Display: Services */
  $handler = $view->new_display('services', 'Services', 'services_1');
  $handler->display->display_options['path'] = 'field_videos_field_collection';
  $translatables['views_field_videos_field_collection'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('field_videos'),
    t('Field collection item ID'),
    t('.'),
    t('entity_id'),
    t('Edit'),
    t('Delete'),
    t('Add'),
    t('Video'),
    t('Body video'),
    t('Video size'),
    t('Host Entity ID'),
    t('Nid'),
    t('Services'),
  );
  $export['views_field_videos_field_collection'] = $view;

  $view = new view();
  $view->name = 'views_press_release_syndication';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Press release syndication';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Press release syndication';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    1 => '1',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: AKMI ACTIVITY */
  $handler->display->display_options['fields']['field_akmi_activity']['id'] = 'field_akmi_activity';
  $handler->display->display_options['fields']['field_akmi_activity']['table'] = 'field_data_field_akmi_activity';
  $handler->display->display_options['fields']['field_akmi_activity']['field'] = 'field_akmi_activity';
  $handler->display->display_options['fields']['field_akmi_activity']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: AKMI Page */
  $handler->display->display_options['fields']['field_akmi_page']['id'] = 'field_akmi_page';
  $handler->display->display_options['fields']['field_akmi_page']['table'] = 'field_data_field_akmi_page';
  $handler->display->display_options['fields']['field_akmi_page']['field'] = 'field_akmi_page';
  $handler->display->display_options['fields']['field_akmi_page']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Article Author */
  $handler->display->display_options['fields']['field_article_author']['id'] = 'field_article_author';
  $handler->display->display_options['fields']['field_article_author']['table'] = 'field_data_field_article_author';
  $handler->display->display_options['fields']['field_article_author']['field'] = 'field_article_author';
  /* Field: Content: Article Image */
  $handler->display->display_options['fields']['field_article_img']['id'] = 'field_article_img';
  $handler->display->display_options['fields']['field_article_img']['table'] = 'field_data_field_article_img';
  $handler->display->display_options['fields']['field_article_img']['field'] = 'field_article_img';
  $handler->display->display_options['fields']['field_article_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_article_img']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_article_img']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Article Type */
  $handler->display->display_options['fields']['field_article_cat']['id'] = 'field_article_cat';
  $handler->display->display_options['fields']['field_article_cat']['table'] = 'field_data_field_article_cat';
  $handler->display->display_options['fields']['field_article_cat']['field'] = 'field_article_cat';
  $handler->display->display_options['fields']['field_article_cat']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Article URL */
  $handler->display->display_options['fields']['field_article_url']['id'] = 'field_article_url';
  $handler->display->display_options['fields']['field_article_url']['table'] = 'field_data_field_article_url';
  $handler->display->display_options['fields']['field_article_url']['field'] = 'field_article_url';
  $handler->display->display_options['fields']['field_article_url']['settings'] = array(
    'trim_length' => '80',
    'nofollow' => 0,
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  /* Field: Content: Caption Override */
  $handler->display->display_options['fields']['field_caption_override']['id'] = 'field_caption_override';
  $handler->display->display_options['fields']['field_caption_override']['table'] = 'field_data_field_caption_override';
  $handler->display->display_options['fields']['field_caption_override']['field'] = 'field_caption_override';
  /* Field: Content: Create Banner Item */
  $handler->display->display_options['fields']['field_create_featured_content']['id'] = 'field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['table'] = 'field_data_field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['field'] = 'field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['type'] = 'list_key';
  /* Field: Content: Cycle Year */
  $handler->display->display_options['fields']['field_cycle_year']['id'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['table'] = 'field_data_field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['field'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Date Decade */
  $handler->display->display_options['fields']['field_date_decade']['id'] = 'field_date_decade';
  $handler->display->display_options['fields']['field_date_decade']['table'] = 'field_data_field_date_decade';
  $handler->display->display_options['fields']['field_date_decade']['field'] = 'field_date_decade';
  /* Field: Content: Enable Project Carousel */
  $handler->display->display_options['fields']['field_enable_project_slider']['id'] = 'field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['table'] = 'field_data_field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['field'] = 'field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['type'] = 'list_key';
  /* Field: Content: Hub page */
  $handler->display->display_options['fields']['field_hub_page']['id'] = 'field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['table'] = 'field_data_field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['field'] = 'field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_hub_page']['delta_offset'] = '0';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Media Source */
  $handler->display->display_options['fields']['field_media_source']['id'] = 'field_media_source';
  $handler->display->display_options['fields']['field_media_source']['table'] = 'field_data_field_media_source';
  $handler->display->display_options['fields']['field_media_source']['field'] = 'field_media_source';
  $handler->display->display_options['fields']['field_media_source']['label'] = 'Media Source Title';
  $handler->display->display_options['fields']['field_media_source']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_media_source']['type'] = 'link_title_plain';
  /* Field: Content: Media Type */
  $handler->display->display_options['fields']['field_media_type']['id'] = 'field_media_type';
  $handler->display->display_options['fields']['field_media_type']['table'] = 'field_data_field_media_type';
  $handler->display->display_options['fields']['field_media_type']['field'] = 'field_media_type';
  $handler->display->display_options['fields']['field_media_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Pages to exclude */
  $handler->display->display_options['fields']['field_pages_to_exclude']['id'] = 'field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['table'] = 'field_data_field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['field'] = 'field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_pages_to_exclude']['delta_offset'] = '0';
  /* Field: Content: Projects */
  $handler->display->display_options['fields']['field_projects']['id'] = 'field_projects';
  $handler->display->display_options['fields']['field_projects']['table'] = 'field_data_field_projects';
  $handler->display->display_options['fields']['field_projects']['field'] = 'field_projects';
  $handler->display->display_options['fields']['field_projects']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Publication Source Link */
  $handler->display->display_options['fields']['field_publication_source_link']['id'] = 'field_publication_source_link';
  $handler->display->display_options['fields']['field_publication_source_link']['table'] = 'field_data_field_publication_source_link';
  $handler->display->display_options['fields']['field_publication_source_link']['field'] = 'field_publication_source_link';
  $handler->display->display_options['fields']['field_publication_source_link']['settings'] = array(
    'trim_length' => '80',
    'nofollow' => 0,
  );
  /* Field: Content: Publication Source Title */
  $handler->display->display_options['fields']['field_publication_source_title']['id'] = 'field_publication_source_title';
  $handler->display->display_options['fields']['field_publication_source_title']['table'] = 'field_data_field_publication_source_title';
  $handler->display->display_options['fields']['field_publication_source_title']['field'] = 'field_publication_source_title';
  /* Field: Content: Publish Date */
  $handler->display->display_options['fields']['field_publish_date']['id'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['field'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_publish_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Related Audio/Video */
  $handler->display->display_options['fields']['field_podcasts_reference']['id'] = 'field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['table'] = 'field_data_field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['field'] = 'field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_podcasts_reference']['delta_offset'] = '0';
  /* Field: Content: Related In the Media */
  $handler->display->display_options['fields']['field_related_in_the_media']['id'] = 'field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['table'] = 'field_data_field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['field'] = 'field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_related_in_the_media']['delta_offset'] = '0';
  /* Field: Content: Related Links */
  $handler->display->display_options['fields']['field_article_link']['id'] = 'field_article_link';
  $handler->display->display_options['fields']['field_article_link']['table'] = 'field_data_field_article_link';
  $handler->display->display_options['fields']['field_article_link']['field'] = 'field_article_link';
  $handler->display->display_options['fields']['field_article_link']['label'] = 'Related Links Title';
  $handler->display->display_options['fields']['field_article_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_article_link']['type'] = 'link_title_plain';
  $handler->display->display_options['fields']['field_article_link']['delta_offset'] = '0';
  /* Field: Content: Related News */
  $handler->display->display_options['fields']['field_related_news']['id'] = 'field_related_news';
  $handler->display->display_options['fields']['field_related_news']['table'] = 'field_data_field_related_news';
  $handler->display->display_options['fields']['field_related_news']['field'] = 'field_related_news';
  $handler->display->display_options['fields']['field_related_news']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_related_news']['delta_offset'] = '0';
  /* Field: Content: Related Photos */
  $handler->display->display_options['fields']['field_photos_reference']['id'] = 'field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['table'] = 'field_data_field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['field'] = 'field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_photos_reference']['delta_offset'] = '0';
  /* Field: Content: Related Press Releases */
  $handler->display->display_options['fields']['field_press_reference']['id'] = 'field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['table'] = 'field_data_field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['field'] = 'field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_press_reference']['delta_offset'] = '0';
  /* Field: Content: Related Projects */
  $handler->display->display_options['fields']['field_related_project']['id'] = 'field_related_project';
  $handler->display->display_options['fields']['field_related_project']['table'] = 'field_data_field_related_project';
  $handler->display->display_options['fields']['field_related_project']['field'] = 'field_related_project';
  $handler->display->display_options['fields']['field_related_project']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_related_project']['delta_offset'] = '0';
  /* Field: Content: Related Publications */
  $handler->display->display_options['fields']['field_related_publications']['id'] = 'field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['table'] = 'field_data_field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['field'] = 'field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_related_publications']['delta_offset'] = '0';
  /* Field: Content: Related Speeches */
  $handler->display->display_options['fields']['field_speeches_reference']['id'] = 'field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['table'] = 'field_data_field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['field'] = 'field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_speeches_reference']['delta_offset'] = '0';
  /* Field: Content: Select reviewer */
  $handler->display->display_options['fields']['field_select_reviewer']['id'] = 'field_select_reviewer';
  $handler->display->display_options['fields']['field_select_reviewer']['table'] = 'field_data_field_select_reviewer';
  $handler->display->display_options['fields']['field_select_reviewer']['field'] = 'field_select_reviewer';
  $handler->display->display_options['fields']['field_select_reviewer']['type'] = 'user_reference_uid';
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  /* Field: Content: Slideshow Image */
  $handler->display->display_options['fields']['field_feature_image']['id'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['field'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_feature_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = '*';
  /* Field: Field: Agency */
  $handler->display->display_options['fields']['field_agency']['id'] = 'field_agency';
  $handler->display->display_options['fields']['field_agency']['table'] = 'field_data_field_agency';
  $handler->display->display_options['fields']['field_agency']['field'] = 'field_agency';
  $handler->display->display_options['fields']['field_agency']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_agency']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_agency']['separator'] = '*';
  /* Field: Field: Geography */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_country']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_country']['separator'] = '* ';
  /* Field: Field: Related Events */
  $handler->display->display_options['fields']['field_events_reference']['id'] = 'field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['table'] = 'field_data_field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['field'] = 'field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_events_reference']['delta_offset'] = '0';
  /* Field: Field: Thematic Area */
  $handler->display->display_options['fields']['field_focus_area']['id'] = 'field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['table'] = 'field_data_field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['field'] = 'field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_focus_area']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_focus_area']['separator'] = '*';
  /* Field: Content: Media Source */
  $handler->display->display_options['fields']['field_media_source_1']['id'] = 'field_media_source_1';
  $handler->display->display_options['fields']['field_media_source_1']['table'] = 'field_data_field_media_source';
  $handler->display->display_options['fields']['field_media_source_1']['field'] = 'field_media_source';
  $handler->display->display_options['fields']['field_media_source_1']['label'] = 'Media Source URL';
  $handler->display->display_options['fields']['field_media_source_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_media_source_1']['type'] = 'link_plain';
  /* Field: Content: Related Links */
  $handler->display->display_options['fields']['field_article_link_1']['id'] = 'field_article_link_1';
  $handler->display->display_options['fields']['field_article_link_1']['table'] = 'field_data_field_article_link';
  $handler->display->display_options['fields']['field_article_link_1']['field'] = 'field_article_link';
  $handler->display->display_options['fields']['field_article_link_1']['label'] = 'Related Links URL';
  $handler->display->display_options['fields']['field_article_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_article_link_1']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_article_link_1']['delta_offset'] = '0';
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
    'article' => 'article',
  );
  /* Filter criterion: Content: Article Type (field_article_cat) */
  $handler->display->display_options['filters']['field_article_cat_tid']['id'] = 'field_article_cat_tid';
  $handler->display->display_options['filters']['field_article_cat_tid']['table'] = 'field_data_field_article_cat';
  $handler->display->display_options['filters']['field_article_cat_tid']['field'] = 'field_article_cat_tid';
  $handler->display->display_options['filters']['field_article_cat_tid']['value'] = array(
    0 => '2511',
  );
  $handler->display->display_options['filters']['field_article_cat_tid']['vocabulary'] = 'article_type';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'press-release-syndication';

  /* Display: Services feeds AKDN */
  $handler = $view->new_display('services', 'Services feeds AKDN', 'services_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_akdn' => 'deploy_to_akdn',
    'list_of_contents' => 0,
    'deploy_to_ismaili' => 0,
    'deploy_to_iis' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: AKMI ACTIVITY */
  $handler->display->display_options['fields']['field_akmi_activity']['id'] = 'field_akmi_activity';
  $handler->display->display_options['fields']['field_akmi_activity']['table'] = 'field_data_field_akmi_activity';
  $handler->display->display_options['fields']['field_akmi_activity']['field'] = 'field_akmi_activity';
  $handler->display->display_options['fields']['field_akmi_activity']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: AKMI Page */
  $handler->display->display_options['fields']['field_akmi_page']['id'] = 'field_akmi_page';
  $handler->display->display_options['fields']['field_akmi_page']['table'] = 'field_data_field_akmi_page';
  $handler->display->display_options['fields']['field_akmi_page']['field'] = 'field_akmi_page';
  $handler->display->display_options['fields']['field_akmi_page']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Article Author */
  $handler->display->display_options['fields']['field_article_author']['id'] = 'field_article_author';
  $handler->display->display_options['fields']['field_article_author']['table'] = 'field_data_field_article_author';
  $handler->display->display_options['fields']['field_article_author']['field'] = 'field_article_author';
  /* Field: Content: Article Image */
  $handler->display->display_options['fields']['field_article_img']['id'] = 'field_article_img';
  $handler->display->display_options['fields']['field_article_img']['table'] = 'field_data_field_article_img';
  $handler->display->display_options['fields']['field_article_img']['field'] = 'field_article_img';
  $handler->display->display_options['fields']['field_article_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_article_img']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_article_img']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Article Type */
  $handler->display->display_options['fields']['field_article_cat']['id'] = 'field_article_cat';
  $handler->display->display_options['fields']['field_article_cat']['table'] = 'field_data_field_article_cat';
  $handler->display->display_options['fields']['field_article_cat']['field'] = 'field_article_cat';
  $handler->display->display_options['fields']['field_article_cat']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Article URL */
  $handler->display->display_options['fields']['field_article_url']['id'] = 'field_article_url';
  $handler->display->display_options['fields']['field_article_url']['table'] = 'field_data_field_article_url';
  $handler->display->display_options['fields']['field_article_url']['field'] = 'field_article_url';
  $handler->display->display_options['fields']['field_article_url']['settings'] = array(
    'trim_length' => '80',
    'nofollow' => 0,
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  /* Field: Content: Caption Override */
  $handler->display->display_options['fields']['field_caption_override']['id'] = 'field_caption_override';
  $handler->display->display_options['fields']['field_caption_override']['table'] = 'field_data_field_caption_override';
  $handler->display->display_options['fields']['field_caption_override']['field'] = 'field_caption_override';
  /* Field: Content: Create Banner Item */
  $handler->display->display_options['fields']['field_create_featured_content']['id'] = 'field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['table'] = 'field_data_field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['field'] = 'field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['type'] = 'list_key';
  /* Field: Content: Cycle Year */
  $handler->display->display_options['fields']['field_cycle_year']['id'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['table'] = 'field_data_field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['field'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_cycle_year']['settings'] = array(
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  /* Field: Content: Date Decade */
  $handler->display->display_options['fields']['field_date_decade']['id'] = 'field_date_decade';
  $handler->display->display_options['fields']['field_date_decade']['table'] = 'field_data_field_date_decade';
  $handler->display->display_options['fields']['field_date_decade']['field'] = 'field_date_decade';
  /* Field: Content: Enable Project Carousel */
  $handler->display->display_options['fields']['field_enable_project_slider']['id'] = 'field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['table'] = 'field_data_field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['field'] = 'field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['type'] = 'list_key';
  /* Field: Content: Hub page */
  $handler->display->display_options['fields']['field_hub_page']['id'] = 'field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['table'] = 'field_data_field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['field'] = 'field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_hub_page']['delta_offset'] = '0';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Media Source */
  $handler->display->display_options['fields']['field_media_source']['id'] = 'field_media_source';
  $handler->display->display_options['fields']['field_media_source']['table'] = 'field_data_field_media_source';
  $handler->display->display_options['fields']['field_media_source']['field'] = 'field_media_source';
  $handler->display->display_options['fields']['field_media_source']['label'] = 'Media Source Title';
  $handler->display->display_options['fields']['field_media_source']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_media_source']['type'] = 'link_title_plain';
  /* Field: Content: Media Type */
  $handler->display->display_options['fields']['field_media_type']['id'] = 'field_media_type';
  $handler->display->display_options['fields']['field_media_type']['table'] = 'field_data_field_media_type';
  $handler->display->display_options['fields']['field_media_type']['field'] = 'field_media_type';
  $handler->display->display_options['fields']['field_media_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Pages to exclude */
  $handler->display->display_options['fields']['field_pages_to_exclude']['id'] = 'field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['table'] = 'field_data_field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['field'] = 'field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_pages_to_exclude']['delta_offset'] = '0';
  /* Field: Content: Projects */
  $handler->display->display_options['fields']['field_projects']['id'] = 'field_projects';
  $handler->display->display_options['fields']['field_projects']['table'] = 'field_data_field_projects';
  $handler->display->display_options['fields']['field_projects']['field'] = 'field_projects';
  $handler->display->display_options['fields']['field_projects']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Publication Source Link */
  $handler->display->display_options['fields']['field_publication_source_link']['id'] = 'field_publication_source_link';
  $handler->display->display_options['fields']['field_publication_source_link']['table'] = 'field_data_field_publication_source_link';
  $handler->display->display_options['fields']['field_publication_source_link']['field'] = 'field_publication_source_link';
  $handler->display->display_options['fields']['field_publication_source_link']['settings'] = array(
    'trim_length' => '80',
    'nofollow' => 0,
  );
  /* Field: Content: Publication Source Title */
  $handler->display->display_options['fields']['field_publication_source_title']['id'] = 'field_publication_source_title';
  $handler->display->display_options['fields']['field_publication_source_title']['table'] = 'field_data_field_publication_source_title';
  $handler->display->display_options['fields']['field_publication_source_title']['field'] = 'field_publication_source_title';
  /* Field: Content: Publish Date */
  $handler->display->display_options['fields']['field_publish_date']['id'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['field'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_publish_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Related Audio/Video */
  $handler->display->display_options['fields']['field_podcasts_reference']['id'] = 'field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['table'] = 'field_data_field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['field'] = 'field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_podcasts_reference']['delta_offset'] = '0';
  /* Field: Content: Related In the Media */
  $handler->display->display_options['fields']['field_related_in_the_media']['id'] = 'field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['table'] = 'field_data_field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['field'] = 'field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_related_in_the_media']['delta_offset'] = '0';
  /* Field: Content: Related Links */
  $handler->display->display_options['fields']['field_article_link']['id'] = 'field_article_link';
  $handler->display->display_options['fields']['field_article_link']['table'] = 'field_data_field_article_link';
  $handler->display->display_options['fields']['field_article_link']['field'] = 'field_article_link';
  $handler->display->display_options['fields']['field_article_link']['label'] = 'Related Links Title';
  $handler->display->display_options['fields']['field_article_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_article_link']['type'] = 'link_title_plain';
  $handler->display->display_options['fields']['field_article_link']['delta_offset'] = '0';
  /* Field: Content: Related News */
  $handler->display->display_options['fields']['field_related_news']['id'] = 'field_related_news';
  $handler->display->display_options['fields']['field_related_news']['table'] = 'field_data_field_related_news';
  $handler->display->display_options['fields']['field_related_news']['field'] = 'field_related_news';
  $handler->display->display_options['fields']['field_related_news']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_related_news']['delta_offset'] = '0';
  /* Field: Content: Related Photos */
  $handler->display->display_options['fields']['field_photos_reference']['id'] = 'field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['table'] = 'field_data_field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['field'] = 'field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_photos_reference']['delta_offset'] = '0';
  /* Field: Content: Related Press Releases */
  $handler->display->display_options['fields']['field_press_reference']['id'] = 'field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['table'] = 'field_data_field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['field'] = 'field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_press_reference']['delta_offset'] = '0';
  /* Field: Content: Related Projects */
  $handler->display->display_options['fields']['field_related_project']['id'] = 'field_related_project';
  $handler->display->display_options['fields']['field_related_project']['table'] = 'field_data_field_related_project';
  $handler->display->display_options['fields']['field_related_project']['field'] = 'field_related_project';
  $handler->display->display_options['fields']['field_related_project']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_related_project']['delta_offset'] = '0';
  /* Field: Content: Related Publications */
  $handler->display->display_options['fields']['field_related_publications']['id'] = 'field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['table'] = 'field_data_field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['field'] = 'field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_related_publications']['delta_offset'] = '0';
  /* Field: Content: Related Speeches */
  $handler->display->display_options['fields']['field_speeches_reference']['id'] = 'field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['table'] = 'field_data_field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['field'] = 'field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_speeches_reference']['delta_offset'] = '0';
  /* Field: Content: Select reviewer */
  $handler->display->display_options['fields']['field_select_reviewer']['id'] = 'field_select_reviewer';
  $handler->display->display_options['fields']['field_select_reviewer']['table'] = 'field_data_field_select_reviewer';
  $handler->display->display_options['fields']['field_select_reviewer']['field'] = 'field_select_reviewer';
  $handler->display->display_options['fields']['field_select_reviewer']['type'] = 'user_reference_uid';
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  /* Field: Content: Slideshow Image */
  $handler->display->display_options['fields']['field_feature_image']['id'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['field'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_feature_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = '*';
  /* Field: Field: Agency */
  $handler->display->display_options['fields']['field_agency']['id'] = 'field_agency';
  $handler->display->display_options['fields']['field_agency']['table'] = 'field_data_field_agency';
  $handler->display->display_options['fields']['field_agency']['field'] = 'field_agency';
  $handler->display->display_options['fields']['field_agency']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_agency']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_agency']['separator'] = '*';
  /* Field: Field: Geography */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_country']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_country']['separator'] = '* ';
  /* Field: Field: Related Events */
  $handler->display->display_options['fields']['field_events_reference']['id'] = 'field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['table'] = 'field_data_field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['field'] = 'field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_events_reference']['delta_offset'] = '0';
  /* Field: Field: Thematic Area */
  $handler->display->display_options['fields']['field_focus_area']['id'] = 'field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['table'] = 'field_data_field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['field'] = 'field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_focus_area']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_focus_area']['separator'] = '*';
  /* Field: Content: Media Source */
  $handler->display->display_options['fields']['field_media_source_1']['id'] = 'field_media_source_1';
  $handler->display->display_options['fields']['field_media_source_1']['table'] = 'field_data_field_media_source';
  $handler->display->display_options['fields']['field_media_source_1']['field'] = 'field_media_source';
  $handler->display->display_options['fields']['field_media_source_1']['label'] = 'Media Source URL';
  $handler->display->display_options['fields']['field_media_source_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_media_source_1']['type'] = 'link_plain';
  /* Field: Content: Related Links */
  $handler->display->display_options['fields']['field_article_link_1']['id'] = 'field_article_link_1';
  $handler->display->display_options['fields']['field_article_link_1']['table'] = 'field_data_field_article_link';
  $handler->display->display_options['fields']['field_article_link_1']['field'] = 'field_article_link';
  $handler->display->display_options['fields']['field_article_link_1']['label'] = 'Related Links URL';
  $handler->display->display_options['fields']['field_article_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_article_link_1']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_article_link_1']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'press-release-feeds';

  /* Display: Services feeds Ismaili */
  $handler = $view->new_display('services', 'Services feeds Ismaili', 'services_2');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_ismaili' => 'deploy_to_ismaili',
    'list_of_contents' => 0,
    'deploy_to_akdn' => 0,
    'deploy_to_iis' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: AKMI ACTIVITY */
  $handler->display->display_options['fields']['field_akmi_activity']['id'] = 'field_akmi_activity';
  $handler->display->display_options['fields']['field_akmi_activity']['table'] = 'field_data_field_akmi_activity';
  $handler->display->display_options['fields']['field_akmi_activity']['field'] = 'field_akmi_activity';
  $handler->display->display_options['fields']['field_akmi_activity']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: AKMI Page */
  $handler->display->display_options['fields']['field_akmi_page']['id'] = 'field_akmi_page';
  $handler->display->display_options['fields']['field_akmi_page']['table'] = 'field_data_field_akmi_page';
  $handler->display->display_options['fields']['field_akmi_page']['field'] = 'field_akmi_page';
  $handler->display->display_options['fields']['field_akmi_page']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Article Author */
  $handler->display->display_options['fields']['field_article_author']['id'] = 'field_article_author';
  $handler->display->display_options['fields']['field_article_author']['table'] = 'field_data_field_article_author';
  $handler->display->display_options['fields']['field_article_author']['field'] = 'field_article_author';
  /* Field: Content: Article Image */
  $handler->display->display_options['fields']['field_article_img']['id'] = 'field_article_img';
  $handler->display->display_options['fields']['field_article_img']['table'] = 'field_data_field_article_img';
  $handler->display->display_options['fields']['field_article_img']['field'] = 'field_article_img';
  $handler->display->display_options['fields']['field_article_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_article_img']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_article_img']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Article Type */
  $handler->display->display_options['fields']['field_article_cat']['id'] = 'field_article_cat';
  $handler->display->display_options['fields']['field_article_cat']['table'] = 'field_data_field_article_cat';
  $handler->display->display_options['fields']['field_article_cat']['field'] = 'field_article_cat';
  $handler->display->display_options['fields']['field_article_cat']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Article URL */
  $handler->display->display_options['fields']['field_article_url']['id'] = 'field_article_url';
  $handler->display->display_options['fields']['field_article_url']['table'] = 'field_data_field_article_url';
  $handler->display->display_options['fields']['field_article_url']['field'] = 'field_article_url';
  $handler->display->display_options['fields']['field_article_url']['settings'] = array(
    'trim_length' => '80',
    'nofollow' => 0,
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  /* Field: Content: Caption Override */
  $handler->display->display_options['fields']['field_caption_override']['id'] = 'field_caption_override';
  $handler->display->display_options['fields']['field_caption_override']['table'] = 'field_data_field_caption_override';
  $handler->display->display_options['fields']['field_caption_override']['field'] = 'field_caption_override';
  /* Field: Content: Create Banner Item */
  $handler->display->display_options['fields']['field_create_featured_content']['id'] = 'field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['table'] = 'field_data_field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['field'] = 'field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['type'] = 'list_key';
  /* Field: Content: Cycle Year */
  $handler->display->display_options['fields']['field_cycle_year']['id'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['table'] = 'field_data_field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['field'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_cycle_year']['settings'] = array(
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  /* Field: Content: Date Decade */
  $handler->display->display_options['fields']['field_date_decade']['id'] = 'field_date_decade';
  $handler->display->display_options['fields']['field_date_decade']['table'] = 'field_data_field_date_decade';
  $handler->display->display_options['fields']['field_date_decade']['field'] = 'field_date_decade';
  /* Field: Content: Enable Project Carousel */
  $handler->display->display_options['fields']['field_enable_project_slider']['id'] = 'field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['table'] = 'field_data_field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['field'] = 'field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['type'] = 'list_key';
  /* Field: Content: Hub page */
  $handler->display->display_options['fields']['field_hub_page']['id'] = 'field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['table'] = 'field_data_field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['field'] = 'field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_hub_page']['delta_offset'] = '0';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Media Source */
  $handler->display->display_options['fields']['field_media_source']['id'] = 'field_media_source';
  $handler->display->display_options['fields']['field_media_source']['table'] = 'field_data_field_media_source';
  $handler->display->display_options['fields']['field_media_source']['field'] = 'field_media_source';
  $handler->display->display_options['fields']['field_media_source']['label'] = 'Media Source Title';
  $handler->display->display_options['fields']['field_media_source']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_media_source']['type'] = 'link_title_plain';
  /* Field: Content: Media Type */
  $handler->display->display_options['fields']['field_media_type']['id'] = 'field_media_type';
  $handler->display->display_options['fields']['field_media_type']['table'] = 'field_data_field_media_type';
  $handler->display->display_options['fields']['field_media_type']['field'] = 'field_media_type';
  $handler->display->display_options['fields']['field_media_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Pages to exclude */
  $handler->display->display_options['fields']['field_pages_to_exclude']['id'] = 'field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['table'] = 'field_data_field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['field'] = 'field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_pages_to_exclude']['delta_offset'] = '0';
  /* Field: Content: Projects */
  $handler->display->display_options['fields']['field_projects']['id'] = 'field_projects';
  $handler->display->display_options['fields']['field_projects']['table'] = 'field_data_field_projects';
  $handler->display->display_options['fields']['field_projects']['field'] = 'field_projects';
  $handler->display->display_options['fields']['field_projects']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Publication Source Link */
  $handler->display->display_options['fields']['field_publication_source_link']['id'] = 'field_publication_source_link';
  $handler->display->display_options['fields']['field_publication_source_link']['table'] = 'field_data_field_publication_source_link';
  $handler->display->display_options['fields']['field_publication_source_link']['field'] = 'field_publication_source_link';
  $handler->display->display_options['fields']['field_publication_source_link']['settings'] = array(
    'trim_length' => '80',
    'nofollow' => 0,
  );
  /* Field: Content: Publication Source Title */
  $handler->display->display_options['fields']['field_publication_source_title']['id'] = 'field_publication_source_title';
  $handler->display->display_options['fields']['field_publication_source_title']['table'] = 'field_data_field_publication_source_title';
  $handler->display->display_options['fields']['field_publication_source_title']['field'] = 'field_publication_source_title';
  /* Field: Content: Publish Date */
  $handler->display->display_options['fields']['field_publish_date']['id'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['field'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_publish_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Related Audio/Video */
  $handler->display->display_options['fields']['field_podcasts_reference']['id'] = 'field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['table'] = 'field_data_field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['field'] = 'field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_podcasts_reference']['delta_offset'] = '0';
  /* Field: Content: Related In the Media */
  $handler->display->display_options['fields']['field_related_in_the_media']['id'] = 'field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['table'] = 'field_data_field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['field'] = 'field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_related_in_the_media']['delta_offset'] = '0';
  /* Field: Content: Related Links */
  $handler->display->display_options['fields']['field_article_link']['id'] = 'field_article_link';
  $handler->display->display_options['fields']['field_article_link']['table'] = 'field_data_field_article_link';
  $handler->display->display_options['fields']['field_article_link']['field'] = 'field_article_link';
  $handler->display->display_options['fields']['field_article_link']['label'] = 'Related Links Title';
  $handler->display->display_options['fields']['field_article_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_article_link']['type'] = 'link_title_plain';
  $handler->display->display_options['fields']['field_article_link']['delta_offset'] = '0';
  /* Field: Content: Related News */
  $handler->display->display_options['fields']['field_related_news']['id'] = 'field_related_news';
  $handler->display->display_options['fields']['field_related_news']['table'] = 'field_data_field_related_news';
  $handler->display->display_options['fields']['field_related_news']['field'] = 'field_related_news';
  $handler->display->display_options['fields']['field_related_news']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_related_news']['delta_offset'] = '0';
  /* Field: Content: Related Photos */
  $handler->display->display_options['fields']['field_photos_reference']['id'] = 'field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['table'] = 'field_data_field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['field'] = 'field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_photos_reference']['delta_offset'] = '0';
  /* Field: Content: Related Press Releases */
  $handler->display->display_options['fields']['field_press_reference']['id'] = 'field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['table'] = 'field_data_field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['field'] = 'field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_press_reference']['delta_offset'] = '0';
  /* Field: Content: Related Projects */
  $handler->display->display_options['fields']['field_related_project']['id'] = 'field_related_project';
  $handler->display->display_options['fields']['field_related_project']['table'] = 'field_data_field_related_project';
  $handler->display->display_options['fields']['field_related_project']['field'] = 'field_related_project';
  $handler->display->display_options['fields']['field_related_project']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_related_project']['delta_offset'] = '0';
  /* Field: Content: Related Publications */
  $handler->display->display_options['fields']['field_related_publications']['id'] = 'field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['table'] = 'field_data_field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['field'] = 'field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_related_publications']['delta_offset'] = '0';
  /* Field: Content: Related Speeches */
  $handler->display->display_options['fields']['field_speeches_reference']['id'] = 'field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['table'] = 'field_data_field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['field'] = 'field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_speeches_reference']['delta_offset'] = '0';
  /* Field: Content: Select reviewer */
  $handler->display->display_options['fields']['field_select_reviewer']['id'] = 'field_select_reviewer';
  $handler->display->display_options['fields']['field_select_reviewer']['table'] = 'field_data_field_select_reviewer';
  $handler->display->display_options['fields']['field_select_reviewer']['field'] = 'field_select_reviewer';
  $handler->display->display_options['fields']['field_select_reviewer']['type'] = 'user_reference_uid';
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  /* Field: Content: Slideshow Image */
  $handler->display->display_options['fields']['field_feature_image']['id'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['field'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_feature_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = '*';
  /* Field: Field: Agency */
  $handler->display->display_options['fields']['field_agency']['id'] = 'field_agency';
  $handler->display->display_options['fields']['field_agency']['table'] = 'field_data_field_agency';
  $handler->display->display_options['fields']['field_agency']['field'] = 'field_agency';
  $handler->display->display_options['fields']['field_agency']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_agency']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_agency']['separator'] = '*';
  /* Field: Field: Geography */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_country']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_country']['separator'] = '* ';
  /* Field: Field: Related Events */
  $handler->display->display_options['fields']['field_events_reference']['id'] = 'field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['table'] = 'field_data_field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['field'] = 'field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_events_reference']['delta_offset'] = '0';
  /* Field: Field: Thematic Area */
  $handler->display->display_options['fields']['field_focus_area']['id'] = 'field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['table'] = 'field_data_field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['field'] = 'field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_focus_area']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_focus_area']['separator'] = '*';
  /* Field: Content: Media Source */
  $handler->display->display_options['fields']['field_media_source_1']['id'] = 'field_media_source_1';
  $handler->display->display_options['fields']['field_media_source_1']['table'] = 'field_data_field_media_source';
  $handler->display->display_options['fields']['field_media_source_1']['field'] = 'field_media_source';
  $handler->display->display_options['fields']['field_media_source_1']['label'] = 'Media Source URL';
  $handler->display->display_options['fields']['field_media_source_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_media_source_1']['type'] = 'link_plain';
  /* Field: Content: Related Links */
  $handler->display->display_options['fields']['field_article_link_1']['id'] = 'field_article_link_1';
  $handler->display->display_options['fields']['field_article_link_1']['table'] = 'field_data_field_article_link';
  $handler->display->display_options['fields']['field_article_link_1']['field'] = 'field_article_link';
  $handler->display->display_options['fields']['field_article_link_1']['label'] = 'Related Links URL';
  $handler->display->display_options['fields']['field_article_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_article_link_1']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_article_link_1']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'press-release-feeds-ismaili';

  /* Display: Services feeds IIS */
  $handler = $view->new_display('services', 'Services feeds IIS', 'services_3');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_iis' => 'deploy_to_iis',
    'list_of_contents' => 0,
    'deploy_to_akdn' => 0,
    'deploy_to_ismaili' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: AKMI ACTIVITY */
  $handler->display->display_options['fields']['field_akmi_activity']['id'] = 'field_akmi_activity';
  $handler->display->display_options['fields']['field_akmi_activity']['table'] = 'field_data_field_akmi_activity';
  $handler->display->display_options['fields']['field_akmi_activity']['field'] = 'field_akmi_activity';
  $handler->display->display_options['fields']['field_akmi_activity']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: AKMI Page */
  $handler->display->display_options['fields']['field_akmi_page']['id'] = 'field_akmi_page';
  $handler->display->display_options['fields']['field_akmi_page']['table'] = 'field_data_field_akmi_page';
  $handler->display->display_options['fields']['field_akmi_page']['field'] = 'field_akmi_page';
  $handler->display->display_options['fields']['field_akmi_page']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Article Author */
  $handler->display->display_options['fields']['field_article_author']['id'] = 'field_article_author';
  $handler->display->display_options['fields']['field_article_author']['table'] = 'field_data_field_article_author';
  $handler->display->display_options['fields']['field_article_author']['field'] = 'field_article_author';
  /* Field: Content: Article Image */
  $handler->display->display_options['fields']['field_article_img']['id'] = 'field_article_img';
  $handler->display->display_options['fields']['field_article_img']['table'] = 'field_data_field_article_img';
  $handler->display->display_options['fields']['field_article_img']['field'] = 'field_article_img';
  $handler->display->display_options['fields']['field_article_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_article_img']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_article_img']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Article Type */
  $handler->display->display_options['fields']['field_article_cat']['id'] = 'field_article_cat';
  $handler->display->display_options['fields']['field_article_cat']['table'] = 'field_data_field_article_cat';
  $handler->display->display_options['fields']['field_article_cat']['field'] = 'field_article_cat';
  $handler->display->display_options['fields']['field_article_cat']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Article URL */
  $handler->display->display_options['fields']['field_article_url']['id'] = 'field_article_url';
  $handler->display->display_options['fields']['field_article_url']['table'] = 'field_data_field_article_url';
  $handler->display->display_options['fields']['field_article_url']['field'] = 'field_article_url';
  $handler->display->display_options['fields']['field_article_url']['settings'] = array(
    'trim_length' => '80',
    'nofollow' => 0,
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  /* Field: Content: Caption Override */
  $handler->display->display_options['fields']['field_caption_override']['id'] = 'field_caption_override';
  $handler->display->display_options['fields']['field_caption_override']['table'] = 'field_data_field_caption_override';
  $handler->display->display_options['fields']['field_caption_override']['field'] = 'field_caption_override';
  /* Field: Content: Create Banner Item */
  $handler->display->display_options['fields']['field_create_featured_content']['id'] = 'field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['table'] = 'field_data_field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['field'] = 'field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['type'] = 'list_key';
  /* Field: Content: Cycle Year */
  $handler->display->display_options['fields']['field_cycle_year']['id'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['table'] = 'field_data_field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['field'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_cycle_year']['settings'] = array(
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  /* Field: Content: Date Decade */
  $handler->display->display_options['fields']['field_date_decade']['id'] = 'field_date_decade';
  $handler->display->display_options['fields']['field_date_decade']['table'] = 'field_data_field_date_decade';
  $handler->display->display_options['fields']['field_date_decade']['field'] = 'field_date_decade';
  /* Field: Content: Enable Project Carousel */
  $handler->display->display_options['fields']['field_enable_project_slider']['id'] = 'field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['table'] = 'field_data_field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['field'] = 'field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['type'] = 'list_key';
  /* Field: Content: Hub page */
  $handler->display->display_options['fields']['field_hub_page']['id'] = 'field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['table'] = 'field_data_field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['field'] = 'field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_hub_page']['delta_offset'] = '0';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Media Source */
  $handler->display->display_options['fields']['field_media_source']['id'] = 'field_media_source';
  $handler->display->display_options['fields']['field_media_source']['table'] = 'field_data_field_media_source';
  $handler->display->display_options['fields']['field_media_source']['field'] = 'field_media_source';
  $handler->display->display_options['fields']['field_media_source']['label'] = 'Media Source Title';
  $handler->display->display_options['fields']['field_media_source']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_media_source']['type'] = 'link_title_plain';
  /* Field: Content: Media Type */
  $handler->display->display_options['fields']['field_media_type']['id'] = 'field_media_type';
  $handler->display->display_options['fields']['field_media_type']['table'] = 'field_data_field_media_type';
  $handler->display->display_options['fields']['field_media_type']['field'] = 'field_media_type';
  $handler->display->display_options['fields']['field_media_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Pages to exclude */
  $handler->display->display_options['fields']['field_pages_to_exclude']['id'] = 'field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['table'] = 'field_data_field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['field'] = 'field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_pages_to_exclude']['delta_offset'] = '0';
  /* Field: Content: Projects */
  $handler->display->display_options['fields']['field_projects']['id'] = 'field_projects';
  $handler->display->display_options['fields']['field_projects']['table'] = 'field_data_field_projects';
  $handler->display->display_options['fields']['field_projects']['field'] = 'field_projects';
  $handler->display->display_options['fields']['field_projects']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Publication Source Link */
  $handler->display->display_options['fields']['field_publication_source_link']['id'] = 'field_publication_source_link';
  $handler->display->display_options['fields']['field_publication_source_link']['table'] = 'field_data_field_publication_source_link';
  $handler->display->display_options['fields']['field_publication_source_link']['field'] = 'field_publication_source_link';
  $handler->display->display_options['fields']['field_publication_source_link']['settings'] = array(
    'trim_length' => '80',
    'nofollow' => 0,
  );
  /* Field: Content: Publication Source Title */
  $handler->display->display_options['fields']['field_publication_source_title']['id'] = 'field_publication_source_title';
  $handler->display->display_options['fields']['field_publication_source_title']['table'] = 'field_data_field_publication_source_title';
  $handler->display->display_options['fields']['field_publication_source_title']['field'] = 'field_publication_source_title';
  /* Field: Content: Publish Date */
  $handler->display->display_options['fields']['field_publish_date']['id'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['field'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_publish_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Related Audio/Video */
  $handler->display->display_options['fields']['field_podcasts_reference']['id'] = 'field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['table'] = 'field_data_field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['field'] = 'field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_podcasts_reference']['delta_offset'] = '0';
  /* Field: Content: Related In the Media */
  $handler->display->display_options['fields']['field_related_in_the_media']['id'] = 'field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['table'] = 'field_data_field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['field'] = 'field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_related_in_the_media']['delta_offset'] = '0';
  /* Field: Content: Related Links */
  $handler->display->display_options['fields']['field_article_link']['id'] = 'field_article_link';
  $handler->display->display_options['fields']['field_article_link']['table'] = 'field_data_field_article_link';
  $handler->display->display_options['fields']['field_article_link']['field'] = 'field_article_link';
  $handler->display->display_options['fields']['field_article_link']['label'] = 'Related Links Title';
  $handler->display->display_options['fields']['field_article_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_article_link']['type'] = 'link_title_plain';
  $handler->display->display_options['fields']['field_article_link']['delta_offset'] = '0';
  /* Field: Content: Related News */
  $handler->display->display_options['fields']['field_related_news']['id'] = 'field_related_news';
  $handler->display->display_options['fields']['field_related_news']['table'] = 'field_data_field_related_news';
  $handler->display->display_options['fields']['field_related_news']['field'] = 'field_related_news';
  $handler->display->display_options['fields']['field_related_news']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_related_news']['delta_offset'] = '0';
  /* Field: Content: Related Photos */
  $handler->display->display_options['fields']['field_photos_reference']['id'] = 'field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['table'] = 'field_data_field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['field'] = 'field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_photos_reference']['delta_offset'] = '0';
  /* Field: Content: Related Press Releases */
  $handler->display->display_options['fields']['field_press_reference']['id'] = 'field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['table'] = 'field_data_field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['field'] = 'field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_press_reference']['delta_offset'] = '0';
  /* Field: Content: Related Projects */
  $handler->display->display_options['fields']['field_related_project']['id'] = 'field_related_project';
  $handler->display->display_options['fields']['field_related_project']['table'] = 'field_data_field_related_project';
  $handler->display->display_options['fields']['field_related_project']['field'] = 'field_related_project';
  $handler->display->display_options['fields']['field_related_project']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_related_project']['delta_offset'] = '0';
  /* Field: Content: Related Publications */
  $handler->display->display_options['fields']['field_related_publications']['id'] = 'field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['table'] = 'field_data_field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['field'] = 'field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_related_publications']['delta_offset'] = '0';
  /* Field: Content: Related Speeches */
  $handler->display->display_options['fields']['field_speeches_reference']['id'] = 'field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['table'] = 'field_data_field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['field'] = 'field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_speeches_reference']['delta_offset'] = '0';
  /* Field: Content: Select reviewer */
  $handler->display->display_options['fields']['field_select_reviewer']['id'] = 'field_select_reviewer';
  $handler->display->display_options['fields']['field_select_reviewer']['table'] = 'field_data_field_select_reviewer';
  $handler->display->display_options['fields']['field_select_reviewer']['field'] = 'field_select_reviewer';
  $handler->display->display_options['fields']['field_select_reviewer']['type'] = 'user_reference_uid';
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  /* Field: Content: Slideshow Image */
  $handler->display->display_options['fields']['field_feature_image']['id'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['field'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_feature_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = '*';
  /* Field: Field: Agency */
  $handler->display->display_options['fields']['field_agency']['id'] = 'field_agency';
  $handler->display->display_options['fields']['field_agency']['table'] = 'field_data_field_agency';
  $handler->display->display_options['fields']['field_agency']['field'] = 'field_agency';
  $handler->display->display_options['fields']['field_agency']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_agency']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_agency']['separator'] = '*';
  /* Field: Field: Geography */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_country']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_country']['separator'] = '* ';
  /* Field: Field: Related Events */
  $handler->display->display_options['fields']['field_events_reference']['id'] = 'field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['table'] = 'field_data_field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['field'] = 'field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_events_reference']['delta_offset'] = '0';
  /* Field: Field: Thematic Area */
  $handler->display->display_options['fields']['field_focus_area']['id'] = 'field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['table'] = 'field_data_field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['field'] = 'field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_focus_area']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_focus_area']['separator'] = '*';
  /* Field: Content: Media Source */
  $handler->display->display_options['fields']['field_media_source_1']['id'] = 'field_media_source_1';
  $handler->display->display_options['fields']['field_media_source_1']['table'] = 'field_data_field_media_source';
  $handler->display->display_options['fields']['field_media_source_1']['field'] = 'field_media_source';
  $handler->display->display_options['fields']['field_media_source_1']['label'] = 'Media Source URL';
  $handler->display->display_options['fields']['field_media_source_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_media_source_1']['type'] = 'link_plain';
  /* Field: Content: Related Links */
  $handler->display->display_options['fields']['field_article_link_1']['id'] = 'field_article_link_1';
  $handler->display->display_options['fields']['field_article_link_1']['table'] = 'field_data_field_article_link';
  $handler->display->display_options['fields']['field_article_link_1']['field'] = 'field_article_link';
  $handler->display->display_options['fields']['field_article_link_1']['label'] = 'Related Links URL';
  $handler->display->display_options['fields']['field_article_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_article_link_1']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_article_link_1']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'press-release-feeds-iis';
  $translatables['views_press_release_syndication'] = array(
    t('Master'),
    t('Press release syndication'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Title'),
    t('AKMI ACTIVITY'),
    t('AKMI Page'),
    t('Article Author'),
    t('Article Image'),
    t('Article Type'),
    t('Article URL'),
    t('Body'),
    t('Caption'),
    t('Caption Override'),
    t('Create Banner Item'),
    t('Cycle Year'),
    t('Date Decade'),
    t('Enable Project Carousel'),
    t('Hub page'),
    t('Image'),
    t('Media Source Title'),
    t('Media Type'),
    t('Pages to exclude'),
    t('Projects'),
    t('Publication Source Link'),
    t('Publication Source Title'),
    t('Publish Date'),
    t('Related Audio/Video'),
    t('Related In the Media'),
    t('Related Links Title'),
    t('Related News'),
    t('Related Photos'),
    t('Related Press Releases'),
    t('Related Projects'),
    t('Related Publications'),
    t('Related Speeches'),
    t('Select reviewer'),
    t('Short Title'),
    t('Slideshow Image'),
    t('Tags'),
    t('Agency'),
    t('Geography'),
    t('Related Events'),
    t('Thematic Area'),
    t('Media Source URL'),
    t('Related Links URL'),
    t('Page'),
    t('Services feeds AKDN'),
    t('queue'),
    t('Services feeds Ismaili'),
    t('Services feeds IIS'),
  );
  $export['views_press_release_syndication'] = $view;

  return $export;
}
