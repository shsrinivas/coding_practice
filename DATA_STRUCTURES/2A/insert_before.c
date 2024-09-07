#include "sll.h"

int sl_insert_before(Slist **head, data_t g_data, data_t ndata)
{
	if( *head == NULL )
		return LIST_EMPTY;
	//Create new node and update data, link feilds
	Slist *new = malloc(sizeof(Slist));
	new -> data = ndata;
	new -> link = NULL;

	//Checking if data is present in the first node
	if( (*head) -> data == g_data )
	{
		new -> link = (*head);
		*head = new;
		return SUCCESS;
	}

	//If data is present in intermediate nodes
	//Create local ref pointer temp and prev
	Slist *temp = *head;
	Slist *prev = NULL;

	while(temp != NULL)
	{
		//Traverse thro list to check if data is present
		if(temp -> data != g_data)
		{
			//Updating prev and temp while travesing 
			prev = temp;
			temp = temp -> link;	
		}
		else
		{
			//Establishing links
			new -> link = temp;
			prev -> link = new;
			return SUCCESS;
		}
	}
	//Return data not found macro if it fails to find data
	return DATA_NOT_FOUND; 
}
