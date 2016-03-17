<?php
/**
 * @file
 * hightlight_block.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function hightlight_block_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'highlight_left_box';
  $bean_type->label = 'highlight left box';
  $bean_type->options = '';
  $bean_type->description = 'Adding highlight content in left box.';
  $export['highlight_left_box'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'highlight_right_box';
  $bean_type->label = 'highlight right box';
  $bean_type->options = '';
  $bean_type->description = 'Adding highlight content in right box.';
  $export['highlight_right_box'] = $bean_type;

  return $export;
}
