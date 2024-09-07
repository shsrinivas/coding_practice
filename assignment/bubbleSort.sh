#!/bin/bash

<<Documentation
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
Documentation

#bubble sort , compare adj numbers
#if 1st num > 2nd num => swap the two numbers
#if 


arr=(5 4 3 2 1)
len=${#arr[@]}
echo len : $len
echo `seq $((len-1)) -1 1` 
for i in `seq $((len-1)) -1 1`
do
	for j in `seq $i`
	do
		if [ ${arr[$j]} -gt ${arr[$((j+1))]} ]
		then
			echo "Before swapping:"
			temp=${arr[$j]}
			first=arr[$j] 
			second=arr[$((j+1))]
			echo first=${arr[$j]}
			echo sec=${arr[$((j+1))]}
			first=$second
			second=$temp
			echo "After swapping:"
			echo FIRST = $first
			echo SEC= $second
			echo ===================
			echo ${arr[@]}
			echo ====================

		fi	
	done
	echo "-------------NEXT ITER--------------"
done
echo ${arr[@]}



