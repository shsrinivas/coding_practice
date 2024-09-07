/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<stdio.h>
#include<stdlib.h>

void print_arr(int **array, int rows, int columns)
{
	for( int i = 0; i < rows ; i ++)
	{
		for( int j = 0; j < columns; j ++)
		{
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
}

void perform_op(int **arr, int row, int col)
{
	row = 0;
	col = col/2;
	arr[row][col] = num[0];    //Insert 1st element in row:col = 0:col/2
	int firstColIndex = 0;
	int lastColIndex = col - 1;
	for(int i = 0; i < row; i ++)
	{
		for(int j = 0; j < col; j ++)
		{
		}
	}
}

void magicSqr(int **arr, int row, int col)
{
	int tot = row * col;
	int num[tot]; //num[6] -> 0 1 2 3 4 5
	for( int i = 0; i < tot; i ++)  //Creating array for holding numbers num[6] = {1,2,3,4,5,6}
	{
		num[i] = i + 1;
	}

	for( int i = 0; i < 3 ; i ++)
	{
		for( int j = 0; j < 3; j ++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}

	for( int i = 0; i < row ; i ++)
	{
		for( int j = 0; j < col; j ++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	//print_arr(arr, row, col);

/*
	for( int i = 0; i < tot; i ++)
	{
		//perform_op(arr, row, col);
	}
	//print_arr(arr, row, col);
	*/
}

int main()
{
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	int rows = n, columns = n;
	//Now array is a 2D array , arr[i] will hold the integer addresses
	int **array = (int **)calloc(rows, sizeof(int *));    //Type casting it as int **, creating 3 rows which holds int pointer
	for (int i = 0; i < rows; i++) 
	{
	    array[i] = (int *)calloc(columns, sizeof(int));   //Creating an array and returning the addr
	}
	print_arr(array, rows, columns);
	printf("\n");
	magicSqr(array, rows, columns);
}


