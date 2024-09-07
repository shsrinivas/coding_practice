#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>


int main()
{
	int fd;
	fd = open("file.txt", O_RDONLY);
	if(fd == -1)
	{
		perror("open");
		exit(1);
	}

	int dest_fd = open("dest.txt", O_WRONLY);
	if(dest_fd == -1)
	{
		perror("open");
		return -1;
	}

	char buf[21];
	unsigned int ret;
	do{
		ret = read(fd, buf, 20);
		buf[ret] = '\0';
		printf("No of bytes written : %d\n", write(dest_fd, buf, ret));
	}while(ret == 20);

	close(fd);
	close(dest_fd);
	return 0;
}


