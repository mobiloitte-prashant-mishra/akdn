<?php if (isset($full_node->nid)): ?>
<li class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php print render(node_view($full_node, 'search_result')); ?>
</li>
<?php endif; ?>