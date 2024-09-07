/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	char *cptr;
	cptr = malloc(5);

	char arr[4] = {'.','t','x','t'};

	for(int i = 0; i < 4 ; i ++)
	{
		cptr[i] = arr[i];
	}
	cptr[4] = '\0';
	printf("%s\n",cptr);

}


