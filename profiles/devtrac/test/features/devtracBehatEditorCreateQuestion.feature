@api
Feature: Editor creates Question
  In order to ask users questions,
  As an 'editor'
  I need to create a question.
  
  Background:
    Given I am logged in as a user with the "editor" role
    And I follow "Admin" in the "userprofile_menu" region
    And I click "Devtrac 7"
    And I should see the link "Edit Questions"
    And I click "Edit Questions"
    And I should see the heading "Edit Questions"
    And I click "Add New Question"
    And I should not see "Access Denied"
    And I should see the heading "Create Question"

  Scenario: Editor User adds a Select Question
    Given I fill in "Question " with "Do you like the standard of primary education in Jinja?"
    And I select "- - Primary Private School" from "Location Type"
    # And I fill in "field_question_subject[und]" with "494"
    And I fill in "The type of question. " with "select"
    And I fill in question Options field "1" with "Yes"
    And I press "Add another item"
    And I fill in question Options field "2" with "No"
    And I select "- Primary school" from "Sector"
    And I press "Save"
    Then I should see "Question Do you like the standard of primary education in Jinja? has been created."

  Scenario: Editor User adds a Checkboxes Question
    Given I fill in "Question " with "Do you like the standard of primary education in Kampala?"
    And I select "- - Public Government School" from "Location Type"
    # And I fill in "field_question_subject[und]" with "494"
    And I select "Checkboxes" from "The type of question. "
    And I fill in question Options field "1" with "Yes"
    And I press "Add another item"
    And I fill in question Options field "2" with "No"
    And I select "- Primary school" from "Sector"
    And I press "Save"
    Then I should see "Question Do you like the standard of primary education in Kampala? has been created."


  Scenario: Editor User adds a Radios Question
    Given I fill in "Question " with "Do you like the standard of primary education in Rakai?"
    And I select "- - Public Community School" from "Location Type"
    # And I fill in "field_question_subject[und]" with "494"
    And I select "Radios" from "The type of question. "
    And I fill in question Options field "1" with "Yes"
    And I press "Add another item"
    And I fill in question Options field "2" with "No"
    And I select "- Primary school" from "Sector"
    And I press "Save"
    Then I should see "Question Do you like the standard of primary education in Rakai? has been created."

  Scenario: Editor User adds a Number Question
    Given I fill in "Question " with "What is the standard number of teachers in a secondary school?"
    And I select "- - Secondary Private School" from "Location Type"
    # And I fill in "field_question_subject[und]" with "494"
    And I select "Number" from "The type of question. "
    And I select "- Primary school" from "Sector"
    And I press "Save"
    Then I should see "Question What is the standard number of teachers in a secondary school? has been created."

  Scenario: Editor User adds a Message Question
    Given I fill in "Question " with "Thank you for filling this questionnaire."
    And I select "- - Secondary Community School" from "Location Type"
    # And I fill in "field_question_subject[und]" with "494"
    And I select "Message" from "The type of question. "
    And I select "- Primary school" from "Sector"
    And I press "Save"
    Then I should see "Question Thank you for filling this questionnaire. has been created."