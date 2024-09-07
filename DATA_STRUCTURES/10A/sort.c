#include "sll.h"

Slist *swap(Slist *ptr1, Slist *ptr2)
{
    Slist *tmp = ptr2->link;
    ptr2->link = ptr1;
    ptr1->link = tmp;
    return ptr2;
}

/* Function to sort the list */
int sort(Slist **head)
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
	return SUCCESS;
}


/*
int sort(Slist **head) {
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
*/
