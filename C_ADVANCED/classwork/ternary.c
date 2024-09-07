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
	int res,n1=10,n2=20,n3=30;

	res = n1>n2?n1:n2;
	printf("greatest is %d\n",res);

	res = (n1>n2&&n1>n3)?n1:(n2>n3)?n2:n3;
	printf("greatest is %d\n",res);

	2>1?printf("True\n"):printf("False\n");
	res=4>1?4+1:4-1;
	printf("res is %d\n",res);
}


