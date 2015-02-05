Are you stuck with date fields when you just want to search for date part only?
As a developer, do you think about the complexity of searching on date time
value when you need only date part?

This module provides a processor that will remove all the time part in the
indexed value, therefore you can search and filter data easier as you want.

That's it, very simple. If you have any ideas to improve or to extend my module,
I'm willing to hear that. Patches are always welcome.

--------------------------------------------------------------------------------
Dependencies:
--------------------------------------------------------------------------------

- Search API

--------------------------------------------------------------------------------
Installation:
--------------------------------------------------------------------------------

Download the module and simply copy it into your contributed modules folder:
[for example, your_drupal_path/sites/all/modules] and enable it from the
modules administration/management page.
More information at: Installing contributed modules (Drupal 7).

--------------------------------------------------------------------------------
Configuration
--------------------------------------------------------------------------------

After successful installation, you need to go the Workflow tab of the Index you
want to alter. In that page, choose Date processor from the list of processors.
