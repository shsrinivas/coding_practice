#!/bin/bash

<<Documentation
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
Documentation

read -p "Enter num 1: " n1
read -p "Enter num 2: " n2
echo "n1/n2=" $((n1/n2))
echo "n2/n1=" $((n2/n1))
if [ $((n1%n2)) -eq 0 ];then
	echo "Num 1 is a multiple of Num 2"
else
	echo "Num 1 is not a a multiple of Num 2"
fi


