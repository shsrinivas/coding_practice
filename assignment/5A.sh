#!/bin/bash

<<Documentation
Name: Shreya Srinivas
Date: 09/04/2023
Description: Write a script to perform airthmetic operation on digits of a given number
Sample Input: 1234+
Sample Output: Sum of digits = 10
Documentation

if [ $# -eq 0 ]  #prompting user to add correct cla
then
	echo "Error: Please pass the arguments through CL."
	echo "Usage:/operator_dependent.sh 2345+"
else
	flag=0  
	str=${1: -1}   #to extract last char
	#echo str : $str
	op=(+ - / x)
	for i in ${op[@]}    # checking if last char any of +,-,/,x operator, if so setting flag to 1
	do
		if [ $i = $str ]
		then
			flag=1
		fi
	done
	if [ $flag -eq 1 ]   #if flag=1 , last char has operator
	then
		sum=${1:0:1}  #setting the first chars
		sub=${1:0:1}
		mul=${1:0:1}
		div=${1:0:1}
		for i in `seq 1 $((${#1}-2))`  #looping through 1 -> len -2 , 1 becase, we have already set value of first num
		do
			sum=$((sum+${1:i:1})) #sum logic
			sub=$((sub-${1:i:1})) #sub logic
			mul=$((mul"*"${1:i:1})) #mul logic
			#div=$((div/${1:i:1})) #div logic
			div=`echo "scale=2;$div/${1:i:1}" | bc`
		done

		case $str in #using case to evaluate only the required op passed by user
			+) echo "Sum of digits = $sum" ;;
			-) echo "Subtraction of digits = $sub" ;;
			x) echo "Multiplication of digits = $mul" ;;
			/) echo "Division of digits = $div" ;;
			*) echo "Enter correct operator"
		esac
	else
		echo "Error: Operator missing or invalid operator, please pass operator as last digit (+,-,x,/)"
	fi
fi


