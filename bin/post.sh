#!/bin/bash
#
# Run this after recreating the feature.
# Restore the permissions before committing changes to Git.
#

SCRIPT=$(realpath $0)
SCRIPTPATH=$(dirname $SCRIPT)

chmod g-w -R $SCRIPTPATH/..
