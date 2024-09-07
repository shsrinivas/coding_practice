#ifndef SSL_H
#define SSL_L

#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define FAILURE -1
#define LIST_EMPTY -1

typedef int data_t;
typedef struct node
{
	data_t data;
	struct node *link;
}Slist;

int select_operation();
int insert_at_last(Slist **head, data_t data);
int insert_first(Slist **head, data_t data);
int delete_last(Slist **head);
int delete_list(Slist **head);
int delete_first(Slist **head);
int find_node(Slist **head, data_t g_data);
void print_list(Slist *head);

#endif
