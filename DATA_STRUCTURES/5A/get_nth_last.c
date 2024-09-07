#include "sll.h"
/* Function to get the nth node from the last of a linked list*/
int find_nth_last(Slist *head, int pos, int *data) 
{ 
	if(head == NULL)
		return LIST_EMPTY;

	Slist *t1 = head;
	Slist *t2 = head;
	int count = 0;

	while(t1 != NULL)
	{
		if(count >= pos) //move only t1 untill it reaches pos and to move both t1 and t2 together
			t2 = t2 -> link;
		t1 = t1 -> link;
		count ++;
	}
	
	if(count < pos || pos <= 0)
		return FAILURE;

	*data = t2 -> data;
	return SUCCESS;
} 
