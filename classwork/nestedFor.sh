#!/bin/bash

<<Documentation
Name:
Date:
Description:
Sample Input:
Sample Output:
Documentation

<<doc
for i in 1 2 3
do
	for j in 1 2 3 4 5 
	do
		echo "$i,$j"
	done
done
doc

<<com
for i in `seq 3`
do
	for j in `seq $i`
	do
		echo $i
	done
done
com

for row in `seq 5`
do
	for col in `seq $row`
	do
		echo -n "*" 
	done
	echo 
done



