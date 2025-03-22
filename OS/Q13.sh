#!/bin/bash
echo "Enter directory name:"
read dirname
ls -l "$dirname" | grep "^-" | wc -l

