#!/bin/bash
for file in *.txt; do
    mv "$file" "${file%.txt}_$(date +%Y%m%d%H%M%S).txt"
done
