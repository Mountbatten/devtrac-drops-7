Feature: Devtrac Behat Test if the field trip is being created
  Background: In order to create a field trip, you have to be logged in

  @api
  Scenario: Devtrac Behat create Field Trip
    Given I am logged in as a user with the "field worker" role
    And I follow "Add Field Trip" in the "userprofile_menu" region 
    And I should see "Create Field Trip"
    And I fill in "Title" with "fieldtripTest"
    And I fill in "Purpose" with "1"
    And I fill in "Percentage" with "100"
    And I fill in "field_fieldtrip_start_end_date[und][0][value][date]" with "14/7/2012"
    And I fill in "field_fieldtrip_start_end_date[und][0][value2][date]" with "14/7/2017"
    And I press the "Save" button
    And I should see "Field Trip fieldtripTest has been created."
    And I should see "Status: In Progress"
    And I should see the link "Add Site Report"
    When I follow "Add Site Report"
    Then I should see "Site Report Type"
    And I select the radio button "Site Visit"
    And I press the "Submit" button 
    And I should see "Create Location"

    And I fill in "Name" with "Site Visit sample"
    And I fill in "Unique ID" with "12345678"
    And I fill hidden longitude and latitude field with "32.57240281174459" and "0.3536203279726586" for the "Site Visit"
    And I select "- - Primary Private School" from "Location Types"
    And I press the "Save" button
    And I should see "Location Site Visit sample has been created"
    And I follow "Site Visit at Site Visit sample" in the "site_visits" region
    And I should see "Site Visit at Site Visit sample"
    And I click the link "Add Actionitem" in the dropdown menu
    Then I should see "Create Action Item"

    And I fill in "Title" with "Sample Action Item"
    And I fill in "taxonomy_iati_custom_admin_unit[und][]" with "32"
    And I fill in "Sector" with "11"
    And I fill in "Status" with "1"
    And I fill in "Priority" with "1"
    And I fill in "field_actionitem_due_date[und][0][value][date]" with "04/10/2014"
    And I fill in "field_actionitem_responsible[und][0][target_id]" with "Test Test (19)"
    And I fill in "Follow-up Task" with "Sample follow up task"
    And I fill in "field_action_items_tags[und]" with "education"
    And I press the "Save" button
    # And print last response
    And I should see "Action Item Sample Action Item has been created"
