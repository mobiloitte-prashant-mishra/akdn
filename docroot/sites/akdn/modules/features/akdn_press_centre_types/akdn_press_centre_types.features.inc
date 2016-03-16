<?php
/**
 * @file
 * akdn_press_centre_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function akdn_press_centre_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function akdn_press_centre_types_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('This content type represents notable events at which speeches occurred.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'gallery' => array(
      'name' => t('Gallery'),
      'base' => 'node_content',
      'description' => t('A <em>gallery</em> is a collection of images displayed in a grid.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'podcast' => array(
      'name' => t('Podcast'),
      'base' => 'node_content',
      'description' => t('A podcast or other audio/video file.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'project' => array(
      'name' => t('Spotlights'),
      'base' => 'node_content',
      'description' => t('A notable project.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'publication' => array(
      'name' => t('Publication'),
      'base' => 'node_content',
      'description' => t('An AKDN publication, usually with an accompanying document or  file to download.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'speech' => array(
      'name' => t('Speech'),
      'base' => 'node_content',
      'description' => t('A speech given at an event; can include a transcript of the speech.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'speech_quote' => array(
      'name' => t('Speech Quote'),
      'base' => 'node_content',
      'description' => t('A quote of a speech given at an event.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'speech_theme' => array(
      'name' => t('Speech Theme'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
