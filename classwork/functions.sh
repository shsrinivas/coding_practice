#!/bin/bash

<<Documentation
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
Documentation


function display()
{
	echo "First arg:" $1
	echo "Second arg: " $2
	echo "All args: " $*
	echo "Length args: " $#
}

display 3 4 5
