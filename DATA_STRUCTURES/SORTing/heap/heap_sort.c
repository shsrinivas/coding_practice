#include "main.h"


/* Function to sort the array using heap sort */
int heap_sort(int *arr, int size )
{
	build_maxheap(arr,size);
	int i = size - 1;
	while( i >= 0)
	{
		swap(arr,0,i);
		max_heap(arr,0,i);
		i --;
	}
}       

