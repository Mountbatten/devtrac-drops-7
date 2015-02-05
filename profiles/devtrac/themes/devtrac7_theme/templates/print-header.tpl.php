<div class='print-header'>
  <?php if (file_exists("{$theme_path}/images/devtrac_print_logo.jpg")): ?>
    <img class='logo' alt="<?php print $site_name ?>" src="<?php print $theme_path ?>/images/devtrac_print_logo.jpg" />
  <?php else: ?>
    <h1 class='site-name'><?php print $site_name ?></h1>
  <?php endif; ?>
</div>
