<?php if ($output['type'] == 'facebook') :?>
<table cellspacing="0" cellpadding="0" border="0" width="100%" style="background:#eaeaea;border:0;">
  <tr>
    <td align="left" valign="top" style="padding:15px 0 15px 15px;border:0;vertical-align:top;">
      <table border="0" style="border-collapse:separate;border:0;">
        <tr><td align="left" valign="top" style="width:40px;height:40px;padding:2px 8px 0 0;"><img width="40" height="40" src="http://akdn.org/sites/akdn/themes/akdn/images/facebook.png"></td>
        <td valign="top" style="padding:0;">
          <h3 style="font-size:16px;margin:0 auto 3px;padding:0;font-family:'Times New Roman',arial;font-weight:normal;line-height:1;">Aga Khan Development Network</h3>
          <p style="margin:0;font-family:'Times New Roman',arial;font-size:14px;">facebook.com/AKDN</p>
        </td></tr>
      <tr><td colspan="2" style="font-family:arial;font-size:14px;line-height:16px;color:#000000;padding:5px 0 10px;"><?php print $output['summary']; ?></td></tr>
      <tr><td colspan="2" style="padding:0;"><a href="<?php print $output['url'] ?>" style="width:50px;height:20px;padding:0;border-top: 3px solid #3b5998;border-bottom: 3px solid #3b5998;border-right: 8px solid #3b5998;border-left: 8px solid #3b5998;font-family:arial;font-size:12px;line-height:1;color:#ffffff;background:#3b5998;text-decoration:none;">Read</a></td></tr>
      </table>
    </td>
    <td align="right" valign="top" style="padding:15px;width:250px;"><?php print $output['image'] ?></td>
  </tr>
</table>
<?php endif; ?>
<?php if ($output['type'] == 'twitter') : ?>
<table cellspacing="0" cellpadding="0" border="0" width="100%" style="background:#eaeaea;border:0;">
  <tr>
    <td align="left" valign="top" style="padding:15px 0 15px 15px;border:0;vertical-align:top;">
      <table border="0" style="border-collapse:separate;border:0;">
        <tr><td align="left" valign="top" style="width:40px;height:40px;padding:2px 8px 0 0;"><img width="40" height="40" src="http://akdn.org/sites/akdn/themes/akdn/images/twitter.png"></td>
        <td valign="top" style="padding:0;">
          <h3 style="font-size:16px;margin:0 auto 3px;padding:0;font-family:'Times New Roman',arial;font-weight:normal;line-height:1;">Aga Khan Development Network</h3>
          <p style="margin:0;font-family:'Times New Roman',arial;font-size:14px;">@AKDN</p>
        </td></tr>
      <tr><td colspan="2" style="font-family:arial;font-size:14px;line-height:16px;color:#000000;padding:5px 0 10px;"><?php print $output['summary']; ?></td></tr>
      <tr><td colspan="2" style="padding:0;"><a href="<?php print $output['url'] ?>" style="width:50px;height:20px;padding:0;border-top: 3px solid #3b5998;border-bottom: 3px solid #3b5998;border-right: 8px solid #3b5998;border-left: 8px solid #3b5998;font-family:arial;font-size:12px;line-height:1;color:#ffffff;background:#1b95e0;text-decoration:none;">Read</a></td></tr>
      </table>
    </td>
    <td align="right" valign="top" style="padding:15px;width:250px;"><?php print $output['image'] ?></td>
  </tr>
</table>
<?php endif; ?>
<?php if ($output['type'] == 'instagram') : ?>
<table cellspacing="0" cellpadding="0" border="0" width="100%" style="background:#eaeaea;border:0;">
  <tr>
    <td align="left" valign="top" style="padding:15px 0 15px 15px;border:0;vertical-align:top;">
      <table border="0" style="border-collapse:separate;border:0;">
        <tr><td align="left" valign="top" style="width:40px;height:40px;padding:2px 8px 0 0;"><img width="40" height="40" src="http://akdn.org/sites/akdn/themes/akdn/images/instagram.png"></td>
        <td valign="top" style="padding:0;">
          <h3 style="font-size:16px;margin:0 auto 3px;padding:0;font-family:'Times New Roman',arial;font-weight:normal;line-height:1;">Aga Khan Development Network</h3>
          <p style="margin:0;font-family:'Times New Roman',arial;font-size:14px;">@AKDN</p>
        </td></tr>
      <tr><td colspan="2" style="font-family:arial;font-size:14px;line-height:16px;color:#000000;padding:5px 0 0;"><?php print $output['summary']; ?></td></tr>
      </table>
    </td>
    <td align="right" valign="top" style="padding:15px;width:250px;"><?php print $output['image'] ?></td>
  </tr>
</table>
<?php endif; ?>
<?php if ($output['type'] == 'youtube') : ?>
<table cellspacing="0" cellpadding="0" border="0" width="100%" style="background:#eaeaea;border:0;">
  <tr>
    <td align="left" valign="top" style="padding:15px 0 15px 15px;border:0;vertical-align:top;">
      <table border="0" style="border-collapse:separate;border:0;">
        <tr><td align="left" valign="top" style="width:40px;height:40px;padding:5px 8px 0 0;"><img width="40" height="40" src="http://akdn.org/sites/akdn/themes/akdn/images/youtube.png"></td>
        <td valign="top" style="padding:0;">
          <h3 style="font-size:16px;margin:0 auto;padding:0;font-family:'Times New Roman',arial;font-weight:normal;line-height:23px;"><?php print $output['title'] ?></h3>
        </td></tr>
      <tr><td colspan="2" style="font-family:arial;font-size:14px;line-height:16px;color:#000000;padding:5px 0 10px;"><?php print $output['summary']; ?></td></tr>
      <tr><td colspan="2" style="padding:0;"><a href="<?php print $output['url'] ?>" style="width:50px;height:20px;padding:0;border-top: 3px solid #3b5998;border-bottom: 3px solid #3b5998;border-right: 8px solid #3b5998;border-left: 8px solid #3b5998;font-family:arial;font-size:12px;line-height:1;color:#ffffff;background:#e62117;text-decoration:none;">Play</a></td></tr>
      </table>
    </td>
    <td align="right" valign="top" style="padding:15px;width:250px;"><?php print $output['image'] ?></td>
  </tr>
</table>
<?php endif; ?>
