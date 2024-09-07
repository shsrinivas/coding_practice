/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<stdio.h>

int main(int argc, char *argv[] )
{
#if 0 
	char *file_name = "date";
	char *args[] = {"date", "-u", NULL};

	if(execvp("ls", {"ls", "-ls", NULL}) == -1)
	if(execvp(file_name, args) == -1)
		perror("execvp");
#endif
	// ./a.out ls -l
	//argv 0    1  2 NULL
#if 1

	//          ls        -l ...
	if(execvp(argv[1], argv + 1) == -1 )
		perror("execvp");
	
	return 0;
#endif
}


