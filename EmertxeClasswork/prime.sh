#!/bin/bash

<<Documentation
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
Documentation


read -p "Enter the num to check prime: " num
for i in `seq 2 $((num-1))`
do
	if [ $(($num%i)) -eq 0 ]
	then
		echo "Num is not a prime number"
	else
		echo "Num is prime"
	fi	
done
