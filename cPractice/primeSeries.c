/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<stdio.h>
#include<stdbool.h>

bool isPrime(int n)
{
	if(n == 1 || n == 0)
		return false;

	for(int i = 2; i <= n/2 ; i++)
	{
		if(n%i == 0)
			return false;
	}
	return true;
}

int main()
{
	int n;
	printf("Enter num untill you want to print prime no.\n");
	scanf("%d", &n);

	for(int i = 1; i <= n; i++)
	{
		if(isPrime(i))
		{
			printf("%d ", i);
		}
	}
	return 0;
}



