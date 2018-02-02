<?php

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

if (empty($row->field_field_image)) {
  $uri = 'public://Aga Khan Academies network.jpg';
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