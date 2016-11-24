<?php

function akdn_ecard_preview($args) {
 $arg = $_GET['design'];
 if(!empty($qrg) && is_numeric($arg)) {
   $node = node_load($arg);
   $node_wrapper = entity_metadata_wrapper('node', $node);
   $image_uri = file_create_url($node_wrapper->field_image_upload->value()['uri']);
   $proj = $node_wrapper->field_project_country_descript->value()['value'];
   $fact_desc = $node_wrapper->field_fact_description->value()['value'];
   $fact_uri = file_create_url($node_wrapper->field_fact_image->value()['uri']);
   $title = $node_wrapper->field_more_information_link->value()['title'];
   $url = $node_wrapper->field_more_information_link->value()['url'];
 }	
 $html = theme('ecard_template', array('main_image' => $image_uri, 'proj_info' => $proj, 'fact_image' => $fact_image, 'fact_desc' => $fact_desc, 'link_title' => $title, 'link_url' => $url));
 print $html;die();
}
