<?php
/**
 * @file
 * theme implementation to display Links.
 */
?>
<div style="background-color:#efefef;" >
  <div id="content" style="margin-top:auto;margin-right:auto;margin-left:auto;padding-top:20px;padding-bottom:20px;padding-right:20px;padding-left:20px;background-color:#FFFFFF;max-width:650px;width:100%;border-width:1px;border-style:solid;border-color:#CFCDCD;" >

    <img src="http://cdn.iiuk.org/akdn/ecard_humayun2.jpg" alt="Card Image" width="610" height="323" title="Card Image"/>

    <div class="horizontal2" style="max-width:650px;width:100%;height:1px;background-color:#DBDBDB;margin-bottom:15px;margin-top:15px;clear:both;" >
    </div>

    <div class="greeting" style="font-family:Gill Sans, Gill Sans MT, Myriad Pro, DejaVu Sans Condensed, Helvetica, Arial,' sans-serif';font-size:25px;text-align:center;color:#b49957;" >
      <?php print isset($greeting)? $greeting : 'GREETING TEXT'; ?>
    </div>

    <div class="horizontal3" style="max-width:650px;width:100%;height:1px;background-color:#DBDBDB;margin-bottom:25px;margin-top:15px;clear:both;" >
    </div>
  
    <div class="ftext" style="font-family:Cambria, Hoefler Text, Liberation Serif, Times, Times New Roman, serif;font-size:16px;line-height:20px;color:#000;margin-bottom:10px;" >
      <p style="text-align:center;" >Dear <?php print isset($to_name)? $to_name : 'Recipient'; ?>,</p><br>
      <p style="text-align:center;" ><?php print isset($message)? $message : 'MESSAGE TEXT'; ?>
      <br>
      <br>
        <?php print isset($sender_name)? $sender_name : 'Sender Name'; ?>
      </p>
    </div>

    <div class="horizontal5" style="max-width:650px;width:100%;height:1px;background-color:#DBDBDB;margin-bottom:10px;margin-top:25px;clear:both;" >
    </div>
  
    <div class="akdn" style="text-align:justify;align-content:justify;font-family:arial;color:#656565;background-color:#F7F7F7;background-image:none;background-repeat:repeat;background-position:top left;background-attachment:scroll;font-size:11px;line-height:16px;border-width:1px;border-style:solid;border-color:#CCC;padding-top:20px;padding-bottom:12px;" >

      <table width="100%" border="0" align="center" cellpadding="0" cellspacing="0">
        <tbody style="border:0;">
          <tr>
            <td>
              <table width="100%" border="0" align="center" cellpadding="0" cellspacing="0">
                <tbody style="border:0;">
                  <tr>
                    <td width="113" rowspan="2" valign="middle" style="padding:3px;"><img src="http://cdn.iiuk.org/akdn/humayun3-01.png" alt="Fact" width="100" height="145" title="Fact"/>
                    </td>
                    <td width="507" height="80" valign="top" style="padding:10px;"><?php print isset($project_desc)? $project_desc : 'Project Info'; ?>. 
                      <a href="{learnmoreurl}" target="_blank" style="color:#656565;" >Learn more  »</a>
                    </td>
                  </tr>
                  <tr>
                    <td width="507" height="23" valign="top" style="padding:10px;">
                      <strong>Did you know? AKDN has participated in 8 projects to rehabilitate or create parks, historic sites and gardens, which together attract 5 million people a year, and have attracted 43 million visitors since 2004.</strong>
                    </td>
                  </tr>
                </tbody>
              </table>
            </td>
          </tr>
        </tbody>
      </table>
    </div>
    <div class="horizontal4" style="max-width:650px;width:100%;height:1px;background-color:#DBDBDB;margin-bottom:10px;margin-top:10px;clear:both;" >
    </div>

    <div class="nl" style="text-align:center;align-content:center;font-family:arial;color:#656565;font-size:11px;line-height:16px;padding-top:10px;" >
      <table width="100%" border="0" cellspacing="0" cellpadding="0">
        <tbody style="border:0;">
          <tr>
            <td width="113" align="center"><img src="http://cdn.iiuk.org/akdn/logo-akdn-3.png" alt="AKDN" width="80" height="37" title="AKDN"/></td>
            <td width="518">You can learn more about AKDN's work by visiting our <a href="http://www.akdn.org/" style="color:#656565;" ><strong>Website »</strong></a><strong></strong> or subscribing to our <a href="http://www.akdn.org/subscribe" style="color:#656565;" ><strong>Newsletter »</strong></a>
            </td>
          </tr>
        </tbody>
      </table>
    </div>
  </div>
</div>
