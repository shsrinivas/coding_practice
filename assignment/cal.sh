#!/bin/bash

<<Documentation
Name: Shreya Srinivas
Date: 31/03/2023
Description: A3 - Write a script for airthmetic calculator using command line arguments
Sample Input: cal.sh 25 + 41
Sample Output: 25 + 41 = 66
Documentation
<<c
sum=`echo "$1+$3" | bc`
sub=`echo "$1-$3" | bc`
mul=`echo "$1*$3" | bc`
div=`echo "scale=2;$1/$3" | bc`
c

#echo $sum $sub $mul $div

if [ 1 -eq 0 ]
then
	echo " ok "
else
	echo "Error:Pass agrs"
fi


<<com
if [ $# -eq 3 ]
then
	case $2 in
		+) echo "$1 + $3 = $sum";;
		-) echo "$1 - $3 = $sub";;
		x) echo "$1 x $3 = $mul";;
		/) echo "$1 / $3 = $div";;
		*) echo "Enter correct operator (+,-,x,/)"
	esac
elif [ $# -eq 0 ]
then
	echo "Error : Please pass the arguments through command line."
elif [ $# -lt 3 ]
then
	echo "Error:Please pass 3 arguments."
fi
com
