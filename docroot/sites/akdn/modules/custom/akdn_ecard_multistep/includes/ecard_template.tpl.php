<div style="background-color:#efefef;"><br/><br/>
  <table width="690" border="0" align="center" cellpadding="0" cellspacing="0" style="background-color:#FFFFFF;">
    <tbody style="border:none;">
      <tr>
        <td><div id="content" style="margin-top:auto;margin-right:auto;margin-left:auto;padding-top:20px;padding-bottom:20px;padding-right:20px;padding-left:20px;background-color:#FFFFFF;width:650px;border-width:1px;border-style:solid;border-color:#CFCDCD;" ><?php !empty($main_image) ? $main_image : $main_image = 'http://cdn.iiuk.org/akdn/ecard_humayun2.jpg';
        print '<img src="' . $main_image . '" alt="Card Image" width="650" height="344" title="Card Image"/>';
        ?>
    <div class="horizontal2" style="max-width:650px;width:100%;height:1px;background-color:#DBDBDB;margin-bottom:15px;margin-top:15px;clear:both;" >  </div>
   <BR /><BR /> <div class="greeting" style="font-family:Gill Sans, Gill Sans MT, Myriad Pro, DejaVu Sans Condensed, Helvetica, Arial,' sans-serif';font-size:25px;text-align:center;color:#b49957;text-transform: uppercase;" ><?php print !empty($greetings)? $greetings : '{Greetings}'; ?></div>
  <div class="horizontal3" style="max-width:650px;width:100%;height:1px;background-color:#DBDBDB;margin-bottom:25px;margin-top:15px;clear:both;" >  </div>
   
    <div class="ftext" style="font-family:Cambria, Hoefler Text, Liberation Serif, Times, Times New Roman, serif;font-size:16px;line-height:20px;color:#000;margin-bottom:10px;" >
      <p style="text-align:center;" >Dear <?php if ($op === 'preview') { $name = 'Name'; } else { $name = '*|FNAME|*';} print !empty($to_name)? $to_name : $name; ?>,</p><br>
      <p style="text-align:center;" ><?php print !empty($message)? filter_xss(nl2br($message), array('br')) : '{Message}'; ?></p>
      <br><br>
      <p style="text-align:center;" >
        <?php print !empty($sender_name)? $sender_name : '{Sender Name}';?><em><br>
      </em></p>
    </div>
    <div class="horizontal5" style="max-width:650px;width:100%;height:1px;background-color:#DBDBDB;margin-bottom:10px;margin-top:25px;clear:both;" ></div>
    <div class="akdn" style="text-align:justify;align-content:justify;font-family:Arial;color:#656565;background-color:#F7F7F7;background-image:none;background-repeat:repeat;background-position:top left;background-attachment:scroll;font-size:11px;line-height:16px;border-width:1px;border-style:solid;border-color:#CCC;padding-top:20px;padding-bottom:12px;" >
      <table width="100%" border="0" align="center" cellpadding="0" cellspacing="0">
        <tbody style="border:none;">
          <tr>
            <td>
      <strong> </strong>
      <table width="100%" border="0" align="center" cellpadding="0" cellspacing="0">
        <tbody style="border:none;">
          <tr>
            <td width="113" rowspan="2" valign="middle" style="padding:3px;"><?php !empty($fact_image) ? $fact_image : $fact_image = 'http://cdn.iiuk.org/akdn/humayun3-01.png';print '<img src="'.$fact_image.'" alt="Fact" width="100" height="145" title="Fact"/>'; ?></td>
            <td width="507" height="80" valign="top" style="padding:10px;"><span class="akdntext" style="text-align:justify;align-content:justify;font-family:Arial;color:#656565;font-size:11px;line-height:16px;" ><?php print !empty($proj_info) ? $proj_info : '{Project Info}'; ?>.<?php print '<a href="' . $link_url .'" target="_blank" style="color:#656565;" >' . $link_title .'  »</a>'; ?><strong><br>
              <br>
            </strong></span></td>
            </tr>
          <tr>
          <td width="507" height="23" valign="top" style="padding:10px;"><strong><span class="akdntext" style="text-align:justify;align-content:justify;font-family:Arial;color:#656565;font-size:11px;line-height:16px;" ><?php print !empty($fact_desc) ? $fact_desc : '{fact desc}'; ?></span></strong></td>
            </tr>
          </tbody>
        </table></td>
            </tr>
          </tbody>
        </table>
    </div><br>
    <div class="horizontal4" style="max-width:650px;width:100%;height:1px;background-color:#DBDBDB;margin-bottom:10px;margin-top:10px;clear:both;" ></div><br>
    <div class="nl" style="text-align:center;align-content:center;font-family:arial;color:#656565;font-size:11px;line-height:16px;padding-top:10px;" > 
      <table width="100%" border="0" cellspacing="0" cellpadding="0">
        <tbody style="border:none;">
          <tr>
            <td width="113" align="center"><a href="http://www.akdn.org/"><img src="http://www.akdn.org/sites/akdn/themes/akdn/images/logo-akdn-3_2.png" alt="AKDN" width="80" height="37" title="AKDN" style="width:80px;"/></a></td>
          <td width="518"><span class="akdntext" style="text-align:justify;align-content:justify;font-family:Arial;color:#656565;font-size:11px;line-height:16px;" >You can learn more about AKDN's work by visiting our <a href="http://www.akdn.org/" style="color:#656565;" ><strong>Website »</strong></a><strong></strong> or subscribing to our <a href="http://www.akdn.org/subscribe" style="color:#656565;" ><strong>Newsletter »</strong></a></span></td>
            </tr>
          </tbody>
        </table>
      <strong></strong></div>
  </div></td>
      </tr>
    </tbody>
  </table>
  <br>
  <br>
</div>

