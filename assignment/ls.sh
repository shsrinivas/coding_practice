

<<Documentation
Name: Shreya Srinivas
Date: 05/04/2023
Description: WAS to print the contents of dir without ls command
Sample Input: ./output_ls.sh
Sample Output: Assignment Classwork
Documentation

if [ $# -eq 0 ]    #if no cla is passed, print the contents of current working dir
then
	echo `pwd`     #printing the pwd
	echo `dir`     #dir is used to print the contents of pwd as default , like ls cmd
else
	for i in $*    #iterating through all cla
	do
		echo $i    #printing the dir name given by user for readbility purpose
		echo `dir $i` #printing the contents of dir passed through cl
	done
fi
