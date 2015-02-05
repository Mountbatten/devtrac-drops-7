@api
Feature: Field Worker filters site reports
  In order to filter site reports
  As a 'field worker'
  I need to create site reports with different admin units, types, statuses, dates visited, locations and users

  Background:
    Given I am logged in as a user with the "field worker" role
    And I follow "Add Field Trip" in the "userprofile_menu" region
    And I fill in "Title " with "BehatFieldTrip1"
    And I select "fieldwork" from "Purpose "
    And I fill in "Percentage " with "100"
    And I fill in "Date" with "01/09/2014"
    And I press "Save"
    And I should see "Field Trip BehatFieldTrip1 has been created."
    And I should see "In Progress"
    And I follow "Add Site Report"
    And I select the radio button "Human Interest Story"
    And I press "Submit"
    And I should see "Create Location"
    And I fill in "Name " with "behatLocation1"
    And I fill hidden longitude and latitude field with "32.57240281174459" and "0.3536203279726586" for the "Site Visit"
    And I select "- - Primary Private School" from "Location Types"
    And I press "Save"
    And I should see "Location behatLocation1 has been created."
    And I follow "Add Field Trip" in the "userprofile_menu" region
    And I fill in "Title " with "BehatFieldTrip2"
    And I select "Leisure" from "Purpose "
    And I fill in "Percentage " with "100"
    And I fill in "Date" with "02/09/2014"
    And I press "Save"
    And I should see "Field Trip BehatFieldTrip2 has been created."
    And I should see "In Progress"
    And I follow "Add Site Report"
    And I select the radio button "Site Visit"
    And I press "Submit"
    And I should see "Create Location"
    And I fill in "Name " with "behatLocation2"
    And I fill hidden longitude and latitude field with "32.57240281174459" and "0.3536203279726586" for the "Site Visit"
    And I select "- - Primary Private School" from "Location Types"
    And I press "Save"
    And I should see "Location behatLocation2 has been created."
    And I follow "Add Field Trip" in the "userprofile_menu" region
    And I fill in "Title " with "BehatFieldTrip3"
    And I select "fieldwork" from "Purpose "
    And I fill in "Percentage " with "100"
    And I fill in "Date" with "02/09/2014"
    And I press "Save"
    And I should see "Field Trip BehatFieldTrip3 has been created."
    And I should see "In Progress"
    And I follow "Add Site Report"
    And I select the radio button "Site Visit"
    And I press "Submit"
    And I should see "Create Location"
    And I fill in "Name " with "behatLocation3"
    And I fill hidden longitude and latitude field with "32.57240281174459" and "0.3536203279726586" for the "Site Visit"
    And I select "- - Primary Private School" from "Location Types"
    And I press "Save"
    And I should see "Location behatLocation3 has been created."
    And I am an anonymous user
    And I am logged in as a user with the "field worker" role
    And I follow "Add Field Trip" in the "userprofile_menu" region
    And I fill in "Title " with "BehatFieldTrip4"
    And I select "Leisure" from "Purpose "
    And I fill in "Percentage " with "100"
    And I fill in "Date" with "01/09/2014"
    And I press "Save"
    And I should see "Field Trip BehatFieldTrip4 has been created."
    And I should see "In Progress"
    And I follow "Add Site Report"
    And I select the radio button "Site Visit"
    And I press "Submit"
    And I should see "Create Location"
    And I fill in "Name " with "behatLocation4"
    And I fill hidden longitude and latitude field with "32.57240281174459" and "0.3536203279726586" for the "Site Visit"
    And I select "- - Primary Private School" from "Location Types"
    And I press "Save"
    And I should see "Location behatLocation4 has been created."
    And I follow "Add Field Trip" in the "userprofile_menu" region
    And I fill in "Title " with "BehatFieldTrip5"
    And I select "fieldwork" from "Purpose "
    And I fill in "Percentage " with "100"
    And I fill in "Date" with "03/09/2014"
    And I press "Save"
    And I should see "Field Trip BehatFieldTrip5 has been created."
    And I should see "In Progress"
    And I follow "Add Site Report"
    And I select the radio button "Site Visit"
    And I press "Submit"
    And I should see "Create Location"
    And I fill in "Name " with "behatLocation5"
    And I fill hidden longitude and latitude field with "32.57240281174459" and "0.3536203279726586" for the "Site Visit"
    And I select "- - Primary Private School" from "Location Types"
    And I press "Save"
    And I should see "Location behatLocation5 has been created."
    And I go to the homepage
    And I follow "Site Reports"
    And I follow "List" in the "userprofile_menu" region
    And I should see the link "Human Interest Story at behatLocation1"
    And I should see the link "Site Visit at behatLocation2"
    And I should see the link "Site Visit at behatLocation3"
    And I should see the link "Site Visit at behatLocation4"
    And I should see the link "Site Visit at behatLocation5"
    

  Scenario: Filter By Admin Unit
    Given I go to the homepage
    And I follow "Site Reports"
    And I follow "List" in the "userprofile_menu" region
    When I follow "(none) " in the "first_sidebar" region
    Then I should see the link "Human Interest Story at behatLocation1"
    And I should see the link "Site Visit at behatLocation2"
    And I should see the link "Site Visit at behatLocation3"
    And I should see the link "Site Visit at behatLocation4"
    And I should see the link "Site Visit at behatLocation5"

  Scenario: Filter By Date
    Given I go to the homepage
    And I follow "Site Reports"
    And I follow "List" in the "userprofile_menu" region
    When I follow "September 2, 2014 " in the "first_sidebar" region
    Then I should not see the link "Human Interest Story at behatLocation1"
    And I should see the link "Site Visit at behatLocation2"
    And I should see the link "Site Visit at behatLocation3"
    And I should not see the link "Site Visit at behatLocation4"
    And I should not see the link "Site Visit at behatLocation5"

  Scenario: Filter By Status
    Given I go to the homepage
    And I follow "Site Reports"
    And I follow "List" in the "userprofile_menu" region
    When I follow "In Progress " in the "first_sidebar" region
    Then I should see the link "Human Interest Story at behatLocation1"
    And I should see the link "Site Visit at behatLocation2"
    And I should see the link "Site Visit at behatLocation3"
    And I should see the link "Site Visit at behatLocation4"
    And I should see the link "Site Visit at behatLocation5"

  Scenario: Filter By Report Type
    Given I go to the homepage
    And I follow "Site Reports"
    And I follow "List" in the "userprofile_menu" region
    When I follow "Human Interest Story " in the "first_sidebar" region
    Then I should see the link "Human Interest Story at behatLocation1"
    And I should not see the link "Site Visit at behatLocation2"
    And I should not see the link "Site Visit at behatLocation3"
    And I should not see the link "Site Visit at behatLocation4"
    And I should not see the link "Site Visit at behatLocation5"

  Scenario: Filter By User
    Given I go to the homepage
    And I follow "Site Reports"
    And I follow "List" in the "userprofile_menu" region
    When I filter by current user
    Then I should not see the link "Human Interest Story at behatLocation1"
    And I should not see the link "Site Visit at behatLocation2"
    And I should not see the link "Site Visit at behatLocation3"
    And I should see the link "Site Visit at behatLocation4"
    And I should see the link "Site Visit at behatLocation5"

  Scenario: Filter By Location Types
    Given I go to the homepage
    And I follow "Site Reports"
    And I follow "List" in the "userprofile_menu" region
    When I follow "Schools " in the "first_sidebar" region
    Then I should see the link "Human Interest Story at behatLocation1"
    And I should see the link "Site Visit at behatLocation2"
    And I should see the link "Site Visit at behatLocation3"
    And I should see the link "Site Visit at behatLocation4"
    And I should see the link "Site Visit at behatLocation5"