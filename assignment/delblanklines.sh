#!/bin/bash

<<Documentation
Name: Shreya Srinivas
Date: 03/04/2023
Description: Write a script to delete empty lines from file
Sample Input: ./delete_empty_lines.sh file.txt
Sample Output: 
Hello
How 
Are
You 
Documentation


if [ $# -ne 0 ]      #To check if cla is passed
then
	if [ -f $1 ]       #to check if file is present
	then
		if [ -s $1 ]     #to check if file is emply or not 
		then
			sed '/^[[:blank:]]*$/d' $1  # using sed, ^$ : to del emply lines, [[:blank:]]* : to del all blank spaces  
		else
			echo "Error: No content in file."
		fi
	else
		echo "Error: File not present !!."
	fi
else
	echo "Error: Please pass the file name through command line."
fi




