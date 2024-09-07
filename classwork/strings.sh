#!/bin/bash

<<Documentation
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
Documentation

#read -p "Enter string1 and string2 : " s1 s2

#if [ $s1 = $s2 ]
#then
#	echo "S1=S2"
#else
#	echo "S1!=S2"
#fi

read -p "Enter string" str

if [ -z "$str" ]
then
	echo "True, String no len"
else
	echo " String has len"
fi
