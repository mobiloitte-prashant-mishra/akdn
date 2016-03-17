<?php
/**
 * @file
 * ismaili_draft_revisions_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ismaili_draft_revisions_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'draft_content_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node_revision';
  $view->human_name = 'Draft Content View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Draft Body';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view revisions';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content revision: Content */
  $handler->display->display_options['relationships']['vid']['id'] = 'vid';
  $handler->display->display_options['relationships']['vid']['table'] = 'node_revision';
  $handler->display->display_options['relationships']['vid']['field'] = 'vid';
  /* Field: Field (historical data): Body */
  $handler->display->display_options['fields']['field_body-revision_id']['id'] = 'field_body-revision_id';
  $handler->display->display_options['fields']['field_body-revision_id']['table'] = 'field_revision_field_body';
  $handler->display->display_options['fields']['field_body-revision_id']['field'] = 'field_body-revision_id';
  $handler->display->display_options['fields']['field_body-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_body-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_body-revision_id']['group_columns'] = array(
    'format' => 'format',
  );
  /* Sort criterion: Content revision: Updated date */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'node_revision';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  /* Contextual filter: Content revision: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node_revision';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Workbench Moderation: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    'draft' => 'draft',
    'needs_review' => 'needs_review',
  );
  /* Filter criterion: Workbench Moderation: Current */
  $handler->display->display_options['filters']['current']['id'] = 'current';
  $handler->display->display_options['filters']['current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['current']['field'] = 'current';
  $handler->display->display_options['filters']['current']['value'] = '1';

  /* Display: Draft Body Block */
  $handler = $view->new_display('block', 'Draft Body Block', 'block');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['block_description'] = 'Draft Body';

  /* Display: Draft Summary Block */
  $handler = $view->new_display('block', 'Draft Summary Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Draft Summary';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content (historical data): Summary */
  $handler->display->display_options['fields']['field_summary-revision_id']['id'] = 'field_summary-revision_id';
  $handler->display->display_options['fields']['field_summary-revision_id']['table'] = 'field_revision_field_summary';
  $handler->display->display_options['fields']['field_summary-revision_id']['field'] = 'field_summary-revision_id';
  $handler->display->display_options['fields']['field_summary-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_summary-revision_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_summary-revision_id']['alter']['text'] = '<b>[field_summary-revision_id]</b>';
  $handler->display->display_options['fields']['field_summary-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Workbench Moderation: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    'draft' => 'draft',
    'needs_review' => 'needs_review',
  );
  /* Filter criterion: Workbench Moderation: Current */
  $handler->display->display_options['filters']['current']['id'] = 'current';
  $handler->display->display_options['filters']['current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['current']['field'] = 'current';
  $handler->display->display_options['filters']['current']['value'] = '1';
  /* Filter criterion: Content (historical data): Introduction (field_introduction) */
  $handler->display->display_options['filters']['field_introduction_value']['id'] = 'field_introduction_value';
  $handler->display->display_options['filters']['field_introduction_value']['table'] = 'field_revision_field_introduction';
  $handler->display->display_options['filters']['field_introduction_value']['field'] = 'field_introduction_value';
  $handler->display->display_options['filters']['field_introduction_value']['operator'] = 'empty';
  /* Filter criterion: Content (historical data): Omit Introduction (field_omit_introduction) */
  $handler->display->display_options['filters']['field_omit_introduction_value']['id'] = 'field_omit_introduction_value';
  $handler->display->display_options['filters']['field_omit_introduction_value']['table'] = 'field_revision_field_omit_introduction';
  $handler->display->display_options['filters']['field_omit_introduction_value']['field'] = 'field_omit_introduction_value';
  $handler->display->display_options['filters']['field_omit_introduction_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_omit_introduction_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['block_description'] = 'Draft Summary';

  /* Display: Revision Body Block */
  $handler = $view->new_display('block', 'Revision Body Block', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Revision Body';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content revision: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node_revision';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content revision: Vid */
  $handler->display->display_options['arguments']['vid']['id'] = 'vid';
  $handler->display->display_options['arguments']['vid']['table'] = 'node_revision';
  $handler->display->display_options['arguments']['vid']['field'] = 'vid';
  $handler->display->display_options['arguments']['vid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['vid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['vid']['default_argument_options']['code'] = 'return arg(3);';
  $handler->display->display_options['arguments']['vid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['vid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['vid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['block_description'] = 'Revision Body';

  /* Display: Revision Summary Block */
  $handler = $view->new_display('block', 'Revision Summary Block', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Revision Summary';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content (historical data): Summary */
  $handler->display->display_options['fields']['field_summary-revision_id']['id'] = 'field_summary-revision_id';
  $handler->display->display_options['fields']['field_summary-revision_id']['table'] = 'field_revision_field_summary';
  $handler->display->display_options['fields']['field_summary-revision_id']['field'] = 'field_summary-revision_id';
  $handler->display->display_options['fields']['field_summary-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_summary-revision_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_summary-revision_id']['alter']['text'] = '<b>[field_summary-revision_id]</b>';
  $handler->display->display_options['fields']['field_summary-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content revision: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node_revision';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content revision: Vid */
  $handler->display->display_options['arguments']['vid']['id'] = 'vid';
  $handler->display->display_options['arguments']['vid']['table'] = 'node_revision';
  $handler->display->display_options['arguments']['vid']['field'] = 'vid';
  $handler->display->display_options['arguments']['vid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['vid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['vid']['default_argument_options']['code'] = 'return arg(3);';
  $handler->display->display_options['arguments']['vid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['vid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['vid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content (historical data): Introduction (field_introduction) */
  $handler->display->display_options['filters']['field_introduction_value']['id'] = 'field_introduction_value';
  $handler->display->display_options['filters']['field_introduction_value']['table'] = 'field_revision_field_introduction';
  $handler->display->display_options['filters']['field_introduction_value']['field'] = 'field_introduction_value';
  $handler->display->display_options['filters']['field_introduction_value']['operator'] = 'empty';
  /* Filter criterion: Content (historical data): Omit Introduction (field_omit_introduction) */
  $handler->display->display_options['filters']['field_omit_introduction_value']['id'] = 'field_omit_introduction_value';
  $handler->display->display_options['filters']['field_omit_introduction_value']['table'] = 'field_revision_field_omit_introduction';
  $handler->display->display_options['filters']['field_omit_introduction_value']['field'] = 'field_omit_introduction_value';
  $handler->display->display_options['filters']['field_omit_introduction_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_omit_introduction_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['block_description'] = 'Revision Summary';

  /* Display: Block 4 */
  $handler = $view->new_display('block', 'Block 4', 'block_4');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
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
    'field_carousal_image-revision_id' => 0,
    'field_file_image_title_text' => 0,
    'field_credit-revision_id' => 0,
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
    'field_carousal_image-revision_id' => 0,
    'field_file_image_title_text' => 0,
    'field_credit-revision_id' => 0,
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
  /* Relationship: Content revision: Content */
  $handler->display->display_options['relationships']['vid']['id'] = 'vid';
  $handler->display->display_options['relationships']['vid']['table'] = 'node_revision';
  $handler->display->display_options['relationships']['vid']['field'] = 'vid';
  /* Relationship: Content (historical data): Images for Carousel (field_images_for_carousal:revision_id) */
  $handler->display->display_options['relationships']['field_images_for_carousal_revision_id']['id'] = 'field_images_for_carousal_revision_id';
  $handler->display->display_options['relationships']['field_images_for_carousal_revision_id']['table'] = 'field_revision_field_images_for_carousal';
  $handler->display->display_options['relationships']['field_images_for_carousal_revision_id']['field'] = 'field_images_for_carousal_revision_id';
  $handler->display->display_options['relationships']['field_images_for_carousal_revision_id']['delta'] = '-1';
  /* Relationship: Content: Images for Carousel (field_images_for_carousal) */
  $handler->display->display_options['relationships']['field_images_for_carousal_value']['id'] = 'field_images_for_carousal_value';
  $handler->display->display_options['relationships']['field_images_for_carousal_value']['table'] = 'field_data_field_images_for_carousal';
  $handler->display->display_options['relationships']['field_images_for_carousal_value']['field'] = 'field_images_for_carousal_value';
  $handler->display->display_options['relationships']['field_images_for_carousal_value']['relationship'] = 'vid';
  /* Relationship: Field collection item (historical data): Carousel Image  (field_carousal_image:fid) */
  $handler->display->display_options['relationships']['field_carousal_image_fid']['id'] = 'field_carousal_image_fid';
  $handler->display->display_options['relationships']['field_carousal_image_fid']['table'] = 'field_revision_field_carousal_image';
  $handler->display->display_options['relationships']['field_carousal_image_fid']['field'] = 'field_carousal_image_fid';
  $handler->display->display_options['relationships']['field_carousal_image_fid']['relationship'] = 'field_images_for_carousal_revision_id';
  /* Relationship: Content (historical data): Images for Carousel (field_images_for_carousal:revision_id) */
  $handler->display->display_options['relationships']['field_images_for_carousal_revision_id_1']['id'] = 'field_images_for_carousal_revision_id_1';
  $handler->display->display_options['relationships']['field_images_for_carousal_revision_id_1']['table'] = 'field_revision_field_images_for_carousal';
  $handler->display->display_options['relationships']['field_images_for_carousal_revision_id_1']['field'] = 'field_images_for_carousal_revision_id';
  $handler->display->display_options['relationships']['field_images_for_carousal_revision_id_1']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item (historical data): image Source */
  $handler->display->display_options['fields']['field_image_source-revision_id']['id'] = 'field_image_source-revision_id';
  $handler->display->display_options['fields']['field_image_source-revision_id']['table'] = 'field_revision_field_image_source';
  $handler->display->display_options['fields']['field_image_source-revision_id']['field'] = 'field_image_source-revision_id';
  $handler->display->display_options['fields']['field_image_source-revision_id']['relationship'] = 'field_images_for_carousal_revision_id';
  $handler->display->display_options['fields']['field_image_source-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_image_source-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_source-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_source-revision_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image_source-revision_id']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_image_source-revision_id']['type'] = 'link_title_plain';
  /* Field: Field collection item (historical data): Carousel Image  */
  $handler->display->display_options['fields']['field_carousal_image-revision_id']['id'] = 'field_carousal_image-revision_id';
  $handler->display->display_options['fields']['field_carousal_image-revision_id']['table'] = 'field_revision_field_carousal_image';
  $handler->display->display_options['fields']['field_carousal_image-revision_id']['field'] = 'field_carousal_image-revision_id';
  $handler->display->display_options['fields']['field_carousal_image-revision_id']['relationship'] = 'field_images_for_carousal_revision_id';
  $handler->display->display_options['fields']['field_carousal_image-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_carousal_image-revision_id']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_carousal_image-revision_id']['alter']['path'] = '[field_image_source-revision_id]';
  $handler->display->display_options['fields']['field_carousal_image-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_carousal_image-revision_id']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_carousal_image-revision_id']['settings'] = array(
    'image_style' => 'recipe_main_image',
    'image_link' => '',
  );
  /* Field: File: Title Text */
  $handler->display->display_options['fields']['field_file_image_title_text']['id'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['table'] = 'field_data_field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['field'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['relationship'] = 'field_carousal_image_fid';
  $handler->display->display_options['fields']['field_file_image_title_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_title_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_title_text']['element_label_colon'] = FALSE;
  /* Field: Field: Video Credit */
  $handler->display->display_options['fields']['field_credit']['id'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['table'] = 'field_data_field_credit';
  $handler->display->display_options['fields']['field_credit']['field'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['relationship'] = 'field_carousal_image_fid';
  $handler->display->display_options['fields']['field_credit']['label'] = '';
  $handler->display->display_options['fields']['field_credit']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_credit']['alter']['text'] = '<div class="image-caption-credits">
[field_file_image_title_text]
<span class="img-tag">[field_credit]</span>
</div>';
  $handler->display->display_options['fields']['field_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Workbench Moderation: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    'draft' => 'draft',
    'needs_review' => 'needs_review',
  );
  /* Filter criterion: Workbench Moderation: Current */
  $handler->display->display_options['filters']['current']['id'] = 'current';
  $handler->display->display_options['filters']['current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['current']['field'] = 'current';
  $handler->display->display_options['filters']['current']['value'] = '1';
  $handler->display->display_options['block_description'] = 'Image Carousal';

  /* Display: Block 5 */
  $handler = $view->new_display('block', 'Block 5', 'block_5');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content revision: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node_revision';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2 class="field-content">[title]</h2>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content (historical data): Author */
  $handler->display->display_options['fields']['field_attribution-revision_id']['id'] = 'field_attribution-revision_id';
  $handler->display->display_options['fields']['field_attribution-revision_id']['table'] = 'field_revision_field_attribution';
  $handler->display->display_options['fields']['field_attribution-revision_id']['field'] = 'field_attribution-revision_id';
  $handler->display->display_options['fields']['field_attribution-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_attribution-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_attribution-revision_id']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content (historical data): Source */
  $handler->display->display_options['fields']['field_source_link-revision_id']['id'] = 'field_source_link-revision_id';
  $handler->display->display_options['fields']['field_source_link-revision_id']['table'] = 'field_revision_field_source_link';
  $handler->display->display_options['fields']['field_source_link-revision_id']['field'] = 'field_source_link-revision_id';
  $handler->display->display_options['fields']['field_source_link-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_source_link-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_source_link-revision_id']['click_sort_column'] = 'url';
  /* Field: Field (historical data): Publish date */
  $handler->display->display_options['fields']['field_publish_date-revision_id']['id'] = 'field_publish_date-revision_id';
  $handler->display->display_options['fields']['field_publish_date-revision_id']['table'] = 'field_revision_field_publish_date';
  $handler->display->display_options['fields']['field_publish_date-revision_id']['field'] = 'field_publish_date-revision_id';
  $handler->display->display_options['fields']['field_publish_date-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_publish_date-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publish_date-revision_id']['settings'] = array(
    'format_type' => 'custom_date_for_ismaili',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content (historical data): Serves Type */
  $handler->display->display_options['fields']['field_serves_type-revision_id']['id'] = 'field_serves_type-revision_id';
  $handler->display->display_options['fields']['field_serves_type-revision_id']['table'] = 'field_revision_field_serves_type';
  $handler->display->display_options['fields']['field_serves_type-revision_id']['field'] = 'field_serves_type-revision_id';
  $handler->display->display_options['fields']['field_serves_type-revision_id']['exclude'] = TRUE;
  /* Field: Content (historical data): Preparation Time */
  $handler->display->display_options['fields']['field_preparation_time-revision_id']['id'] = 'field_preparation_time-revision_id';
  $handler->display->display_options['fields']['field_preparation_time-revision_id']['table'] = 'field_revision_field_preparation_time';
  $handler->display->display_options['fields']['field_preparation_time-revision_id']['field'] = 'field_preparation_time-revision_id';
  $handler->display->display_options['fields']['field_preparation_time-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_preparation_time-revision_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_preparation_time-revision_id']['alter']['text'] = '<span class="prep-time"><span class="recipe-inforbar-time">[field_preparation_time-revision_id]</span> <span class="recipe-inforbar-text">Preparation</span></span>';
  /* Field: Content (historical data): Cooking Time */
  $handler->display->display_options['fields']['field_cooking_time-revision_id']['id'] = 'field_cooking_time-revision_id';
  $handler->display->display_options['fields']['field_cooking_time-revision_id']['table'] = 'field_revision_field_cooking_time';
  $handler->display->display_options['fields']['field_cooking_time-revision_id']['field'] = 'field_cooking_time-revision_id';
  $handler->display->display_options['fields']['field_cooking_time-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_cooking_time-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cooking_time-revision_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cooking_time-revision_id']['alter']['text'] = '<span class="recipe-cook-time"><span class="recipe-inforbar-time">[field_cooking_time-revision_id]</span> <span class="recipe-inforbar-text">Cooking time</span></span>';
  $handler->display->display_options['fields']['field_cooking_time-revision_id']['element_label_colon'] = FALSE;
  /* Field: Content (historical data): Quantity */
  $handler->display->display_options['fields']['field_quantity-revision_id']['id'] = 'field_quantity-revision_id';
  $handler->display->display_options['fields']['field_quantity-revision_id']['table'] = 'field_revision_field_quantity';
  $handler->display->display_options['fields']['field_quantity-revision_id']['field'] = 'field_quantity-revision_id';
  $handler->display->display_options['fields']['field_quantity-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_quantity-revision_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_quantity-revision_id']['alter']['text'] = '<span class="recipe-quantity"><span class="recipe-inforbar-text">[field_serves_type-revision_id]</span> [field_quantity-revision_id]</span>';
  $handler->display->display_options['fields']['field_quantity-revision_id']['settings'] = array(
    'thousand_separator' => '.',
    'prefix_suffix' => 0,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="recipe-inforbar">
[field_preparation_time-revision_id][field_quantity-revision_id][field_cooking_time-revision_id]
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content (historical data): Summary */
  $handler->display->display_options['fields']['field_summary-revision_id']['id'] = 'field_summary-revision_id';
  $handler->display->display_options['fields']['field_summary-revision_id']['table'] = 'field_revision_field_summary';
  $handler->display->display_options['fields']['field_summary-revision_id']['field'] = 'field_summary-revision_id';
  $handler->display->display_options['fields']['field_summary-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_summary-revision_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_summary-revision_id']['alter']['text'] = '<span class="summary">[field_summary-revision_id]</span>';
  $handler->display->display_options['fields']['field_summary-revision_id']['element_label_colon'] = FALSE;
  /* Field: Content (historical data): Urgent Health Info */
  $handler->display->display_options['fields']['field_urgent_health_info-revision_id']['id'] = 'field_urgent_health_info-revision_id';
  $handler->display->display_options['fields']['field_urgent_health_info-revision_id']['table'] = 'field_revision_field_urgent_health_info';
  $handler->display->display_options['fields']['field_urgent_health_info-revision_id']['field'] = 'field_urgent_health_info-revision_id';
  $handler->display->display_options['fields']['field_urgent_health_info-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_urgent_health_info-revision_id']['element_label_colon'] = FALSE;
  /* Field: Content (historical data): Healthy Hints */
  $handler->display->display_options['fields']['field_healthy_hints-revision_id']['id'] = 'field_healthy_hints-revision_id';
  $handler->display->display_options['fields']['field_healthy_hints-revision_id']['table'] = 'field_revision_field_healthy_hints';
  $handler->display->display_options['fields']['field_healthy_hints-revision_id']['field'] = 'field_healthy_hints-revision_id';
  /* Field: Content (historical data): Serving weight */
  $handler->display->display_options['fields']['field_serving_weight-revision_id']['id'] = 'field_serving_weight-revision_id';
  $handler->display->display_options['fields']['field_serving_weight-revision_id']['table'] = 'field_revision_field_serving_weight';
  $handler->display->display_options['fields']['field_serving_weight-revision_id']['field'] = 'field_serving_weight-revision_id';
  $handler->display->display_options['fields']['field_serving_weight-revision_id']['exclude'] = TRUE;
  /* Field: Content (historical data): Ingredients */
  $handler->display->display_options['fields']['field_ingredients-revision_id']['id'] = 'field_ingredients-revision_id';
  $handler->display->display_options['fields']['field_ingredients-revision_id']['table'] = 'field_revision_field_ingredients';
  $handler->display->display_options['fields']['field_ingredients-revision_id']['field'] = 'field_ingredients-revision_id';
  $handler->display->display_options['fields']['field_ingredients-revision_id']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ingredients-revision_id']['multi_type'] = 'ul';
  /* Field: Field (historical data): Body */
  $handler->display->display_options['fields']['field_body-revision_id']['id'] = 'field_body-revision_id';
  $handler->display->display_options['fields']['field_body-revision_id']['table'] = 'field_revision_field_body';
  $handler->display->display_options['fields']['field_body-revision_id']['field'] = 'field_body-revision_id';
  $handler->display->display_options['fields']['field_body-revision_id']['label'] = 'Cooking Guide';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Workbench Moderation: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    'draft' => 'draft',
    'needs_review' => 'needs_review',
  );
  /* Filter criterion: Workbench Moderation: Current */
  $handler->display->display_options['filters']['current']['id'] = 'current';
  $handler->display->display_options['filters']['current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['current']['field'] = 'current';
  $handler->display->display_options['filters']['current']['value'] = '1';
  $handler->display->display_options['block_description'] = 'Recipe Details Draft mode';

  /* Display: Block 5 */
  $handler = $view->new_display('block', 'Block 5', 'block_6');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content revision: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node_revision';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2 class="field-content">[title]</h2>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content (historical data): Author */
  $handler->display->display_options['fields']['field_attribution-revision_id']['id'] = 'field_attribution-revision_id';
  $handler->display->display_options['fields']['field_attribution-revision_id']['table'] = 'field_revision_field_attribution';
  $handler->display->display_options['fields']['field_attribution-revision_id']['field'] = 'field_attribution-revision_id';
  $handler->display->display_options['fields']['field_attribution-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_attribution-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_attribution-revision_id']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content (historical data): Source */
  $handler->display->display_options['fields']['field_source_link-revision_id']['id'] = 'field_source_link-revision_id';
  $handler->display->display_options['fields']['field_source_link-revision_id']['table'] = 'field_revision_field_source_link';
  $handler->display->display_options['fields']['field_source_link-revision_id']['field'] = 'field_source_link-revision_id';
  $handler->display->display_options['fields']['field_source_link-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_source_link-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_source_link-revision_id']['click_sort_column'] = 'url';
  /* Field: Field (historical data): Publish date */
  $handler->display->display_options['fields']['field_publish_date-revision_id']['id'] = 'field_publish_date-revision_id';
  $handler->display->display_options['fields']['field_publish_date-revision_id']['table'] = 'field_revision_field_publish_date';
  $handler->display->display_options['fields']['field_publish_date-revision_id']['field'] = 'field_publish_date-revision_id';
  $handler->display->display_options['fields']['field_publish_date-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_publish_date-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publish_date-revision_id']['settings'] = array(
    'format_type' => 'custom_date_for_ismaili',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content (historical data): Serves Type */
  $handler->display->display_options['fields']['field_serves_type-revision_id']['id'] = 'field_serves_type-revision_id';
  $handler->display->display_options['fields']['field_serves_type-revision_id']['table'] = 'field_revision_field_serves_type';
  $handler->display->display_options['fields']['field_serves_type-revision_id']['field'] = 'field_serves_type-revision_id';
  $handler->display->display_options['fields']['field_serves_type-revision_id']['exclude'] = TRUE;
  /* Field: Content (historical data): Preparation Time */
  $handler->display->display_options['fields']['field_preparation_time-revision_id']['id'] = 'field_preparation_time-revision_id';
  $handler->display->display_options['fields']['field_preparation_time-revision_id']['table'] = 'field_revision_field_preparation_time';
  $handler->display->display_options['fields']['field_preparation_time-revision_id']['field'] = 'field_preparation_time-revision_id';
  $handler->display->display_options['fields']['field_preparation_time-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_preparation_time-revision_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_preparation_time-revision_id']['alter']['text'] = '<span class="prep-time"><span class="recipe-inforbar-time">[field_preparation_time-revision_id]</span> <span class="recipe-inforbar-text">Preparation</span></span>';
  /* Field: Content (historical data): Cooking Time */
  $handler->display->display_options['fields']['field_cooking_time-revision_id']['id'] = 'field_cooking_time-revision_id';
  $handler->display->display_options['fields']['field_cooking_time-revision_id']['table'] = 'field_revision_field_cooking_time';
  $handler->display->display_options['fields']['field_cooking_time-revision_id']['field'] = 'field_cooking_time-revision_id';
  $handler->display->display_options['fields']['field_cooking_time-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_cooking_time-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cooking_time-revision_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cooking_time-revision_id']['alter']['text'] = '<span class="recipe-cook-time"><span class="recipe-inforbar-time">[field_cooking_time-revision_id]</span> <span class="recipe-inforbar-text">Cooking time</span></span>';
  $handler->display->display_options['fields']['field_cooking_time-revision_id']['element_label_colon'] = FALSE;
  /* Field: Content (historical data): Quantity */
  $handler->display->display_options['fields']['field_quantity-revision_id']['id'] = 'field_quantity-revision_id';
  $handler->display->display_options['fields']['field_quantity-revision_id']['table'] = 'field_revision_field_quantity';
  $handler->display->display_options['fields']['field_quantity-revision_id']['field'] = 'field_quantity-revision_id';
  $handler->display->display_options['fields']['field_quantity-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_quantity-revision_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_quantity-revision_id']['alter']['text'] = '<span class="recipe-quantity"><span class="recipe-inforbar-text">[field_serves_type-revision_id]</span> [field_quantity-revision_id]</span>';
  $handler->display->display_options['fields']['field_quantity-revision_id']['settings'] = array(
    'thousand_separator' => '.',
    'prefix_suffix' => 0,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="recipe-inforbar">
[field_preparation_time-revision_id][field_quantity-revision_id][field_cooking_time-revision_id]
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content (historical data): Summary */
  $handler->display->display_options['fields']['field_summary-revision_id']['id'] = 'field_summary-revision_id';
  $handler->display->display_options['fields']['field_summary-revision_id']['table'] = 'field_revision_field_summary';
  $handler->display->display_options['fields']['field_summary-revision_id']['field'] = 'field_summary-revision_id';
  $handler->display->display_options['fields']['field_summary-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_summary-revision_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_summary-revision_id']['alter']['text'] = '<span class="summary">[field_summary-revision_id]</span>';
  $handler->display->display_options['fields']['field_summary-revision_id']['element_label_colon'] = FALSE;
  /* Field: Content (historical data): Urgent Health Info */
  $handler->display->display_options['fields']['field_urgent_health_info-revision_id']['id'] = 'field_urgent_health_info-revision_id';
  $handler->display->display_options['fields']['field_urgent_health_info-revision_id']['table'] = 'field_revision_field_urgent_health_info';
  $handler->display->display_options['fields']['field_urgent_health_info-revision_id']['field'] = 'field_urgent_health_info-revision_id';
  $handler->display->display_options['fields']['field_urgent_health_info-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_urgent_health_info-revision_id']['element_label_colon'] = FALSE;
  /* Field: Content (historical data): Healthy Hints */
  $handler->display->display_options['fields']['field_healthy_hints-revision_id']['id'] = 'field_healthy_hints-revision_id';
  $handler->display->display_options['fields']['field_healthy_hints-revision_id']['table'] = 'field_revision_field_healthy_hints';
  $handler->display->display_options['fields']['field_healthy_hints-revision_id']['field'] = 'field_healthy_hints-revision_id';
  /* Field: Content (historical data): Serving weight */
  $handler->display->display_options['fields']['field_serving_weight-revision_id']['id'] = 'field_serving_weight-revision_id';
  $handler->display->display_options['fields']['field_serving_weight-revision_id']['table'] = 'field_revision_field_serving_weight';
  $handler->display->display_options['fields']['field_serving_weight-revision_id']['field'] = 'field_serving_weight-revision_id';
  $handler->display->display_options['fields']['field_serving_weight-revision_id']['exclude'] = TRUE;
  /* Field: Content (historical data): Ingredients */
  $handler->display->display_options['fields']['field_ingredients-revision_id']['id'] = 'field_ingredients-revision_id';
  $handler->display->display_options['fields']['field_ingredients-revision_id']['table'] = 'field_revision_field_ingredients';
  $handler->display->display_options['fields']['field_ingredients-revision_id']['field'] = 'field_ingredients-revision_id';
  $handler->display->display_options['fields']['field_ingredients-revision_id']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ingredients-revision_id']['multi_type'] = 'ul';
  /* Field: Field (historical data): Body */
  $handler->display->display_options['fields']['field_body-revision_id']['id'] = 'field_body-revision_id';
  $handler->display->display_options['fields']['field_body-revision_id']['table'] = 'field_revision_field_body';
  $handler->display->display_options['fields']['field_body-revision_id']['field'] = 'field_body-revision_id';
  $handler->display->display_options['fields']['field_body-revision_id']['label'] = 'Cooking Guide';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content revision: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node_revision';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content revision: Vid */
  $handler->display->display_options['arguments']['vid']['id'] = 'vid';
  $handler->display->display_options['arguments']['vid']['table'] = 'node_revision';
  $handler->display->display_options['arguments']['vid']['field'] = 'vid';
  $handler->display->display_options['arguments']['vid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['vid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['vid']['default_argument_options']['code'] = 'return arg(3);';
  $handler->display->display_options['arguments']['vid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['vid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['vid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['block_description'] = 'Recipe Details revision mode';
  $translatables['draft_content_view'] = array(
    t('Master'),
    t('Draft Body'),
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
    t('Get the actual content from a content revision.'),
    t('All'),
    t('Draft Body Block'),
    t('Draft Summary Block'),
    t('Draft Summary'),
    t('<b>[field_summary-revision_id]</b>'),
    t('Revision Body Block'),
    t('Revision Body'),
    t('Revision Summary Block'),
    t('Revision Summary'),
    t('Block 4'),
    t('field collection item revision from field_images_for_carousal'),
    t('field collection item from field_images_for_carousal'),
    t('image from field_carousal_image'),
    t('<div class="image-caption-credits">
[field_file_image_title_text]
<span class="img-tag">[field_credit]</span>
</div>'),
    t('Image Carousal'),
    t('Block 5'),
    t('<h2 class="field-content">[title]</h2>'),
    t('Serves Type'),
    t('Preparation Time'),
    t('<span class="prep-time"><span class="recipe-inforbar-time">[field_preparation_time-revision_id]</span> <span class="recipe-inforbar-text">Preparation</span></span>'),
    t('<span class="recipe-cook-time"><span class="recipe-inforbar-time">[field_cooking_time-revision_id]</span> <span class="recipe-inforbar-text">Cooking time</span></span>'),
    t('Quantity'),
    t('<span class="recipe-quantity"><span class="recipe-inforbar-text">[field_serves_type-revision_id]</span> [field_quantity-revision_id]</span>'),
    t('<div class="recipe-inforbar">
[field_preparation_time-revision_id][field_quantity-revision_id][field_cooking_time-revision_id]
</div>'),
    t('<span class="summary">[field_summary-revision_id]</span>'),
    t('Healthy Hints'),
    t('Serving weight'),
    t('Ingredients'),
    t('Cooking Guide'),
    t('Recipe Details Draft mode'),
    t('Recipe Details revision mode'),
  );
  $export['draft_content_view'] = $view;

  return $export;
}
