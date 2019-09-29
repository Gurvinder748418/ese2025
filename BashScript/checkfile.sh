#!/bin/bash
#
FILE=$1
if [ -e "$FILE" ]
then
echo "file found "
else
echo "file not found"
fi
