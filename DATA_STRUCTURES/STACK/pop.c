#include "stack.h"

/* Function for Poping the element */
int Pop(Stack_t *s)
{	
	if(is_stack_empty(s) == SUCCESS)
		return FAILURE;

	int element = s -> stack [ s -> top ];
	(s -> top) --;
	return SUCCESS;
}
