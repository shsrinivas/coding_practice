#!/bin/bash

<<Documentation
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
Documentation

arr=()

# Loop over command line arguments starting from second argument

for i in "${@:2}"; do
    arr+=("$i")
done

# Print the array
#echo arrArgs="${args[@]}"
echo arr=${arr[@]}


echo arr=${arr[@]}
len=$(($#-1))
echo len: $len

for i in $(seq 0 $(($len - 2)))
do
	echo i: $i
    for j in $(seq 0 $(($len - $i - 2)))
	do
		echo j: $j
        if (( ${arr[j]} > ${arr[j+1]} )) 
		then
            # Swap the elements
            temp=${arr[j]}
            arr[j]=${arr[j+1]}
            arr[j+1]=$temp
        fi
    done
done

# Print the sorted array
echo "Sorted array: ${arr[@]}"

