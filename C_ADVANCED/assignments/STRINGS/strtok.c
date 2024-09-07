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
#include<stdio_ext.h>

char *my_strtok(char *str, const char *delim)
{
	static char *start_addr = NULL;
	static int pos = 0; 

	if(start_addr == NULL && str != NULL)
	{
		start_addr = str;
		//printf("start addr at pos 0: %p\n",start_addr);
		//printf("str addr at pos 0: %p\n",str);
	}
	
	if(str == NULL)
	{
		str = start_addr  + pos ;
		start_addr += pos;
		//printf("start addr at pos %d: %p\n",pos,start_addr);
		//printf("str addr at pos %d: %p\n",pos,str);
	}
	int i,count;
	for(i = 0; str[i] != '\0'; i++)
	{
		//printf("str[%d] = %c\n",i,str[i]);
		for(int j = 0; delim[j] != '\0'; j++)
		{
			if(str[i] == delim[j])
			{
				//printf("str[%d]  str[%d]: %c %c\n",i,j,str[i],delim[j]);
				//printf("i: %d\n",i);
				str[i] = '\0';
				pos = ++i;
				//printf("pos = %d\n",pos);
				return str;
			}
		}
	}
}


int main()
{
	//char str[50] = "Hello////World';/;Hi;/how";
	//const char delim[10] = "';/.,";

	char str[50], delim[50];
    
    printf("Enter the string  : ");
    scanf("%s", str);
    
    __fpurge(stdout);
 
    printf("Enter the delimeter : ");
    scanf("\n%s", delim);
    __fpurge(stdout);

	int len = strlen(str);
	str[len] = delim[0];

	char *token = my_strtok(str,delim);
	printf("Tokens : \n");
	while(token != NULL)
	{
		while(*token == '\0')
			token = my_strtok(NULL,delim);
		printf("%s\n",token);
		token = my_strtok(NULL,delim);
	}
	//printf("%s\n",token);
	return 0;
}


