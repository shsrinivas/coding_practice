#include "dll.h"

int dl_insert_after(Dlist **head, Dlist **tail, int gdata, int ndata)
{
	if(*head == NULL)
		return LIST_EMPTY;

	//Create local reference pointer to head
	Dlist *temp = *head;

	while( temp != NULL )
	{
		if(temp -> data != gdata) //Travering thro list and checking if given data is present
			temp = temp -> next;
		else
		{
			//Creating new node
			Dlist *new = malloc(sizeof(Dlist));
			if(new == NULL)
				return FAILURE;

			//new data will have ndata entered by user
			new -> data = ndata;
			//Establishing link
			new -> next = temp -> next;
			new -> prev = temp;
			if(temp != *tail)
				temp -> next -> prev = new;
			else
				*tail = new;
			temp -> next = new;
			return SUCCESS;
		}
	}
	return DATA_NOT_FOUND;
}
