#include "ssl.h"

int delete_first(Slist **head)
{
	if(*head == NULL)
	{
		return LIST_EMPTY;
	}
	Slist *temp = *head;
	*head = temp -> link;
	free(temp);
	return SUCCESS;
}


