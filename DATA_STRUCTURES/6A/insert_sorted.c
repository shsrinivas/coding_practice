#include "sll.h"

/* Function for insert the number in sorted linked list */
int insert_sorted( Slist **head, data_t data) 
{ 
	Slist *new = malloc(sizeof(Slist));
	new -> data = data;
	new -> link = NULL;

	if(new == NULL)
		return FAILURE;

	if(*head == NULL)
	{
		*head = new;
		return SUCCESS;
	}

	Slist *temp = *head;

	if(data < temp -> data)
	{
		new -> link = *head;
		*head = new;
		return SUCCESS;
	}

	while(temp != NULL)
	{
		if(temp -> link == NULL)
		{
			temp -> link = new;	
			return SUCCESS;
		}
		else
		{
			if(data > temp->data && data < temp ->link ->data)
			{
				new -> link = temp -> link;
				temp -> link = new;
				return SUCCESS;
			}
			else
			{
				temp = temp -> link;
			}
		}
	}
}

