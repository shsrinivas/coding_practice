#!/bin/bash

<<Documentation
Name: Shreya Srinivas
Date: 03/04/2023
Description: Display the longest and shortest user-names on the system 
Sample Input: ./largest_username
Sample Output:
The Longest Name is: speech-dispatcher
The Shortest Name is: Ip
Documentation


arr=(`cut -d ":" -f1 /etc/passwd`)

for i in `seq ${#arr[*]}`
do
	if [ $i -eq 1 ]
	then
		smallest=${#arr[$i]}
		largest=${#arr[$i]}
	else
		if [ ${#arr[$i]} -lt $smallest ]
		then
			smallest=${#arr[$i]}
			smallest_userName=${arr[$i]}
		fi
	fi
done

for i in `seq ${#arr[*]}`
do
	if [ ${#arr[$i]} -gt $largest ]
	then
		largest=${#arr[$i]}
	    largest_userName=${arr[$i]}
	fi
done

echo "The Longest Name is: "$largest $largest_userName 
echo "The Shortest Name is: "$smallest $smallest_userName
