#!/bin/bash

<<Documentation
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
Documentation

arr=`ls -f`
echo $arr

if [ -f file.txt ]
then
	echo "yes file is presnt in pwd"
else
	echo "no"
fi

if [ -d DIR ]
then
	echo "yes DIR is present in cwd"
fi


if [ -s file.txt ]
then
	echo "File is not empty"
else
	echo "File is empty"
fi

echo File5.txt | tr [:upper:][:lower:]

check if oldname and newname should not be same before moving 
mv old_file new_file

for i in ${arr[@]}
do
	echo $i
done
