#include "sll.h"

int sl_sort(Slist **head) {
    if (*head == NULL)
        return LIST_EMPTY;

    int swapped;
    Slist *temp = NULL;

    do {
        swapped = 0;
        Slist *current = *head;
        Slist *prev = NULL;

        while (current->link != temp) {
            if (current->data > current->link->data) {
                // Swap nodes
                if (prev == NULL) {
                    *head = current->link;
                } else {
                    prev->link = current->link;
                }
                Slist *nextNode = current->link->link;
                current->link->link = current;
                current->link = nextNode;

                // Update pointers
                prev = current->link;
                swapped = 1;
            } else {
                prev = current;
                current = current->link;
            }
        }
        temp = current; // The last node in the current iteration is in its final position

    } while (swapped);

    return SUCCESS;
}


/*
int sl_sort(Slist **head) {
    if (*head == NULL)
        return LIST_EMPTY;

    int swapped;
    Slist *prev = NULL;
    Slist *current = *head;
    
    do {
        swapped = 0;
        current = *head;

        while (current->link != NULL) {  // Updated loop condition
            if (current->data > current->link->data) {
                // Swap nodes
                if (prev == NULL) {
                    *head = current->link;
                } else {
                    prev->link = current->link;
                }
                Slist *nextNode = current->link->link;
                current->link->link = current;
                current->link = nextNode;

                // Update pointers
                prev = current->link;
                swapped = 1;
            } else {
                prev = current;
                current = current->link;
            }
        }
        
    } while (swapped);

    return SUCCESS;
}
*/

/*
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

	for(int i = 0; i <= count ; i ++)
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
*/
/*
int sl_sort(Slist **head) {
    if (*head == NULL)
        return LIST_EMPTY;

    int swapped;
    Slist *prev = NULL;
    Slist *current = *head;
    Slist *temp = NULL;

    do {
        swapped = 0;
        current = *head;

        while (current->link != NULL) {
            if (current->data > current->link->data) {
                // Swap nodes
                if (prev == NULL) {
                    *head = current->link;
                } else {
                    prev->link = current->link;
                }
                Slist *nextNode = current->link->link;
                current->link->link = current;
                current->link = nextNode;

                // Update pointers
                prev = current->link;
                swapped = 1;
            } else {
                prev = current;
                current = current->link;
            }
        }
        temp = current; // The last node in the current iteration is in its final position
        prev = NULL; // Reset prev for the next iteration

    } while (swapped);

    return SUCCESS;
}
*/
