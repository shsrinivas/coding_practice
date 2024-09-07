/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/
#include <stdio.h>

void fun(int arr1[], int size, int arr2[], int *new_size);

int main()
{
	int size, i;
	printf("Enter the size:");
	scanf("%d",&size);

	int arr1[size], dup_array[size];
	
	printf("Enter elements into the array:");
	for (i = 0 ; i< size ; i++)
	{
		scanf("%d",&arr1[i]);
	}
	
	for (int i = 0 ; i< size ; i ++ )
	{
		if ( i == 0 ){
			dup_array[i] = arr1[i];
		}
		else
		{
			if ( arr1[i] == dup_array[i-1])
			{
				continue;
			}
			else
		}

		printf("%d\n",arr1[i]);
	}	

}
