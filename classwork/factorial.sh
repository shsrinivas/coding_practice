#!/bin/bash

<<Documentation
Name:
Date:
Description:
Sample Input:
Sample Output:
Documentation

read -p "Enter number to find factorial : " n
i=1
sum=1
while [ $i -le $n ]
do
	sum=$(($sum*$i))
	i=`expr $i + 1`
done
echo "Factorial of $n is $sum"
		

