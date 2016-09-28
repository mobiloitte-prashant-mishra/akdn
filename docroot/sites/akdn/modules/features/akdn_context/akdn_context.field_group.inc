<?php
/**
 * @file
 * akdn_context.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function akdn_context_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_add_artist_details|node|akmi_artists|form';
  $field_group->group_name = 'group_add_artist_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'akmi_artists';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Add Artist Details',
    'weight' => '0',
    'children' => array(
      0 => 'field_artist_country_origin',
      1 => 'field_artist_related_instruments',
      2 => 'field_artist_related_videos',
      3 => 'field_body',
      4 => 'field_feature_image',
      5 => 'field_vocal_artist_check',
      6 => 'field_akmi_additional_images',
      7 => 'field_performance_year',
      8 => 'field_custom_meta_tags',
      9 => 'field_text_related_instruments',
      10 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-add-artist-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_add_artist_details|node|akmi_artists|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_custom_right_side_artist|node|akmi_artists|form';
  $field_group->group_name = 'group_custom_right_side_artist';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'akmi_artists';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Customize Right Side Panel',
    'weight' => '2',
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
        'classes' => 'group-custom-right-side-artist field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_custom_right_side_artist|node|akmi_artists|form'] = $field_group;

  return $export;
}
