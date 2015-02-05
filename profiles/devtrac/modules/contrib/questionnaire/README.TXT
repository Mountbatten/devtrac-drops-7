# Description

Questionnaire is a set of modules that allow you to dynamically gather simple 
structured data and present it in different pre-configured reports.

# Requirements

* Views: http://drupal.org/project/views
* Views Charts: http://drupal.org/project/views_charts
* Views Group By: http://drupal.org/project/views_groupby
* Features: http://drupal.org/project/features

# Basic Concepts

## Questionbaire
In the current version, any nodetype can be of type Questionnaire and there is a 
questionnaire nodetype(native questionnaire). When you see a native 
questionnaire or a node that is marked being a Questionnaire, and relevant 
Questions or Answers are available, a menu called Questions will appear that 
gives you access to the Questions for that Questionnaire.

## Questions
Questions is a node type that this module implements. There are different types
of questions. Currently:

- select
- checkboxes
- radio
- number
- calculated
- message

When you create a question, you select the type, and when relevant can also 
provide options. On option per line. The module so far is not multi-lingual, 
so Cookie and Koekje are too different answers.

## Context
The context for Questionnaire is the node to which the Questions apply. This 
does not necessarily have to be the Questionnaire! By default this is the case, 
but there is a hook (hook_getcontext) that allows you to override this, 
for example by returning the value of a nodereference field. (for example, you 
have purchased a CD. When you look at your purchase, we would like you to answer
a question about the CD. Then Purchase is the Questionnaire, CD is the context.
Another example is if you have to write a report about a school or a waterpoint
or a health center. The Report is the Questionnaire, but the S/W/HC is the 
context.)  

## Submissions
Every time a user submits 1 or more questions in one go, we call that a 
submission. Currently users can submit questions as often as they want, and 
they do not have to provide all questions when they submit.

## Answers
Each answered question is stored as an Answer. For Checkboxes, when multiple 
boxes are checked, multiple Answers are stored. All Answers go into 1 table, 
from which we generate all reports and overviews. 


# Installation

1. Normal Drupal module installation

2. Enable the questionnaire module.

3. There are two ways to create a questionnaire; either by using the 
   questionnaire node type or selecting the checkbox that marks the nodetype
   as a questionnaire.

4.a.To create a native questionnaire;
    i. Visit the node/add page and select the Questionnaire nodetype.
    ii. Enter a name, select a status, add at least one question and save. 
    iii. As long as the status of the questionnaire is not closed, you should
         see an Add Submission link on the page for the questionnaire you've 
         created.
4.b.To create a questionnaire from a node;
    i. Create a nodetype for your Questionnaires
    ii. Under the Questionnaire Fieldgroup on 
        admin/structure/types/manage/[nodetype];
        -Mark the node type as a questionnaire
        -Select the vocabulary you wish to use to connect questions to your 
         context.
        -Select your context
        -You may wish to copy the term field values from your context to your 
         answers, if so select the Copy Term Fields from Context checkbox 
        - Save
    iii. Make sure your context has a taxonomy term reference field that points 
         to the vocabulary you wish to use to connect questions to your context.
    iv. If your Questionnaire !== Context, make sure your questionnaire has an 
        entity reference field that points to the entity that is your context.
    v. Add the same term reference field to the Question nodetype.
    vi. Create a Question, a Context and a Questionnaire 
        (if Questionnaire !== Context)
    vii. Navigate to the Context or Questionnaire and click the Question tab to 
         view the questions for the context or questionnaire.
    viii. Click the Add Submission link on the context or questionnaire page, 
          fill in the form and submit.
    iv. On the Submissions tab, click any of the submissions and see the results.


## Disclaimer
We think this is a cool module that does add on to Drupal, even though there is 
already webform, cck etc. Being able to dynamically assign Questions and to 
re-use questions between Questionnaires is something that this module adds for 
example.

We just started developing, and we need to do a lot more. This version has bugs,
 we know that, and we will squash them. This release is a preview for people who
 are interested and daring. If you like it enough to help developing, or you 
have a project where you would like to use this and you need a hand, let us know.


## Credits

* [batje](http://drupal.org/user/2696)
* [Jan van Diepen](http://drupal.org/user/195578)
* [ekes] (https://www.drupal.org/u/ekes)
* [Joanna Kisaakye] (https://www.drupal.org/user/2834589)

 
