#include "ssl.h"

int delete_last(Slist **head)
{
	if(*head == NULL)
	{
		return LIST_EMPTY;
	}

	if((*head) -> link == NULL)
	{
		//printf("List has one node\n");
		free(*head);
		*head = NULL;
		return SUCCESS;
	}

	Slist *prev = *head;
	Slist *temp = *head;

	while(temp -> link != NULL)
	{
		//printf("Updating prev\n");
		prev = temp;
		temp = temp -> link;
	}
	//printf("updating prev to NULL\n");
	prev -> link = NULL;
	free(temp);
	//printf("Returning success.\n");
	return SUCCESS;
}



