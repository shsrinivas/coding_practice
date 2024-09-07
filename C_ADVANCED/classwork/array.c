/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<stdio.h>

int main()
{
	int size,i;
	printf("Enter the num of array elements: \n");
	scanf("%d",&size);

	int arr[size];
	printf("ENter array elements: ");
	for (i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("array elements are : ");
	for (i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}

}


