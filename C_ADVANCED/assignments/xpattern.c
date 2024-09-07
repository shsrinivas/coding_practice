/*
Name: Shreya Srinivas
Date: 25-04-2023
Description: WAP to print the numbers in X format as shown below
Sample Input: If n = 5, then,
Sample Output:
1___5
_2_4_
__3__
_2_4_
1___5
*/

#include<stdio.h>

int main()
{

	int i,j,num;
	printf("Enter the number: ");
	scanf("%d",&num); //Read a number from user.
	
	for (i=1;i<=num;i++)  //for 1 to number iteration
	{
		for (j=1;j<=num;j++)  //for 1 to number iteration
		{
			if(i==j)   //if i&j are matching print i. 1==1, print 1
			{
				printf("%d ",i);
			}
			else if(i+j==num+1) //if the sum of i&j = num+1 , print j, 1+4 = 5+1
			{
				printf("%d ",j);  //print j=4
			}
			else
			{
				printf(" ");  // if none of condition matches print space
			}
		}
		printf("\n");
	}
	return 0;
}


