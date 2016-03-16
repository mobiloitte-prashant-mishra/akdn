<?php

/**
 * @file views-limit-grouping.tpl.php
 * Basically, just a copy of views-view-unformatted.tpl.php.
 */
?>
 <?php foreach ($rows as $id => $row): ?>
<?php if($id < 2) { ?>
<div class="views-limit-grouping-group">
  <?php if (!empty($title)): ?>
    <h3><?php print $title; ?></h3>
  <?php endif; ?>
    <div class="views-row views-row-<?php print $zebra; ?> <?php print $classes; ?>">
      <?php print $row; ?>
    </div>
   </div>
<?php } ?>
 <?php endforeach; ?>
