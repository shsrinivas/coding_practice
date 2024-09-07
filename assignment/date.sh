#!/bin/bash

<<Documentation
Name: Shreya Srinivas
Date: 05/04/2023
Description: Write script called say_hello, which will print greetings based on time
Sample Input: ./say_hello.sh
Sample Output: 
Good Morning user, Have a nice day!
This is Thu 08 in Jun of 2017 (10:44:10 AM)
Documentation

hour=`date | cut -d " " -f5 | cut -d ":" -f1`  # extracting only hour from date using cut command
day="This is `date | cut -d " " -f1 ` `date | cut -d " " -f4` in `date | cut -d " " -f2` of year 20`date | cut -d " " -f5 | cut -d ":" -f1`(`date | cut -d " " -f5` `date +%p`)" #collecting all the day related info from date using cut 
msg=" user, Have a nice day!" 
if [ $hour -ge 5 -a $hour -lt 12 ] #condition to check for morning [5-11]
then
	echo "Good morning$msg"
	echo $day
elif [ $hour -ge 12 -a $hour -lt 14 ] #condition to check for noon [12-13]
then
	echo "Good noon$msg"
	echo $day
elif [ $hour -ge 14 -a $hour -lt 17 ] #condition to check for good afternoon [14-16]
then
	echo "Good afternoon$msg"
	echo $day
elif [ $hour -ge 17 -a $hour -lt 21 ] #condition to check for evening [17-20]
then
	echo "Good evening$msg"
	echo $day
else
	echo "Good Night$msg" #if none of the above satisfies, it whould be night [21-4]
	echo $day
fi


