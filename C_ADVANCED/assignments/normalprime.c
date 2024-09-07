/*
Name: Shreya Srinivas
Date: 07-05-2023
Description: WAP to check whether a given number is prime or not.
Sample Input: Enter a number: 2
Sample Output: 2 is a prime number
 */

#include<stdio.h>

int main()
{
	int i,num,flag=0;
	printf("Enter a number: ");
	scanf("%d",&num);  //Reading input from user

	if( num <= 0 )   //If num is neg or 0 print Invalid input 
	{
		printf("Invalid input\n");
	}
	else
	{
		for ( i = 2 ; i <= num/2 ; i++ ){  // looping from 2 to half of the range of the number
			if( num % i == 0 )   // if the number is divisible then number is prime
			{
				flag = 1;  // setting flag if number is divisible by the current i value  
				break; //breaking out of for loop
			}
		}
		if( flag )  //if flag is set, then number is not prime number as it means it was divisible by some number else it is a prime number
		{
			printf("%d is not a prime number\n",num);
		}
		else
			printf("%d is a prime number\n",num);
	}
}

