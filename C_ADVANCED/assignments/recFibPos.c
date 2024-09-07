/*
Name: Shreya Srinivas
Date: 08-06-2023
Description: WAP to generate fibbonacci numbers using recursion
Sample Exe:
Test Case 1 :
user@emertxe] ./fibbonacci_series
Enter a number: 8
0, 1, 1, 2, 3, 5, 8

Test Case 2:
Enter a number: 10
0, 1, 1, 2, 3, 5, 8

Test Case 3:
Enter a number: 21
0, 1, 1, 2, 3, 5, 8, 13, 21

Test Case 4:
Enter a number: -12
Invalid input
 */

#include <stdio.h>

void positive_fibonacci(int num, int first, int second, int next)
{
	if ( num > 0 )     //Enterred num must be positive 
	{
		if ( next <= num )  //Iterating till series stops before limit
		{
			if( next == 0 )  // for first iteration, print first and second as it is
			{
				printf("%d, ",first);
				printf("%d",second);
				next = first + second;     //adding prev elements to get next
				first = second;            //swapping first and second
				second = next;
				positive_fibonacci(num,first,second,next);  //Calling function again
			}
			else         // from necond iteration onwards
			{
				printf(", "); 
				printf("%d",next);  // printing next
				next = first + second;   //repeating logic
				first = second;
				second = next;
				positive_fibonacci(num,first,second,next);
			}
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

	positive_fibonacci(num, 0, 1, 0);   //Function call
}


