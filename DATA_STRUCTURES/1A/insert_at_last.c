#include "ssl.h"

int insert_at_last(Slist **head, data_t data)
{
	//Create node
	Slist *new = malloc(sizeof(Slist));

	//Error check
	if(new == NULL)
	{
		return FAILURE;
	}

	//Update
	new -> data = data;
	new -> link = NULL;

	//List is empty or not
	if(*head == NULL)
	{
		*head = new;
		return SUCCESS;
	}

	//Create local ref pointer
	Slist *temp = *head;

	//Traverse through the list till last node

	while(temp -> link != NULL)
	{
		temp = temp -> link;
	}

	//establish link b/w node and new node
	temp -> link = new;
	return SUCCESS;
}


