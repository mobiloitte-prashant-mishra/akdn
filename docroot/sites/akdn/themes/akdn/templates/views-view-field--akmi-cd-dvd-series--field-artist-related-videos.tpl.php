<?php

/**
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */
$output = '';
$values = '';
$url = $row->field_field_artist_related_videos[0]['rendered']['#markup'];
//get youtube unique id
if (preg_match('/youtube\.com\/watch\?v=([^\&\?\/]+)/', $url, $id)) {
  $values = $id[1];
}
else {
  if (preg_match('/youtube\.com\/embed\/([^\&\?\/]+)/', $url, $id)) {
    $values = $id[1];
  }
  else {
    if (preg_match('/youtube\.com\/v\/([^\&\?\/]+)/', $url, $id)) {
      $values = $id[1];
    }
    else {
      if (preg_match('/youtu\.be\/([^\&\?\/]+)/', $url, $id)) {
        $values = $id[1];
      }
      else {
        if (preg_match('/youtube\.com\/verify_age\?next_url=\/watch%3Fv%3D([^\&\?\/]+)/', $url, $id)) {
          $values = $id[1];
        }
        else {

        }
      }
    }
  }
}
if ($url) {
  if ($values) {
    $output = '<a href="https://www.youtube.com/embed/' . $values . '?autoplay=1&fs=1&amp;width=640&amp;height=360&amp;hl=en_US1&amp;iframe=true&amp;rel=0" class="colorbox-inline">Video</a>';
  }
  else {
    $output = '<a href="' . $url . '"  target="_blank">Video</a>';
  }
}

?>
<?php print $output; ?>