#!/bin/bash

<<Documentation
Name: Shreya Srinivas
Date: 06/04/2023
Description: For exh directory in the $PATH, display the number of exe files in that directory
Sample Input: ./execitable_path.sh
Sample Output:
Current dir: /usr/local/sbin
corrent count: 0
Current dir: /usr/local/bin
current count: 0
.
.
.
.
Currrent dir: /usr/games
current dir: 5
Total - 5
Documentation


path=(`echo $PATH | tr ":" " "`)    # using cut to collect all ele of path into arr, using delim ":"
total=0 # toal var to cal the sum of all exe files in all paths 
for i in ${path[@]}  #looping through PATH
do
	cd $i   #changing dir to first path in the paths list
	echo Current dir: `pwd` #print present working dir
	exeFile=(`ls -l | tr -s " " | cut -d " " -f9`)   #using ls to get files on the path, anf using tr and cut to extract only 9th feild which will have file name
	execount=0  # initialising count here because we need to reset the count to 0
	for j in ${exeFile[@]}:   #iterating thro files of a particular path
	do
		if [ -x $j ]  #checking if file is exe
		then
			execount=$((execount+1))  # if file is exe, then increment the count
		fi
	done
	echo "current count: " $execount    #printing exe count 
	total=$((total+execount)) # taking another var to cal total of all exe counts 
done
echo Total - $total

