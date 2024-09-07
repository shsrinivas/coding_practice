/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<stdio.h>

void check_prime(int n)
{
	int flag = 0;

	for(int i = 2; i <= n/2 ; i ++)
	{
		if( n % i == 0 )
		{
			flag = 1;
			break;
		}
	}
	if(flag == 0)
		printf("Number is a prime number\n");
	else
		printf("Number is not a prime number\n");
}


int main()
{
	int n;
	printf("Enter num to check if it is prime or not : ");
	scanf("%d",&n);
	check_prime(n);
}


