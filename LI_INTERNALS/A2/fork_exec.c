/*
Name: Shreya Srinivas
Date: 05-12-2023
Description: WAP to create child process to execute command passed through command line
Sample Exe: 
1. No args passed (Print usage info)
	./exe_child Usage: ./exe_child args...
2. Valid arg. passed
./exe_child date
	This is the CHILD process, with id 11612
	Wed Apr  4 13:27:19 IST 2012
	Child exited with status 0
*/

#include<stdio.h>
#include<unistd.h>

int main()
{
	int pid = fork();

	if(pid == 0)
	{
		printf("Before exec\n");
		execl("/bin/ls", "ls", NULL);
	}
	else
	{
		wait(NULL);
		printf("This is original program\n");
	}
}


