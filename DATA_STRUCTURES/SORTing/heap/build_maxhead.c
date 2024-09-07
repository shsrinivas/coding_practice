#include "main.h"

void build_maxheap(int *arr, int size)
{
	int i = size/2 - 1;
	while( i >= 0 )
	{
		max_heap(arr,i,size);
		i --;
	}
}
