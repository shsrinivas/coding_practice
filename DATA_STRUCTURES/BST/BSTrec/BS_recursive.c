#include "main.h"

/* Function to search the element using binary search */
data_t binarySearch_recursive(data_t *arr, data_t low, data_t high, data_t key)
{
	if(low <= high){
		int mid = low + ( high - low ) / 2;

		if(arr[mid] == key)
			return mid;
		if(arr[mid] > key)
			return binarySearch_recursive(arr, low, mid - 1, key);
		else
			return binarySearch_recursive(arr, mid + 1, high, key);
	}
	return DATA_NOT_FOUND;
}

