#include "main.h"
/*
void swap(int *arr, int a, int b)
{
	int temp = arr[a];
	arr[b] = arr[b];
	arr[b] = temp;
}	
*/

/* Function to check the number is minimum or maximum to decide the position */
void max_heap(int *arr, int i, int size)
{
	int L, R;
	L = (2*i) + 1;
	R = (2*i) + 2;
	int large;
	if(arr[i] < arr[L] && L < size)
		large = L;
	else
		large = i;

	if(arr[large] < arr[R] && R < size)
		large = R;

	if(i != large)
	{
		swap(arr,large,i);
		max_heap(arr,large,size);
	}
}
