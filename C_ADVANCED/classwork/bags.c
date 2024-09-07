/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<stdio.h>

int bags[] = {20,5,20,3,20};

int main()
{
	int pos = 40;
	int *next();
	*next() = pos;
	printf("%d %p %d",pos, next(), bags[0]);
}

int *next()
{
	int i;
	for(i=0; i<5 ; i++)
	{
		if(bags[i] == 20)
			return (bags + i);
	}
}
