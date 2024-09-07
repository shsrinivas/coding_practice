#include "queue.h"

int IsQueueFull(Queue_t *q)
{
	return (q -> rear + 1) % q -> capacity == q -> front;
}

int IsQueueEmpty(Queue_t *q)
{
	return q -> front == -1;
}
