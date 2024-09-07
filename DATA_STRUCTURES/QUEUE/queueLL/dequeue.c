#include "queue.h"

int dequeue(Queue_t **front, Queue_t **rear)
{
	if(*rear == NULL)
		return FAILURE;

	Queue_t *temp = *front;
	if(*rear == *front)
	{
		temp = *front;
		free(temp);
		*rear = *front = NULL;
	}
	else
	{
		temp = *front;
		*front = temp -> link;
		free(temp);
		(*rear) -> link = *front;
	}
	return SUCCESS;
}
