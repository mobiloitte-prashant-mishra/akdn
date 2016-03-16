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
  $view->name = 'views_events_syndication';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events syndication';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Events syndication';
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
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: AKMI Pages */
  $handler->display->display_options['fields']['field_akmi_pages']['id'] = 'field_akmi_pages';
  $handler->display->display_options['fields']['field_akmi_pages']['table'] = 'field_data_field_akmi_pages';
  $handler->display->display_options['fields']['field_akmi_pages']['field'] = 'field_akmi_pages';
  $handler->display->display_options['fields']['field_akmi_pages']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
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
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Enable Project Carousel */
  $handler->display->display_options['fields']['field_enable_project_slider']['id'] = 'field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['table'] = 'field_data_field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['field'] = 'field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['type'] = 'list_key';
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
  /* Field: Content: Hub page */
  $handler->display->display_options['fields']['field_hub_page']['id'] = 'field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['table'] = 'field_data_field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['field'] = 'field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_hub_page']['delta_offset'] = '0';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  /* Field: Content: Newsletter category */
  $handler->display->display_options['fields']['field_simplenews_term']['id'] = 'field_simplenews_term';
  $handler->display->display_options['fields']['field_simplenews_term']['table'] = 'field_data_field_simplenews_term';
  $handler->display->display_options['fields']['field_simplenews_term']['field'] = 'field_simplenews_term';
  $handler->display->display_options['fields']['field_simplenews_term']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Pages to exclude */
  $handler->display->display_options['fields']['field_pages_to_exclude']['id'] = 'field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['table'] = 'field_data_field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['field'] = 'field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_pages_to_exclude']['delta_offset'] = '0';
  /* Field: Content: Related Audio/Video */
  $handler->display->display_options['fields']['field_podcasts_reference']['id'] = 'field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['table'] = 'field_data_field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['field'] = 'field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_podcasts_reference']['delta_offset'] = '0';
  /* Field: Content: Related Events */
  $handler->display->display_options['fields']['field_events_reference']['id'] = 'field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['table'] = 'field_data_field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['field'] = 'field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_events_reference']['delta_offset'] = '0';
  /* Field: Content: Related In the Media */
  $handler->display->display_options['fields']['field_related_in_the_media']['id'] = 'field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['table'] = 'field_data_field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['field'] = 'field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_related_in_the_media']['delta_offset'] = '0';
  /* Field: Content: Related Links */
  $handler->display->display_options['fields']['field_event_links']['id'] = 'field_event_links';
  $handler->display->display_options['fields']['field_event_links']['table'] = 'field_data_field_event_links';
  $handler->display->display_options['fields']['field_event_links']['field'] = 'field_event_links';
  $handler->display->display_options['fields']['field_event_links']['label'] = 'Related Links URL';
  $handler->display->display_options['fields']['field_event_links']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_event_links']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_event_links']['delta_offset'] = '0';
  /* Field: Content: Related News */
  $handler->display->display_options['fields']['field_related_news']['id'] = 'field_related_news';
  $handler->display->display_options['fields']['field_related_news']['table'] = 'field_data_field_related_news';
  $handler->display->display_options['fields']['field_related_news']['field'] = 'field_related_news';
  $handler->display->display_options['fields']['field_related_news']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_related_news']['delta_offset'] = '0';
  /* Field: Content: Related Photos */
  $handler->display->display_options['fields']['field_photos_reference']['id'] = 'field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['table'] = 'field_data_field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['field'] = 'field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_photos_reference']['delta_offset'] = '0';
  /* Field: Content: Related Press Releases */
  $handler->display->display_options['fields']['field_press_reference']['id'] = 'field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['table'] = 'field_data_field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['field'] = 'field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_press_reference']['delta_offset'] = '0';
  /* Field: Content: Related Projects */
  $handler->display->display_options['fields']['field_related_project']['id'] = 'field_related_project';
  $handler->display->display_options['fields']['field_related_project']['table'] = 'field_data_field_related_project';
  $handler->display->display_options['fields']['field_related_project']['field'] = 'field_related_project';
  $handler->display->display_options['fields']['field_related_project']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_related_project']['delta_offset'] = '0';
  /* Field: Content: Related Publications */
  $handler->display->display_options['fields']['field_related_publications']['id'] = 'field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['table'] = 'field_data_field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['field'] = 'field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_related_publications']['delta_offset'] = '0';
  /* Field: Content: Related Speeches */
  $handler->display->display_options['fields']['field_speeches_reference']['id'] = 'field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['table'] = 'field_data_field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['field'] = 'field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_speeches_reference']['delta_offset'] = '0';
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
  /* Field: Field: Agency */
  $handler->display->display_options['fields']['field_agency']['id'] = 'field_agency';
  $handler->display->display_options['fields']['field_agency']['table'] = 'field_data_field_agency';
  $handler->display->display_options['fields']['field_agency']['field'] = 'field_agency';
  $handler->display->display_options['fields']['field_agency']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_agency']['delta_offset'] = '0';
  /* Field: Field: Geography */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_country']['delta_offset'] = '0';
  /* Field: Field: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  /* Field: Field: Thematic Area */
  $handler->display->display_options['fields']['field_focus_area']['id'] = 'field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['table'] = 'field_data_field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['field'] = 'field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_focus_area']['delta_offset'] = '0';
  /* Field: Content: Related Links */
  $handler->display->display_options['fields']['field_event_links_1']['id'] = 'field_event_links_1';
  $handler->display->display_options['fields']['field_event_links_1']['table'] = 'field_data_field_event_links';
  $handler->display->display_options['fields']['field_event_links_1']['field'] = 'field_event_links';
  $handler->display->display_options['fields']['field_event_links_1']['label'] = 'Related Links Title';
  $handler->display->display_options['fields']['field_event_links_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_event_links_1']['type'] = 'link_title_plain';
  $handler->display->display_options['fields']['field_event_links_1']['delta_offset'] = '0';
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
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['path'] = 'events-syndication';

  /* Display: Feeds */
  $handler = $view->new_display('services', 'Feeds', 'services_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_kc' => 'deploy_to_kc',
    'featured_content' => 0,
    'agency_listing_page_publications' => 0,
    'press_centre' => 0,
    'about_us_slides' => 0,
    'speech_themes' => 0,
    'thematic_area' => 0,
    'akaa_home_page_slideshow' => 0,
    'about_us_left_listing' => 0,
    'about_us_paragraph' => 0,
    'speech_slideshow' => 0,
    'akmi_activity_education_page_tes' => 0,
    'akmi_archive_page' => 0,
    'akmi_archive_page_nodequeue' => 0,
    'akmi_audio_page' => 0,
    'akmi_cd_dvd_page_nodequeue' => 0,
    'akmi_event_landing_page' => 0,
    'akmi_homepage_slideshow' => 0,
    'akmi_performance_page' => 0,
    'akmi_performance_programmes_page' => 0,
    'akmi_press_center_page' => 0,
    'akmi_production_page' => 0,
    'akmi_publications_page' => 0,
    'akmi_test_page_nodequeue' => 0,
    'akmi_video_page_banner' => 0,
    'about_us_carousel' => 0,
    'home_page_carousel' => 0,
    'press_center_carousel' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: AKMI Pages */
  $handler->display->display_options['fields']['field_akmi_pages']['id'] = 'field_akmi_pages';
  $handler->display->display_options['fields']['field_akmi_pages']['table'] = 'field_data_field_akmi_pages';
  $handler->display->display_options['fields']['field_akmi_pages']['field'] = 'field_akmi_pages';
  $handler->display->display_options['fields']['field_akmi_pages']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  /* Field: Content: Create Banner Item */
  $handler->display->display_options['fields']['field_create_featured_content']['id'] = 'field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['table'] = 'field_data_field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['field'] = 'field_create_featured_content';
  $handler->display->display_options['fields']['field_create_featured_content']['type'] = 'list_key';
  /* Field: Content: Cycle Year */
  $handler->display->display_options['fields']['field_cycle_year']['id'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['table'] = 'field_data_field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['field'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['type'] = 'nat_link';
  $handler->display->display_options['fields']['field_cycle_year']['settings'] = array(
    'skip_safe' => 0,
    'skip_empty_values' => 0,
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
  /* Field: Content: Enable Project Carousel */
  $handler->display->display_options['fields']['field_enable_project_slider']['id'] = 'field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['table'] = 'field_data_field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['field'] = 'field_enable_project_slider';
  $handler->display->display_options['fields']['field_enable_project_slider']['type'] = 'list_key';
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
  /* Field: Content: Hub page */
  $handler->display->display_options['fields']['field_hub_page']['id'] = 'field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['table'] = 'field_data_field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['field'] = 'field_hub_page';
  $handler->display->display_options['fields']['field_hub_page']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_hub_page']['delta_offset'] = '0';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  /* Field: Content: Newsletter category */
  $handler->display->display_options['fields']['field_simplenews_term']['id'] = 'field_simplenews_term';
  $handler->display->display_options['fields']['field_simplenews_term']['table'] = 'field_data_field_simplenews_term';
  $handler->display->display_options['fields']['field_simplenews_term']['field'] = 'field_simplenews_term';
  $handler->display->display_options['fields']['field_simplenews_term']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Pages to exclude */
  $handler->display->display_options['fields']['field_pages_to_exclude']['id'] = 'field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['table'] = 'field_data_field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['field'] = 'field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_pages_to_exclude']['delta_offset'] = '0';
  /* Field: Content: Related Audio/Video */
  $handler->display->display_options['fields']['field_podcasts_reference']['id'] = 'field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['table'] = 'field_data_field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['field'] = 'field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_podcasts_reference']['delta_offset'] = '0';
  /* Field: Content: Related Events */
  $handler->display->display_options['fields']['field_events_reference']['id'] = 'field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['table'] = 'field_data_field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['field'] = 'field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_events_reference']['delta_offset'] = '0';
  /* Field: Content: Related In the Media */
  $handler->display->display_options['fields']['field_related_in_the_media']['id'] = 'field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['table'] = 'field_data_field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['field'] = 'field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_related_in_the_media']['delta_offset'] = '0';
  /* Field: Content: Related Links */
  $handler->display->display_options['fields']['field_event_links']['id'] = 'field_event_links';
  $handler->display->display_options['fields']['field_event_links']['table'] = 'field_data_field_event_links';
  $handler->display->display_options['fields']['field_event_links']['field'] = 'field_event_links';
  $handler->display->display_options['fields']['field_event_links']['label'] = 'Related Links URL';
  $handler->display->display_options['fields']['field_event_links']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_event_links']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_event_links']['delta_offset'] = '0';
  /* Field: Content: Related News */
  $handler->display->display_options['fields']['field_related_news']['id'] = 'field_related_news';
  $handler->display->display_options['fields']['field_related_news']['table'] = 'field_data_field_related_news';
  $handler->display->display_options['fields']['field_related_news']['field'] = 'field_related_news';
  $handler->display->display_options['fields']['field_related_news']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_related_news']['delta_offset'] = '0';
  /* Field: Content: Related Photos */
  $handler->display->display_options['fields']['field_photos_reference']['id'] = 'field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['table'] = 'field_data_field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['field'] = 'field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_photos_reference']['delta_offset'] = '0';
  /* Field: Content: Related Press Releases */
  $handler->display->display_options['fields']['field_press_reference']['id'] = 'field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['table'] = 'field_data_field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['field'] = 'field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_press_reference']['delta_offset'] = '0';
  /* Field: Content: Related Projects */
  $handler->display->display_options['fields']['field_related_project']['id'] = 'field_related_project';
  $handler->display->display_options['fields']['field_related_project']['table'] = 'field_data_field_related_project';
  $handler->display->display_options['fields']['field_related_project']['field'] = 'field_related_project';
  $handler->display->display_options['fields']['field_related_project']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_related_project']['delta_offset'] = '0';
  /* Field: Content: Related Publications */
  $handler->display->display_options['fields']['field_related_publications']['id'] = 'field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['table'] = 'field_data_field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['field'] = 'field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_related_publications']['delta_offset'] = '0';
  /* Field: Content: Related Speeches */
  $handler->display->display_options['fields']['field_speeches_reference']['id'] = 'field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['table'] = 'field_data_field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['field'] = 'field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_speeches_reference']['delta_offset'] = '0';
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
  /* Field: Field: Agency */
  $handler->display->display_options['fields']['field_agency']['id'] = 'field_agency';
  $handler->display->display_options['fields']['field_agency']['table'] = 'field_data_field_agency';
  $handler->display->display_options['fields']['field_agency']['field'] = 'field_agency';
  $handler->display->display_options['fields']['field_agency']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_agency']['delta_offset'] = '0';
  /* Field: Field: Geography */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_country']['delta_offset'] = '0';
  /* Field: Field: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  /* Field: Field: Thematic Area */
  $handler->display->display_options['fields']['field_focus_area']['id'] = 'field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['table'] = 'field_data_field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['field'] = 'field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_focus_area']['delta_offset'] = '0';
  /* Field: Content: Related Links */
  $handler->display->display_options['fields']['field_event_links_1']['id'] = 'field_event_links_1';
  $handler->display->display_options['fields']['field_event_links_1']['table'] = 'field_data_field_event_links';
  $handler->display->display_options['fields']['field_event_links_1']['field'] = 'field_event_links';
  $handler->display->display_options['fields']['field_event_links_1']['label'] = 'Related Links Title';
  $handler->display->display_options['fields']['field_event_links_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_event_links_1']['type'] = 'link_title_plain';
  $handler->display->display_options['fields']['field_event_links_1']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'events-feeds';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'events-syndication/import';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['views_events_syndication'] = array(
    t('Master'),
    t('Events syndication'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Title'),
    t('AKMI Pages'),
    t('Body'),
    t('Caption'),
    t('Create Banner Item'),
    t('Cycle Year'),
    t('Date'),
    t('Enable Project Carousel'),
    t('Event Image'),
    t('Hub page'),
    t('Location'),
    t('Newsletter category'),
    t('Pages to exclude'),
    t('Related Audio/Video'),
    t('Related Events'),
    t('Related In the Media'),
    t('Related Links URL'),
    t('Related News'),
    t('Related Photos'),
    t('Related Press Releases'),
    t('Related Projects'),
    t('Related Publications'),
    t('Related Speeches'),
    t('Short Title'),
    t('Slideshow Image'),
    t('Agency'),
    t('Geography'),
    t('Tags'),
    t('Thematic Area'),
    t('Related Links Title'),
    t('Page'),
    t('Feeds'),
    t('queue'),
    t('Data export'),
  );
  $export['views_events_syndication'] = $view;

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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
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
  $handler->display->display_options['fields']['field_akmi_page']['type'] = 'nat_link';
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
  $handler->display->display_options['fields']['field_article_cat']['type'] = 'nat_link';
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
  $handler->display->display_options['fields']['field_cycle_year']['type'] = 'nat_link';
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
  $handler->display->display_options['fields']['field_hub_page']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_hub_page']['delta_offset'] = '0';
  /* Field: Content: Media Source */
  $handler->display->display_options['fields']['field_media_source']['id'] = 'field_media_source';
  $handler->display->display_options['fields']['field_media_source']['table'] = 'field_data_field_media_source';
  $handler->display->display_options['fields']['field_media_source']['field'] = 'field_media_source';
  $handler->display->display_options['fields']['field_media_source']['label'] = 'Media Source Title';
  $handler->display->display_options['fields']['field_media_source']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_media_source']['type'] = 'link_title_plain';
  /* Field: Content: Pages to exclude */
  $handler->display->display_options['fields']['field_pages_to_exclude']['id'] = 'field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['table'] = 'field_data_field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['field'] = 'field_pages_to_exclude';
  $handler->display->display_options['fields']['field_pages_to_exclude']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_pages_to_exclude']['delta_offset'] = '0';
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
  $handler->display->display_options['fields']['field_podcasts_reference']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_podcasts_reference']['delta_offset'] = '0';
  /* Field: Content: Related Events */
  $handler->display->display_options['fields']['field_events_reference']['id'] = 'field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['table'] = 'field_data_field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['field'] = 'field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_events_reference']['delta_offset'] = '0';
  /* Field: Content: Related In the Media */
  $handler->display->display_options['fields']['field_related_in_the_media']['id'] = 'field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['table'] = 'field_data_field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['field'] = 'field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_related_in_the_media']['delta_offset'] = '0';
  /* Field: Content: Link */
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
  $handler->display->display_options['fields']['field_related_news']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_related_news']['delta_offset'] = '0';
  /* Field: Content: Related Photos */
  $handler->display->display_options['fields']['field_photos_reference']['id'] = 'field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['table'] = 'field_data_field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['field'] = 'field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_photos_reference']['delta_offset'] = '0';
  /* Field: Content: Related Press Releases */
  $handler->display->display_options['fields']['field_press_reference']['id'] = 'field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['table'] = 'field_data_field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['field'] = 'field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_press_reference']['delta_offset'] = '0';
  /* Field: Content: Related Projects */
  $handler->display->display_options['fields']['field_related_project']['id'] = 'field_related_project';
  $handler->display->display_options['fields']['field_related_project']['table'] = 'field_data_field_related_project';
  $handler->display->display_options['fields']['field_related_project']['field'] = 'field_related_project';
  $handler->display->display_options['fields']['field_related_project']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_related_project']['delta_offset'] = '0';
  /* Field: Content: Related Publications */
  $handler->display->display_options['fields']['field_related_publications']['id'] = 'field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['table'] = 'field_data_field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['field'] = 'field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_related_publications']['delta_offset'] = '0';
  /* Field: Content: Related Speeches */
  $handler->display->display_options['fields']['field_speeches_reference']['id'] = 'field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['table'] = 'field_data_field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['field'] = 'field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_speeches_reference']['delta_offset'] = '0';
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
  /* Field: Field: Agency */
  $handler->display->display_options['fields']['field_agency']['id'] = 'field_agency';
  $handler->display->display_options['fields']['field_agency']['table'] = 'field_data_field_agency';
  $handler->display->display_options['fields']['field_agency']['field'] = 'field_agency';
  $handler->display->display_options['fields']['field_agency']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_agency']['delta_offset'] = '0';
  /* Field: Field: Geography */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_country']['delta_offset'] = '0';
  /* Field: Field: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  /* Field: Field: Thematic Area */
  $handler->display->display_options['fields']['field_focus_area']['id'] = 'field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['table'] = 'field_data_field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['field'] = 'field_focus_area';
  $handler->display->display_options['fields']['field_focus_area']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_focus_area']['delta_offset'] = '0';
  /* Field: Content: Media Source */
  $handler->display->display_options['fields']['field_media_source_1']['id'] = 'field_media_source_1';
  $handler->display->display_options['fields']['field_media_source_1']['table'] = 'field_data_field_media_source';
  $handler->display->display_options['fields']['field_media_source_1']['field'] = 'field_media_source';
  $handler->display->display_options['fields']['field_media_source_1']['label'] = 'Media Source URL';
  $handler->display->display_options['fields']['field_media_source_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_media_source_1']['type'] = 'link_plain';
  /* Field: Content: Link */
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
    4 => '4',
  );
  $handler->display->display_options['filters']['field_article_cat_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_article_cat_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_article_cat_tid']['vocabulary'] = 'article_type';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'press-release-syndication';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'press-release-syndication/import';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );

  /* Display: Feeds */
  $handler = $view->new_display('services', 'Feeds', 'services_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'deploy_to_kc' => 'deploy_to_kc',
    'featured_content' => 0,
    'agency_listing_page_publications' => 0,
    'press_centre' => 0,
    'about_us_slides' => 0,
    'speech_themes' => 0,
    'thematic_area' => 0,
    'akaa_home_page_slideshow' => 0,
    'about_us_left_listing' => 0,
    'about_us_paragraph' => 0,
    'speech_slideshow' => 0,
    'akmi_activity_education_page_tes' => 0,
    'akmi_archive_page' => 0,
    'akmi_archive_page_nodequeue' => 0,
    'akmi_audio_page' => 0,
    'akmi_cd_dvd_page_nodequeue' => 0,
    'akmi_event_landing_page' => 0,
    'akmi_homepage_slideshow' => 0,
    'akmi_performance_page' => 0,
    'akmi_performance_programmes_page' => 0,
    'akmi_press_center_page' => 0,
    'akmi_production_page' => 0,
    'akmi_publications_page' => 0,
    'akmi_test_page_nodequeue' => 0,
    'akmi_video_page_banner' => 0,
    'about_us_carousel' => 0,
    'home_page_carousel' => 0,
    'press_center_carousel' => 0,
  );
  $handler->display->display_options['path'] = 'press-release-feeds';
  $translatables['views_press_release_syndication'] = array(
    t('Master'),
    t('Press release syndication'),
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
    t('Title'),
    t('AKMI ACTIVITY'),
    t('AKMI Page'),
    t('Article Author'),
    t('Article Image'),
    t('Article Type'),
    t('Body'),
    t('Caption'),
    t('Caption Override'),
    t('Create Banner Item'),
    t('Cycle Year'),
    t('Date Decade'),
    t('Enable Project Carousel'),
    t('Hub page'),
    t('Media Source Title'),
    t('Pages to exclude'),
    t('Publish Date'),
    t('Related Audio/Video'),
    t('Related Events'),
    t('Related In the Media'),
    t('Related Links Title'),
    t('Related News'),
    t('Related Photos'),
    t('Related Press Releases'),
    t('Related Projects'),
    t('Related Publications'),
    t('Related Speeches'),
    t('Short Title'),
    t('Slideshow Image'),
    t('Agency'),
    t('Geography'),
    t('Tags'),
    t('Thematic Area'),
    t('Media Source URL'),
    t('Related Links URL'),
    t('Page'),
    t('Data export'),
    t('Feeds'),
    t('queue'),
  );
  $export['views_press_release_syndication'] = $view;

  return $export;
}
