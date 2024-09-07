#!/bin/bash

<<Documentation
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
Documentation

pwd:
DSN001.jpg DSN002.jpg file.txt DSN3.jpg DIR

user will give prefix name as day_out

do jpg files must be converted as
	day_out001.jpg day_out002.jpg file.txt day_out3.jpg DIR

how to check for jpg : *.jpg

tr -d [:alpha:] -> 001. , we dont want dot
tr -d [:digit:]  -> deletes all digits => DSN.jpg dot will also be there
echo DSN001.jpg | tr -cd [:digit:] -> removes all but digit =>001

mv DSN001.jpg day_out001.jpg


