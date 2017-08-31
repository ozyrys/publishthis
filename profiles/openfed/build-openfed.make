api = 2
core = 7.x

includes[] = drupal-org-core.make

; Download the OpenFed install profile and recursively build its dependencies
projects[openfed][type] = profile
projects[openfed][download][type] = git
projects[openfed][download][branch] = 7.x-2.x
