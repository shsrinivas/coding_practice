#!/bin/bash

<<Documentation
Name:
Date:
Description:
Sample Input:
Sample Output:
Documentation

read -p "Enter number to find Sum : " n
i=1
sum=0
while [ $i -le $n ]
do
	sum=$(($sum+$i))
	i=`expr $i + 1`
done
echo "Sum of $n is $sum"
		

