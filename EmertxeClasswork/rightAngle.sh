#!/bin/bash

<<Documentation
Name:
Date:
Description:
Sample Input:
Sample Output:
Documentation

read -p "Enter the lenght of side A: " a
read -p "Enter the lenght of side B: " b
read -p "Enter the lenght of side c: " c

echo "A side="
echo "B side="
echo "C side="

aSq=`expr $a \* $a`
bSq=`expr $b \* $b`
cSq=`expr $c \* $c`

echo $aSq $bSq $cSq

if [ `expr $aSq + $bSq` -eq $cSq -o `expr $aSq + $cSq` -eq $bSq -o `expr $bSq + $cSq` -eq $aSq ]
then
	echo "It is a right angle triangle"
else
	echo "It is not a right angle triangle"
fi

