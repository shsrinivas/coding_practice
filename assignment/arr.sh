#!/bin/bash

<<Documentation
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
Documentation

arr=(10 20 30 40 hello)

echo ${arr[@]:1:3}
echo ${arr[@]:2:3}
echo ${arr[@]::2}
echo ${arr[@]:4:1}
echo ${arr[@]:-1}

var=abcd123

echo ${var:1:3}
echo ${var:
