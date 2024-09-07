/*
Name: Shreya Srinivas
Date: 25/04/2023
Description: WAP to check if number is odd or even
Sample Input: Enter the value of 'n' : -2
Sample Output: 2 is negative even number
 */

#include<stdio.h>

int main()
{
	int num;   //declaring variable 

	printf("Enter the value of 'n':"); 
	scanf("%d",&num); //Reading the variable from user 

	if( num % 2 == 0 ) //checking if the number is even or odd , if this cond is true means number is even else odd
	{
		if( num > 0 )  //chekcing if the even num in positive
		{
			printf("%d is positive even number\n",num);
		}
		else if( num < 0 )  //checking if the even number is negetive
		{
			printf("%d is negetive even number\n",num);
		}
		else // 0 is neither positive nor odd
		{
			printf("%d is neither odd nor even\n",num);
		}
	}
	else
	{
		if( num > 0 )  //checking if odd number is positive
		{
			printf("%d is positive odd number\n",num);
		}
		else if( num < 0 )  //checking if odd num is neg 
		{
			printf("%d is negetive odd number\n",num);
		}
		else  //if it is 0
		{
			printf("%d is neither odd nor even\n",num);
		}
	}
}



