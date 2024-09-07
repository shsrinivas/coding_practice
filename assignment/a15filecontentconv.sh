#!/bin/bash

<<Documentation
Name: Shreya Srinivas
Date: 02/04/2023
Description: Shell script to convert string lower to upper and upper to lower
Sample Input: 
./upper_lower.sh
1 - Lower to upper
2 - Upper to lower
Please select option : 1
Sample Output:
HI HELLO HOW ARE YOU ?
Documentation

lower_upper=`cat $1 | tr [:lower:] [:upper:]`
upper_lower=`cat $1 | tr [:upper:] [:lower:]`

if [ $# -eq 0 ]
then
	echo "Error pass the file name through command line."
elif [ -f $1 ]
then
	echo $1, it is a file
	if [ -s $1 ]
	then
		echo "1 - Lower to upper"
		echo "2 - Upper to lower"
		read -p "Please select option : " option
		case $option in		
			1) $lower_upper;;#`cat $1 | tr [:lower:] [:upper:]`;;
			2) $upper_lower;;#`cat $1 | tr [:upper:] [:lower:]`;;
			*) echo "Enter correct option (1 or 2)" ;;
		esac
	else
		echo "Error: No contents inside the file."
	fi
fi
