#include "sll.h"

int sl_insert_nth(Slist **head, data_t data, data_t n)
{
	//Cheking if list is empty
	if(*head == NULL)
	{
	    //Checking if pos is first node
		if(n == 1)
		{
			Slist *new = malloc(sizeof(Slist));
			if(new == NULL)
				return FAILURE;

			new -> data = data;
			new -> link = NULL;
			*head = new;
			return SUCCESS;
		}
		else
			return LIST_EMPTY;
	}

	int pos = 1, length = 0;
	Slist *temp = *head;
	Slist *prev = NULL;

    while (temp != NULL) {
        length++;
        temp = temp->link;
    }
    if (n < 1 || n > length + 1) {
        return POSITION_NOT_FOUND;
    }

	temp = *head;
	Slist *new = malloc(sizeof(Slist));
	if(new == NULL)
		return FAILURE;
	//Updating new
	new -> data = data;
	new -> link = NULL;

	if(n == 1)
	{
		printf("pos = 1\n");
		new -> link = *head;
		*head = new;
		return SUCCESS;
	}
    //If pos is in intermediate nodes
	while( pos != n )
	{
		prev = temp;
		temp = temp -> link;
		pos++;  //Calculate pos
	}

	//If pos entered was last + 1 position
	if( n == pos + 1 )
	{
		prev -> link = new;
		return SUCCESS;
	}

	new -> link = prev -> link;
	prev -> link = new;
	return SUCCESS;
}
