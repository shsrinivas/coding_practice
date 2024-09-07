#include "queue.h"

/* Function to print the Queue */
int print_queue(Queue_t *q)
{

	/* Checking the queue is empty or not */
	if (IsQueueEmpty(q))
	{
		printf("INFO : Queue is empty\n");
		return FAILURE;
	}

	printf("Front -> ");

	int i = q -> front;
	do{
		printf("%d ", q -> Que[i]);
		i = (i + 1) % q -> capacity;
	}while( i != (q -> rear + 1) % q -> capacity);
	printf("<- Rear\n");

	/* Returning SUCCESS */
	return SUCCESS;
}
