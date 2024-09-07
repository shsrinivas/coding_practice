#include "stack.h"

int Peek(Stack_t **top)
{
	//Checking if list is empty
	if(*top == NULL)
		return FAILURE;
	//Return the top most element
	//Here we are returning what head is pointing to
	return (*top) -> data;
}
