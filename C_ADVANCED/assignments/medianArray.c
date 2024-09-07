/*
Name: Shreya Srinivas
Date: 08/05/2023
Description: WAP to find the median of two unsorted arrays
Sample Input:
Enter the 'n' value for Array A: 5
Enter the 'n' value for Array B: 5

Enter the elements one by one for Array A: 3 2 8 5 4
Enter the elements one by one for Array B: 12 3 7 8 5
Sample Output:
Median of array1 : 4
Median of array2 : 7
Median of both arrays : 5.5
 */

#include<stdio.h>

int main()
{
	int n, m, size1, size2, i, temp, index, index1, index2;
	float median, Median1, Median2;
	printf("Enter the 'n' value for the Array A: ");   
	scanf("%d",&size1);  //reading the size of array 1
	printf("Enter the 'n' value for the Array A: ");
	scanf("%d",&size2);  //reading size of array 2
	int arr1[size1], arr2[size2];   //declaring 2 array elements of size2 and size3
	printf("Enter the elements one by one for Array A: ");
	for ( i = 0 ; i < size1 ; i++ ) //Reading array elements one by one
	{
		scanf("%d",&arr1[i]);
	}
	printf("Enter the elements one by one for Array B: ");
	for ( i = 0 ; i < size2 ; i++ )  //Reading array2 elements one by one
	{
		scanf("%d",&arr2[i]);
	}
	for(n=size1;n>0;n--)   //Bubble sort logic to swap numbers untill they are in ascending order
	{
		for( i = 0 ; i < n-1 ; i++ )
		{
			if( arr1[i+1] < arr1[i] )  //logic to sway
			{
				temp = arr1[i];
				arr1[i] = arr1[i+1];
				arr1[i+1] = temp;
			}
		}
	}
	
	if( size1 % 2 != 0 )  //logic to find median if size if odd
	{
		index = size1 / 2;  //finding the index of the middle element 
		median = arr1[index];  // accessing the element using the index element
	}
	else   //logic to find median for even entries / array size
	{
		index1 = size1 / 2;  //taking 2 indexes in case of even array elements
		index2 = (size1/2) - 1;
		median = ((float) arr1[index1] + arr1[index2]) / 2;  // finding avg of median 1 and 2
	}	
	printf("Median of array1 : %g\n",median);
	Median1=median;

//Using same logic as above for array 2
	for( m = size2 ; m > 0 ; m-- )
	{
		for( i = 0 ; i < m-1 ; i++ )
		{
			if( arr2[i+1] < arr2[i] )
			{
				temp = arr2[i];
				arr2[i] = arr2[i+1];
				arr2[i+1] = temp;
			}
		}
	}

	if(size2 % 2 != 0)
	{
		index = size2/2;
		median = arr2[index];
	}
	else
	{
		index1 = size2 / 2;
		index2 = (size2/2 ) - 1;
		median = ((float) arr2[index1] + arr2[index2]) / 2;
	}	
	printf("Median of array2 : %g\n",median);
	Median2=median;
	printf("Median of both arrays: %g\n",( Median1 + Median2) / 2);
}


