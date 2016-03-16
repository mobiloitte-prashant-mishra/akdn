<?php

/**
 * @file
 * Default theme implementation to format an HTML mail.
 *
 * Copy this file in your default theme folder to create a custom themed mail.
 * Rename it to mimemail-message--[module]--[key].tpl.php to override it for a
 * specific mail.
 *
 * Available variables:
 * - $recipient: The recipient of the message
 * - $subject: The message subject
 * - $body: The message body
 * - $css: Internal style sheets
 * - $module: The sending module
 * - $key: The message identifier
 *
 * @see template_preprocess_mimemail_message()
 */
 global $base_url;
?>
<html>
  <head>
    <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
    <?php if ($css): ?>
    <style type="text/css">
      <!--
      <?php print $css ?>
      -->
    </style>
    <?php endif; ?>
  </head>
  <body id="mimemail-body" <?php if ($module && $key): print 'class="'. $module .'-'. $key .'"'; endif; ?>>
    <div id="center">
      <div id="main" style="color: black; line-height:16px;">
          <div class="logo" style="text-align: center; border-top: 30px solid #b49759; padding-top: 10px; padding-bottom: 8px;">
            <a href = 'http://akdndev.prod.acquia-sites.com/' style="display: block; margin: auto;"><img <?php print 'src= http://srijanaravali.github.io/akdn/images/akdn-logo.png' ?> alt="<?php print t('Home'); ?>" style="width: 120px; height: 55px; margin:10px auto" /></a>
          </div>
          <div class="header">
            <p class="first"><span class="mail-shot-date" style="font-weight:bold;" ><?php print date('j F Y') . " -"; ?></span> The following content was published at <a href= <?php print $base_url ?>
               >http://akdndev.prod.acquia-sites.com/</a>, the official website of the AGA Khan Development Network.
            </p>
            <div class="last">
             <i>Do you have friends and family members who would like to receive this newsletter? Invite them to sign up at</i> <a href="subscribe">http://akdndev.prod.acquia-sites.com/subscribe.</a>
            </div>
          </div>
        <div class="mail_body"><?php print $body;?></div>
      </div>
    </div>
    <div class="band" style="text-align: center; border-top: 30px solid #b49759; margin-top: 10px; clear:both;"></div>
  </body>
</html>
