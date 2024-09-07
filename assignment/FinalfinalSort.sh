#!/bin/bash

<<Documentation
Name: Shreya Srinivas
Date: 10/04/2023
Description: Write a script to sort a given number in ascending or descending order 
Sample Input: ./sorting.sh -a 5 4 6 2 3 8 9 7 1
Sample Output: Ascending order of array is 1 2 3 4 5 6 7 8 9
Documentation

if [ $# -ne 0 ]
then
	if [ $1 = "-a" -o $1 = "-d" ]
	then
		arr=()
		for i in ${@:2}; do
			arr+=($i)
		done
		len=$(($#-1))

		if [ $1 = "-a" ]
		then
			echo bubble sort acending
			for i in $(seq 0 $(($len - 2)))
			do
			    for j in $(seq 0 $(($len - $i - 2)))
			    do
			        if (( ${arr[j]} > ${arr[j+1]} ))
	                then
			            temp=${arr[j]}
            			arr[j]=${arr[j+1]}
            			arr[j+1]=$temp
        			fi
    			done
			done
			echo "Sorted array: ${arr[@]}"
		elif [ $1 = "-d" ]
		then
			echo bubble sort decending
			
			for i in $(seq 0 $(($len - 2)))
			do
			    for j in $(seq 0 $(($len - $i - 2)))
			        do
			        if (( ${arr[j]} < ${arr[j+1]} ))
	                then
			            temp=${arr[j]}
            			arr[j]=${arr[j+1]}
            			arr[j+1]=$temp
        			fi
    			done
			done
			echo "Sorted array: ${arr[@]}"
		fi
	else
		echo "Please pass the choice."
		echo "Usage:./sorting -a/-d 4 23 5 6 3"
	fi
else
	echo "Error : Please pass the argument through command line."
	echo "Usage : ./sorting -a/-d 4 23 5 6 3"
fi

