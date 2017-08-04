<div clas="">
  <?php
  foreach ($output as $key => $value) {
//    print '<pre>';
//    print_r($value); die;
    $image = $value->Image;
    $primary_cat = $value->Primary-Category;
    $title = $value->Title;
    $date = $value->Date;
    $body = $value->Body;
    $read_more = $value->Read-More;
    ?>
    <?php if ($image) { ?>
      <div class="">
        <?php print $image; ?>
      </div>
    <?php } ?>
    <?php if ($primary_cat) { ?>
      <div class="">
        <?php print $primary_cat; ?>
      </div>
    <?php } ?>
    <?php if ($title) { ?>
      <div class="">
        <?php print $title; ?>
      </div>
    <?php } ?>
    <?php if ($date) { ?>
      <div class="">
        <?php print $date; ?>
      </div>
    <?php } ?>
    <?php if ($body) { ?>
      <div class="">
        <?php print $body; ?>
      </div>
    <?php } ?>
  <?php if ($read_more) { ?>
      <div class="">
        <?php print $read_more; ?>
      </div>
    <?php } ?>
    <?php
//  print '<pre>';
//  print_r($value); die;
  }
  ?>
</div>