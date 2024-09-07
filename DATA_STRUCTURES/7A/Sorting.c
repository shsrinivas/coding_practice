#include "sll.h"

Slist *swap(Slist *ptr1, Slist *ptr2)
{
    Slist *tmp = ptr2->link;
    ptr2->link = ptr1;
    ptr1->link = tmp;
    return ptr2;
}
  
/* Function to sort the list */
int bubbleSort(Slist **head)
{

    Slist **h;
	Slist *temp = *head;
    int i, j, swapped;

	int count = 0;
    while(temp != NULL)
	{
  		temp = temp -> link;
        count ++;
    }  
    for (i = 0; i <= count; i++) {
  
        h = head;
        swapped = 0;
  
        for (j = 0; j < count - i - 1; j++) {
  
            Slist *p1 = *h;
            Slist *p2 = p1->link;
  
            if (p1->data > p2->data) {
  
                /* update the link after swapping */
                *h = swap(p1, p2);
                swapped = 1;
            }
  
            h = &(*h)->link;
        }
  
        /* break if the loop ended without any swap */
        if (swapped == 0)
            break;
    }
}
