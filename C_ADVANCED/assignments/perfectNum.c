
/*
Name: Shreya Srinivas
Date: 25-04-2023
Description: WAP to check if number is perfect or not
Sample Input: Enter a number: 6
Sample Output: Yes, entered number is perfect number
 */

#include<stdio.h>

int main()
{
	int i,n,num,sum=0;
	printf("Enter the number: ");
	scanf("%d",&num);   //Taking input from user
	if( num > 0 ) // number must be positve
	{
		for ( i=1; i<num; i++ ) // if num = 6 , i=1,2,3,4,5
		{
			if( num % i == 0)  //checking through all the divisors of number , for 6=> 1,2,3 are the divisors
			{
				sum += i;  //if the number is the divisor of the number then add it to sum , So sum = 1+2+3=6
			}
		}
		if( sum == num)// 6==6 if the sum of all the divisors is equal to the entered number it is a perfect number else not perfect
		{
			printf("Yes, entered number is a perfect number\n");
		}
		else
		{
			printf("No, entered number is not a perfect number\n");
		}	
	}
	else  // if entered number is negative
	{
		printf("Error : Invalid Input, Enter only positive number\n");
	}
	return 0;
}
