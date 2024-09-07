/*
Name: Shreya Srinivas
Date: 17-07-2023
Description: WAP to generate a n*n magic square
Sample Exe:
Test Case 1:
user@emertxe] ./magic_square
Enter a number: 3
8      1      6
3      5      7
4      9      2

Test Case 2:
Enter a number: 6
Error : Please enter only positive values
*/

#include<stdio.h>
#include<stdlib.h>
void print_arr(int **arr, int n);
void row_col_op(int *row, int *col, int *n, int **arr)
{
	int backup_row = *row;  //Taking backup of row and col before modifying the values
	int backup_col = *col;

	*row = *row - 1;  //Going one row up
	if(*row < 0)
	{
		*row = *n - 1;
	}

	*col = *col + 1; //Going col to the right
	if ( *col > *n - 1 )
	{
		*col = 0;
	}

	if( arr[*row][*col] != 0) //if num exists int the particular arr[row][col]
	{
		*row = backup_row;
		*col = backup_col;	
		*row = *row + 1;   //row will be below the prev element
	}
}
void magic_sqr(int **arr, int n)
{
	int tot = n*n, row = 0, col = n/2, num[tot];
	for(int i = 0; i < tot; i ++)  //Creating array which holds num from 1 to row * col 
	{
		num[i] = i + 1;
	}
	arr[row][col] = num[0];  //Initializing arr[row = 0][col = col/2] with 1

	for( int i = 1 ; i < tot ; i ++)
	{
		row_col_op(&row, &col, &n, arr);  //Returns row and col values after moving row up and col to the right
		arr[row][col] = num[i];
	}
}

int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);

	if(n < 0 || n % 2 != 0 )
	{
		printf("Error : Please enter only positive odd numbers\n");
		return 0;
	}

	int row = n, col = n;

	//Both dynamic array creation using calloc
	int **arr  = (int **)calloc(row, sizeof(int *)); //Creating array of pointers to hold the add of arrays
	for(int i = 0; i < row; i ++)
	{
		arr[i] = (int *)calloc(col, sizeof(int)); // creating array of size col
	}
	magic_sqr(arr, n); //Calling print magic square
	print_arr(arr,n);  //Printing array elements 
}

void print_arr(int **arr, int n)
{
	//Function to print the 2D array values, n = row = col
	for(int i = 0; i < n; i ++)
	{
		for(int j = 0; j < n; j ++)
		{
			printf("%d  ",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

