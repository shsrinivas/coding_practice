#include "sll.h"
int sl_sort(Slist **head)
{
	if (*head == NULL)
		return LIST_EMPTY;

	Slist *temp = *head;
	Slist *t1 = *head;
	Slist *t2 = (*head)->link;
	Slist *prev = NULL; // Keep track of the previous node for adjusting links

	int count = 0;
	while(temp != NULL)
	{
		temp = temp -> link;
		count ++;
	}

	for(int i = 0; i < count ; i ++)
	{
		while (t2 != NULL)
		{
			if (t2->data < t1->data)
			{
				// Swap the nodes
				if (prev == NULL)
				{
					*head = t2; // Update head if necessary
				}
				else
				{
					prev->link = t2; // Update previous node's link
				}
				t1->link = t2->link;
				t2->link = t1;

				// Update pointers for next iteration
				prev = t2;
				t2 = t1->link;
			}
			else
			{
				prev = t1;
				t1 = t2;
				t2 = t2->link;
			}
		}
	}
	return SUCCESS;
}
