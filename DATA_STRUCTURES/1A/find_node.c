#include "ssl.h"
int find_node(Slist **head, data_t g_data)
{
	int count = 0;
	if(*head == NULL)
		return LIST_EMPTY;

	Slist *temp = *head;

	while(temp != NULL)
	{
		if(temp -> data != g_data)
		{
			temp = temp -> link;
			count++;
		}
		else
		{
			count = count + 1 ;
			return count;
		}
	}
	printf("Count = %d\n",count);
	return FAILURE;
}
