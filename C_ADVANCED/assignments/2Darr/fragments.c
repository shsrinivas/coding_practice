/*
Name: Shreya Srinivas
Date: 18-07-2023
Description: WAP to implement fragments using Array of Pointers
Sample Exe:
Enter no.of rows : 3
Enter no of columns in row[0] : 4
Enter no of columns in row[1] : 3
Enter no of columns in row[2] : 5
Enter 4 values for row[0] : 1 2 3 4
Enter 3 values for row[1] : 2 5 9
Enter 5 values for row[2] : 1 3 2 4 1
*/

#include<stdio.h>
#include<stdlib.h>

void read_values(int noOfRows,float **row,int *size);
void find_avg(int noOfRows,float **row,int *size);
void sort_avg(int noOfRows,float **row,int *size);
void print_arr(int noOfRows,float **row,int *size);

int main()
{
	int noOfRows;
	printf("Enter no.of rows : ");
	scanf("%d",&noOfRows);

	float *row[noOfRows];
	int size[noOfRows];  //No of col for each row

	read_values(noOfRows,row,size); 
	find_avg(noOfRows,row,size);
	sort_avg(noOfRows,row,size);
	return 0;
}

void find_avg(int noOfRows,float **row,int *size)
{
	float sum[noOfRows];
	for(int i = 0; i < noOfRows; i++)
	{
		for(int j = 0 ; j < size[i] ; j++) // 3,4,5
		{
			sum[i] += row[i][j];   //Finding sum of each row
		}
	}

	float avg[noOfRows];
	for(int i = 0; i < noOfRows; i++)
	{
		avg[i] = sum[i]/size[i];  //Fining avg of each row and storing it in last element of array
		row[i][size[i]] = avg[i];
	}

	printf("Before sorting output is: \n");
	print_arr(noOfRows,row,size);  //Print array before sorting
}

void read_values(int noOfRows,float **row,int *size)
{
	//Reading inputs from user for no of rows and no of array elements
	for(int i = 0; i < noOfRows; i++)
	{
		printf("Enter no of columns in row[%d]:",i);
		scanf("%d",&size[i]);
	}

	for(int i = 0; i < noOfRows; i++)
	{
		//Creating dynamic mem according to the size entered by user
		row[i] = (float *)malloc((size[i]+1) * sizeof(float));
	}
	
	for(int i = 0; i < noOfRows; i++)  // 0 1 2
	{
		printf("Enter %d values for row[%d] : ",size[i],i);
		for(int j = 0 ; j < size[i] ; j++) // 3,4,5
		{
			//Reading array elements for each row
			scanf("%f", &row[i][j]);
		}
	}
}

void print_arr(int noOfRows,float **row,int *size)
{
	//Funtion to print array
	for(int i = 0; i < noOfRows; i++)  // 0 1 2
	{
		for(int j = 0 ; j <= (size[i]) ; j++) // 3,4,5
		{
			printf("%f ", row[i][j]);
		}
		printf("\n");
	}
}

void sort_avg(int noOfRows, float **row, int *size)
{
	//Function to sort the row addresses wrt to smallest avg 
    for (int i = 0; i < noOfRows - 1; i++)
    {
        for (int j = 0; j < noOfRows - i - 1; j++)
        {
            if (row[j][size[j]] > row[j + 1][size[j + 1]])
            {
                // Swap row addr
                float *temp_row = row[j];
                row[j] = row[j + 1];
                row[j + 1] = temp_row;

                // Swap sizes
                int temp_size = size[j];
                size[j] = size[j + 1];
                size[j + 1] = temp_size;
            }
        }
    }
	printf("After sorting output is: \n");
	print_arr(noOfRows,row,size);
}
