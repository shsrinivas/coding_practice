/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<stdio.h>
#include<string.h>

int main()
{

	char *s1 = "Hello";
	char s2[] = "Hello";
	char *ret = strcat(s2,s1);

	if(ret == NULL)
		printf("Failed\n");
	else
		printf("Success\n");
}


