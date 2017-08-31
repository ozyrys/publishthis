<?php print '<?xml version="1.0" encoding="UTF-8"?>'; ?>
<addemar type="webservice" version="1.5">
    <actions>
        <action>
            <name>importContent</name>
            <params>
                <name>Content From CMS - <?php print $locale; ?></name>
                <type>0</type>
                <language><?php print $locale; ?></language>
                <valid_until><?php print $valid_until; ?></valid_until>
                <ciid>0</ciid>
                <disable_previous>1</disable_previous>
                <content>
                    <articles><?php print $articles; ?>
                    </articles>
                </content>
            </params>
        </action>
    </actions>
</addemar>
