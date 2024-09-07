#include "main.h"

data_t bubble(data_t *arr, int size )
{
	for(int i = 0 ; i < size ; i++)
	{
		for(int j = 0 ; j < size - 1 - i ; j++)
		{
			//Comparing elements
			if(arr[j] > arr[j + 1])
			{
				//Swap elements 
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

