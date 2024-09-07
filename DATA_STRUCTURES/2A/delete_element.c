#include "sll.h"

int sl_delete_element(Slist **head, data_t data)
{
	if(*head == NULL)
		return FAILURE;

	//Create local reference temp and prev
	Slist *temp = *head;
	Slist *prev = NULL;

	//Checking if the first node has data
	if((*head) -> data == data)
	{
		(*head) = temp -> link;
		free(temp);
		return SUCCESS;
	}

	//When data is in intermediate nodes
	while(temp != NULL)
	{
		//Traverse thro list and update prev and temp
		if( temp -> data != data )
		{
			prev = temp;
			temp = temp -> link;
		}
		else //When data is found , establish new links
		{
			prev -> link = temp -> link;
			free(temp);
			return SUCCESS;
		}
	}
	return DATA_NOT_FOUND;
}
