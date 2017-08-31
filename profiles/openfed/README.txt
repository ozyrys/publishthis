CONTENTS OF THIS FILE
---------------------
 * Requirements and notes
 * Optional server requirements
 * Installation
 * Upgrading


REQUIREMENTS AND NOTES
----------------------
Openfed requires:

- PHP 5.3.5 (or greater) (http://www.php.net).
- A PHP memory_limit set to 320M (or higher)
- A PHP max_input_vars set to 5000 (or higher)
- Drush 5.x or higher
- A sites/default/files directory which has to be writable by the web server.

For further information see Drupal's INSTALL.txt file.


OPTIONAL SERVER REQUIREMENTS
----------------------------
- If you want to use OpenFed's Addemar integration, you will have to enable
  SOAP on your webserver.


INSTALLATION
------------
1. Download OpenFed from Drupal.org

   You can obtain the latest release from http://drupal.org/project/openfed

2. Create your files directory at /path/to/your/project/sites/default/files
   and then give the permissions to your webserver's user. You can do it as follow

   You should also have a tmp directory outside the web directory
   (for instance, /tmp)

3. Follow the standard Drupal way to create your site by creating the database
   and running the install script.


UPGRADING
---------
Version 1.2-rc1 contains a new version of the Rules module.
Please check https://drupal.org/node/2090511 before upgrading to 1.2
("Fatal error: Class 'RulesEventHandlerEntityBundle' not found")
