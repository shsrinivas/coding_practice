#include "stack.h"

/* Fuction for inserting the element */
int Push(Stack_t *s, int element)
{
	if(is_stack_full(s) == SUCCESS)
	{
		printf("Stack Full\n");
		return FAILURE;
	}

	++(s -> top);
	printf("In push : %d\n", s -> top);
	s -> stack[ s -> top ] = element;
	return SUCCESS;
}
