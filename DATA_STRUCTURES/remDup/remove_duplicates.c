#include "sll.h"

//remove duplicate data's from list
int remove_duplicates( Slist **head )
{
	if(*head == NULL)
		return FAILURE;

	if((*head) -> link == NULL)
		return SUCCESS;

	Slist *current = *head;   //current has to be compared with the other node datas
	Slist *t1 = current;      //use t1 to compare all nodes with cur node to find duplicate
	
	while(current != NULL) 
	{
		t1 = current;
		while(t1 -> link != NULL)
		{
			if(t1 -> link -> data == current -> data)
			{
				Slist *dup = t1 -> link;
				t1 -> link = t1 -> link -> link;
				free(dup);
			}
			else
			{
				t1 = t1 -> link;
			}
		}
		current = current -> link;
	}

}
