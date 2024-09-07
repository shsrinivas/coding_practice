/*
Name: Shreya Srinivas
Date: 08-06-2023
Description: WAP to find factorial of given number using recursion
Sample execution: -
Test Case 1:
user@emertxe] ./factorial
Enter the value of N : 7
Factorial of the given number is 5040

Test Case 2:
Enter the value of N : 5
Factorial of the given number is 120

Test case 3:
Enter the value of N : -1
Invalid Input

Test case 4:
Enter the value of N : 0
Factorial of the given number is 1
 */

#include <stdio.h>

int main()
{
	static int num,numDup;
	static unsigned long long int fact = 1;

	if(fact == 1)  //To read num only once from user 
	{
		printf("Enter the value of N : ");
		scanf("%d",&num);
		numDup = num;   // Storing num in dup variable
		if(num <0)      // Entered number must be positive
		{
			printf("Invalid Input\n");
			return 0;
		}
	}

	if(num == 0)   // Num = 5,4,3,2,1,0 , when num becomes 0 , print resule
	{
		printf("Factorial of %d is : %lld\n",numDup,fact);
		return fact;    // exit recursion here
	}
	else
	{
		fact = fact * num--;  //logic to find factorial
		main();    //Recursively calling main untill num = 0
	}
}

