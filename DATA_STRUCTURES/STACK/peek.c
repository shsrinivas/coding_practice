#include "stack.h"

/* Function for display the top of the element in Stack */
int Peek(Stack_t *s)
{
	if(is_stack_empty(s) == SUCCESS)
		return FAILURE;
	//else
		//printf("%d\n",s -> stack[s -> top]);
	return s -> stack[s -> top];
}
