#include "sll.h"

/* Function for finding the loop in the link */
int find_loop(Slist *head)
{
	if(head == NULL)
		return LIST_EMPTY;

	Slist *fast = head;
	Slist *slow = head;

	while(fast != NULL)
	{
		if(fast -> link != NULL)
		{
			if(fast -> link -> link == NULL)
				return LOOP_NOT_FOUND;
			fast = fast -> link -> link;
			slow = slow -> link;
			if(fast -> link == slow -> link)
				return SUCCESS;
		}
		else
		{
			return LOOP_NOT_FOUND;
		}
	}
}
