#!/bin/bash

<<Documentation
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
Documentation
<<c
echo "enter ans within 10 secs"
read -t 10 ans


if [ -z $ans ]
then
	echo "time's up !"
else
	echo "your response is : $ans"
fi
c


a1=(`cut -d ":" -f1 userAnswer.csv`)
a2=(`cut -d ":" -f1 correctAnswer.csv`)

correct=0
for i in `seq 0 $((${#a1[@]}-1))`
do
	echo user ans : ${a1[$i]}
	echo correct ans: ${a2[$i]}
	if [ ${a1[$i]} == ${a2[$i]} ]
	then
		correct=$((correct+1))
	fi
done
echo "Correct answers =  $correct/${#a1[@]}"



