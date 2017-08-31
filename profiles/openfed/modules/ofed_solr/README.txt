CONTENTS OF THIS FILE
---------------------

 * Requirements and notes
 * Installation

REQUIREMENTS AND NOTES
----------------------

This modules requires an OpenFed installation. For further information about
its requirements, see its own README.txt file.

This module works with the Apache Solr module and we recommend the use of the
following services :

- Tomcat 6
- Apache Solr 3.6.2
- Tika 1.4

INSTALLATION
------------

The installation process is based on this page
http://feinan.com/2012/05/19/how-to-install-solr-3-6-0-on-ubuntu-12-04-lts/ and
is for Ubuntu 12.04 (although it should work with any Debian based OS).

  1. Install Tomcat:

    sudo apt-get install tomcat6

  2. Download Solr and install it:

    mkdir -p ~/tmp/solr/
    cd ~/tmp/solr/
    wget http://archive.apache.org/dist/lucene/solr/3.6.2/apache-solr-3.6.2.tgz
    tar -xzf apache-solr-3.6.2.tgz
    sudo mkdir -p /var/solr
    sudo cp apache-solr-3.6.2/dist/apache-solr-3.6.2.war /var/solr/solr.war
    sudo cp -R apache-solr-3.6.2/example/multicore/* /var/solr/
    sudo cp -R apache-solr-3.6.2/example/solr/conf/ /var/solr/core0
    sudo mkdir /var/solr/core0/lib
    sudo cp apache-solr-3.6.2/dist/*.jar /var/solr/core0/lib
    sudo cp apache-solr-3.6.2/contrib/extraction/lib/*.jar /var/solr/core0/lib
    sudo cp apache-solr-3.6.2/contrib/clustering/lib/*.jar /var/solr/core0/lib
    sudo chown -R tomcat6 /var/solr/
    echo -e '<Context docBase="/var/solr/solr.war" debug="0" privileged="true"
allowLinking="true" crossContext="true">\n<Environment name="solr/home"
type="java.lang.String" value="/var/solr" override="true" />\n</Context>' |
sudo tee -a /etc/tomcat6/Catalina/localhost/solr.xml
    echo 'TOMCAT6_SECURITY=no' | sudo tee -a /etc/default/tomcat6

  3. Edit the /etc/init.d/tomcat6 file:

    sudo vi /etc/init.d/tomcat6

    Around line 30, right after JVM_TMP=/tmp/tomcat6-$NAME-tmp you can add the
    following:

      JAVA_OPTS="$JAVA_OPTS -Dsolr.home=/var/solr"

  4. Restart tomcat:

    sudo /etc/init.d/tomcat6 restart

  5. Install Tika 1.4:

    cd ~/tmp
    wget http://www.alliedquotes.com/mirrors/apache/tika/tika-app-1.4.jar
    sudo mv tika-app-1.4.jar /usr/share/tomcat6/lib
    sudo /etc/init.d/tomcat6 restart

  6. Configure your Apache Solr Cores

    cd /var/solr

    Open /var/solr/sorl.xml to see if your cores are correctly set. For instance
    you can define 3 cores in it with the following lines:

        <cores adminPath="/admin/cores">
          <core name="example" instanceDir="example" />
          <core name="core0" instanceDir="core0" />
          <core name="core1" instanceDir="core1" />
        </cores>

    To create a new core, copy your core0 folder and put its name in the xml
    file mentioned above. Then restart your Tomcat.

  7. Configure Drupal to work with your freshly installed Solr:

    Basically, what you will need to do here is to copy the Apache Solr's module
    solr-conf/solr-3.x to your /var/solr/corex/conf folder

    For further information on how to configure Apacche Solr with Drupal, please
    read the ApaccheSolr module README.txt file.

  8. Cofingure your core to run with Tika:

    Open your core's conf/solrconfig.xml file and then:
      - Uncomment the line "<lib dir="./lib/" />"
      - Delete <lib dir="../../contrib/extraction/lib" />
      - Delete <lib dir="../../contrib/clustering/lib/" />
      - Add a requestHandler:

        <requestHandler name="/extract/tika" class="org.apache.solr.handler.extraction.ExtractingRequestHandler" startup="lazy">
          <lst name="defaults"></lst>
          <!-- This path only extracts - never updates -->
          <lst name="invariants">
            <bool name="extractOnly">true</bool>
          </lst>
        </requestHandler>

  9. Configure Drupal:

    Go to admin/config/search/apachesolr/settings/solr/edit to setup your
    Solr server URL properly.
    Then go to the admin/config/search/apachesolr/search-pages page and
    configure your site the way you want.
    You can also go the the block page to display the Solr related blocks.
