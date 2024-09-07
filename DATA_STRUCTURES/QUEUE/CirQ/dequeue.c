#include "queue.h"

/* Function to deque the element */
int dequeue(Queue_t *q)
{
	if(IsQueueEmpty(q))
		return FAILURE;

	int element = q -> Que[q -> front];

	if(q -> front == q -> rear){
		q -> front = -1;
		q -> rear = -1;
	}else{
		q -> front = (q -> front + 1) % q -> capacity;
	}
	return SUCCESS;
}
