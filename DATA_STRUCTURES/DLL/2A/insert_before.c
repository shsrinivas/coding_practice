#include "dll.h"

int dl_insert_before(Dlist **head, Dlist **tail, int gdata, int ndata)
{
	//Checking if list is empty
    if(*head == NULL)
        return FAILURE;
    //Creating a local reference pointer    
    Dlist *temp = *head;
    
	//Traverse thro list
    while(temp != NULL)
    {
		//Update temp untill gdata is not found
        if(temp -> data != gdata)
        {
            temp = temp -> next;
        }
        else
        {
			//Create new node
            Dlist *new = malloc(sizeof(Dlist));
            if(new == NULL)
                return FAILURE;
			//Update new data
			new -> data = ndata;

			//Establish links
			new -> next = temp;
			//temp -> prev  = new;
			if(temp != *head)
			{
				new -> prev = temp -> prev;
				temp -> prev -> next = new;
			}
			else
			{
				//If new node is to be inserted before first node
				*head = new;
			}
			temp -> prev  = new;
			return SUCCESS;
        }
    }
    return DATA_NOT_FOUND;
}
