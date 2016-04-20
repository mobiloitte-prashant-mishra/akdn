<?php
/**
 * @file
 * akdn_akaa_akmi_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function akdn_akaa_akmi_types_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_akaa_short_video|node|custom_header_block|form';
  $field_group->group_name = 'group_akaa_short_video';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'custom_header_block';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'AKAA Short Video',
    'weight' => '1',
    'children' => array(
      0 => 'field_short_video_image',
      1 => 'field_add_short_video',
      2 => 'field_brightcove',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-akaa-short-video field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_akaa_short_video|node|custom_header_block|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_akmi_event_details|node|akmi_event|form';
  $field_group->group_name = 'group_akmi_event_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'akmi_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event Details',
    'weight' => '0',
    'children' => array(
      0 => 'field_akmi_event_date',
      1 => 'field_akmi_event_type',
      2 => 'field_akmi_event_venue',
      3 => 'field_akmi_featured_artists',
      4 => 'field_akmi_more_information',
      5 => 'field_event_akmi_year',
      6 => 'field_event_performance',
      7 => 'field_akmi_event_image',
      8 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-akmi-event-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_akmi_event_details|node|akmi_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_akmi_instrument_details|node|akmi_instrument|form';
  $field_group->group_name = 'group_akmi_instrument_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'akmi_instrument';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Instrument Details',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_image',
      2 => 'field_akmi_additional_images',
      3 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-akmi-instrument-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_akmi_instrument_details|node|akmi_instrument|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_architecture_details|node|architecture_project|form';
  $field_group->group_name = 'group_architecture_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'architecture_project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project';
  $field_group->data = array(
    'label' => 'Architecture Details',
    'weight' => '35',
    'children' => array(
      0 => 'field_architect',
      1 => 'field_building_type',
      2 => 'field_ceremony_location',
      3 => 'field_client',
      4 => 'field_completed_date',
      5 => 'field_completed_date_timestamp',
      6 => 'field_cycle_year',
      7 => 'field_design_date',
      8 => 'field_geocode_lat_long',
      9 => 'field_planner',
      10 => 'field_podcast_video',
      11 => 'field_press_kit',
      12 => 'field_project_image',
      13 => 'field_size',
      14 => 'field_winner',
      15 => 'field_zipped_images',
      16 => 'field_reference_cycle',
      17 => 'field_awards_cycle_links',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-architecture-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_architecture_details|node|architecture_project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_banner_item_details|node|featured_content|form';
  $field_group->group_name = 'group_banner_item_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'featured_content';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_banner_item';
  $field_group->data = array(
    'label' => 'Banner Item Details',
    'weight' => '1',
    'children' => array(
      0 => 'field_feature_image',
      1 => 'field_feature_link',
      2 => 'field_caption',
      3 => 'title_field',
      4 => 'field_short_title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-banner-item-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_banner_item_details|node|featured_content|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_banner_item|node|featured_content|form';
  $field_group->group_name = 'group_banner_item';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'featured_content';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Banner Item',
    'weight' => '10',
    'children' => array(
      0 => 'group_categories',
      1 => 'group_banner_item_details',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-banner-item field-group-tabs',
      ),
    ),
  );
  $export['group_banner_item|node|featured_content|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_categories|node|featured_content|form';
  $field_group->group_name = 'group_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'featured_content';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_banner_item';
  $field_group->data = array(
    'label' => 'Banner Item Categories',
    'weight' => '2',
    'children' => array(
      0 => 'field_country',
      1 => 'field_agency',
      2 => 'field_focus_area',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-categories field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_categories|node|featured_content|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cd_dvd_details|node|akmi_cd_dvd|form';
  $field_group->group_name = 'group_cd_dvd_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'akmi_cd_dvd';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Add CD/DVD Details',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_artist_related_videos',
      2 => 'field_cd_volume_number',
      3 => 'field_event_performance',
      4 => 'field_feature_image',
      5 => 'field_related_artists',
      6 => 'field_feature_link',
      7 => 'field_audio',
      8 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-cd-dvd-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_cd_dvd_details|node|akmi_cd_dvd|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_custom_details|node|custom_content|form';
  $field_group->group_name = 'group_custom_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'custom_content';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Custom Page Details',
    'weight' => '4',
    'children' => array(
      0 => 'body',
      1 => 'field_agency_logo',
      2 => 'field_custom_breadcrumbs',
      3 => 'field_short_title',
      4 => 'field_custom_meta_tags',
      5 => 'title',
      6 => 'path',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-custom-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_custom_details|node|custom_content|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_custom_info_|node|akmi_performance|form';
  $field_group->group_name = 'group_custom_info_';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'akmi_performance';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Custom Related Information ',
    'weight' => '11',
    'children' => array(
      0 => 'field_feature_link',
      1 => 'field_specify_a_block_title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-custom-info- field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_custom_info_|node|akmi_performance|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_custom_page_layout|node|custom_content|form';
  $field_group->group_name = 'group_custom_page_layout';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'custom_content';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Cutom Page Layout',
    'weight' => '3',
    'children' => array(
      0 => 'field_basic_page_accordian_style',
      1 => 'field_basic_page_choose_layout',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-custom-page-layout field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_custom_page_layout|node|custom_content|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_custom_right_sides|node|akmi_event|form';
  $field_group->group_name = 'group_custom_right_sides';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'akmi_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Customize Right Side Panel',
    'weight' => '12',
    'children' => array(
      0 => 'field_block_add_links',
      1 => 'field_right_show_block',
      2 => 'field_specify_a_block_title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-custom-right-sides field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_custom_right_sides|node|akmi_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_custom_right_side|node|custom_content|form';
  $field_group->group_name = 'group_custom_right_side';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'custom_content';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Customize Right Side Panel',
    'weight' => '5',
    'children' => array(
      0 => 'field_block_add_links',
      1 => 'field_right_show_block',
      2 => 'field_specify_a_block_title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-custom-right-side field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_custom_right_side|node|custom_content|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cycle_details|node|award_cycle|form';
  $field_group->group_name = 'group_cycle_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'award_cycle';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_cycle';
  $field_group->data = array(
    'label' => 'Cycle Details',
    'weight' => '50',
    'children' => array(
      0 => 'field_award_year',
      1 => 'field_short_title',
      2 => 'title_field',
      3 => 'field_master_jury',
      4 => 'field_steering_committee',
      5 => 'field_about_page',
      6 => 'field_eligibility_criteria',
      7 => 'field_award_ceremony',
      8 => 'field_chairman_s_award',
      9 => 'field_news',
      10 => 'field_press_materials',
      11 => 'field_award_recipients',
      12 => 'field_calendar',
      13 => 'field_submission_procedure',
      14 => 'field_review_selection_procedure',
      15 => 'field_cycle_year',
      16 => 'field_awards_cycle_links',
      17 => 'field_custom_meta_tags',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-cycle-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_cycle_details|node|award_cycle|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cycle|node|award_cycle|form';
  $field_group->group_name = 'group_cycle';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'award_cycle';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Cycle',
    'weight' => '3',
    'children' => array(
      0 => 'group_cycle_details',
      1 => 'group_homepage_cycle_sett',
      2 => 'group_media',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-cycle field-group-tabs',
      ),
    ),
  );
  $export['group_cycle|node|award_cycle|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_featured_content|node|architecture_project|form';
  $field_group->group_name = 'group_featured_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'architecture_project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project';
  $field_group->data = array(
    'label' => 'Banner Item',
    'weight' => '37',
    'children' => array(
      0 => 'field_caption',
      1 => 'field_pages_to_exclude',
      2 => 'field_create_featured_content',
      3 => 'field_feature_image',
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
  $export['group_featured_content|node|architecture_project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_homepage_cycle_sett|node|award_cycle|form';
  $field_group->group_name = 'group_homepage_cycle_sett';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'award_cycle';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_cycle';
  $field_group->data = array(
    'label' => 'Current Cycle Home Page Block Settings',
    'weight' => '52',
    'children' => array(
      0 => 'field_cycle_images',
      1 => 'field_show_links_checkbox',
      2 => 'field_show_links_cycle',
      3 => 'field_body',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-homepage-cycle-sett field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_homepage_cycle_sett|node|award_cycle|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location|node|architecture_project|form';
  $field_group->group_name = 'group_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'architecture_project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project';
  $field_group->data = array(
    'label' => 'Architecture Location',
    'weight' => '36',
    'children' => array(
      0 => 'field_arch_country',
      1 => 'field_city',
      2 => 'field_region',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-location field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_location|node|architecture_project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|award_cycle|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'award_cycle';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_cycle';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '53',
    'children' => array(
      0 => 'field_featured_content_area',
      1 => 'field_featured_content_nodes',
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
  $export['group_media|node|award_cycle|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta_info|node|person|full';
  $field_group->group_name = 'group_meta_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta Info',
    'weight' => '2',
    'children' => array(
      0 => 'field_country',
      1 => 'field_agency',
      2 => 'field_focus_area',
      3 => 'field_related_project',
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
  $export['group_meta_info|node|person|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_newsletter_details|node|custom_content|form';
  $field_group->group_name = 'group_newsletter_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'custom_content';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Newsletter Details',
    'weight' => '8',
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
  $export['group_newsletter_details|node|custom_content|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_performance_details|node|akmi_performance|form';
  $field_group->group_name = 'group_performance_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'akmi_performance';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Performance Details',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_performance_year',
      2 => 'field_feature_image',
      3 => 'field_akmi_additional_images',
      4 => 'field_related_artists',
      5 => 'field_performance_add_videos',
      6 => 'field_booking_link',
      7 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-performance-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_performance_details|node|akmi_performance|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_categories|node|person|form';
  $field_group->group_name = 'group_person_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_person';
  $field_group->data = array(
    'label' => 'Person Categories',
    'weight' => '15',
    'children' => array(
      0 => 'field_tags',
      1 => 'field_country',
      2 => 'field_agency',
      3 => 'field_focus_area',
      4 => 'field_enable_project_slider',
      5 => 'field_person_type',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-person-categories field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_person_categories|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_details|node|person|form';
  $field_group->group_name = 'group_person_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_person';
  $field_group->data = array(
    'label' => 'Person details',
    'weight' => '14',
    'children' => array(
      0 => 'body',
      1 => 'field_person_image',
      2 => 'title_field',
      3 => 'field_related_project',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-person-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_person_details|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person|node|person|form';
  $field_group->group_name = 'group_person';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Person',
    'weight' => '1',
    'children' => array(
      0 => 'group_person_categories',
      1 => 'group_person_details',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-person field-group-tabs',
      ),
    ),
  );
  $export['group_person|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_details|node|architecture_project|form';
  $field_group->group_name = 'group_project_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'architecture_project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project';
  $field_group->data = array(
    'label' => 'Project Details',
    'weight' => '34',
    'children' => array(
      0 => 'body',
      1 => 'field_short_title',
      2 => 'field_tags',
      3 => 'title_field',
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
  $export['group_project_details|node|architecture_project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project|node|architecture_project|form';
  $field_group->group_name = 'group_project';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'architecture_project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project',
    'weight' => '0',
    'children' => array(
      0 => 'group_architecture_details',
      1 => 'group_featured_content',
      2 => 'group_location',
      3 => 'group_project_details',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-project field-group-tabs',
      ),
    ),
  );
  $export['group_project|node|architecture_project|form'] = $field_group;

  return $export;
}
