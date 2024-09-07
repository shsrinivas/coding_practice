#include "sll.h"

/* Function to create the loop */
int create_loop(Slist **head, data_t data)
{
	if(*head == NULL)
		return LIST_EMPTY;

	Slist *t1 = *head;
	Slist *t2 = *head;

	while(t1 -> link != NULL)
	{
		t1 = t1 -> link;
	}
	
	while(t2 != NULL)
	{
		if(t2 -> data != data)
		{
			t2 = t2 -> link;
		}
		else
		{
			t1 -> link = t2;
			return SUCCESS;
		}
	}
	return DATA_NOT_FOUND;
}
