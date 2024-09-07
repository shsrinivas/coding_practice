#include "ssl.h"
int delete_list(Slist **head)
{
	if(*head == NULL)  //CHecking if list is empty
	{
		return LIST_EMPTY;
	}

	Slist *temp = *head;  //Creating local reference pointer to head 

	while(*head != NULL) //moving head thro list untill it reaches NULL
	{
		temp = *head;   // Update the temp pointer to the current head node
		*head = temp -> link; // Move head to the next node
		free(temp); // Free the current node
	}
	return SUCCESS;
}
