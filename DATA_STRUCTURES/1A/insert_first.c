#include "ssl.h"

int insert_first(Slist **head, data_t data)
{
	Slist *new = malloc(sizeof(Slist));

	if(new == NULL)
	{
		return FAILURE;
	}

	new -> data = data;
	new -> link = NULL;

	if(*head == NULL)
	{
		*head = new;
		return SUCCESS;
	}

	new -> link = *head;
	*head = new;
	return SUCCESS;

}
