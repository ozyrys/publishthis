<?php

/**
 * @file
 * Definition of combined_termref_handler_filter_term_node_tid.
 */

/**
 * Filter by term id, with multiple vocabularies support.
 *
 * @ingroup views_filter_handlers
 */
class combined_termref_handler_filter_term_node_tid extends views_handler_filter_term_node_tid {
  // Stores the exposed input for this filter.
  var $validated_exposed_input = NULL;

  function init(&$view, &$options) {
    parent::init($view, $options);

    // Convert legacy vid option to machine name vocabulary.
    if (isset($this->options['vid']) && !empty($this->options['vid']) & empty($this->options['vocabulary'])) {
      $this->options['vocabulary'] = array();
      $vocabularies = taxonomy_get_vocabularies();
      foreach ($this->options['vid'] as $vid) {
        if (isset($vocabularies[$vid], $vocabularies[$vid]->machine_name)) {
          $this->options['vocabulary'][] = $vocabularies[$vid]->machine_name;
        }
      }
    }
  }

  function option_definition() {
    $options = parent::option_definition();

    // Change the type of vocabulary to an array
    $options['vocabulary'] = array('default' => array(0));

    return $options;
  }

  function extra_options_form(&$form, &$form_state) {
    parent::extra_options_form($form, $form_state);

    if ($this->options['limit']) {
      if (empty($this->definition['vocabulary'])) {
        $form['vocabulary'] = array(
          '#type' => 'select',
          '#title' => t('Vocabularies'),
          '#options' => $options,
          '#description' => t('Select which vocabularies to show terms for in the regular options.'),
          '#default_value' => $this->options['vocabulary'],
          '#multiple' => TRUE,
        );
      }
    }
  }

  function value_form(&$form, &$form_state) {
    $vocabularies = array();
    foreach ($this->options['vocabulary'] as $vocab_name) {
      $vocab = taxonomy_vocabulary_machine_name_load($vocab_name);
      $vocabularies[$vocab->vid] = $vocab;
    }

    if (empty($vocabularies) && $this->options['limit']) {
      $form['markup'] = array(
        '#markup' => '<div class="form-item">' . t('An invalid vocabulary is selected. Please change it in the options.') . '</div>',
      );
      return;
    }

    if ($this->options['type'] == 'textfield') {
      $default = '';
      if ($this->value) {
        $result = taxonomy_term_load_multiple($this->value);
        foreach ($result as $entity_term) {
          if ($default) {
            $default .= ', ';
          }
          $default .= filter_xss(entity_label('taxonomy_term', $entity_term);
        }
      }

      $form['value'] = array(
        '#title' => $this->options['limit'] ? t('Select terms from vocabularies') : t('Select terms'),
        '#type' => 'textfield',
        '#default_value' => $default,
      );

      if ($this->options['limit']) {
        $form['value']['#autocomplete_path'] = 'admin/views/ajax/autocomplete/taxonomy/multiple/' . implode(',', array_keys($vocabularies));
      }
    }
    else {
      if (!empty($this->options['hierarchy']) && $this->options['limit']) {
        $options = array();
        foreach ($vocabularies as $vocabulary) {
          $tree = taxonomy_get_tree($vocabulary->vid, 0, NULL, TRUE);

          if ($tree) {
            // Translation system needs full entity objects, so we have access to label.
            foreach ($tree as $term) {
              $choice = new stdClass();
              $choice->option = array($term->tid => str_repeat('-', $term->depth) . filter_xss(entity_label('taxonomy_term', $term)));
              $options[$vocabulary->name][] = $choice;
            }
          }
        }
      }
      else {
        $options = array();
        foreach ($vocabularies as $vocabulary) {
          $query = db_select('taxonomy_term_data', 'td');
          $query->innerJoin('taxonomy_vocabulary', 'tv', 'td.vid = tv.vid');
          $query->fields('td');
          $query->orderby('tv.weight');
          $query->orderby('tv.name');
          $query->orderby('td.weight');
          $query->orderby('td.name');
          $query->addTag('term_access');
          if ($this->options['limit']) {
            $query->condition('tv.machine_name', $vocabulary->machine_name);
          }
          $result = $query->execute();

          $tids = array();
          foreach ($result as $term) {
            $tids[] = $term->tid;
          }
          $entities = taxonomy_term_load_multiple($tids);
          foreach ($entities as $entity_term) {
            $options[$vocabulary->name][$entity_term->tid] = filter_xss(entity_label('taxonomy_term', $entity_term));
          }
        }
      }

      $default_value = (array) $this->value;

      if (!empty($form_state['exposed'])) {
        $identifier = $this->options['expose']['identifier'];

        if (!empty($this->options['expose']['reduce'])) {
          $options = $this->reduce_value_options($options);

          if (!empty($this->options['expose']['multiple']) && empty($this->options['expose']['required'])) {
            $default_value = array();
          }
        }

        if (empty($this->options['expose']['multiple'])) {
          if (empty($this->options['expose']['required']) && (empty($default_value) || !empty($this->options['expose']['reduce']))) {
            $default_value = 'All';
          }
          elseif (empty($default_value)) {
            $keys = array_keys($options);
            $default_value = array_shift($keys);
          }
          // Due to #1464174 there is a chance that array('') was saved in the
          // admin UI. Let's choose a safe default value.
          elseif ($default_value == array('')) {
            $default_value = 'All';
          }
          else {
            $copy = $default_value;
            $default_value = array_shift($copy);
          }
        }
      }
      $form['value'] = array(
        '#type' => 'select',
        '#title' => $this->options['limit'] ? t('Select terms from vocabularies') : t('Select terms'),
        '#multiple' => TRUE,
        '#options' => $options,
        '#size' => min(9, count($options, COUNT_RECURSIVE)),
        '#default_value' => $default_value,
      );

      if (!empty($form_state['exposed']) && isset($identifier) && !isset($form_state['input'][$identifier])) {
        $form_state['input'][$identifier] = $default_value;
      }
    }

    if (empty($form_state['exposed'])) {
      // Retain the helper option.
      $this->helper->options_form($form, $form_state);
    }
  }
}
