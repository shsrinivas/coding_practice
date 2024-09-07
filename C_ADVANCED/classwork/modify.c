/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<stdio.h>

int modify(int num1)
{
	num1+=1;
	return num1;
}


int main()
{
	int num1=10;
	printf("before %d\n",num1);
	num1=modify(num1);
	printf("After %d\n",num1);
	return 0;
}


