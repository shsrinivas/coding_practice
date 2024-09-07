#include "sll.h"

int sorted_merge( Slist **head1, Slist **head2)
{
	printf("Yo\n");
	if(*head1 == NULL && *head2 == NULL)
		return LIST_EMPTY;

	if(*head1 == NULL && *head2 != NULL)
	{
		int res = sort(head2);
		if(res == SUCCESS)
			return SUCCESS;
	}

	if(*head1 != NULL && *head2 == NULL)
	{
		int res = sort(head1);
		if(res == SUCCESS)
			return SUCCESS;
	}

	if( *head1 != NULL && *head2 != NULL)
	{
		printf("Hi\n");
		Slist *temp1 = *head1;
		while( temp1 ->link != NULL)
		{
			printf("In while\n");
			temp1 = temp1 -> link;
		}
		temp1 -> link = *head2;
		*head2 = NULL;

		int res = sort(head1);
		if(res == SUCCESS)
			return SUCCESS;
		else
			return FAILURE;
	}
}

/*
#include "sll.h"

int sorted_merge(Slist **head1, Slist **head2) {
    if (*head2 == NULL) {
        return SUCCESS; // Nothing to merge
    }

    if (*head1 == NULL) {
        *head1 = *head2; // Just update the head1 pointer
        *head2 = NULL;   // Disconnect head2 from merged list
        return SUCCESS;
    }

    Slist *temp1 = *head1;
    while (temp1->link != NULL) {
        temp1 = temp1->link;
    }
    temp1->link = *head2; // Link the last node of head1 to head2
    *head2 = NULL;        // Disconnect head2 from merged list

    int res = sort(head1); // Assuming sort function correctly sorts the list
    if (res == SUCCESS) {
        return SUCCESS;
    } else {
        return FAILURE;
    }
}
*/
