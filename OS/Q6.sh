#!/bin/bash
echo "Enter filename:"
read filename
for item in $(cat $filename)
do
	echo $item
done
words=$(wc -w < $filename)
echo $words
