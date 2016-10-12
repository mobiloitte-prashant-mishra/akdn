<?php
/**
 * This template is used to assemble all nodes selected during newsletter
 * creation with Simplenews Content Selection.
 *
 * The following variables are available:
 *    - $toc Table of content, if it exists, as generated by the function
 *    theme_scs_toc() or your own.
 *    - $nodes Array of built selected nodes, ready to be outputed with the
 *    render() function.
 */
?>
<?php
  $output = '';
  $output .= '<table cellspacing="0" cellpadding="0" border="0" width="100%" style="margin:0;border:0;">';
  $count = 0;
  foreach ($nodes as $node) {
  $title = strip_tags($node['#node']->title);
  $img_url = reset($node['#node']->field_newsletter_image)['0']['uri'];
  $thumb_image = array(
    'style_name' => 'mail_shot_image_cache',
    'path' => $img_url,
  );
  $img =  theme('image_style', $thumb_image);
  $body = reset($node['#node']->field_newsletter_summary)['0']['value'];
  $output .= '<tr><td align="right" valign="top" width="170" style="padding:20px 0 20px 20px;border-bottom:1px solid #999999;vertical-align:top;text-align:center;">';
  if (!empty($img)) {
    $output .= l($img, 'node/' . $node['#node']->nid, array( 'attributes' => array('target'=>'_blank'), 'html' => TRUE));
  }
  $output .= '</td>';
  $output .= '<td valign="top" style="padding:20px;border-bottom:1px solid #999999;vertical-align:top;">';
  if (!empty($title)) {
    $output .= '<h4 style="color:#b49759;font-weight:bold;font-size:12px;font-family:Arial,Serif;line-height:16px;margin:0 0 5px;">' . l($title, 'node/' . $node['#node']->nid) . '</h4>';
  }
  if (!empty($body)) {
    $output .= '<p style="font-size:12px;line-height:16px;font-style:normal;color:#333333;font-family:Arial,Serif;margin:0;">' . $body . '</p>';
  }
  $output .= '</td></tr>';
    $count++;
  }
  $output .= '</table>';
  print $output;
?>
