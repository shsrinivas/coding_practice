#!/bin/bash

<<Documentation
Name: Shreya Srinivas
Date: 05/04/2023
Description: Shell script to convert string lower to upper and upper to lower
Sample Input: ./upper_lower.sh
Sample Output:
Please select option: 1
WHAT IS OS ?
WHAT ARE THE DIFF OS?
Documentation

if [ $# -eq 0 ]  #prompting user to give file name in clas
then
	echo "Error: Please pass the file name through command line."
else
	echo "1 - Lower to upper"   #giving options to user
	echo "2 - Upper to lower"
	read -p "Please select option: " op
	if [ $op -eq 1 ] # print contents in upper case
	then
		echo `cat $1 | tr [:lower:] [:upper:]`	
	elif [ $op -eq 2 ] # print contents in lower case
	then
		echo `cat $1 | tr [:upper:] [:lower:]`
	fi
fi	

