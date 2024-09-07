#include "stack.h"

int create_stack(Stack_t *stk, int size)
{
	stk -> stack = malloc(sizeof(int) * size);

	if(stk -> stack == NULL)
		return e_false;

	stk -> capacity = size;
	stk -> top = -1;
	return e_true;
}


int main()
{
	int choice, element, peek, size;
	Stack_t stk;
	char option;

    printf("Enter the size of the stack: ");
    scanf("%d", &size);
    
    create_stack(&stk, size);
    
	do
	{
		choice = select_operation();
		switch(choice)
		{
			case 1:
				printf("Enter the element to be pushed in stack : ");
				scanf("%d", &element);
				if (Push(&stk, element) == FAILURE)
				{
					printf("INFO : Stack Full\n");
				} 
				break;
			case 2:
				if (Pop(&stk) == FAILURE)
				{
					printf("INFO : Stack is empty\n");
				}
				else
				{
				    printf("INFO : Pop operation is successfull\n");
				}
				break;
			case 3:
				Peep(stk);
				break;
			case 4:
				if ((peek = Peek(&stk)) == FAILURE)
				{
					printf("INFO : Stack is empty\n");
				}
				else
				{
					printf("INFO : Peek element is %d\n", peek);
				}
				break;
			case 5:
				return SUCCESS;
			default:
				printf("Invalid Choice.\n");
				break;
		}
	printf("Do you want to continue (Y/N) \n");
	scanf("\n%c",&option);
	}while(option == 'Y' || option == 'y');
	return 0;
}

int select_operation(void)
{
	int choice;
	printf("1. Push\n2. Pop\n3. Display Stack\n4. Peek(Element at Top)\n5. Exit\nEnter your choice : ");
	scanf("%d",&choice);
	return choice;
}
