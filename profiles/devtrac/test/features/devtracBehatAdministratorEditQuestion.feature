@api
Feature: Administrator edits Question
  In order to change a question,
  As an 'administrator'
  I need to edit the question.

  Background:
    Given I am logged in as a user with the "administrator" role
    And I click "Admin"
    And I click "Devtrac 7"
    And I click "Edit Questions"
    And I click "Add New Question"
    And I fill in "Question " with "Do you like the standard of primary education in Jinja?"
    And I select "- - Primary Private School" from "Location Type"
    # And I fill in "field_question_subject[und]" with "494"
    And I fill in "The type of question. " with "select"
    And I fill in question Options field "1" with "Yes"
    And I press "Add another item"
    And I fill in question Options field "2" with "No"
    And I select "- Primary school" from "Sector"
    And I press "Save"
    And I should see "Question Do you like the standard of primary education in Jinja? has been created."

  Scenario: Administrator User edits a question
    Given I am logged in as a user with the "administrator" role
    And I click "Admin"
    And I click "Devtrac 7"
    And I click "Edit Questions"
    And I click "Edit" in the "Do you like the standard of primary education in Jinja?" row
    And I select "- Pharmacy" from "Sector"
    And I press "Save"
    Then I should see "Question Do you like the standard of primary education in Jinja? has been updated."