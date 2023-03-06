#!/bin/bash

EXEC="scanner"
INPUT_FILE="trust.txt"
STRINGS="strings.txt"

while read line; do
        ${EXEC} ${INPUT_FILE} <<< ${line} >> /dev/null
        status=$?
        if [ $status -eq 0 ]; then
                echo "${line}";
                exit 0
        fi
done < $STRINGS
