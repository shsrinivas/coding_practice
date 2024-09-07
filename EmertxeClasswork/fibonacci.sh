#!/bin/bash

<<Documentation
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
Documentation


#Read n , n=3, => 0,1,1
#Read n , n=5, => 0,1,1,2,3

read -p "Enter the range: " n

sum=0
first=0
second=1
next=0
for i in `seq $n`
do
	echo $first
	next=$((first+second))
	first=$second
	second=$next
done

	
