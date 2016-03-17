<?php
define('DRUPAL_ROOT', getcwd());

include_once DRUPAL_ROOT . '/includes/bootstrap.inc';
drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);
drupal_set_time_limit(240);
$result = db_query("SELECT nid FROM {node} WHERE type = 'person'");
foreach($result as $record) {
  $node = node_load($record->nid);
  $title = $node->title;
  $csvFile = "person_caption_and_copyright_export.csv";
  $csv = readCSV($csvFile);
  foreach($csv as $key=>$value) {
    if ($value[0] == $title) {
  	  $caption = $value[1];
  	  $copyright = $value[2];
  	  break;
  	}
  }
  $file_id = $node->field_event_image['und'][0]['fid'];
  if($fid) {
    $file = file_load($file_id);
    $file->field_captions['en'][0]['value'] = $caption;
    $file->field_copyright['en'][0]['value'] = $copyright;
    file_save($file);
  }
  node_save($node);
}

function readCSV($csvFile){
  $file_handle = fopen($csvFile, 'r');
  while (!feof($file_handle) ) {
	$line_of_text[] = fgetcsv($file_handle, 1024);
  }
  fclose($file_handle);
    return $line_of_text;
}

