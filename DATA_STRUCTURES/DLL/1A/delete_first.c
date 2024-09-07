#include "dll.h"

int dl_delete_first(Dlist **head, Dlist **tail)
{
	if(*head == NULL)
	   return LIST_EMPTY;	

	//if((*head) -> next == NULL)
	if(*head == *tail)
	{
		free(*head);
		*head = *tail = NULL;
		return SUCCESS;
	}
	Dlist *temp = *head;
	*head = (*head) -> next;
	free(temp);
	(*head) -> prev = NULL;
	return SUCCESS;
}
