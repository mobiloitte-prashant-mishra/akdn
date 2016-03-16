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
    
    .node-recipe h2  a {
      text-decoration: none;
      color: #9a0000;
    }
      <?php print $css ?>

    </style>
    <?php endif; ?>
  </head>
  <body id="mimemail-body" <?php if ($module && $key): print 'class="'. $module .'-'. $key .'"'; endif; ?>>
    <div id="center">
      <div id="main" style="color: black;">
          <div class="logo" style="text-align: center; border-top: 30px solid #9a0000; padding-top: 10px; padding-bottom: 5px;">
            <a href = 'http://www.theismaili.org/'><img <?php print 'src=http://www.theismaili.org/sites/ismaili/files/the-ismaili-site-banner_1.gif' ?> alt="<?php print t('Home'); ?>" style=" width:35%;" /></a>
          </div>
          <div class="header">
            <p class="first"><span class="mail-shot-date" style="font-weight:bold;" ><?php print date('j F Y') . " -"; ?></span> The following content was published at <a href= <?php print $base_url ?>
               >TheIsmaili.org</a>, the official website of the Ismaili Muslim community.
            </p>
            <div class="last">
             <i>Do you have friends and family members who would like to receive this newsletter? Invite them to sign up at</i> <a href="subscribe">TheIsmaili.org/subscribe.</a>
            </div>
          </div>
        <div class="mail_body"><?php print $body ?></div>
      </div>
    </div>
    <div class="band" style="text-align: center; border-top: 30px solid #9a0000; margin-top: 10px; clear:both;"></div>
  </body>
</html>
