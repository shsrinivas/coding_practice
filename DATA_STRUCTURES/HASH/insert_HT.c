#include"hash.h"

int insert_HT(hash_t *arr, int element, int size)
{
	int i = element % size;
	if(arr[i].value == -1){
		arr[i].value = element;
		return SUCCESS;
	}

	hash_t *new = malloc(sizeof(hash_t));

	if(new == NULL)
		return FAILURE;

	new -> value = element;
	new -> link = NULL;

	new -> index = i;

	if(arr[i].link == NULL){
		arr[i].link = new;
		return SUCCESS;
	}
	hash_t *temp = arr[i].link;

	while(temp -> link != NULL)
		temp = temp -> link;

	temp -> link = new;
	return SUCCESS;
}
