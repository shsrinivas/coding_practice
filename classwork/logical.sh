#!/bin/bash

read -p "Enter num:" n

if [ $n -gt 5 ]
then
	echo "N is greater than 5"
	if [ $n -lt 10 ]
	then
		echo "N is gt 5 and lt 10"
	fi
else
	echo "N is lt 10"
fi
