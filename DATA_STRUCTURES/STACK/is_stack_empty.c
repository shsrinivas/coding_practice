#include "stack.h"

int is_stack_empty(Stack_t *stk){
	if(stk -> top == -1)
		return SUCCESS;
	else
		return FAILURE;
}
