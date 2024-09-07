/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *my_strtok(char *str, const char *delim)
{
	static char *start_addr = NULL;
	static int pos = 0; 

	if(start_addr == NULL && str != NULL)
	{
		start_addr = str;
		printf("start addr at pos 0: %p\n",start_addr);
		printf("str addr at pos 0: %p\n",str);
	}
	
	if(str == NULL)
	{
		str = start_addr  + pos ;
		start_addr += pos;
		printf("start addr at pos %d: %p\n",pos,start_addr);
		printf("str addr at pos %d: %p\n",pos,str);
	}
	for(int i = 0; str[i] != '\0'; i++)
	{
		printf("str[%d] = %c\n",i,str[i]);
		for(int j = 0; delim[j] != '\0'; j++)
		{
			if(str[i] == delim[j])
			{
				printf("str[%d]  str[%d]: %c %c\n",i,j,str[i],delim[j]);
				printf("i: %d\n",i);
				str[i] = '\0';
				pos = ++i;
				printf("pos = %d\n",pos);
				return str;
			}
		}
	}
}


int main()
{
	char str[50] = "Hello/World;Hi/how";
	const char delim[10] = "';/.,";

	char *token = my_strtok(str,delim);
	while(token != NULL)
	{
		printf("%s\n",token);
		token = my_strtok(NULL,delim);
	}
	//printf("%s\n",token);
	return 0;
}


