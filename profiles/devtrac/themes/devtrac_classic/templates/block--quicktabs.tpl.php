<?php

/**
 * @file
 * Overrides Quicktabs block theme. Removes the title, Always!
 *
 * 
 * @see template_preprocess()
 * @see template_preprocess_block()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>
<div id="<?php print $block_html_id; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="content"<?php print $content_attributes; ?>>
    <?php print $content ?>
  </div>
</div>
