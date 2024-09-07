#include"hash.h"

int search_HT(hash_t *arr, int data, int size)
{
	int i = data % size;	
	if(arr[i].value == data)
		return SUCCESS;

	hash_t *temp = arr[i].link;

	while(temp != NULL){
		if(temp -> value != data)
		   temp = temp -> link;
 		else
			return SUCCESS;
	}
	return DATA_NOT_FOUND;
}
