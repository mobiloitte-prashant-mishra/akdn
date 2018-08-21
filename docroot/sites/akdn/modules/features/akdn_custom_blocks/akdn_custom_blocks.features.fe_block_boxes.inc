<?php
/**
 * @file
 * akdn_custom_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function akdn_custom_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Site Logo';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'site_logo';
  $fe_block_boxes->body = '<div class="akdn-logo-wrap"><a href="@home_page_url" title="AKDN"><img src="https://www.akdn.org/sites/akdn/themes/akdn/images/transparent_img.png" style="width: 120px; height: 55px;"></a></div>';

  $export['site_logo'] = $fe_block_boxes;

  return $export;
}
