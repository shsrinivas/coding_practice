#!/bin/bash

<<Documentation
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
Documentation
<<help
if [cla -a file -a content ]
	cla -> not passed
	file -> not a file
	file -> no content

all true:

print options
1)upper
2)lower

read choice 1, 2
1 -> convert into upper
2-> convert intp lower

cat file.txt | tr[:lower:][:upper:]
help



