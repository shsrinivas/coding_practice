#include "ssl.h"

int main()
{
	system("clear");
	Slist *head = NULL;
	int choice;
	int data;
	int key;
	char option;

	do
	{
		choice = select_operation();

		switch(choice)
		{
			case 1:
				printf("Enter the data to insert at last\n");
				scanf("%d",&data);
				if(insert_at_last(&head, data) == FAILURE)
				{
					printf("Failed: Inserting the new data at last\nTry again.\n");
				}
				break;
			case 2:
				printf("Deleting last\n");
				if(delete_last(&head) == FAILURE)
				{
					printf("Failed: Deleting the last data\nTry again.\n");
				}
				break;
			case 3:
				printf("Please enter the data you want to insert first: ");
				scanf("%d",&data);
				if( insert_first(&head, data) == FAILURE)
				{
					printf("Failed: Insert data at first failed.\nTry again.\n");
				}
				break;
			case 4:
				print_list(head);
				break;
			case 5:
				printf("Deleting list !!! \n");
				if(delete_list(&head) == LIST_EMPTY)
				{
					printf("List is empty.\nTry again!!\n");
				}
				break;
			case 6:
				printf("Deleting first !!! \n");
				if(delete_first(&head) == LIST_EMPTY)
				{
					printf("List is empty.\nTry again!!\n");
				}
				break;
			case 7:
				printf("Enter the key to find : ");
				scanf("%d", &key);
				int count;
				if ((count = find_node(&head, key)) == FAILURE)
				{
					printf("INFO : Failure\nList is empty or Key not found\n");
				}
				else
				{
					printf("%d found in the list at the position %d\n", key, count);
				}

				break;
		}
		printf("Do you want to continue ( Y / N ) \n");
		scanf("\n%c", &option);
	}while(option == 'y' || option == 'Y');
	return 0;
}
int select_operation(void)
{
	int choice;
	printf("Options:\n");
	printf("1. Insert at last\n");
	printf("2. delete last\n");
	printf("3. insert first\n");
	printf("4. Print list\n");
	printf("5. Delete list\n");
	printf("6. Delete first\n");
	printf("7. Find node\n");

	scanf("%d", &choice);
	return choice;
}
