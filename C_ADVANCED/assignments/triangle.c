/*
Name: Shreya Srinivas
Date: 26-04-2023
Description: WAP to print triangle pattern as shown below
Sample Input: Enter the number: 4
Sample Output:
1 2 3 4
5     6
7 8
9
 */

#include<stdio.h>

int main()
{
	int row, num, col, n, count = 0;  //declare variables
	printf("Enter a number: ");
	scanf("%d",&n);         //read number from user
	num = n;
	for( row = 1 ; row <= n ; row++ )  //if n=4 , row =1 2 3 4
	{
		for( col = 1 ; col <= num ; col++ ) // for row=1, col=1,2,3,4;row=2, col=1,2,3; row=3, col=1,2 and row=4,col=1 . num is decremented after completion of each outer loop
		{
			if( row == 1 | col == 1 | row + col == n + 1 ) //printing count value , if row,col=1,1 and if row+col=num+1
			{
				count += 1;  //incremeting count value if one of the above condition is true
				printf("%d ",count);
			}
			else
			{
				printf(" ");   // if none of the condition is true print space
			}
		}
		num -= 1;    // decrementing the num after each outer iter
		printf("\n");
	}
}


