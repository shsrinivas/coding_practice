/*
Name: Shreya Srinivas
Date: 29/04/2023
Description: WAP to generate AP, GP, HP series
Sample Input:
Enter the First Number 'A': 2
Enter the Common Difference / Ratio 'R': 3
Enter the number of terms 'N': 5
Sample Output:
AP = 2, 5, 8, 11, 14
GP = 2, 6, 18, 54, 162
HP = 0.500000, 0.200000, 0.125000, 0.090909, 0.071428
 */

#include<stdio.h>

int main()
{
	int a,r,n,i,temp;
	printf("Enter the First Number 'A':");
	scanf("%d",&a);  //reading first number from user
	printf("Enter the Common Difference / Ratio 'R':");
	scanf("%d",&r);  //Reading common difference from user
	printf("Enter the number of terms 'N':");
	scanf("%d",&n);  //Reading the Nth tern from user

	if( a<0 || r<0 || n<0 )  //making sure the user input is valid ie, >0
	{
		printf("Invalid input\n");
	}
	else
	{	
		temp = a;   //assigning a to a temporary variable to reswt after generation of each series

		for( i = 1 ; i <= n; i++ )   // looping from 1 to n terms tims
		{
			if( i == 1 ) // print a value as it is for the first term 
			{
				printf("AP = %d",a);
			}
			else
			{
				a = a + r;   //adding the common difference to a
				printf(", ");
				printf("%d",a);  
			}
		}
		printf("\n");
		a = temp;   // reassigning the value of a to first temr
		for( i = 1 ; i <= n ; i++ )
		{
			if( i == 1 )
			{
				printf("GP = %d",a);
			}
			else
			{
				a = a * r;
				printf(", ");
				printf("%d",a);
			}
		}
		printf("\n");
		a = temp;
		for( i = 1 ; i <= n ; i++ )
		{
			if( i == 1 )
			{
				float res = (float) 1/a;
				printf("HP = %f",res);
			}
			else
			{
				a = a + r;
				float res = (float) 1/a;
				printf(", ");
				printf("%f",res);
			}
		}
		printf("\n");
	}
}





