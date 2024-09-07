#!/bin/bash

<<Documentation
Name:
Date:
Description:
Sample Input:
Sample Output:
Documentation

read -p "Enter n value: " n

for i in `seq $n`
do
	echo "$i, hello"
done
