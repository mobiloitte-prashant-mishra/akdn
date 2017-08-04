<div class="news-community">
    <div class="view-content">
  <?php
  foreach ($output as $key => $value) {
//    print '<pre>';
//    print_r($value); die;
    $image = $value->Image;
    $primary_cat = $value->Primary;
    $title = $value->Title;
    $date = $value->Date;
    $body = $value->Body;
    $read_more = $value->Read;
    ?>
    
        <div class="news-block-content">
    <?php if ($image) { ?>
      <div class="news-image">
        <?php print $image; ?>
      </div>
    <?php } ?>
    <?php if ($primary_cat) { ?>
      <div class="article-type">
        <?php print $primary_cat; ?>
      </div>
    <?php } ?>
    <?php if ($title) { ?>
       <div class="">
           <h4>
        <?php print $title; ?>
          </h4>
      </div>
    <?php } ?>
    <?php if ($date) { ?>
      <div class="news-date">
        <?php print $date; ?>
      </div>
    <?php } ?>
    <?php if ($body) { ?>
      <div class="news-body">
        <?php print $body; ?>
      </div>
    <?php } ?>
  <?php if ($read_more) { ?>
      <div class="readmore-text">
        <?php print $read_more; ?>
      </div>
    <?php } ?>
            </div>
    <?php
//  print '<pre>';
//  print_r($value); die;
  }
  ?>
    
    </div>
</div>