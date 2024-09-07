/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
 */

#include<stdio.h>
#if 0
int main()
{
	int num=15,res;
	int count = 0;

	for (int i=0;i<32;i++)
	{
		if(num&1)
		{
			count+=1;
		}
		num>>=1;
	}
	printf("count=%d\n",count);
}
#endif

#if 1
int main()
{
	int num=15,i,count;
	
	for ( count=0; num!=0 ; num>>=1 )
	{
		if(num&1)
		{
			count+=1;
		}
	}
	printf("count = %d\n",count);
}
#endif
