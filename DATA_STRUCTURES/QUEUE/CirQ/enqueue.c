#include "queue.h"

/* Function to Insert the element */
int enqueue(Queue_t *q, int data)
{
	if(IsQueueFull(q))
		return FAILURE;
	
	if(IsQueueEmpty(q))
		q -> front = 0;

	q -> rear = (q -> rear + 1) % (q -> capacity);
	q -> Que[q -> rear] = data;
	return SUCCESS;
}
