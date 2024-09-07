#!/bin/bash

<<Documentation
Name: Shreya Srinivas
Date: 04/04/2023
Description: Count the number of users with user IDs between given range.
Sample Input: ./user_id.sh 0 100
Sample Output: Total count of user ID between 0 to 100 is : 3
Documentation

if [ $# -eq 1 -o $# -gt 2 ]  #check if user has given 1 / greater and 2 as cla
then
	echo "Please pass 2 arguments through CL."
	echo "Usage:./user_ids.sh 100 200"
elif [ $1 -gt $2 ]    # if user has entered first range greater then the second range
then
	echo "Error: Invalid range. Please enter the valid range through CL."
else
	if [ $# -eq 0 ]   # taking default starting range and ending range as 500 , 10000
	then
		startRange=500
		endRange=10000
	else
		startRange=$1  # taking the 1st cla as start range
		endRange=$2    #taking 2nd cla as end range
	fi
	userIds=`cut -d ":" -f3 /etc/passwd`    # cut command to extract 3rd field from ec/passwd which has userId
	count=0
	for i in $userIds
	do
		if [ $i -ge $startRange -a $i -le $endRange ]  #to check if user id lies between the range
		then
			count=$((count+1))  # if it lies within the range then inc count
		fi
	done
	echo "Total count of user ID between $startRange to $endRange is: $count"
fi

