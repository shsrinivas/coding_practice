/*
Name: Shreya Srinivas
Date: 14-06-2023
Description: WAP to generate the prime series upto the given limit using functions
Sample Input: Enter a number: 20
Sample Output: 2 3 5 7 11 13 17 19
 */

#include <stdio.h>

void generate_prime(int num){
	int i,j,a=2;
	int arr[num-1];                              //Creating array
	if(num>1)             //Checking if number if positive number
	{
		//int arr[num-1];                              //Creating array

		for ( i = 0 ; i < num - 1 ; i++){            //Inserting array elements from 2 to num-2
			arr[i] = a++;
		}
		for ( j = 2 ; j*j <= num ; j++ ){           //checking for num is less than square root of num 
			for ( i = 2 ; i < num - 1 ; i++){   //iterating through all array elements
				if ( arr[i] % j == 0 ){     //if is is a multiple of j then replace the array element with 0
					arr[i] = 0;
				}
			}
		}
	}
	for (i = 0; i < num - 1 ; i++) {
		if ( arr[i] == 0 ){                  //To skip printing 0s
			continue;
		}
		else{
			printf("%d ", arr[i]);
		}
	}
	printf("\n");
}

int main()
{
	int limit;

	printf("Enter the limit: ");
	scanf("%d", &limit);

	if (limit > 1)
	{
		generate_prime(limit);
	}
	else
	{
		printf("Invalid input\n");
	}

	return 0;
}

