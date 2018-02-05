<?php

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */



global $language;

if (empty($row->field_field_image)) {
  $node = $row->_field_data['nid']['entity'];
  $wrapper = entity_metadata_wrapper('node', $node);
  $taxonomy = $wrapper->field_academy_name_taxonomy->value();
  $term_id = $taxonomy[0]->tid;
  switch ($term_id) {
    case 5:
      $uri = 'public://Aga Khan Academies network.jpg';
      break;
    case 3:
      $uri = 'public://Aga Khan Academy Hyderabad.JPG';
      break;
    case 4:
      $uri = 'public://Aga Khan Academy Maputo.jpg';
      break;
    case 2:
      $uri = 'public://Aga Khan Academy Mombasa.jpg';
      break;
  }
  $style = 'medium';
  $image = theme('image_style', array(
    'style_name' => $style,
    'path' => $uri,
      )
  );
  $output = render($image);
}
print $output;
?>