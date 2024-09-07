#!/bin/bash

<<Documentation
Name: Shreya Srinivas
Date: 21/03/2023
Description: To check whether prod of 2 num is even or odd"
Sample Input: num1 = 1, num2 = 2
Sample Output: Result of product is Even
Documentation


read -p "Enter value of num 1: " n1
read -p "Enter value of num 2: " n2

prod=`expr $n1 \* $n2`
echo "Product="$prod

if [ `expr $prod % 2` -eq 0 ]
then
	echo "Result of product is even"
else
	echo "Result of product is odd"
fi

