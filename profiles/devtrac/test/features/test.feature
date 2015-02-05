Feature: Site installation

  Scenario: Installation succeeded
    Given I am on "/"
    Then I should not see "Welcome to devtrac distro"

  @api
  Scenario: Installation succeeded with js enabled
    Given I am on "/"
    Then I should see not "Welcome to devtrac distro"
