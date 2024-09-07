#include "main.h"

int merge_sort(int *arr, int size)
{
	if(size == 1)
		return 1;

	int mid = size/2;

	int *LSA = malloc(mid * sizeof(int));

	for(int i = 0; i < (mid - 1); i ++)
		LSA[i] = arr[i];

	int *RSA = malloc((size - mid) * sizeof(int));

	for(int i = mid ; i < (size - 1) ; i ++)
		RSA[i - mid] = arr[i];

	merge_sort(LSA,mid);
	merge_sort(RSA,size - mid);
	merge(arr,size,LSA,mid,RSA,size-mid);

	free(LSA);
	free(RSA);

	return 0;
}
