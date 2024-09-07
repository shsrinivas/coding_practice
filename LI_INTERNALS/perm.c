/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main()
{
	struct stat permission;
	int src_fd = open("file1.txt", O_RDONLY);
	fstat(src_fd, &permission);
	// permission.st_mode;

	int dest_fd = open("file2.txt", O_WRONLY | O_CREAT);
	fchmod(dest_fd, permission.st_mode);
}


