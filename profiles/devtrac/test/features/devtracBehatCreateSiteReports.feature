Feature: Devtrac Behat test create different site reports
  Background:In order to create site reports, you have to be logged in with minimum permissions(atleast field worker). 
  The report can be of type (1)Site Visit (2)Roadsite Observation (3) Human Interest Story
  
  @api
  Scenario: Create Site Report for type Site Visit
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
    # And I should see "Location Site Visit sample has been created"
   
  @api
  Scenario: Create Site Report for Roadsite Observation
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
    And I select the radio button "Roadside Observation"
    And I press the "Submit" button 
    And I should see "Create Field Trip Report Item"

    And I fill in "Title of Site Visit" with "Roadsite Observation sample"
    And I fill in "Admin Unit" with "32"
    And I fill in "Sector" with "11"
    And I fill in "field_ftritem_date_visited[und][0][value][date]" with "01/09/2014"
    And I fill in "Public Summary" with "pablique sammary"
    And I fill in "Full Report" with "Full report place holder"
    And I fill hidden longitude and latitude field with "32.57240281174459" and "0.3536203279726586" for the "Roadside Observation"
    # And I select "- - Primary Private School" from "Location Types"
    And I press the "Save" button
    And I should see "Location Roadsite Observation sample has been created"

  @api
  Scenario: Create Site Report for Human Interest Story
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
    And I select the radio button "Human Interest Story"
    And I press the "Submit" button 
    And I should see "Create Location"

    And I fill in "Name" with "Human Interest Story Sample"
    And I fill in "Unique ID" with "12345678"
    And I fill hidden longitude and latitude field with "32.57240281174459" and "0.3536203279726586" for the "Human Interest Story"
    And I select "- - Primary Private School" from "Location Types"
    And I press the "Save" button
    And I should see "Location Human Interest Story Sample has been created"
  
