api = 2
core = 7.x

; Include the definition for how to build Drupal core directly, including patches:
; This is the 'should' way, but our jenkins server does drush make http:// and that
; does not work with includes. So we patch from within this file
;includes[] = drupal-org-core.make

projects[drupal][type] = core
projects[drupal][version] = 7.32
projects[drupal][download][type] = "git"
projects[drupal][download][branch] = "master"
projects[drupal][download][url]  = "git://github.com/pantheon-systems/drops-7.git"

; Patches for Core
;
; Enables recursive dependencies in DrupalWebTestCases::setUp() during install.
; projects[drupal][patch][] = https://drupal.org/files/1093420-22.patch
;
; Allow cron to populate serach indexes as user with uid 1 instead of anonymous.
; Fixes access issues to terms that are not accessible to authenticated users.
projects[drupal][patch][] = https://www.drupal.org/files/issues/drupal_cron-user.patch
;
; Allows uploading of multiple images using the devtrac api.
; projects[drupal][patch][] = https://www.drupal.org/files/issues/programmatically_add_images-1912458-4.patch

; Pull the devtrac project from git
projects[devtrac][type] = "profile"
projects[devtrac][download][type] = "git"
projects[devtrac][download][branch] = "7.x-1.x"
; projects[devtrac][download][revision] = da7c9b9c1f623901e21d7803a19f0ab3df841c1e
projects[devtrac][download][url]  = "http://git.drupal.org/project/devtrac.git"
