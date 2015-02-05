Feature: Devtrac Site Behat Admin Can Create a Field worker account
  In order to login, you must be on the login page
  Background: In order to login, you must be on the login page, to create a demo user, you must have admin rights, in order to log out, you must be logged in
  
  @api
  Scenario: Devtrac Login Test
    Given I go to the homepage
    And I follow "Sign in"
    And I fill in "Username" with "admin"
    And I fill in "Password" with "admin"
    And I press the "Log in" button
    Then I am on "user/1/edit"
  @api
  Scenario: Devtrac Admin creates user details
    And I am logged in as a user with the "administrator" role
    #Given I am on "/admin/people/create"
    And I click the link "Add user" in the dropdown menu
    And I should see "This web page allows administrators to register new users. Users' e-mail addresses and usernames must be unique."
    And I fill in "Username" with "user_demo"
    And I fill in "E-mail address" with "user_demo@mountbatten.net"
    And I fill in "Password" with "user_demo"
    And I fill in "Confirm password" with "user_demo"
    And I select the radio button "Active"
    And I check the box "authenticated user"
    And I check the box "field worker"
    And I fill in "Function" with "3"
    And I fill in "Academic Degree(s)" with "Bsc. Quality Assurance"
    And I fill in "Manager" with "admin (1)"
    And I fill in "Department" with "6"
    And I fill in "First Name" with "User Demo"
    And I fill in "Surname" with "User Demo Demo"
    And I fill in "About Me" with "Iam a hoax user demo test account"
    And I press "Create new account"
    And I am at "admin/people/create"
    And I should see "STATUS"
    

  @api
  Scenario: Devtrac Logout Test
    Given I am logged in as a user with the "administrator" role
    And I follow "Sign out"
    Then I am on the homepage

