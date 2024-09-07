#!/bin/bash

<<Documentation
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
Documentation


enterUserName(){
	echo "Enter user name: "
	read userName
}

enterPasswd(){
	echo "Enter password: "
	read -s passwd
	echo "Re-enter passwd: "
	read -s confPasswd

	if [ $passwd != $confPasswd ]
	then
		echo "Wrong confirmation password entered, please re-enter"
		enterPasswd
	else
		echo "Thankyou for entering correct password !!"
		echo "Storing passwd into passwd.csv!!"
		echo "$confPasswd" >> passwd.csv
	fi
}

checkCSV(){
	#echo Checking in $1 file 
	arr=(`cut -d "," -f1 $1`)
	#echo array elements: ${arr[@]}
	#echo username entered: $userName
	matchFound=false
	for i in `seq 0 $((${#arr[@]}-1))`
	do
		if [ $userName = ${arr[$i]} ]
		then
			rowVal=$i
			matchFound=true
			break
		fi
	done
}


sign_up(){
	enterUserName
	checkCSV userName.csv
	echo match_found: $matchFound
	if [ $matchFound == true ]
	then
		echo "user present"
		sign_up
	else
		echo "user not present"
		echo "$userName" >> userName.csv
		enterPasswd
		echo "Signup completed successfully !!!!"
	fi
}


takeTest(){
	lines=`wc -l < questions.csv`
	echo lines: $lines
	numOfQ=$((lines/5))
	ECounter=0
	for i in 1 2 3 #`seq $numOfQ`
	do
		if [ $i -eq 1 ]
		then
			head -5 questions.csv
			echo "Please enter your answer within 10 seconds:"
			read -t 10 ans

			if [ -z "$ans" ]
			then
				echo "Time's up!"
				ans="e"
			else
				echo "Your response is: $ans"
			fi
			echo "$ans" > userAnswer.csv
		else
			totLine=`echo 5*$i | bc`
			head -$totLine questions.csv | tail -5
			read -t 10 ans
			if [ -z "$ans" ]
			then
				echo "Time's up!"
				ans="e"
			else
				echo "Your response is: $ans"
			fi
			echo "$ans" >> userAnswer.csv
		fi
	done
}

evaluate(){

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
}



conductTest(){
	echo 1. Start test now
	echo 2. exit and take test later

	read -p "Select one of the above: " op

	case $op in
		1) takeTest ; evaluate;;
		2) exit ;;
		*) echo "Enter valid option !!" ; conductTest ;;
	esac
}




checkPasswd(){
	read -p "Enter password to check if you're the right user: " passwd
	echo checking if password is correct!
	arr1=(`cut -d "," -f1 passwd.csv`)
	echo rowVal : $rowVal
	echo ${arr1[$rowVal]}
	
	if [[ $passwd == ${arr1[$rowVal]} ]]
	then
		echo "You have entered right password !!"
		echo "Sign-in completed successfully !!!"
		conductTest
	else
		flag=0
		for i in 2 3
		do
			echo "Password attempt $i >>"
			read -p "Re-enter your password: " passwd
			if [[ $passwd == ${arr1[$rowVal]} ]]
			then
				echo "You've entered right password"
				echo "Sign-in completed successfully !!!"
				conductTest
				break
			else

				echo "You have entered wrong password !!"
				flag=1
			fi
		done
		if [ $flag -eq 1 ]
		then
			print3options
		fi
	fi
}

sign_in(){
	enterUserName
	checkCSV userName.csv
	#echo match_found: $matchFound
	if [ $matchFound == true ]
	then
		#echo "user present"
		#echo row val : $rowVal
		checkPasswd $rowVal
	else
		echo "user not present"
		sign_in
	fi
}

print3options(){
	echo "Select one of the below options !!"
	echo "1. Sign up"
	echo "2. Sign in"
	echo "3. Exit"
	read op

	case $op in
		1) sign_up;print3options;;
		2) sign_in;;
		3) exit ;;
		*) echo "Enter valid option!!";;
	esac
}

print3options





