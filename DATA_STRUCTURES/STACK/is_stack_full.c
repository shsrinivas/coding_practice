#include "stack.h"

int is_stack_full(Stack_t *stk)
{
	//printf("top: %d (cap - 1): %d\n",stk -> top, stk -> capacity - 1);
	if(stk -> top == stk -> capacity - 1)
	   return SUCCESS;
	else
		return FAILURE;	
}
