<?php
/**
 * @file
 * aka_article_of_interest_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function aka_article_of_interest_content_type_node_info() {
  $items = array(
    'newsletter_posts' => array(
      'name' => t('Articles of interest'),
      'base' => 'node_content',
      'description' => t('Articles produced for the Academies newsletter.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
