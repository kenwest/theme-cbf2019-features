#!/bin/bash
#
# Run this before recreating the feature.
# Set the permissions so the webserver can update the files.
#

SCRIPT=$(realpath $0)
SCRIPTPATH=$(dirname $SCRIPT)

chmod g+w -R $SCRIPTPATH/..
