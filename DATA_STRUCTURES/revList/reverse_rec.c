#include "sll.h"

Slist *reverse_recursion(Slist *current, Slist *prev)
{
	if(current == NULL)
		return prev;

	Slist *next = current -> link;
	current -> link = prev;

	return reverse_recursion(next,current);
}
