/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
 */

#include<stdio.h>

int main()
{
	int num, first = 0, second = 1,next;
	printf("Enter the number: ");
	scanf("%d",&num);
	if(num<0)
	{
		next=first-second;
		printf("%d %d ",first, second);
		while( next >= num ) 
		{
			printf("%d ",next);
			first=second;
			second=next;
			next=first-second;
		}
	}
	else if (num==0)
	{
		printf("%d ",first);
	}
	else
	{
		printf("Invalid input");
	}
}


