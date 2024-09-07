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
#if 1
int foo(int n)
{
	if(n<=1)
	{
		return 1;
	}
	if(n%2==0)
	{
		return foo(n/2);
	}
	return foo(n/2)+foo(n/2+1);
}

int main()
{
	printf("%d\n",foo(15));
	return 0;
}
#endif
}


