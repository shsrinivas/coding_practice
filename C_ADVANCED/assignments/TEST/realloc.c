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
	int *ptr;
	ptr = calloc(5,4);
	ptr = realloc(ptr,7);
	ptr = realloc(ptr,2);

	if(ptr == NULL)
		printf("Failed!!\n");
	else
		printf("Success!!\n");
}
