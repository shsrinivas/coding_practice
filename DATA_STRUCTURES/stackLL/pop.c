#include "stack.h"
/*
int Pop(Stack_t **top)
{
	if(*top == NULL)
	{
		return FAILURE;
	}

	if((*top) -> link == NULL)
	{
		//printf("List has one node\n");
		free(*top);
		*top = NULL;
		return SUCCESS;
	}

	Stack_t *prev = *top;
	Stack_t *temp = *top;

	while(temp -> link != NULL)
	{
		//printf("Updating prev\n");
		prev = temp;
		temp = temp -> link;
	}
	//printf("updating prev to NULL\n");
	prev -> link = NULL;
	free(temp);
	//printf("Returning success.\n");
	return SUCCESS;
}
*/
//int delete_first(Stack_t **top)
int Pop(Stack_t **top)
{
        if(*top == NULL)
        {
                return FAILURE;
        }
        Stack_t *temp = *top;
        *top = temp -> link;
        free(temp);
        return SUCCESS;
}
