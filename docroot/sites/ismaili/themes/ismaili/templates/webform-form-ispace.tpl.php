<?php
  // Print out the main part of the form.
  // Feel free to break this up and move the pieces within the array.
  // print drupal_render($form['submitted']);

  // Always print out the entire $form. This renders the remaining pieces of the
  // form that haven't yet been rendered above.
// print drupal_render($form['submitted']['email']['#webform_component']['name']);
  print "<div class ='field_email_text'> Your email <span class='form-required'>*</span> </div>";
  $form['submitted']['email']['newsletter_email_address']['#value'] = $form['submitted']['email']['newsletter_selection']['newsletter_email_address']['#default_value'];
  print drupal_render($form['submitted']['email']['newsletter_email_address']);
  print drupal_render($form['submitted']['first_name']);
  print drupal_render($form['submitted']['last_name']);
  print drupal_render($form['submitted']['age_range']);
  print drupal_render($form['submitted']['country']);
  print "<div class ='field_email_subscriptions'>Subcriptions</div>";
  print drupal_render($form['submitted']['email']['newsletter_selection']);
  print "<div class ='field_email_subscriptions'>Acceptance</div>";
  print drupal_render($form['submitted']['subscription_settings']);
  print drupal_render_children($form);