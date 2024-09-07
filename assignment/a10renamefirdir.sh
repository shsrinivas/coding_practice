#!/bin/bash

<<Documentation
Name: Shreya Srinivas
Date: 02/04/2023
Description: Write a script to rename a file/directory replaced by lower/upper case letters
Sample Input: before running script: File1.txt file2.txt FILE3.txt dir1 Dir2
Sample Output: after running script: file1.txt file2.txt file3.txt DIR1 DIR2
Documentation


arr=`ls`   #collecting all filesand DIR in pwd

for i in $arr            				#looping through each file and Dir 
do
	if [ -f $i ]         				#to check if it is a file 
	then
		new_name=`echo $i | tr [:upper:] [:lower:]`  # using tr to generate new file name with all lower cases
	elif [ -d $i ]  	 				#to check if it is a directory
	then
		new_name=`echo $i | tr [:lower:] [:upper:]`  # using tr to generate new DIR name with all upper cases
	fi
	old_name=$i 	  				#collecting old file name as it is 
	if [ $old_name != $new_name ]   # to make sure we don't rename files with same old_name and new_name
	then
		mv $old_name $new_name   	# mv is used to rename 
	fi
done
