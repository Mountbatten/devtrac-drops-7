<?php

/**
 * @file
 * Model editing UI.
 *
 * We make very little use of the EntityAPI interface for this - preferring 
 * instead to use views. That offers more flexibility to change a UI that will, 
 * more often than not, be end-user facing.
 */

/**
 * UI controller.
 */
class QuestionnaireAnswerUIController extends EntityDefaultUIController {

  /**
   * Overrides hook_menu() defaults. Main reason for doing this is that
   * parent class hook_menu() is optimized for entity type administration.
   */
  public function hook_menu() {
    $items = array();
    $id_count = count(explode('/', $this->path));
    $wildcard = isset($this->entityInfo['admin ui']['menu wildcard']) ? $this->entityInfo['admin ui']['menu wildcard'] : '%' . $this->entityType;


    // Menu item for viewing models
    $items['questionnaire_answer/' . $wildcard] = array(
      //'title' => 'Title',
      'title' => 'Answer title',
      'page callback' => 'questionnaire_answer_page_view',
      'page arguments' => array(1),
      'access callback' => 'questionnaire_answer_access',
      'access arguments' => array('view questionnaire answers', 1),
      'type' => MENU_CALLBACK,
    );
    return $items;
  }


  /**
   * Create the markup for the add Model Entities page within the class
   * so it can easily be extended/overriden.
   */
  public function addPage() {
    $item = menu_get_item();
    $content = system_admin_menu_block($item);

    if (count($content) == 1) {
      $item = array_shift($content);
      drupal_goto($item['href']);
    }

    return theme('questionnaire_answer_add_list', array('content' => $content));
  }

}


/**
 * Form callback wrapper: create or edit a model.
 *
 * @param $model
 *   The model object being edited by this form.
 *
 * @see model_edit_form()
 */
function questionnaire_answer_form_wrapper($model) {
  // Add the breadcrumb for the form's location.
  model_set_breadcrumb();
  return drupal_get_form('model_edit_form', $model);
}


/**
 * Form callback wrapper: delete a model.
 *
 * @param $model
 *   The model object being edited by this form.
 *
 * @see model_edit_form()
 */
function questionnaire_answer_delete_form_wrapper($model) {
  // Add the breadcrumb for the form's location.
  //model_set_breadcrumb();
  return drupal_get_form('model_delete_form', $model);
}


/**
 * Form callback: create or edit a model.
 *
 * @param $model
 *   The model object to edit or for a create form an empty model object
 *     with only a model type defined.
 */
function questionnaire_answer_edit_form($form, &$form_state, $model) {
  // Add the default field elements.
  $form['name'] = array(
    '#type' => 'textfield',
    '#title' => t('Model Name'),
    '#default_value' => isset($model->name) ? $model->name : '',
    '#maxlength' => 255,
    '#required' => TRUE,
    '#weight' => -5,
  );

  $form['data']['#tree'] = TRUE;
  $form['data']['sample_data'] = array(
    '#type' => 'checkbox',
    '#title' => t('An interesting model switch'),
    '#default_value' => isset($model->data['sample_data']) ? $model->data['sample_data'] : 1,
  );

  // Add the field related form elements.
  $form_state['model'] = $model;
  field_attach_form('model', $model, $form, $form_state);

  $form['actions'] = array(
    '#type' => 'container',
    '#attributes' => array('class' => array('form-actions')),
    '#weight' => 400,
  );

  // We add the form's #submit array to this button along with the actual submit
  // handler to preserve any submit handlers added by a form callback_wrapper.
  $submit = array();

  if (!empty($form['#submit'])) {
    $submit += $form['#submit'];
  }

  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save model'),
    '#submit' => $submit + array('model_edit_form_submit'),
  );

  if (!empty($model->name)) {
    $form['actions']['delete'] = array(
      '#type' => 'submit',
      '#value' => t('Delete model'),
      '#suffix' => l(t('Cancel'), 'admin/content/models'),
      '#submit' => $submit + array('questionnaire_answer_form_submit_delete'),
      '#weight' => 45,
    );
  }

  // We append the validate handler to #validate in case a form callback_wrapper
  // is used to add validate handlers earlier.
  $form['#validate'][] = 'questionnaire_answer_edit_form_validate';
  return $form;
}


/**
 * Form API validate callback for the model form
 */
function questionnaire_answer_edit_form_validate(&$form, &$form_state) {
  $model = $form_state['model'];

  // Notify field widgets to validate their data.
  field_attach_form_validate('model', $model, $form, $form_state);
}


/**
 * Form API submit callback for the model form.
 *
 * @todo remove hard-coded link
 */
function questionnaire_answer_edit_form_submit(&$form, &$form_state) {

  $model = entity_ui_controller('model')->entityFormSubmitBuildEntity($form, $form_state);

  // Add in created and changed times.
  if ($model->is_new = isset($model->is_new) ? $model->is_new : 0) {
    $model->created = time();
  }

  $model->changed = time();

  $model->save();
  $form_state['redirect'] = 'admin/content/models';
}

/**
 * Form API submit callback for the delete button.
 *
 * @todo Remove hard-coded path
 */
function questionnaire_answer_form_submit_delete(&$form, &$form_state) {
  $form_state['redirect'] = 'admin/content/models/model/' . $form_state['model']->model_id . '/delete';
}


/**
 * Form callback: confirmation form for deleting a model.
 *
 * @param $model
 *   The model to delete
 *
 * @see confirm_form()
 */
function questionnaire_answer_delete_form($form, &$form_state, $model) {
  $form_state['model'] = $model;

  $form['#submit'][] = 'model_delete_form_submit';

  $form = confirm_form($form,
    t('Are you sure you want to delete model %name?', array('%name' => $model->name)),
    'admin/content/models/model',
    '<p>' . t('This action cannot be undone.') . '</p>',
    t('Delete'),
    t('Cancel'),
    'confirm'
  );

  return $form;
}

/**
 * Submit callback for model_delete_form
 */
function questionnaire_answer_delete_form_submit($form, &$form_state) {
  $model = $form_state['model'];

  model_delete($model);

  drupal_set_message(t('The model %name has been deleted.', array('%name' => $model->name)));
  watchdog('model', 'Deleted model %name.', array('%name' => $model->name));

  $form_state['redirect'] = 'admin/content/models';
}



/**
 * Page to add Model Entities.
 *
 * @todo Pass this through a proper theme function
 */
function questionnaire_answer_add_page() {
  $controller = entity_ui_controller('model');
  return $controller->addPage();
}



