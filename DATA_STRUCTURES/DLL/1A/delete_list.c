#include "dll.h"

int dl_delete_list(Dlist **head, Dlist **tail)
{
	//Checking if list is empty
	if(*head == NULL)
		return FAILURE;
    //Creating a local reference pointer
	Dlist *temp = *head;

	//Travese list 
	while(*head != NULL)
	{
		//When there is only one node left to delete
		if(*head  == *tail)
		{
			free(temp);
			*head = *tail = NULL;
			return SUCCESS;
		}
		//Updating head and freeing temp
		*head = (*head) -> next;
	   free(temp);	
	   temp = *head;
	   (*head) -> prev = NULL;
	}
}
