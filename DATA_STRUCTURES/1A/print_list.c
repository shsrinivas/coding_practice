#include "ssl.h"

void print_list(Slist *head)
{
	if(head == NULL)
	{
		printf("No nodes to print\n");
	}
	else
	{
		while(head)
		{
			printf("%d-->",head->data);
			head = head->link;
		}
		printf("\n");
	}
}


