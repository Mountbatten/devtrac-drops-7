Feature: Devtrac Site Behat Create Field Trip Test
  In order to create a field trip, you have to be logged in and have permissions to create a field trip
  Background: In order to create a field trip, you have to be logged in and have permissions to create a field trip
  
  @api
  Scenario: Devtrac Site Behat Check For Field Trip form Test
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

  @api
  Scenario: Devtrac Testing for all empty fields cases
    Given I am logged in as a user with the "field worker" role
    And I follow "Add Field Trip" in the "userprofile_menu" region 
    And I should see "Create Field Trip"
     When I fill in "Title" with ""
    And I fill in "Purpose " with "1"
    And I fill in "Percentage" with "100" 

    When I fill in "Title" with "fieldtitle"
    And I fill in "Purpose " with "_none"
    And I fill in "Percentage" with "100"

    When I fill in "Title" with "fieldtitle"
    And I fill in "Purpose " with "1"
    And I fill in "Percentage" with ""

    And I press the "Save" button
    Then I should see "ERROR"
    When I follow "Sign out"
    Then I am on "/"
