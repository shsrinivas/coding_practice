/*
Name: Shreya Srinivas
Date: 17-07-2023
Description: WAP to find the product of given matrix.
Sample Exe:
Test case1:
user@emertxe] ./transpose_product
Enter number of rows : 3
Enter number of columns : 3
Enter values for 3 x 3 matrix :
1      2      3
1      2      3
1      2      3
Enter number of rows : 3
Enter number of columns : 3
Enter values for 3 x 3 matrix :

1      1     1
2      2     2
3      3     3
Product of two matrix :
14      14      14
14      14      14
14      14      14
 */

#include<stdio.h>
#include<stdlib.h>
void print_matrix(int **arr, int row, int col);
void read_matrix(int **arr, int row, int col);
void matrix_mul(int **arr1, int **arr2, int rows1, int col2, int col1, int **arr);

int main()
{
	int rows1,col1,rows2,col2;
	printf("Enter number of rows : ");
	scanf("%d",&rows1);
	printf("Enter number of columns : ");
	scanf("%d",&col1);

	//Creating a 2D both dynamic matrix 
	int **arr1 = (int **)calloc(rows1, sizeof(int *));
	for ( int i = 0 ; i < rows1 ; i ++ )
	{
		arr1[i] = (int *)calloc(col1, sizeof(int));
	}
	read_matrix(arr1,rows1,col1);

	printf("Enter number of rows : ");
	scanf("%d",&rows2);
	printf("Enter number of columns : ");
	scanf("%d",&col2);
	if(col1 != rows2)
	{
		printf("Matrix multiplication is not possible\n");
		return 0;
	}
	//Creating a 2D both dynamic matrix 
	int **arr2 = (int **)calloc(rows2, sizeof(int *));
	for(int i = 0; i < rows2 ; i ++)
	{
		arr2[i] = (int *)calloc(col2, sizeof(int));
	}
	read_matrix(arr2,rows2,col2);
	//Resultant of arr1 * arr2 with row1 and col2
	int **arr = (int **)calloc(rows1, sizeof(int *));
	for (int i = 0; i < rows1; i ++)
	{
		arr[i] = (int *)calloc(col2, sizeof(int));
	}
	matrix_mul(arr1,arr2,rows1,col2,col1,arr);  //Doing matrix multiplication
	print_matrix(arr, rows1, col2);  //Print resultant matrix
}

void print_matrix(int **arr, int row, int col) //Priting the matrix
{
	for (int i = 0 ; i < row ; i ++)
	{
		for(int j = 0 ; j < col ; j ++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void read_matrix(int **arr, int row, int col) //Reading matrix values
{
	printf("Enter values for %d x %d matrix :\n", row, col);
	for (int i = 0 ; i < row ; i ++)
	{
		for(int j = 0 ; j < col ; j ++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
}

//Matrix multiplication logic
void matrix_mul(int **arr1, int **arr2, int rows1, int col2, int col1, int **arr)
{
	for (int i = 0; i < rows1; i++)
	{
		for (int j = 0; j < col2; j++)
		{
			//arr[i][j] = 0; // Initialize the element in the resultant matrix
			for (int k = 0; k < col1; k++)
			{
				arr[i][j] = arr[i][j] + (arr1[i][k] * arr2[k][j]);
			}
		}
	}
}
