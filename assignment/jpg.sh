#!/bin/bash

<<Documentation
Name: Shreya Srinivas
Date: 05/04/2023
Description: Given album name and corresponding directory, this scripts renames the jpg files with new name passed through command line
Sample Input: ./rename.sh day_out
Sample Output:
before exe:
DSN001.jpg DSN002.jpg
after exe:
day_out001.jpg day_out002.jpg
Documentation


arr=`echo *.jpg`  #collect all jpg files into an array
if [ $# -eq 0 ]   #prompting user to pass prefix thro cla
then
	echo "Error: Please pass the prefix name through command line."
else
	for i in ${arr[*]}  #looping thro all jpg files
	do
		old_name=$i     #saving original filenames as old_name
		new_name=$1`echo $i | tr -dc [:digit:]`.jpg  #using tr to form new_name, here -d: deleting, c: complementing
		if [ $old_name != $new_name ]  #renaming only if the new name is != old name
		then
			mv $old_name $new_name
		fi
	done
fi

