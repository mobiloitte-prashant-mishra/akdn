<?php
/**
 * @file
 * nutrition_centre_changes.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function nutrition_centre_changes_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_drink|node|nutrient|form';
  $field_group->group_name = 'group_drink';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nutrient';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Drink',
    'weight' => '11',
    'children' => array(
      0 => 'field_drink_low',
      1 => 'field_drink_medium',
      2 => 'field_drink_ri',
      3 => 'group_high_drink',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-drink field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_drink|node|nutrient|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_food|node|nutrient|form';
  $field_group->group_name = 'group_food';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nutrient';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Food',
    'weight' => '10',
    'children' => array(
      0 => 'field_food_low',
      1 => 'field_food_medium',
      2 => 'field_food_ri',
      3 => 'group_high',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-food field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_food|node|nutrient|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_high_drink|node|nutrient|form';
  $field_group->group_name = 'group_high_drink';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nutrient';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_drink';
  $field_group->data = array(
    'label' => 'High',
    'weight' => '13',
    'children' => array(
      0 => 'field_drink_per_100_gm',
      1 => 'field_drink_per_portion',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-high-drink field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_high_drink|node|nutrient|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_high|node|nutrient|form';
  $field_group->group_name = 'group_high';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nutrient';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_food';
  $field_group->data = array(
    'label' => 'High',
    'weight' => '8',
    'children' => array(
      0 => 'field_food_per_100_gm',
      1 => 'field_food_per_portion',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-high field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_high|node|nutrient|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_serves|node|recipe|form';
  $field_group->group_name = 'group_serves';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'recipe';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Serves',
    'weight' => '24',
    'children' => array(
      0 => 'field_quantity',
      1 => 'field_serves_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-serves field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_serves|node|recipe|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_serving_wt|node|recipe|form';
  $field_group->group_name = 'group_serving_wt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'recipe';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Serving weight (imperial)',
    'weight' => '23',
    'children' => array(
      0 => 'field_serving_weight_quantity',
      1 => 'field_imperial_unit',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-serving-wt field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_serving_wt|node|recipe|form'] = $field_group;

  return $export;
}
