<?php
/*
 * Root directory of Drupal installation.
 */
define('DRUPAL_ROOT', getcwd());

include_once DRUPAL_ROOT . '/includes/bootstrap.inc';
drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);
drupal_set_time_limit(240);
$result = db_query("SELECT nid FROM {node} WHERE type = 'event'");
foreach($result as $record) {
  $node = node_load($record->nid);
  $node_type = $node->type;
  $title = $node->title;
  $caption = $node->field_event_image['en'][0]['field_image_caption']['und'][0]['value'];
  $copyright = $node->field_event_image['en'][0]['field_image_copytight']['und'][0]['value'];
  global $user;

  $node1 = new stdClass();
  $node1->title = $title;
  $node1->type = "filesexport";
  node_object_prepare($node1); // Sets some defaults. Invokes hook_prepare() and hook_node_prepare().
  $node1->language = LANGUAGE_NONE; // Or e.g. 'en' if locale is enabled
  $node1->uid = $user->uid; 
  $node1->status = 1; //(1 or 0): published or not
  $node1->promote = 0; //(1 or 0): promoted to front page
  $node1->comment = 1; // 0 = comments disabled, 1 = read only, 2 = read/write
  $node1->field_test_caption[$node1->language][0]['value'] = $caption;
  $node1->field_copyright[$node1->language][0]['value'] = $copyright;
  $node1->field_node_type[$node1->language][0]['value'] = $node_type;
  $node1 = node_submit($node1); // Prepare node for saving
  node_save($node1);
}
