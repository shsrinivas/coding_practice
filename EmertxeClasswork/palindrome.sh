#!/bin/bash

<<Documentation
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
Documentation


read -p "Enter the number to check palindrome: " num
temp=$num
rev=0
while [ $num -gt 0 ]
do
	mod=$((num%10))
	rev=$(($((rev*10))+mod))
	num=$((num/10))
done

if [ $temp -eq $rev ]
then
	echo "$temp is a palindrome !!"
else
	echo "$temp is not a palindrome !!"
	echo "$temp is not equal to $rev"
fi	



