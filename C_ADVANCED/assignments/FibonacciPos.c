/*
Name: Shreya Srinivas
Date: 25-04-2023
Description: WAP to generate positive Fibonacci numbers
Sample Input: Enter a number: 8
Sample Output: 0 1 1 2 3 5 8
 */

#include<stdio.h>

int main()
{
	int i = 0, sum = 0, num, first = 0, second = 1, next = 0;
	//printf("Enter a number: ");  
	scanf("%d",&num); //Reading upto number from user to end series 
	if( num > 0 )  //number should be negative
	{
		while( next <= num )  // the num in series must not be greater than entered number by the user
		{
			if( next == 0 )  //for the first iteration, print the first and second number as 0 & 1
			{
				printf("%d %d ",first,second); // 0 1
				next=first+second; //adding first and seconf number and storing it in next variable (0+1)
				first=second; //reassigning second to first 
				second=next;  //reassigning second to next value
			}
			//from second iteration onwards 
			printf("%d ",next); 
			first=second; //reassigning like how we did in first iter
			second=next;
			next=first+second;
		}
		printf("\n");
	}
	else if(num == 0)
	{
		printf("%d ",first);
	}
	else  // if number is negative , print Invalid input error
	{
		printf("Invalid input\n");
	}
}


