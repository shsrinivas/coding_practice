#include "main.h"

void merge(int *arr, int size, int *Lsa, int mid, int *Rsa, int rsize)
{
	int  i = 0;
	int  j = 0;
	int  k = 0;
	while( i < mid && j < rsize)
	{
		if(Lsa[i] <= Rsa[j])
		{
			arr[k] = Lsa[i];
			i ++;
		}
		else
		{
			arr[k] = Rsa[j];
			j ++;
		}
		k ++;
	}
	while( j < rsize )
	{
		arr[k] = Rsa[j];
		j ++;
		k ++;
	}
	while( i < mid )
	{
		arr[k] = Lsa[j]; //lsa[j]
		i ++;
		k ++;
	}
}
