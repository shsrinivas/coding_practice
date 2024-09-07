/*
Name: Shreya Srinivas
Date: 14-06-2023
Description: WAP to check whether a given number is prime or not using function.
Sample Input: Enter a number: 2
Sample Output: 2 is a prime number
 */

#include <stdio.h>

int is_prime(int num)
{
	int i,flag=0;
	for ( i = 2 ; i <= num/2 ; i++ ){  // looping from 2 to half of the range of the number
		if( num % i == 0 )   // if the number is divisible then number is prime
		{
			flag = 1;  // setting flag if number is divisible by the current i value
			break; //breaking out of for loop
		}
	}
	if( flag )  //if flag is set it is not prime num.
		return 0;
	else
		return 1;
}

int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	if( num <= 0 )   //If num is neg or 0 print Invalid input
	{
		printf("Invalid input\n");
	}
	else
	{
		int res = is_prime(num);
		if(res)
			printf("%d is a prime number\n",num);
		else
			printf("%d is not a prime number\n",num);
		return 0;
	}
}

