#!/bin/bash

<<Documentation
Name: Shreya Srinivas
Date: 06/04/2023
Description: Write a script to determine whether a given file system or mount point is mounted
Sample Input: ./mounted_fs /dev/sda2
Sample Output: File-system /dev/sda2 is mounted on / and is having 98% used space 3298220 KB free.
Documentation

#mnt : to check if user file system is present or not
#df : will give all file systems and info related to file systems
#use squeze and input that to cut

arr=(`df | tr -s " " | cut -d " " -f1`)
mountedOn=(`df | tr -s " " |cut -d " " -f6`)
usePer=(`df | tr -s " " | cut -d " " -f5`)
space=(`df | tr -s " " |cut -d " " -f4`)

flag=0

if [ $# -eq 0 ]  # To promt user to enter cla
then
	echo "Error : Please pass the name of the file-system through command line."
else
	for i in `seq $((${#arr[@]}-1))`  # looping thro file system elements
	do
		if [ ${arr[$i]} = $1 ] #if file system passed in cla is in the file system
		then
			echo "File-system ${arr[$i]} is mounted on ${mountedOn[$i]} and it is having ${usePer[$i]} used space with ${space[$i]} KB free."
			flag=1   #setting flag to 1 if file is mathching
			#break
		fi
	done
	if [ $flag -eq 0 ]  #if file is not present, flag will still be 0 
	then
		echo "$1 is not mounted"
	fi
fi
