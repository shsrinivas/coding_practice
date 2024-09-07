#!/bin/bash

<<Documentation
Name: Shreya Srinivas
Date: 31/03/2023
Description: A7 - Write a script to print chess board
Sample Input: ./chessboard.sh
Sample Output:
  1 2 3 4 5 6 7 8
1 w b w b w b w b
2 b w b w b w b w
3 w b w b w b w b
4 b w b w b w b w
5 w b w b w b w b
6 b w b w b w b w
7 w b w b w b w b
8 b w b w b w b w
Documentation

for row in `seq 8`               #number of rows of chessboard is always 8
do
	for col in `seq 8`           #number of cols of chessboard is always 8 
	do 
		if [ $(($((row+col))%2)) -eq 0 ]  # if sum(row+col) = odd then print black box else print white box
    	then	
			echo -ne "\e[40m" " "         # logic to print white box
		else
			echo -ne "\e[47m" " "         # logic to print black box
		fi
	done
	echo -ne "\e[0m" " "                  # logic to normalize code to stop it from continuing
	echo
done

