#include "stack.h"

int Push(Stack_t **top, data_t data)
{
	Stack_t *new = malloc(sizeof(Stack_t));

	if(new == NULL)
		return FAILURE;

	new -> data = data;
	new -> link = NULL;

	if(*top == NULL)
	{
		*top = new;
		return SUCCESS;
	}

	new -> link = *top;
	*top = new;
	return SUCCESS;
}
