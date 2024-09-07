/*
Name: Shreya Srinivas
Date: 16/5/2023
Description: WAP to print all primes using Sieve of Eratosthenes method
Sample Input: Enter the value of 'n' : 20
Sample Output: The primes less than or equal to 20 are : 2, 3, 5, 7, 11, 13, 17, 19
 */

#include<stdio.h>

int main()
{
	int a=2,i,j,num;
	printf("Enter the value of 'n' : ");  
	scanf("%d",&num);
	if(num>0)
	{
		int arr[num-1];

		for ( i = 0 ; i < num - 1 ; i++){
			arr[i] = a++;
		}
		for ( j = 2 ; j*j <= num ; j++ ){
			for ( i = 2 ; i < num - 1 ; i++){
				if ( arr[i] % j == 0 ){
					arr[i] = 0;
				}
			}
		}
		printf("The primes less than or equal to 20 are : ");
		for (i = 0; i < num - 1 ; i++) {
			if ( arr[i] == 0 ){
				continue;
			}
			else{
				if(i != 0)
				{
					printf(", ");
				}
				printf("%d", arr[i]);
			}
		}
		printf("\n");
	}
	else
	{
		printf("Please enter a positive number which is > 1\n");
	}
}

