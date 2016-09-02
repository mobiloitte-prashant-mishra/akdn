<?php
  // Print out the main part of the form.
  // Feel free to break this up and move the pieces within the array.
  // print drupal_render($form['submitted']);

  // Always print out the entire $form. This renders the remaining pieces of the
  // form that haven't yet been rendered above.
  print "<div class='webform-subscribe'>
  <div class='custom-subscribe subs-contact-info'>
  <div class='subs-left'>".t('Contact Information')."</div>
  <div class='subs-right'>
  <div class='form-item'>
  <label>" . t('Your email') . "<span class='form-required'>*</span> </label>";
  $form['submitted']['mailshot_subscribe']['newsletter_email_address']['#value'] = $form['submitted']['mailshot_subscribe']['newsletter_selection']['newsletter_email_address']['#default_value'];
  print drupal_render($form['submitted']['mailshot_subscribe']['newsletter_email_address']).
  '</div>';
  print drupal_render($form['submitted']['first_name']);
  print drupal_render($form['submitted']['last_name']);
  print drupal_render($form['submitted']['gender']);
  print drupal_render($form['submitted']['year_of_birth']);
  print drupal_render($form['submitted']['country_of_residence']);
  print drupal_render($form['submitted']['what_caused_you_to_be_interested_in_this_website']);
  print '</div></div>';

  print "<div class='custom-subscribe subs-subscriptions'>
  <div class='subs-left'>" . t('Subscriptions '). "<span title='This field is required.' class='form-required'>*</span></div>
  <div class='subs-right'>";
  print drupal_render($form['submitted']['mailshot_subscribe']['newsletter_selection']);
  print '</div></div>';
  
  print "<div class='custom-subscribe subs-acceptance'>
  <div class='subs-left'>" . t('Acceptance '). "<span title='This field is required.' class='form-required'>*</span></div>
  <div class='subs-right'>";
  print drupal_render($form['submitted']['subscription_settings']);
  print '</div></div>';
   print '<div class = "custom-subscribe subs-captcha">'; print drupal_render($form['captcha']); 
  '</div>';

  print drupal_render_children($form).'</div>';
