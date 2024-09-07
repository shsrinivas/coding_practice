/*
Name: Shreya Srinivas
Date: 08-06-2023
Description: WAP to generate negative fibbonacci numbers using recursion
Sample Exe:
Test Case 1 :
user@emertxe] ./fibbonacci_series
Enter a number: -8
0, 1, -1, 2, -3, 5, -8
Test Case 2:
Enter a number: -10
0, 1, -1, 2, -3, 5, -8
Test Case 3:
Enter a number: -21
0, 1, -1, 2, -3, 5, -8, 13, -21

Test Case 3:
Enter a number: 21
Invalid input
 */

#include <stdio.h>

void neg_fibonacci(int num, int first, int second, int next)
{
	if ( num < 0 )     //Enterred num must be positive 
	{
		if ( next >=  num && next <= -(num))  //Iterating till series stops before limit
		{
			if( next == 0 )  // for first iteration, print first and second as it is
			{
				printf("%d, ",first);
				printf("%d",second);
			}
			else         // from necond iteration onwards
			{
				if( next == num)         // if num and next is matching print the next value and exit the recurssion 
				{
					printf(", "); 
					printf("%d\n",next);  // printing next
					return;
				}
				else
				{
					printf(", "); 
					printf("%d",next);  // printing next
				}
			}
			next = first - second;   //subtract prev values
			first = second;          //swap the sec with firat and next with second
			second = next;
			neg_fibonacci(num,first,second,next);   //recursively call the funtion untill condition gets false
		}
		else if( num == 0 )
		{
			printf("%d\n",first);
		}
		else
		{
			printf("\n");
		}
	}
	else     //If number is negative 
	{
		printf("Invalid Input\n");
	}
}


int main()
{
	int num;

	printf("Enter a number: ");
	scanf("%d", &num); //Reading number from user

	neg_fibonacci(num, 0, 1, 0);   //Function call
}


