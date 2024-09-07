#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define FAILURE -1
#define STACK_EMPTY -2
#define STACK_FULL -3

typedef struct stack
{
	unsigned int capacity;
	int top;
	int *stack;
}Stack_t;

enum Status{
	e_false,
	e_true
};

int create_stack(Stack_t *, int );
int Push(Stack_t *, int);
int Pop(Stack_t *);
int Peek(Stack_t *);
void Peep(Stack_t);
int is_stack_full(Stack_t *);
int is_stack_empty(Stack_t *);
int select_operation(void);

#endif
