#include "dll.h"

int dl_delete_last(Dlist **head, Dlist **tail)
{
	if(*head == NULL)
		return FAILURE;
	//If there is only one node
	if(*head == *tail)
	{
		free(*head);
		*head = *tail = NULL;
		return SUCCESS;
	}
	//More than one nodes
	Dlist *temp = *tail;
	*tail = (*tail) -> prev;
	free(temp);
	(*tail) -> next = NULL;
	return SUCCESS;
}
