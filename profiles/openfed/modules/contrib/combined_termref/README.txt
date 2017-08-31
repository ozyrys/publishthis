About
------
This module allows you to associate upto 3 vocabularies to a single 
term-reference field. Standard drupal term reference fields allows you 
to reference terms in a single vocabulary.

Usage
-----

1. Create a typical term reference field.
2. In the Field settings, choose the extra vocabularies you would like 
   to reference. You can choose upto 3 vocabularies.
3. Continue with rest of the setup and usage as usual for a term 
   reference field. In most cases you may want to make this field
   multi-valued.
4. Now your field can reference terms from all the chosen vocabularies.

Please note that any new terms added to the term reference field will get added to the first vocabulary specified in the field settings.

Limitations
-----------

You can choose upto a maximum of 3 vocabularies for a term ref field.

Drupal 8
---------
There is a feature request for this functionality put up for Drupal 8 - http://drupal.org/node/1623054. This module is intended to be an alternative until that gets backported (if).


