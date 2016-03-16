<?php
define('DRUPAL_ROOT', '/var/www/html/akdndev/docroot');

include_once DRUPAL_ROOT . '/includes/bootstrap.inc';
drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);
drupal_set_time_limit(240);
$result = db_query("SELECT nid FROM {node} WHERE type = 'article'");
foreach($result as $record) {
  $node = node_load($record->nid);
  $title = $node->title;
  $lan = $node->language;
  $csvFile = "files/media/pr_caption_and_copyright_export.csv";
  $csv = readCSV($csvFile);
  //var_dump($csv);
  foreach($csv as $key=>$value) {
    if ($value[0] == $title) {
  	  $caption = $value[1];
  	  $copyright = $value[2];
  	}
  }
  $file_id = $node->field_article_img[$lan][0]['fid'];
  $file = file_load($file_id);
  echo'<pre>';print_r($file);
  echo'<pre>';print_r($node);die();
  $file->field_captions['und'][0]['value'] = $caption;
  $file->field_copyright['und'][0]['value'] = $copyright;
  file_save($file);
  //node_save($node);
}

function readCSV($csvFile){
  if($file_handle = fopen($csvFile, 'r')) {
    while (!feof($file_handle) ) {
      $line_of_text[] = fgetcsv($file_handle, 1024);
    }
    fclose($file_handle);
    return $line_of_text;
  }
  else {
    die('Could not read file');
  }
}

