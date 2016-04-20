<?php
/**
 * @file
 * akdn_press_centre_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function akdn_press_centre_types_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_article_details_group|node|article|form';
  $field_group->group_name = 'group_article_details_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_article';
  $field_group->data = array(
    'label' => 'Article Categories',
    'weight' => '2',
    'children' => array(
      0 => 'field_tags',
      1 => 'field_country',
      2 => 'field_focus_area',
      3 => 'field_agency',
      4 => 'field_cycle_year',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-article-details-group field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_article_details_group|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_article_details|node|article|form';
  $field_group->group_name = 'group_article_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_article';
  $field_group->data = array(
    'label' => 'Article Details',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_article_cat',
      2 => 'field_article_author',
      3 => 'field_article_img',
      4 => 'field_publish_date',
      5 => 'title_field',
      6 => 'field_short_title',
      7 => 'field_media_source',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Article Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-article-details field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_article_details|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_article|node|article|form';
  $field_group->group_name = 'group_article';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Article',
    'weight' => '4',
    'children' => array(
      0 => 'group_article_details_group',
      1 => 'group_article_details',
      2 => 'group_featured_content',
      3 => 'group_related_content',
      4 => 'group_newsletter_details',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-article field-group-tabs',
      ),
    ),
  );
  $export['group_article|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_banner_item|node|speech_quote|form';
  $field_group->group_name = 'group_banner_item';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speech_quote';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_speech_quote';
  $field_group->data = array(
    'label' => 'Banner Item',
    'weight' => '11',
    'children' => array(
      0 => 'field_caption',
      1 => 'field_create_featured_content',
      2 => 'field_feature_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-banner-item field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_banner_item|node|speech_quote|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic_info|node|speech_quote|form';
  $field_group->group_name = 'group_basic_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speech_quote';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_speech_quote';
  $field_group->data = array(
    'label' => 'Basic Info',
    'weight' => '10',
    'children' => array(
      0 => 'body',
      1 => 'field_speech_themes',
      2 => 'title_field',
      3 => 'field_speech_reference',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-basic-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_basic_info|node|speech_quote|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_body_wrapper|node|article|full';
  $field_group->group_name = 'group_body_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Body Wrapper Div',
    'weight' => '3',
    'children' => array(
      0 => 'field_article_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Body Wrapper Div',
      'instance_settings' => array(
        'classes' => 'group-body-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_body_wrapper|node|article|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_deprecated|node|project|form';
  $field_group->group_name = 'group_deprecated';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project';
  $field_group->data = array(
    'label' => 'Deprecated',
    'weight' => '4',
    'children' => array(
      0 => 'field_summary',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-deprecated field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_deprecated|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_deprecated|node|speech|form';
  $field_group->group_name = 'group_deprecated';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speech';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_speech';
  $field_group->data = array(
    'label' => 'Deprecated',
    'weight' => '8',
    'children' => array(
      0 => 'field_external_media',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-deprecated field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_deprecated|node|speech|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details_pub|node|speech|form';
  $field_group->group_name = 'group_details_pub';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speech';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_speech';
  $field_group->data = array(
    'label' => 'Publication',
    'weight' => '3',
    'children' => array(
      0 => 'field_speech_author',
      1 => 'field_publication_date',
      2 => 'field_publication_url',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Publication',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => ' group-details-pub field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_details_pub|node|speech|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details_speech|node|speech|form';
  $field_group->group_name = 'group_details_speech';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speech';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_speech';
  $field_group->data = array(
    'label' => 'Speech Details',
    'weight' => '2',
    'children' => array(
      0 => 'field_speech_location',
      1 => 'field_publish_date',
      2 => 'field_speech_themes',
      3 => 'field_speech_type',
      4 => 'field_speech_event',
      5 => 'field_speech_speaker',
      6 => 'field_press_releases',
      7 => 'field_date_decade',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-details-speech field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_details_speech|node|speech|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_categories|node|event|form';
  $field_group->group_name = 'group_event_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event';
  $field_group->data = array(
    'label' => 'Event Categories',
    'weight' => '40',
    'children' => array(
      0 => 'field_tags',
      1 => 'field_agency',
      2 => 'field_country',
      3 => 'field_focus_area',
      4 => 'field_cycle_year',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-event-categories field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_event_categories|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_details|node|event|form';
  $field_group->group_name = 'group_event_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event';
  $field_group->data = array(
    'label' => 'Event Details',
    'weight' => '38',
    'children' => array(
      0 => 'body',
      1 => 'field_event_date',
      2 => 'field_event_image',
      3 => 'field_event_location',
      4 => 'title_field',
      5 => 'field_short_title',
      6 => 'field_custom_meta_tags',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-event-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_event_details|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event|node|event|form';
  $field_group->group_name = 'group_event';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event',
    'weight' => '10',
    'children' => array(
      0 => 'group_event_categories',
      1 => 'group_event_details',
      2 => 'group_featured_content',
      3 => 'group_newsletter_details',
      4 => 'group_related_content',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-event field-group-tabs',
      ),
    ),
  );
  $export['group_event|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_featured_content|node|article|form';
  $field_group->group_name = 'group_featured_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_article';
  $field_group->data = array(
    'label' => 'Banner Item',
    'weight' => '3',
    'children' => array(
      0 => 'field_caption',
      1 => 'field_feature_image',
      2 => 'field_create_featured_content',
      3 => 'field_pages_to_exclude',
      4 => 'field_hub_page',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-featured-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_featured_content|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_featured_content|node|event|form';
  $field_group->group_name = 'group_featured_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event';
  $field_group->data = array(
    'label' => 'Banner Item',
    'weight' => '39',
    'children' => array(
      0 => 'field_create_featured_content',
      1 => 'field_feature_image',
      2 => 'field_caption',
      3 => 'field_pages_to_exclude',
      4 => 'field_hub_page',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-featured-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_featured_content|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_featured_content|node|gallery|form';
  $field_group->group_name = 'group_featured_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_gallery';
  $field_group->data = array(
    'label' => 'Banner Item',
    'weight' => '26',
    'children' => array(
      0 => 'field_caption',
      1 => 'field_feature_image',
      2 => 'field_create_featured_content',
      3 => 'field_pages_to_exclude',
      4 => 'field_hub_page',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-featured-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_featured_content|node|gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_featured_content|node|podcast|form';
  $field_group->group_name = 'group_featured_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'podcast';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_podcast';
  $field_group->data = array(
    'label' => 'Banner Item',
    'weight' => '25',
    'children' => array(
      0 => 'field_caption',
      1 => 'field_feature_image',
      2 => 'field_create_featured_content',
      3 => 'field_pages_to_exclude',
      4 => 'field_hub_page',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-featured-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_featured_content|node|podcast|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_featured_content|node|project|form';
  $field_group->group_name = 'group_featured_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project';
  $field_group->data = array(
    'label' => 'Banner Item',
    'weight' => '3',
    'children' => array(
      0 => 'field_caption',
      1 => 'field_create_featured_content',
      2 => 'field_pages_to_exclude',
      3 => 'field_hub_page',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-featured-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_featured_content|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_featured_content|node|publication|form';
  $field_group->group_name = 'group_featured_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_publication';
  $field_group->data = array(
    'label' => 'Banner Item',
    'weight' => '26',
    'children' => array(
      0 => 'field_caption',
      1 => 'field_feature_image',
      2 => 'field_create_featured_content',
      3 => 'field_pages_to_exclude',
      4 => 'field_hub_page',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-featured-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_featured_content|node|publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_featured_content|node|speech|form';
  $field_group->group_name = 'group_featured_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speech';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_speech';
  $field_group->data = array(
    'label' => 'Banner Item',
    'weight' => '7',
    'children' => array(
      0 => 'field_caption',
      1 => 'field_feature_image',
      2 => 'field_create_featured_content',
      3 => 'field_pages_to_exclude',
      4 => 'field_hub_page',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-featured-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_featured_content|node|speech|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gallery_categories|node|gallery|form';
  $field_group->group_name = 'group_gallery_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_gallery';
  $field_group->data = array(
    'label' => 'Gallery Categories',
    'weight' => '27',
    'children' => array(
      0 => 'field_country',
      1 => 'field_agency',
      2 => 'field_focus_area',
      3 => 'field_cycle_year',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-gallery-categories field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_gallery_categories|node|gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gallery_details|node|gallery|form';
  $field_group->group_name = 'group_gallery_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_gallery';
  $field_group->data = array(
    'label' => 'Gallery Details',
    'weight' => '23',
    'children' => array(
      0 => 'body',
      1 => 'field_publish_date',
      2 => 'title_field',
      3 => 'field_short_title',
      4 => 'field_tags',
      5 => 'field_custom_meta_tags',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-gallery-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_gallery_details|node|gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gallery_images|node|gallery|form';
  $field_group->group_name = 'group_gallery_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_gallery';
  $field_group->data = array(
    'label' => 'Images',
    'weight' => '24',
    'children' => array(
      0 => 'field_gallery_images',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-gallery-images field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_gallery_images|node|gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gallery|node|gallery|form';
  $field_group->group_name = 'group_gallery';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Gallery',
    'weight' => '0',
    'children' => array(
      0 => 'group_featured_content',
      1 => 'group_gallery_categories',
      2 => 'group_gallery_details',
      3 => 'group_gallery_images',
      4 => 'group_related_content',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-gallery field-group-tabs',
      ),
    ),
  );
  $export['group_gallery|node|gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|podcast|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'podcast';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_podcast';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '22',
    'children' => array(
      0 => 'field_podcast_type',
      1 => 'field_podcast_image',
      2 => 'field_podcast_video',
      3 => 'field_podcast_audio',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-media field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_media|node|podcast|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|publication|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_publication';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '23',
    'children' => array(
      0 => 'field_publication_image',
      1 => 'field_publication_file',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-media field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_media|node|publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|speech|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speech';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_speech';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '4',
    'children' => array(
      0 => 'field_speech_image',
      1 => 'field_speech_audio',
      2 => 'field_speech_video',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-media field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_media|node|speech|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta_information|node|podcast|full';
  $field_group->group_name = 'group_meta_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'podcast';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta Information',
    'weight' => '39',
    'children' => array(
      0 => 'field_tags',
      1 => 'field_country',
      2 => 'field_agency',
      3 => 'field_focus_area',
      4 => 'field_publish_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Meta Information',
      'instance_settings' => array(
        'classes' => 'box-lightbrown group-meta-information field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_meta_information|node|podcast|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta_info|node|article|full';
  $field_group->group_name = 'group_meta_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta Information',
    'weight' => '35',
    'children' => array(
      0 => 'field_tags',
      1 => 'field_country',
      2 => 'field_focus_area',
      3 => 'field_agency',
      4 => 'article_meta',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Meta Information',
      'instance_settings' => array(
        'classes' => 'box-lightbrown group-meta-info field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_meta_info|node|article|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta_info|node|gallery|full';
  $field_group->group_name = 'group_meta_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gallery';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta Info',
    'weight' => '40',
    'children' => array(
      0 => 'field_country',
      1 => 'field_agency',
      2 => 'field_focus_area',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Meta Info',
      'instance_settings' => array(
        'classes' => 'box-lightbrown group-meta-info field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_meta_info|node|gallery|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_newsletter_details|node|article|form';
  $field_group->group_name = 'group_newsletter_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_article';
  $field_group->data = array(
    'label' => 'Newsletter Details',
    'weight' => '4',
    'children' => array(
      0 => 'field_newsletter_image',
      1 => 'field_newsletter_summary',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-newsletter-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_newsletter_details|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_newsletter_details|node|event|form';
  $field_group->group_name = 'group_newsletter_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event';
  $field_group->data = array(
    'label' => 'Newsletter Details',
    'weight' => '41',
    'children' => array(
      0 => 'field_newsletter_image',
      1 => 'field_newsletter_summary',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-newsletter-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_newsletter_details|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_newsletter_details|node|gallery|form';
  $field_group->group_name = 'group_newsletter_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Newsletter Details',
    'weight' => '5',
    'children' => array(
      0 => 'field_newsletter_image',
      1 => 'field_newsletter_summary',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-newsletter-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_newsletter_details|node|gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_newsletter_details|node|podcast|form';
  $field_group->group_name = 'group_newsletter_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'podcast';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Newsletter Details',
    'weight' => '55',
    'children' => array(
      0 => 'field_newsletter_image',
      1 => 'field_newsletter_summary',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-newsletter-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_newsletter_details|node|podcast|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_newsletter_details|node|project|form';
  $field_group->group_name = 'group_newsletter_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Newsletter Details',
    'weight' => '66',
    'children' => array(
      0 => 'field_newsletter_image',
      1 => 'field_newsletter_summary',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-newsletter-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_newsletter_details|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_newsletter_details|node|publication|form';
  $field_group->group_name = 'group_newsletter_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Newsletter Details',
    'weight' => '43',
    'children' => array(
      0 => 'field_newsletter_image',
      1 => 'field_newsletter_summary',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-newsletter-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_newsletter_details|node|publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_newsletter_details|node|speech|form';
  $field_group->group_name = 'group_newsletter_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speech';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Newsletter Details',
    'weight' => '61',
    'children' => array(
      0 => 'field_newsletter_image',
      1 => 'field_newsletter_summary',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-newsletter-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_newsletter_details|node|speech|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_podcast_categories|node|podcast|form';
  $field_group->group_name = 'group_podcast_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'podcast';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_podcast';
  $field_group->data = array(
    'label' => 'Podcast Categories',
    'weight' => '24',
    'children' => array(
      0 => 'field_tags',
      1 => 'field_country',
      2 => 'field_agency',
      3 => 'field_focus_area',
      4 => 'field_cycle_year',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-podcast-categories field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_podcast_categories|node|podcast|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_podcast_details|node|podcast|form';
  $field_group->group_name = 'group_podcast_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'podcast';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_podcast';
  $field_group->data = array(
    'label' => 'Podcast Details',
    'weight' => '21',
    'children' => array(
      0 => 'body',
      1 => 'field_publish_date',
      2 => 'title_field',
      3 => 'field_short_title',
      4 => 'field_custom_meta_tags',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-podcast-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_podcast_details|node|podcast|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_podcast|node|podcast|form';
  $field_group->group_name = 'group_podcast';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'podcast';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Podcast',
    'weight' => '15',
    'children' => array(
      0 => 'group_featured_content',
      1 => 'group_media',
      2 => 'group_podcast_categories',
      3 => 'group_podcast_details',
      4 => 'group_related_content',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-podcast field-group-tabs',
      ),
    ),
  );
  $export['group_podcast|node|podcast|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_categories|node|project|form';
  $field_group->group_name = 'group_project_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project';
  $field_group->data = array(
    'label' => 'Project Categories',
    'weight' => '2',
    'children' => array(
      0 => 'field_tags',
      1 => 'field_country',
      2 => 'field_agency',
      3 => 'field_focus_area',
      4 => 'field_enable_project_slider',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-project-categories field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_project_categories|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_details|node|project|form';
  $field_group->group_name = 'group_project_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project';
  $field_group->data = array(
    'label' => 'Project Details',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_project_budget',
      2 => 'field_project_partners',
      3 => 'field_project_location',
      4 => 'field_project_beneficiaries',
      5 => 'title_field',
      6 => 'field_sub_title',
      7 => 'field_short_title',
      8 => 'field_publish_date',
      9 => 'field_custom_meta_tags',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-project-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_project_details|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_image|node|project|form';
  $field_group->group_name = 'group_project_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '1',
    'children' => array(
      0 => 'field_project_image',
      1 => 'field_project_image_caption',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Media',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-project-image field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_project_image|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project|node|project|form';
  $field_group->group_name = 'group_project';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project',
    'weight' => '5',
    'children' => array(
      0 => 'group_deprecated',
      1 => 'group_featured_content',
      2 => 'group_project_categories',
      3 => 'group_project_details',
      4 => 'group_project_image',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-project field-group-tabs',
      ),
    ),
  );
  $export['group_project|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pub_categories|node|publication|form';
  $field_group->group_name = 'group_pub_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_publication';
  $field_group->data = array(
    'label' => 'Publication Categories',
    'weight' => '24',
    'children' => array(
      0 => 'field_tags',
      1 => 'field_country',
      2 => 'field_agency',
      3 => 'field_focus_area',
      4 => 'field_publication_category',
      5 => 'field_publication_type',
      6 => 'field_cycle_year',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-pub-categories field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_pub_categories|node|publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pub_details|node|publication|form';
  $field_group->group_name = 'group_pub_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_publication';
  $field_group->data = array(
    'label' => 'Publication Details',
    'weight' => '22',
    'children' => array(
      0 => 'body',
      1 => 'field_publication_isbn',
      2 => 'field_publication_purchase_link',
      3 => 'field_publish_date',
      4 => 'title_field',
      5 => 'field_short_title',
      6 => 'field_custom_meta_tags',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-pub-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_pub_details|node|publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publication|node|publication|form';
  $field_group->group_name = 'group_publication';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publication',
    'weight' => '1',
    'children' => array(
      0 => 'group_featured_content',
      1 => 'group_media',
      2 => 'group_pub_categories',
      3 => 'group_pub_details',
      4 => 'group_related_content',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-publication field-group-tabs',
      ),
    ),
  );
  $export['group_publication|node|publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_quotes_categories|node|speech_quote|form';
  $field_group->group_name = 'group_quotes_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speech_quote';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_speech_quote';
  $field_group->data = array(
    'label' => 'Quotes Categories',
    'weight' => '12',
    'children' => array(
      0 => 'field_country',
      1 => 'field_agency',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-quotes-categories field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_quotes_categories|node|speech_quote|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|article|form';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_article';
  $field_group->data = array(
    'label' => 'Related Content',
    'weight' => '5',
    'children' => array(
      0 => 'field_article_link',
      1 => 'field_related_project',
      2 => 'field_events_reference',
      3 => 'field_enable_project_slider',
      4 => 'field_photos_reference',
      5 => 'field_podcasts_reference',
      6 => 'field_speeches_reference',
      7 => 'field_press_reference',
      8 => 'field_related_in_the_media',
      9 => 'field_related_news',
      10 => 'field_related_publications',
      11 => 'field_related_links',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-related-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_related_content|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|event|form';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event';
  $field_group->data = array(
    'label' => 'Related Content',
    'weight' => '42',
    'children' => array(
      0 => 'field_related_project',
      1 => 'field_enable_project_slider',
      2 => 'field_event_links',
      3 => 'field_photos_reference',
      4 => 'field_podcasts_reference',
      5 => 'field_press_reference',
      6 => 'field_speeches_reference',
      7 => 'field_events_reference',
      8 => 'field_related_in_the_media',
      9 => 'field_related_news',
      10 => 'field_related_publications',
      11 => 'field_event_related',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-related-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_related_content|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|gallery|form';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_gallery';
  $field_group->data = array(
    'label' => 'Related Content',
    'weight' => '25',
    'children' => array(
      0 => 'field_related_project',
      1 => 'field_enable_project_slider',
      2 => 'field_events_reference',
      3 => 'field_gallery_link',
      4 => 'field_speeches_reference',
      5 => 'field_press_reference',
      6 => 'field_podcasts_reference',
      7 => 'field_photos_reference',
      8 => 'field_related_in_the_media',
      9 => 'field_related_news',
      10 => 'field_related_publications',
      11 => 'field_gallery_related_links',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-related-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_related_content|node|gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|podcast|form';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'podcast';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_podcast';
  $field_group->data = array(
    'label' => 'Related Content',
    'weight' => '23',
    'children' => array(
      0 => 'field_related_project',
      1 => 'field_enable_project_slider',
      2 => 'field_events_reference',
      3 => 'field_photos_reference',
      4 => 'field_podcast_links',
      5 => 'field_podcasts_reference',
      6 => 'field_speeches_reference',
      7 => 'field_press_reference',
      8 => 'field_related_in_the_media',
      9 => 'field_related_news',
      10 => 'field_related_publications',
      11 => 'field_podcast_related_link',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-related-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_related_content|node|podcast|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|publication|form';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_publication';
  $field_group->data = array(
    'label' => 'Related Content',
    'weight' => '25',
    'children' => array(
      0 => 'field_related_project',
      1 => 'field_enable_project_slider',
      2 => 'field_project_links',
      3 => 'field_speeches_reference',
      4 => 'field_press_reference',
      5 => 'field_events_reference',
      6 => 'field_podcasts_reference',
      7 => 'field_photos_reference',
      8 => 'field_related_in_the_media',
      9 => 'field_related_news',
      10 => 'field_related_publications',
      11 => 'field_article_link',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-related-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_related_content|node|publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|speech|form';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speech';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_speech';
  $field_group->data = array(
    'label' => 'Related Content',
    'weight' => '6',
    'children' => array(
      0 => 'field_related_project',
      1 => 'field_enable_project_slider',
      2 => 'field_speech_links',
      3 => 'field_speeches_reference',
      4 => 'field_press_reference',
      5 => 'field_events_reference',
      6 => 'field_podcasts_reference',
      7 => 'field_photos_reference',
      8 => 'field_related_in_the_media',
      9 => 'field_related_news',
      10 => 'field_related_publications',
      11 => 'field_related_speech',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-related-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_related_content|node|speech|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_speech_basic_info|node|speech|form';
  $field_group->group_name = 'group_speech_basic_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speech';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_speech';
  $field_group->data = array(
    'label' => 'Speech Basic Info',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'title_field',
      2 => 'field_short_title',
      3 => 'field_custom_meta_tags',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-speech-basic-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_speech_basic_info|node|speech|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_speech_categories|node|speech|form';
  $field_group->group_name = 'group_speech_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speech';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_speech';
  $field_group->data = array(
    'label' => 'Speech Categories',
    'weight' => '5',
    'children' => array(
      0 => 'field_tags',
      1 => 'field_country',
      2 => 'field_agency',
      3 => 'field_focus_area',
      4 => 'field_cycle_year',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-speech-categories field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_speech_categories|node|speech|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_speech_quote|node|speech_quote|form';
  $field_group->group_name = 'group_speech_quote';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speech_quote';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Speech Quote',
    'weight' => '0',
    'children' => array(
      0 => 'group_banner_item',
      1 => 'group_basic_info',
      2 => 'group_quotes_categories',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-speech-quote field-group-tabs',
      ),
    ),
  );
  $export['group_speech_quote|node|speech_quote|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_speech|node|speech|form';
  $field_group->group_name = 'group_speech';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speech';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Speech',
    'weight' => '9',
    'children' => array(
      0 => 'group_deprecated',
      1 => 'group_details_pub',
      2 => 'group_details_speech',
      3 => 'group_featured_content',
      4 => 'group_media',
      5 => 'group_related_content',
      6 => 'group_speech_basic_info',
      7 => 'group_speech_categories',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-speech field-group-tabs',
      ),
    ),
  );
  $export['group_speech|node|speech|form'] = $field_group;

  return $export;
}
