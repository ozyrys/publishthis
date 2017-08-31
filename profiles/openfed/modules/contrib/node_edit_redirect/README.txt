NODE EDIT REDIRECT
==================

This module will redirect users that edit a node, to same the node edit form,
but in the same language as the node.

Assuming the negotiated content language is based on URL (prefix/domain), this
ensures that such a "content language" matches the language of the node.


EXAMPLE
=======

- Content language is negotiated based on prefix. See also:
    https://api.drupal.org/api/drupal/includes!language.inc/group/language_negotiation/7

- When editing an English node while the prefix is French, the following
  redirect will happen:

    /fr/node/3 => /en/node/3

  The prefix language code now matches the language of the node.


EXAMPLE USE CASES
=================

- When relying on the "Current user's language" option from Views in the node
  edit form, such as when using the entityreference_view_widget module. 

- When using the i18n_select module, and term references/entity references
  only show up if the referenced entities have the negotiated content language.

- When wanting to ensure that localized taxonomy terms appear in the same
  language on the edit form as they do on the node.
