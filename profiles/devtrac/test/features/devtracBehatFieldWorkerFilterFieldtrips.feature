@api
Feature: Field Worker filters fieldtrips
  In order to filter fieldtrips
  As a 'field worker'
  I need to create field trips with different admin units, statuses, dates visited and locations

  Background:
    Given I am logged in as a user with the "field worker" role
    And I follow "Add Field Trip" in the "userprofile_menu" region
    And I fill in "Title " with "BehatFieldTrip1"
    And I select "fieldwork" from "Purpose "
    And I fill in "Percentage " with "100"
    And I fill in "Date" with "01/09/2014"
    And I press "Save"
    And I should see "Field Trip BehatFieldTrip1 has been created."
    And I follow "Add Field Trip" in the "userprofile_menu" region
    And I fill in "Title " with "BehatFieldTrip2"
    And I select "Leisure" from "Purpose "
    And I fill in "Percentage " with "100"
    And I fill in "Date" with "02/09/2014"
    And I press "Save"
    And I should see "Field Trip BehatFieldTrip2 has been created."
    And I follow "Add Field Trip" in the "userprofile_menu" region
    And I fill in "Title " with "BehatFieldTrip3"
    And I select "fieldwork" from "Purpose "
    And I fill in "Percentage " with "100"
    And I fill in "Date" with "02/09/2014"
    And I press "Save"
    And I should see "Field Trip BehatFieldTrip3 has been created."
    And I am an anonymous user
    And I am logged in as a user with the "field worker" role
    And I follow "Add Field Trip" in the "userprofile_menu" region
    And I fill in "Title " with "BehatFieldTrip4"
    And I select "Leisure" from "Purpose "
    And I fill in "Percentage " with "100"
    And I fill in "Date" with "01/09/2014"
    And I press "Save"
    And I should see "Field Trip BehatFieldTrip4 has been created."
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
    And I follow "Field trips"
    And I should see the link "BehatFieldTrip1"
    And I should see the link "BehatFieldTrip2"
    And I should see the link "BehatFieldTrip3"
    And I should see the link "BehatFieldTrip4"
    And I should see the link "BehatFieldTrip5"
    

  Scenario: Filter By Admin Unit
    Given I go to the homepage
    And I follow "Field trips"
    When I follow "(none) " in the "first_sidebar" region
    Then I should see the link "BehatFieldTrip1"
    And I should see the link "BehatFieldTrip2"
    And I should see the link "BehatFieldTrip3"
    And I should see the link "BehatFieldTrip4"
    And I should see the link "BehatFieldTrip5"

  Scenario: Filter By Date
    Given I go to the homepage
    And I follow "Field trips"
    When I follow "September 2, 2014 " in the "first_sidebar" region
    Then I should not see the link "BehatFieldTrip1"
    And I should see the link "BehatFieldTrip2"
    And I should see the link "BehatFieldTrip3"
    And I should not see the link "BehatFieldTrip4"
    And I should not see the link "BehatFieldTrip5"

  Scenario: Filter By Status
    Given I go to the homepage
    And I follow "Field trips"
    When I follow "In Progress " in the "first_sidebar" region
    Then I should see the link "BehatFieldTrip1"
    And I should see the link "BehatFieldTrip2"
    And I should see the link "BehatFieldTrip3"
    And I should see the link "BehatFieldTrip4"
    And I should see the link "BehatFieldTrip5"

  Scenario: Filter By Purpose
    Given I go to the homepage
    And I follow "Field trips"
    When I follow "Leisure " in the "first_sidebar" region
    Then I should not see the link "BehatFieldTrip1"
    And I should see the link "BehatFieldTrip2"
    And I should not see the link "BehatFieldTrip3"
    And I should see the link "BehatFieldTrip4"
    And I should not see the link "BehatFieldTrip5"

  Scenario: Filter By User
    Given I go to the homepage
    And I follow "Field trips"
    When I filter by current user
    Then I should not see the link "BehatFieldTrip1"
    And I should not see the link "BehatFieldTrip2"
    And I should not see the link "BehatFieldTrip3"
    And I should see the link "BehatFieldTrip4"
    And I should see the link "BehatFieldTrip5"