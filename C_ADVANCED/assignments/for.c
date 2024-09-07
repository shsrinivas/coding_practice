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
	arr={5,4,3,2,1};
	int i,n=5;
	for(n=5;n>0;n--)
	{
		for(i=0;i<n-1;i++)
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
		printf("\n");
	}
}


