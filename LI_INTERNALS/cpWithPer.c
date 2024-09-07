/*
Name: Shreya Srinivas
Date: 22-11-2023
Description: Implement a cp(copy) command with –p option
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define FILE_EXISTS 0
#define SUCCESS 1

int file_operations(int argc, char **argv, int *src_fd, int *dest_fd, int *i);

int main(int argc, char **argv)
{
	int index = 0;
	char buf[21];
	unsigned int ret;
	int src_fd, dest_fd;
	struct stat permission;    		//Creating a struct variable to store permission
	src_fd = open(argv[2], O_RDONLY);	

	if(!strcmp(argv[1] , "-p"))
		index = 1;   // -p is passed as argument

	int status = file_operations(argc, argv, &src_fd, &dest_fd, &index);  //Will check for src and dest file related operations

	if(status == SUCCESS)
	{
		do{
			ret = read(src_fd, buf, 20);     //Reading 20 bytes and storing it to buf
			buf[ret] = '\0';
			write(dest_fd, buf, ret);  //writing 20/ remaining bytes from buf to dest file
		}while(ret == 20);
		printf("File copied successfully !!\n");

		if(index)
		{
			printf("Copying permission ... \n");
			src_fd = open(argv[2], O_RDONLY);	
			fstat(src_fd, &permission);     //permisson now has src permission

			int dest_fd = open(argv[3], O_WRONLY | O_CREAT);
			fchmod(dest_fd, permission.st_mode);          //Changing the permission of destination file to mathc src permission
			printf("File permission copied successfuly...\n");
		}

		close(src_fd);
		close(dest_fd);
	}

}

int file_operations(int argc, char **argv, int *src_fd, int *dest_fd, int *i)
{

	char option;
	if(argc < 3)         //If arg count is less than 3, display usage 
	{
		printf("Usage : %s src.txt dest.txt\n", argv[0]);
	  	return 1;
	}

	//SRC FILE OPERATIONS
	printf("Opening file : %s\n", argv[1 + *i]);
	*src_fd = open(argv[1 + *i], O_RDONLY);                 //Open SRC file in read only mode
	
	if(*src_fd  == -1)                                      //Error check
	{
		perror("open");
		printf("Error num : %d\n", errno);
		exit(1);
	}
	else
	{
		printf("File opened successfully!!\n");
		close();
	}

	//DEST FILE OPERATIONS
	printf("Opening file : %s\n", argv[2 + *i]);
	*dest_fd = open(argv[2 + *i], O_WRONLY | O_CREAT | O_EXCL, 0666);
	if(*dest_fd  == -1)
	{
		perror("open");
		if(errno == EEXIST)                   							 //If file exists
		{
			printf("File already exists\n");                               
			printf("Do you want to overwrite <%s>(y/n)?",argv[2 + *i]);  //Ask user if they wish to overwrite
			scanf(" %c", &option);
			if(option == 'y')
			{
				*dest_fd = open(argv[2 + *i], O_WRONLY | O_TRUNC, 0666); //Delete prev content
                if (*dest_fd == -1) {
                    perror("open");
                    exit(1);
                }
				printf("Clearing previous contents .. \n");
				printf("File operations completed ... \n");
				return SUCCESS;                                         //File is ready to be copied   
			}
			else if(option == 'n')         			//If they dont want to overwrite terminate copy                                
			{
				printf("Terminating operation !!\n");
				close(dest_fd);
				close(src_fd);
				exit(1);
			}
		}
	}
    //If file doesnt exist
	else
	{
		printf("Created dest file .. \n");          //O_CREAT will create file
		printf("File operations completed ... \n"); //Just print success message
		return SUCCESS;   //If file doesnt exist , it will create file and return SUCCESS, file is ready to be copied
	}
}
