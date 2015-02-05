@api
Feature: Field Worker Add Submission To A Field Trip Report Item Test
  In order to add a submission
  As a 'field worker'
  I need to create a field trip report item with the same Location type as the question.

  Background:
    Given I am logged in as a user with the "administrator" role
    And I follow "Admin" in the "userprofile_menu" region
    And I click "Devtrac 7"
    And I should see the link "Edit Questions"
    And I click "Edit Questions"
    And I should see the heading "Edit Questions"
    And I click "Add New Question"
    When I fill in "Question " with "Do you like the standard of primary education in Jinja?"
    And I select "- - Primary Private School" from "Location Type"
    And I fill in "The type of question. " with "select"
    And I fill in question Options field "1" with "Yes"
    And I press "Add another item"
    And I fill in question Options field "2" with "No"
    And I select "- Primary school" from "Sector"
    And I press "Save"
    And I should see "Question Do you like the standard of primary education in Jinja? has been created."
    Given I am logged in as a user with the "field worker" role
    And I follow "Add Field Trip" in the "userprofile_menu" region
    And I should see "Create Field Trip"
    And I fill in "Title " with "behatFieldTrip"
    And I select "fieldwork" from "Purpose "
    And I fill in "Percentage " with "100"
    And I press "Save"
    And I should see "Field Trip behatFieldTrip has been created."
    And I should see "In Progress"
    And I follow "Add Site Report"
    And I select the radio button "Site Visit"
    And I press "Submit"
    And I should see "Create Location"
    And I fill in "Name " with "behatLocation"
    And I fill hidden longitude and latitude field with "32.57240281174459" and "0.3536203279726586" for the "Site Visit"
    And I select "- - Primary Private School" from "Location Types"
    And I press "Save"
    And I should see "Location behatLocation has been created."

    Scenario: Field Worker clicks the Questions Link on a Field Report Item
      Given I click the Welcome Link
      And I click "Open FieldTrips" in the "userprofile_quicktabs" region
      And I follow "behatFieldTrip"
      And I follow "Site Visit at behatLocation" in the "site_visits" region
      And I click the link "Add Questionnaire" in the dropdown menu
      When I click "Questions"
      Then I should see "Do you like the standard of primary education in Jinja?"

    Scenario: Field Worker submits a questionnaire on a Field Report Item
      Given I click the Welcome Link
      And I click "Open FieldTrips" in the "userprofile_quicktabs" region
      And I follow "behatFieldTrip"
      And I follow "Site Visit at behatLocation" in the "site_visits" region
      And I click the link "Add Questionnaire" in the dropdown menu
      When I fill in "Do you like the standard of primary education in Jinja?" with "Yes"
      And I press "Submit"
      Then I should see "Thank you for your submission"
  
    Scenario: Field Worker checks for their submission
      Given I click the Welcome Link
      And I click "Open FieldTrips" in the "userprofile_quicktabs" region
      And I follow "behatFieldTrip"
      And I follow "Site Visit at behatLocation" in the "site_visits" region
      And I click the link "Add Questionnaire" in the dropdown menu
      And I fill in "Do you like the standard of primary education in Jinja?" with "Yes"
      And I press "Submit"
      And I should see "Thank you for your submission"
      And I click the link "Add Questionnaire" in the dropdown menu
      And I click "Submissions"
      And I click "edit"
      Then I should see "Questionnaire for Site Visit at behatLocation"
      And the "Do you like the standard of primary education in Jinja?" field should contain "Yes"