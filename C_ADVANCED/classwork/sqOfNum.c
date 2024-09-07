/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
 */

#include<stdio.h>
#if 0
int square(int x){
	return x*x;
}
int main()
{
	int sq,x=4;

	sq=square(x);
	printf("Square of number is: %d\n",sq);
}

#endif


#if 0

float FarToCel(int F)
{
	float C=((float)5/9*(F-32));
	return C;
}
int main()
{
	int Far=132;
	int cel=FarToCel(Far);
	printf("%d\n",cel);
}
#endif


#if 1
int EvenOdd(int n)
{
	if(n%2==0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
	int n=4;
	int res=EvenOdd(n);
	if(res == 0)
	{
		printf("TRUE\n");
	}
	else
	{
		printf("FALSE\n");
	}
}
#endif
