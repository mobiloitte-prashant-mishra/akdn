<?php
/**
 * @file
 * akdn_content_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function akdn_content_types_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_agency_deprecated|node|agency|form';
  $field_group->group_name = 'group_agency_deprecated';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'agency';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_agency';
  $field_group->data = array(
    'label' => 'Deprecated',
    'weight' => '29',
    'children' => array(
      0 => 'field_agency_image',
      1 => 'field_tags',
      2 => 'field_agency_about',
      3 => 'field_sub_title',
      4 => 'field_summary',
      5 => 'field_brochure_link',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-agency-deprecated field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_agency_deprecated|node|agency|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_agency_details|node|agency|form';
  $field_group->group_name = 'group_agency_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'agency';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_agency';
  $field_group->data = array(
    'label' => 'Agency Details',
    'weight' => '21',
    'children' => array(
      0 => 'field_agency_acronym',
      1 => 'title_field',
      2 => 'field_custom_meta_tags',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-agency-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_agency_details|node|agency|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_agency_footer|node|agency|form';
  $field_group->group_name = 'group_agency_footer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'agency';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_agency';
  $field_group->data = array(
    'label' => 'Footer',
    'weight' => '27',
    'children' => array(
      0 => 'field_3rd_party_rss',
      1 => 'field_enable_project_slider',
      2 => 'field_footer_video',
      3 => 'field_turn_on_secondary_footer',
      4 => 'field_brochure_embed_code',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-agency-footer field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_agency_footer|node|agency|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_agency_media|node|agency|form';
  $field_group->group_name = 'group_agency_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'agency';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_agency';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '23',
    'children' => array(
      0 => 'field_agency_logo',
      1 => 'field_featured_content_area',
      2 => 'field_featured_content_nodes',
      3 => 'field_agency_logo_with_title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-agency-media field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_agency_media|node|agency|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_agency_text|node|agency|form';
  $field_group->group_name = 'group_agency_text';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'agency';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_agency';
  $field_group->data = array(
    'label' => 'Agency Text',
    'weight' => '22',
    'children' => array(
      0 => 'body',
      1 => 'field_about_page',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-agency-text field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_agency_text|node|agency|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_agency|node|agency|form';
  $field_group->group_name = 'group_agency';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'agency';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Agency',
    'weight' => '1',
    'children' => array(
      0 => 'group_agency_deprecated',
      1 => 'group_agency_details',
      2 => 'group_agency_footer',
      3 => 'group_agency_media',
      4 => 'group_agency_text',
      5 => 'group_fact_sheet_visibiliity',
      6 => 'group_news_resouces_visible',
      7 => 'group_social_connection',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-agency field-group-tabs',
        'id' => 'node_agency_form_group_agency',
      ),
    ),
  );
  $field_groups['group_agency|node|agency|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_akaa_short_video|node|agency|form';
  $field_group->group_name = 'group_akaa_short_video';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'agency';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'AKAA Short Video',
    'weight' => '2',
    'children' => array(
      0 => 'field_akaa_short_video',
      1 => 'field_akaa_short_video_title',
      2 => 'field_akaa_video_thumbnail',
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
  $field_groups['group_akaa_short_video|node|agency|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_baasic_pages_categories|node|page|form';
  $field_group->group_name = 'group_baasic_pages_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basic page Categories',
    'weight' => '3',
    'children' => array(
      0 => 'field_agency_term',
      1 => 'field_geography_term',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-baasic-pages-categories field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_baasic_pages_categories|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic_page_layout|node|hub_page|form';
  $field_group->group_name = 'group_basic_page_layout';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hub_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_hub_page';
  $field_group->data = array(
    'label' => 'Choose Layout',
    'weight' => '4',
    'children' => array(
      0 => 'field_basic_page_choose_layout',
      1 => 'field_basic_page_accordian_style',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-basic-page-layout field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_basic_page_layout|node|hub_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic_page_layout|node|page|form';
  $field_group->group_name = 'group_basic_page_layout';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basic Page Layout',
    'weight' => '1',
    'children' => array(
      0 => 'field_basic_page_choose_layout',
      1 => 'field_basic_page_accordian_style',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-basic-page-layout field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_basic_page_layout|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic_page_text|node|page|form';
  $field_group->group_name = 'group_basic_page_text';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basic Page Text',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'title_field',
      2 => 'field_short_title',
      3 => 'field_tags',
      4 => 'field_article_link',
      5 => 'field_hub_page_image',
      6 => 'field_more_link',
      7 => 'field_quick_links',
      8 => 'field_custom_meta_tags',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-basic-page-text field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_basic_page_text|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_brochure_details|node|geography|form';
  $field_group->group_name = 'group_brochure_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'geography';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Brochure Details',
    'weight' => '6',
    'children' => array(
      0 => 'field_brochure_image',
      1 => 'field_brochure_summary',
      2 => 'field_brochure_view_link',
      3 => 'field_country_show_block',
      4 => 'field_short_title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-brochure-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_brochure_details|node|geography|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_custom_right_side|node|geography|form';
  $field_group->group_name = 'group_custom_right_side';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'geography';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Customize Right Side Panel',
    'weight' => '10',
    'children' => array(
      0 => 'field_block_add_links',
      1 => 'field_show_block',
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
  $field_groups['group_custom_right_side|node|geography|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_custom_right_side|node|hub_page|form';
  $field_group->group_name = 'group_custom_right_side';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hub_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_hub_page';
  $field_group->data = array(
    'label' => 'Customize Right Side Panel',
    'weight' => '7',
    'children' => array(
      0 => 'field_specify_a_block_title',
      1 => 'field_block_add_links',
      2 => 'field_right_show_block',
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
  $field_groups['group_custom_right_side|node|hub_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_custom_right_side|node|page|form';
  $field_group->group_name = 'group_custom_right_side';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Customize Right Side Panel',
    'weight' => '4',
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
  $field_groups['group_custom_right_side|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_deprecated|node|focus_area|form';
  $field_group->group_name = 'group_deprecated';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'focus_area';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_focus_area';
  $field_group->data = array(
    'label' => 'Deprecated',
    'weight' => '24',
    'children' => array(
      0 => 'field_hub_page_project',
      1 => 'field_tags',
      2 => 'field_hub_page_about',
      3 => 'field_summary',
      4 => 'field_focus_area',
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
  $field_groups['group_deprecated|node|focus_area|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_deprecated|node|geography|form';
  $field_group->group_name = 'group_deprecated';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'geography';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_geography';
  $field_group->data = array(
    'label' => 'Deprecated',
    'weight' => '25',
    'children' => array(
      0 => 'field_tags',
      1 => 'field_hub_page_about',
      2 => 'field_hub_page_project',
      3 => 'field_summary',
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
  $field_groups['group_deprecated|node|geography|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fact_sheet_visibiliity|node|agency|form';
  $field_group->group_name = 'group_fact_sheet_visibiliity';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'agency';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_agency';
  $field_group->data = array(
    'label' => 'Fact Block Visibility',
    'weight' => '25',
    'children' => array(
      0 => 'field_show_fact_block',
      1 => 'field_select_fact_sheet',
      2 => 'field_fact_sheet_reference',
      3 => 'field_fact_sheet_upload',
      4 => 'field_facts_url_links',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Fact Block Visibility',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-fact-sheet-visibiliity field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_fact_sheet_visibiliity|node|agency|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fact_sheet_visibiliity|node|focus_area|form';
  $field_group->group_name = 'group_fact_sheet_visibiliity';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'focus_area';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_focus_area';
  $field_group->data = array(
    'label' => 'Fact block Visibility',
    'weight' => '23',
    'children' => array(
      0 => 'field_show_fact_block',
      1 => 'field_select_fact_sheet',
      2 => 'field_fact_sheet_reference',
      3 => 'field_fact_sheet_upload',
      4 => 'field_facts_url_links',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Fact block Visibility',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_fact_sheet_visibiliity|node|focus_area|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fact_sheet_visibiliity|node|geography|form';
  $field_group->group_name = 'group_fact_sheet_visibiliity';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'geography';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_geography';
  $field_group->data = array(
    'label' => 'Fact Block Visibility',
    'weight' => '21',
    'children' => array(
      0 => 'field_show_fact_block',
      1 => 'field_select_fact_sheet',
      2 => 'field_fact_sheet_reference',
      3 => 'field_fact_sheet_upload',
      4 => 'field_facts_url_links',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Fact Block Visibility',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-fact-sheet-visibiliity field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_fact_sheet_visibiliity|node|geography|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_featured_content|node|page|form';
  $field_group->group_name = 'group_featured_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Banner Item',
    'weight' => '5',
    'children' => array(
      0 => 'field_create_featured_content',
      1 => 'field_feature_image',
      2 => 'field_caption',
      3 => 'field_hub_page',
      4 => 'field_pages_to_exclude',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_featured_content|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_focus_area_details|node|focus_area|form';
  $field_group->group_name = 'group_focus_area_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'focus_area';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_focus_area';
  $field_group->data = array(
    'label' => 'Focus Area Details',
    'weight' => '18',
    'children' => array(
      0 => 'title_field',
      1 => 'field_sub_title',
      2 => 'field_add_agency_what_we_do',
      3 => 'field_custom_agency_text',
      4 => 'field_custom_meta_tags',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-focus-area-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_focus_area_details|node|focus_area|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_focus_area_project_listing|node|focus_area|form';
  $field_group->group_name = 'group_focus_area_project_listing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'focus_area';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_focus_area';
  $field_group->data = array(
    'label' => 'Project Listing',
    'weight' => '19',
    'children' => array(
      0 => 'field_project_listing_area',
      1 => 'field_project_listing_content',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-focus-area-project-listing field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_focus_area_project_listing|node|focus_area|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_focus_area_text|node|focus_area|form';
  $field_group->group_name = 'group_focus_area_text';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'focus_area';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_focus_area';
  $field_group->data = array(
    'label' => 'Focus Area Text',
    'weight' => '20',
    'children' => array(
      0 => 'body',
      1 => 'field_about_page',
      2 => 'field_use_focus_area_body_text',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-focus-area-text field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_focus_area_text|node|focus_area|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_focus_area|node|focus_area|form';
  $field_group->group_name = 'group_focus_area';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'focus_area';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Focus Area',
    'weight' => '1',
    'children' => array(
      0 => 'group_home_page_slider',
      1 => 'group_deprecated',
      2 => 'group_fact_sheet_visibiliity',
      3 => 'group_focus_area_details',
      4 => 'group_focus_area_project_listing',
      5 => 'group_focus_area_text',
      6 => 'group_media',
      7 => 'group_news_resouces_visible',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-focus-area field-group-tabs',
        'id' => 'node_focus_area_form_group_focus_area',
      ),
    ),
  );
  $field_groups['group_focus_area|node|focus_area|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_footer|node|geography|form';
  $field_group->group_name = 'group_footer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'geography';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_geography';
  $field_group->data = array(
    'label' => 'Footer',
    'weight' => '23',
    'children' => array(
      0 => 'field_enable_project_slider',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-footer field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_footer|node|geography|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_geog_text|node|geography|form';
  $field_group->group_name = 'group_geog_text';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'geography';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_geography';
  $field_group->data = array(
    'label' => 'Geography Text',
    'weight' => '19',
    'children' => array(
      0 => 'body',
      1 => 'field_about_page',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-geog-text field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_geog_text|node|geography|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_geography_details|node|geography|form';
  $field_group->group_name = 'group_geography_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'geography';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_geography';
  $field_group->data = array(
    'label' => 'Geography Details',
    'weight' => '18',
    'children' => array(
      0 => 'field_hub_page_image',
      1 => 'title_field',
      2 => 'field_sub_title',
      3 => 'field_custom_meta_tags',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-geography-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_geography_details|node|geography|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_geography|node|geography|form';
  $field_group->group_name = 'group_geography';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'geography';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Geography',
    'weight' => '1',
    'children' => array(
      0 => 'group_deprecated',
      1 => 'group_fact_sheet_visibiliity',
      2 => 'group_footer',
      3 => 'group_geog_text',
      4 => 'group_geography_details',
      5 => 'group_media',
      6 => 'group_news_resouces_visible',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-geography field-group-tabs',
        'id' => 'node_geography_form_group_geography',
      ),
    ),
  );
  $field_groups['group_geography|node|geography|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_home_page_slider|node|focus_area|form';
  $field_group->group_name = 'group_home_page_slider';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'focus_area';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_focus_area';
  $field_group->data = array(
    'label' => 'Home Page Slider',
    'weight' => '25',
    'children' => array(
      0 => 'field_feature_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-home-page-slider field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_home_page_slider|node|focus_area|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hub_page_categories|node|hub_page|form';
  $field_group->group_name = 'group_hub_page_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hub_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_hub_page';
  $field_group->data = array(
    'label' => 'Hub Page Categories',
    'weight' => '6',
    'children' => array(
      0 => 'field_tags',
      1 => 'field_agency_geography',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-hub-page-categories field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_hub_page_categories|node|hub_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hub_page_details|node|hub_page|form';
  $field_group->group_name = 'group_hub_page_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hub_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_hub_page';
  $field_group->data = array(
    'label' => 'Hub Page Details',
    'weight' => '5',
    'children' => array(
      0 => 'body',
      1 => 'title_field',
      2 => 'field_short_title',
      3 => 'field_hub_page_image',
      4 => 'field_about_page',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-hub-page-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_hub_page_details|node|hub_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hub_page|node|hub_page|form';
  $field_group->group_name = 'group_hub_page';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hub_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hub Page',
    'weight' => '1',
    'children' => array(
      0 => 'group_hub_page_details',
      1 => 'group_hub_page_categories',
      2 => 'group_basic_page_layout',
      3 => 'group_custom_right_side',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-hub-page field-group-tabs',
        'id' => 'node_hub_page_form_group_hub_page',
      ),
    ),
  );
  $field_groups['group_hub_page|node|hub_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|focus_area|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'focus_area';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_focus_area';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '21',
    'children' => array(
      0 => 'field_hub_page_image',
      1 => 'field_featured_content_area',
      2 => 'field_featured_content_nodes',
      3 => 'field_enable_project_slider',
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
  $field_groups['group_media|node|focus_area|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|geography|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'geography';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_geography';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '20',
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
  $field_groups['group_media|node|geography|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_resouces_visible|node|agency|form';
  $field_group->group_name = 'group_news_resouces_visible';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'agency';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_agency';
  $field_group->data = array(
    'label' => 'News and Resources Visibility',
    'weight' => '24',
    'children' => array(
      0 => 'field_show_news_and_resources',
      1 => 'field_news_and_resources_link',
      2 => 'field_select_news_res_content',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-news-resouces-visible field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_news_resouces_visible|node|agency|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_resouces_visible|node|focus_area|form';
  $field_group->group_name = 'group_news_resouces_visible';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'focus_area';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_focus_area';
  $field_group->data = array(
    'label' => 'News and Resources Visibility',
    'weight' => '22',
    'children' => array(
      0 => 'field_news_and_resources_link',
      1 => 'field_show_news_and_resources',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-news-resouces-visible field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_news_resouces_visible|node|focus_area|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_resouces_visible|node|geography|form';
  $field_group->group_name = 'group_news_resouces_visible';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'geography';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_geography';
  $field_group->data = array(
    'label' => 'News and Resources Visibility',
    'weight' => '22',
    'children' => array(
      0 => 'field_show_news_and_resources',
      1 => 'field_news_and_resources_link',
      2 => 'field_select_news_res_content',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-news-resouces-visible field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_news_resouces_visible|node|geography|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_newsletter_details|node|agency|form';
  $field_group->group_name = 'group_newsletter_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'agency';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Newsletter Details',
    'weight' => '38',
    'children' => array(
      0 => 'field_newsletter_image',
      1 => 'field_newsletter_summary',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Newsletter Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-newsletter-details field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_newsletter_details|node|agency|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_newsletter_details|node|focus_area|form';
  $field_group->group_name = 'group_newsletter_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'focus_area';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Newsletter Details',
    'weight' => '26',
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
  $field_groups['group_newsletter_details|node|focus_area|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_newsletter_details|node|geography|form';
  $field_group->group_name = 'group_newsletter_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'geography';
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
  $field_groups['group_newsletter_details|node|geography|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_newsletter_details|node|hub_page|form';
  $field_group->group_name = 'group_newsletter_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hub_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Newsletter Details',
    'weight' => '21',
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
  $field_groups['group_newsletter_details|node|hub_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_newsletter_details|node|page|form';
  $field_group->group_name = 'group_newsletter_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Newsletter Details',
    'weight' => '6',
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
  $field_groups['group_newsletter_details|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_social_connection|node|agency|form';
  $field_group->group_name = 'group_social_connection';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'agency';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_agency';
  $field_group->data = array(
    'label' => 'Social connections Visibility',
    'weight' => '26',
    'children' => array(
      0 => 'field_show_social_share',
      1 => 'field_social_sharing_links',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Social connections Visibility',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_social_connection|node|agency|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('AKAA Short Video');
  t('Agency');
  t('Agency Details');
  t('Agency Text');
  t('Banner Item');
  t('Basic Page Layout');
  t('Basic Page Text');
  t('Basic page Categories');
  t('Brochure Details');
  t('Choose Layout');
  t('Customize Right Side Panel');
  t('Deprecated');
  t('Fact Block Visibility');
  t('Fact block Visibility');
  t('Focus Area');
  t('Focus Area Details');
  t('Focus Area Text');
  t('Footer');
  t('Geography');
  t('Geography Details');
  t('Geography Text');
  t('Home Page Slider');
  t('Hub Page');
  t('Hub Page Categories');
  t('Hub Page Details');
  t('Media');
  t('News and Resources Visibility');
  t('Newsletter Details');
  t('Project Listing');
  t('Social connections Visibility');

  return $field_groups;
}
