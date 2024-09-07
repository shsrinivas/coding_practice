#!/bin/bash

<<Documentation
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
Documentation

read -p "Enter user name: " username
arr=(`cut -d "," -f1 userName.csv`)

check_csv(){
	match_found=false
	for i in `seq 0 $((${#arr[@]}-1))`
	do
		if [ $username = ${arr[$i]} ]
		then
			match_found=true
			break
		fi
	done
}

check_csv
echo matchfound : $match_found
if [ $match_found == true ]
then
	echo "user prent"
else
	echo "user not present"
fi
