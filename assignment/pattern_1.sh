#!/bin/bash

<<Documentation
Name: Shreya Srinivas
Date: 31/03/2021
Description: Read 'n' and generate a pattern given below( number increments from left to right) 
Sample Input: Enter the number: 4
Sample Output:
1
1 2
1 2 3
1 2 3 4
Documentation

read -p "Enter the number :" n

for row in `seq $n`
do
	for col in `seq $row`
	do
		echo -n "$col "
	done
	echo
done



	
