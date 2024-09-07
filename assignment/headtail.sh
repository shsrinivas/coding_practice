#!/bin/bash

<<Documentation
Name: Shreya Srinivas
Date: 03/04/2023
Description: Write script to print contents of file from given line number to next given number of lines.
Sample Input: ./print_lines.txt 5 3 myfile.txt
Sample Output: 
line number 1
line number 2
line number 3
Documentation

#fileTotalLines=`wc -l < $3`
#start_line=$1
#upto_line=$2

if [ $# -lt 2 ]
then
	echo "Error: arguments missing!"
	echo "Usage: ./file_filter.sh start_line upto_line filename"
	echo "For eg. ./file_filter.sh 5 5 <file>"
else
	fileTotalLines=`wc -l < $3`
	echo $fileTotalLines
	start_line=$1
	upto_line=$2
	if [ $((start_line+upto_line)) -gt $fileTotalLines ]
	then
		echo "Error: $3 is having only $fileTotalLines lines. file should have atleast $((start_line+upto_line-1)) lines"	
	else
		x=$((start_line+upto_line-1))
		head -$x $3 | tail -$upto_line
	fi
fi
