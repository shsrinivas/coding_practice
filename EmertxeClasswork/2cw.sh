#!/bin/bash

<<Documentation
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
Documentation

read -p "Enter num to check if it is multiple of 5: " n

if [ `expr $n % 5` -eq 0 ]
then
	echo "Number is a multiple of 5"
else
	echo "Number is not a multiple of 5"
fi
 	  



