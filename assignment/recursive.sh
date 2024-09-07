#!/bin/bash

<<Documentation
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
Documentation


print_arg(){
	if [ $# -gt 0 ]
	then
		echo $1
		shift
		print_arg "$@"
	fi
}

print_arg "$@"
