#ifndef DLL_H
#define DLL_L

#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define FAILURE -1
#define LIST_EMPTY -2
#define DATA_NOT_FOUND -3

typedef struct node
{
	int data;
	struct node *prev;
	struct node *next;
}Dlist;

int dl_insert_first(Dlist **head, Dlist **tail, int data);
int dl_insert_last(Dlist **head, Dlist **tail, int data);
int dl_delete_first(Dlist **head, Dlist **tail);
int dl_delete_last(Dlist **head, Dlist **tail);
int dl_delete_list(Dlist **head, Dlist **tail);
int select_operation(void);
void print_list(Dlist *head);
#endif
