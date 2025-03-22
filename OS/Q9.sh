#!/bin/bash
if [ "$#" -eq 0 ]
then
	echo "Usage: $0 [file1] [file2]......."
	exit 1
fi

for file in "$@" #all command lines in shell
do
	if [ ! -e "$file" ]
	then 
		echo "$file: no such file or directory found."
	elif [ -f "$file" ]
	then
		echo "$file : is a file."
	elif [ -d "$file" ]
	then
		echo "$file : is a directory."
	else
		echo "$file: unknown file type"
	fi
done
