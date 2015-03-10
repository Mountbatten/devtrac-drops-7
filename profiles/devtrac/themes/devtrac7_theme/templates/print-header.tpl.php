<div class='print-header'>
  <?php 
  global $base_url;
  // Ok, this is weird, we want transparency, but that doesnt exist in a .jpg
  // And we want the logo BIGGER (221/48px) but then the logo becomes blurry
  // Who did this? Created an issue for this.
  if (file_exists(DRUPAL_ROOT . "/{$theme_path}/images/devtrac_print_logo.png")): ?>
    <img class='logo' alt="<?php print $site_name ?>" src="<?php print $base_url . "/" . $theme_path ?>/images/devtrac_print_logo.png" />
  <?php else: ?>
    <h1 class='site-name'><?php print $site_name ?></h1>
  <?php endif; ?>
</div>
