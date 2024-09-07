/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<stdio.h>
#include<stdio_ext.h>
#include<unistd.h>

int main()
{
	char ch='y';
	printf("Enter string:");
	while(ch!='n')
	{
		scanf("%c",&ch);
		//__fpurge(stdin);
		printf("%c",ch);
		sleep(10);
	}
	return 0;
}


