#include "dll.h"

int dl_delete_element(Dlist **head, Dlist **tail, int data)
{	
	if(*head == NULL)
		return LIST_EMPTY;

	Dlist *temp = *head;

	while(temp != NULL)
	{
		if(temp -> data != data)
			temp = temp -> next;
		else
		{
			if(temp != *head && temp != *tail)
			{
				temp -> prev -> next = temp -> next;
				temp -> next -> prev = temp -> prev;
			}
			else if(temp == *head)
			{
				*head = temp -> next ;
			}
			else if(temp == *tail)
			{
				*tail = temp -> prev ;
			}
			else if (*head == *tail)
			{
				*head = *tail = NULL;
				return LIST_EMPTY;
			}
			free(temp);
			return SUCCESS;
		}
	}
	return DATA_NOT_FOUND;
}
