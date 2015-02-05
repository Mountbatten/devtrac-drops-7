Usage
=====

After installing module and dependencies.

Example use for a _campaign_ sending to one user.
 * Add the _questionnaire field_ to _user_ 
 `http://example.com/admin/config/people/accounts/fields`
 * Create a _questionnaire_
 * Go to the _Campaign_ tab, and select _Add_.
 * Choose to _Select users_ _Single user_ and press _Next_.
 * Now you can type in the username to recieve the questionnaire, and press
 _Next_ again.
 * Here you need to select a sending method. 
 @todo there is no sending method in the module; SMS is written and in
 questionnaire sms. There should be a dummy test plugin as well at least, see
 todo note below.
 * In the final section _Settings_ you can add a human readable _name_, this is
 used on the campaign list page. Select the _questionnaire field_ that you
 created at the start, and check the box that the campaign is _active_ (this
 means it will be sent to your sending handler immediately).

Done.

Dependencies
============

questionnaire
-------------

Naturally. The campaign module adds a tab to all questionnaires to allow you to
send the questionnaire to a selection of users.

questionnaire field
-------------------

This field must be attached to any entities to receive a campaign. The
questionnaire is recorded in the field.

Plugins can use this to select entities to receive campaigns (eg. select
all entities that have not received the questionnaire before, or since
a particular date). Plugins can also use this to decide whether start
delivering a campaign (eg. don't send a questionnaire to an entity presently
doing another).

Plugins
=======

userlist provider
-----------------

Returns a list of entity ids to receive the campaign.

Presently implemented:

 * Search API Saved Searches. Select a saved search and all the entities
 returned by the search will be sent to receive the questionnaire. Re-run the
 campaign and new entities in the search will be sent to receive the
 questionnaire.
 
 * User. Select a single user who will be sent to receive the questionnaire.

sending handler
---------------

Receives a list of entity ids to send a questionnaire to.

Presently implemented:

 * in `questionnaire_sms`: Immediately store ids in a queue. Work off queue
 by sending first question to the entity, and records this by adding the
 questionnaire to the `questionnaire field`.

TODO
====

Enable/Disable
--------------

 * Better Enable/Disable handling. At the moment when an `enabled` campaign
 is saved it is run. For the `userlist_provider` based on `search api saved
 searches` this will send to any new entities in the search. For the
 `userlist_provider` user this will send the user the camapign again (if
 the sending_handler permits this naturally).
 * Scheduling. The ability to enable/disable the campaign based on date.

Save Searches
-------------

 * At the moment saved searches are not removed from the list when they are
 in use on a campaign. They either (a) need to store their own blob of ids
 to compare against; or (b) be removed from the offered saved searches when
 in use. Alternatively the updated date method could be used - more work.

Questionnaire Field
-------------------

 * Campaigns required the `questionnaire field` to be attached to the entity
 that the user is sending questionnaires to. This is not done automatically.
 There is a check that for `questionnaire field`. But no check that it is on
 the entities returned by the `userlist_provider`. The `sending_handler` can
 choose what to do if there is no `questionnaire field` on the entity - 
 `questionnaire sms` at present will not start and logs an error to the
 watchdog. Options (a) better documentation, (b) automatically adding the
 field to an entity if it`s not attached (could be an unpleasant suprise for
 some).
 * If there is only one questionnaire field the selection box does not need to
 appear, and it can be defaulted to.
 * To have one recipient added to more than one campaign and have the next
 campaign appear when a user completes a campaign, this field must be a multi
 value field.

Sending handler
---------------

 * `sending handler` is the new name. It comes up in the code as `sender`. All
 `sending` instances want to be changed to sending_handler or apropriate.
 * Needs a parent, and commented example, class written.
 * Sending handler options. Common option here would be a textfield to enter a
 token to state which field should be used by the handler to know where to send
 the questionnaire, ie e-mail address field, phone number field etc.

Testing
-------

 * Ahum.
 * Minimum required two plugins one for `userlist_provider` and one for
 `sending_handler` to act as 'mocks'.
