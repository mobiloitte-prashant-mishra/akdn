<div class="akdn-news-page-careers">
  <div class="view-content">
    <?php $i = 0; ?>
    <?php foreach ($jobs->item as $key => $value): $i++; ?>
      <div class="careers-block-content">
          <?php if($value->title): ?>
            <h4><?php print $value->title; ?></h4>
          <?php endif; ?>
          <?php if($value->description): ?>
            <div class="job-description"><?php print $value->description; ?></div>
          <?php endif; ?>
          <?php if($value->link): ?>
            <div class="job-link"><?php print l(t('[ FIND OUT MORE ]'), $value->link, array('attributes' => array('target'=>'_blank'))); ?></div>
          <?php endif; ?>            
      </div>
    <?php 
    if($i== 3)break;
    endforeach; ?>
  </div>
    <div class="all-jobs-link">
      <?php print l(t('[ VIEW ALL OPPORTUNITIES ]'), 
          'https://krb-xjobs.brassring.com/tgwebhost/searchresults.aspx?PartnerId=30025&SiteId=5750&amp;Function=LinkQuery&LinkId=642', 
            array('external' => TRUE, 'attributes' => array('target'=>'_blank'))); ?>
    </div>
</div>