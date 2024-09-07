#!/bin/bash

<<Documentation
Name: Shreya Srinivas
Date: 07/04/2023
Description: Write a script to replace 20% lines in a C file randomly and replace it with the pattern
Sample Input: ./replace.sh
Sample Output:
Before replacing:
#include <stdio.h>
int main()
{
	printf()
}

After replacing:
#include <stdio.h>
int main()
{
<-------Deleted------->
}
Documentation

lines=`wc -l < $1`   # to get number of lines passed in cla
replaceLines=`echo "$lines*0.2" | bc | cut -d "." -f1`    # to finf number of lines to be replaced
random=(`shuf -i 1-$lines -n$replaceLines`) # to find random numbers for "num of replace lines" times 

if [ $# -ne 0 ] #checking if user has passed cla
then 
	if [ -f $1 ] #to chekc if it is a file
	then
		if [ -s $1 ] #to check if file is empty or not
		then
			if [ $lines -lt 5 ] #making sure the file has alteast 5 lines
			then
				echo "File must have atleat 5 lines"
			else
				echo "Before replacing" 
				cat $1          #printing contents of file before replacing  
				echo "After replacing"
				for i in ${random[*]}  #looping thro random numbers which are stored as arrays
				do
					var=$i"s"
					sed -i "$var/.*/<-----deleted----->/" $1  #using sed to edit file, to replce 20% lines to deleted
				done
				cat $1  #printing contents after replacing
			fi
		else
			echo "File is empty"
		fi
	else
		echo "Error: File doesn't exist"
	fi
else
	echo "Error: Please pass command thro cl"
fi


