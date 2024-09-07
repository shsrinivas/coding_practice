/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<stdio.h>

void print(char *str){
	while(*str)
	{
		putchar(*str++);
	}
	printf("\n");
}


int main()
{
	char *s="Hello";
	print(s);
}


