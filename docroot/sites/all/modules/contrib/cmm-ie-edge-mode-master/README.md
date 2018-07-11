# cmm-ie-edge-mode

The best way to force IE to use the edge render engine is by sending X-UA-Compatible IE=Edge field in http header respond. However, this approach requires you have some drupal programming knowledge. - See more at: http://cheekymonkeymedia.ca/blog/drupal-planet/how-deal-ieinternet-explorer-11-render-issues

-- REQUIREMENTS --

- Drupal 7

-- INSTALLATION --

- Extract the ie_edge_mode module to /sites/all/modules
- Enable the module at /admin/modules
- Flush Cache