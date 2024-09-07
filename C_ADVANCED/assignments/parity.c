/*
Name: Shreya Srinivas
Date: 07-05-2023
Description: WAP to count number of set bits in a given number and print parity
Sample Input: Enter the number : 7
Sample Output:
Number of set bits = 3
Bit parity is Odd
*/

#include<stdio.h>

int main()
{
	int num, count = 0;
	printf("Enter the number : ");
	scanf("%d",&num);  //reading the number from user

	for(int i = 0 ; i < 32 ; i++){  //looping through 32 bits of the int number
		if(num & 1)    //using bitwise AND to check if the last bit is set or not, if num & 00000001 = 1 bit is set else not set
		// or if(num&(1<<i))
		{
			count += 1;   //inc count if bit is set
		}
		num >>= 1;
	}
	printf("Number of set bits = %d\n",count);  //printing the count value

	int count_res = count & 1;
	if(count_res)   //if last bit is 1 -> even num else odd
	{
		printf("Bit parity is Odd\n");
	}
	else
	{
		printf("Bit parity is Even\n");
	}
}


