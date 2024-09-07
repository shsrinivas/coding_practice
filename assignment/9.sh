#!/bin/bash

<<Documentation
Name: Shreya Srinivas
Date: 11/04/2023
Description: Write a script to print system information using commands
Sample Input:
./system_info.sh
Sample Output:
1. Currently logged users
2. Your shell directory
3. Home directory
4. OS name & version
5. Current working directory
6. Number of users logged in
7. Show all available shells in your system
8. Hard disk information
9. CPU information.
10. Memory Informations
11. File system information.
12. Currently running process.
Enter the choice : 2
Your shell directory is /bin/bash
Do you want to continue (y/n) ? y
1. Currently logged users
2. Your shell directory
3. Home directory
4. OS name & version
5. Current working directory
6. Number of users logged in
7. Show all available shells in your system
8. Hard disk information
9. CPU information.
10. Memory Informations
11. File system information.
12. Currently running process.
Enter the choice : 13
Error : Invalid option, please enter valid option
Do you want to continue(y/n) ? n
Documentation

user_op="y"   #setting first option as yes
while [ $user_op = "y" ]  # this loop will run untill anything other than y is given , else will exit
do
	echo 1. Currently logged users  #enterin gthe options for users to choose
	echo 2. Your shell directory
	echo 3. Home directory
	echo "4. OS name & version"
	echo 5. Current working directory
	echo 6. Number of users logged in
	echo 7. Show all available shells in your system
	echo 8. Hard disk information
	echo 9. CPU information.
	echo 10. Memory Informations
	echo 11. File system information.
	echo 12. Currently running process.
	echo Enter the choice :
	read choice

	case $choice in #based on choice, switch to required option
		1) echo "Currently looged in users: "`who -u`;;
		2) echo "Your shell directories: "$SHELL;;
		3) echo "Home directory: "$HOME;; 
		4) echo "OS name :"`uname -o` " OS version:" `uname --version`;;
		5) echo "Current working directory: "`pwd`;;
		6) echo "Number of users logged in: "`who -q`;;
		7) echo "All available shells in your syetem: "`cat /etc/shells`;;
		8) echo "Hard disk information: "`hwinfo`;;
		9) echo "CPU information: "`lscpu`	;;
		10) echo "Memory Information: "`cat /proc/meminfo`;;
		11) echo "File system information: "`df` ;;
		12) echo "Currently running process: "`ps`;;
		*) echo Error: Invalid option, please enter valid option
	esac

	echo "Do you want to continue(y/n) ? " # reading if user whats to continue or quit 
	read user_op
done
