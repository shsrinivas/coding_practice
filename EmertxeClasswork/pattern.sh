#!/bin/bash

<<Documentation
Name: Shreya Srinivas
Date: 30/03/2023
Description:
Sample Input:
Sample Output:
Documentation

read -p "Enter the value of n: " n

for i in `seq $n -1 1`
do
	for j in `seq $i`
	do 
		echo -n "* "
	done
	echo
done

