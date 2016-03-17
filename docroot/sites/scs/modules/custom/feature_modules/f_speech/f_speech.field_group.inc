<?php
/**
 * @file
 * f_speech.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function f_speech_field_group_info() {
  $export = array();

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
    'weight' => '64',
    'children' => array(
      0 => 'field_external_media',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-deprecated field-group-tab',
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
    'weight' => '59',
    'children' => array(
      0 => 'field_publication_source',
      1 => 'field_publication_date',
      2 => 'field_publication_author',
      3 => 'field_publication_url',
      4 => 'field_speech_author',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-details-pub field-group-tab',
        'required_fields' => 1,
      ),
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
    'weight' => '58',
    'children' => array(
      0 => 'field_speech_type',
      1 => 'field_speech_themes',
      2 => 'field_publish_date',
      3 => 'field_speech_location',
      4 => 'field_introductory_text',
      5 => 'field_speech_speaker',
      6 => 'field_date_decade',
      7 => 'field_press_releases',
      8 => 'field_speech_event',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-details-speech field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_details_speech|node|speech|form'] = $field_group;

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
    'weight' => '63',
    'children' => array(
      0 => 'field_caption',
      1 => 'field_create_featured_content',
      2 => 'field_feature_image',
      3 => 'field_hub_page',
      4 => 'field_pages_to_exclude',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-featured-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_featured_content|node|speech|form'] = $field_group;

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
    'weight' => '60',
    'children' => array(
      0 => 'field_youtube_vimeo_video',
      1 => 'field_brightcove_video',
      2 => 'field_brightcove_id',
      3 => 'field_speech_audio',
      4 => 'field_speech_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-media field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_media|node|speech|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta_info|node|speech|default';
  $field_group->group_name = 'group_meta_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speech';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta informatoin',
    'weight' => '1',
    'children' => array(
      0 => 'field_publish_date',
      1 => 'field_speech_location',
      2 => 'field_speech_speaker',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Meta informatoin',
      'instance_settings' => array(
        'classes' => 'box-lightbrown group-meta-info field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_meta_info|node|speech|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta_info|node|speech|full';
  $field_group->group_name = 'group_meta_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speech';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta information',
    'weight' => '8',
    'children' => array(
      0 => 'field_publish_date',
      1 => 'field_speech_location',
      2 => 'field_speech_speaker',
      3 => 'field_speech_event',
      4 => 'links',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Meta information',
      'instance_settings' => array(
        'classes' => 'box-lightbrown group-meta-info field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_meta_info|node|speech|full'] = $field_group;

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
    'weight' => '62',
    'children' => array(
      0 => 'field_destination_site',
      1 => 'field_enable_project_slider',
      2 => 'field_events_reference',
      3 => 'field_photos_reference',
      4 => 'field_podcasts_reference',
      5 => 'field_press_reference',
      6 => 'field_related_in_the_media',
      7 => 'field_related_news',
      8 => 'field_related_project',
      9 => 'field_related_publications',
      10 => 'field_speech_links',
      11 => 'field_speeches_reference',
      12 => 'field_dms',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-related-content field-group-fieldset',
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
    'weight' => '57',
    'children' => array(
      0 => 'body',
      1 => 'field_short_title',
      2 => 'title_field',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-speech-basic-info field-group-tab',
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
    'weight' => '61',
    'children' => array(
      0 => 'field_country',
      1 => 'field_agency',
      2 => 'field_cycle_year',
      3 => 'field_focus_area',
      4 => 'field_tags',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-speech-categories field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_speech_categories|node|speech|form'] = $field_group;

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
    'weight' => '1',
    'children' => array(
      0 => 'group_speech_basic_info',
      1 => 'group_details_speech',
      2 => 'group_details_pub',
      3 => 'group_media',
      4 => 'group_speech_categories',
      5 => 'group_related_content',
      6 => 'group_featured_content',
      7 => 'group_deprecated',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-speech field-group-tabs',
      ),
    ),
  );
  $export['group_speech|node|speech|form'] = $field_group;

  return $export;
}
