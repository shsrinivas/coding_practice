#!/bin/bash

<<Documentation
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
Documentation

read -p "Enter the year to check if it is a leap year or not: " year

if [ $((year%400)) -eq 0 -a $((year%100)) -eq 0 ]
then
	echo "It is a leap year!!"
elif [ $((year%4)) -eq 0 -a $((year%100)) -eq 0 ]
then
	echo "It is a leap year!!"
else
	echo "Not a leap year!!"	
fi


