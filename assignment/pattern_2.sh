#!/bin/bash

<<Documentation
Name: Shreya Srinivas
Date: 31/03/2023
Description: A2 - Read 'n' and generate a pattern given below(number increasing from top to bottom)
Sample Input:4 
Sample Output:
1
2 3
4 5 6
7 8 9 10
Documentation

read -p "Enter the number : " num #Taking user input for number of rows

count=1                    #As the output requires the starting number to be 1 we can set count=1
for row in `seq $num`      # 1 2 3 4 5
do
	for col in `seq $row`  #1   1,2   1,2,3   1,2,3,4    1,2,3,4,5
	do
		echo -n "$count "  #printing the count val 
		count=$((count+1)) #incrementing count for every loop 
	done
	echo                   #new line 
done	
			

