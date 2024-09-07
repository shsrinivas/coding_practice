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
	void *vptr = malloc(8);

	int num = 10;

	*((int *)(vptr + 4)) = 10;
	printf("%d\n",*((int *)(vptr + 4)));

	char ch1 = 'A';

	*((char *)(vptr)) = ch1;
	printf("%c\n",*((char *)(vptr)));

	char ch2 = 'B';
	*((char *)(vptr + 1)) = ch2;
	printf("%c\n",*((char *)(vptr + 1)));


}


