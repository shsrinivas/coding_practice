#!/bin/bash

<<Documentation
Name: Shreya Srinivas
Date: 01/04/2023
Description: Write a script to print the lenght of each and every string using arrays
Sample Input: ./string_lenght.sh hello hai
Sample Output:
Length of string (hello) - 5
Length of string (hi) - 2
Documentation

arr=($*)                       #collecting the command line arguments into an array
if [ $# -eq 0 ]                #checking if number of cla is zero 
then
	echo "Error : Please pass the arguments through command-line." #Display error if no cla is given
else
	for i in `seq 0 $(($#-1))` #looping thro seq 0->(lenght of cla -1) since for arrays indexing starts from 0
	do
		echo "Length of string (${arr[$i]}) - ${#arr[$i]}"  #logic to find value of each cla and it's length 
	done
fi

