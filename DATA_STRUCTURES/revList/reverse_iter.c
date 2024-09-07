#include "sll.h"

/* Function to reverse the given single linked list */
int reverse_iter(Slist **head) 
{ 
	if(*head == NULL)
		return LIST_EMPTY;

	if((*head) -> link == NULL)
	   return SUCCESS;

	Slist *temp = *head;
	Slist *prev = NULL;
	Slist *next = ((*head) -> link);


	while(temp -> link != NULL)
	{
		temp -> link = prev;   //prev = NULL
		prev = temp;
		temp = next;
		next = next -> link;
	}

	*head = temp;
	temp -> link = prev;
} 
