#!/bin/bash

<<Documentation
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
Documentation

read -p "Enter number range:" n


for i in `seq $n`
do
	read num
	if [ $i -eq 1 ]
	then
		smallest=$num
	fi

	if [ $num -lt $smallest ]
	then
		smallest=$num
	fi
done
echo $smallest
