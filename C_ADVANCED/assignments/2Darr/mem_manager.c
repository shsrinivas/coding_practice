/*
Name: Shreya Srinivas
Date: 19-07-2023
Description: Provide a menu to manipulate or display the value of variable of type t
Sample Exe:
user@emertxe] ./mem_manager
Menu :
1. Add element
2. Remove element
3. Display element
4. Exit from the program

Choice ---> 1
Enter the type you have to insert:
1. int
2. char
3. float
4. double
Choice ---> 2
Enter the char : k
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 3
-------------------------
0 -> k
-------------------------
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 1
Enter the type you have to insert:
1. int
2. char
3. float
4. double
Choice ---> 1
Enter the int : 10
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 3
------------------------
0 -> k (char)
1 -> 10 (int)
------------------------
1. Add element
2. Remove element
3. Display element
4. Exit from the program

Choice ---> 2
0 -> k
1 -> 10
Enter the index value to be deleted : 0
index 0 successfully deleted.
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 4
 */

#include<stdio.h>
#include<stdlib.h>
void display_element(void **vptr);
void remove_element(void **vptr);
void add_element(void **vptr);

//Declaring flags dor all datatypes as global static to keep track of it throughout the prog
static int ch1_flag = 0, ch2_flag = 0;
static int short_flag = 0;
static int int_flag = 0;
static int float_flag = 0;
static int double_flag = 0;

void add_element(void **vptr)
{
	int option, num;
	char ch1, ch2;
	short snum;
	float fnum;
	double dnum;
	//Reading option from user
	printf("Enter the type you have to insert:\n");
	printf("1. int\n");
	printf("2. char\n");
	printf("3. float\n");
	printf("4. double\n");
	printf("5. short\n");

	printf("Choice ---> ");
	scanf("%d",&option);

	switch(option)
	{
		case 1:
			//Checking if any element has already been added or not
			if( !int_flag && !float_flag && !double_flag )
			{
				printf("Enter the int: ");
				scanf("%d",&num);
				*((int *)(vptr + 4)) = num; //Storing num at 4th byte
				printf("[4] -> %d\n",*((int *)(vptr + 4)));
				int_flag = 1;
			}
			else
			{
				if( int_flag ) //if int was already added
				{
					printf("int already present\n");
				}
				else if ( float_flag )
				{
					printf("float already present\n");
				}
				else if ( double_flag )
				{
					printf("double already present\n");
				}
			}
			break;
		case 2:
			if( !ch1_flag && !double_flag )
			{
				printf("Enter the char: ");
				scanf(" %c",&ch1);
				*((char *)(vptr)) = ch1;  //Storing ch1 at 0th byte
				printf("[0] -> %c\n",*((char *)(vptr)));
				ch1_flag = 1;
			}
			else if( !ch2_flag && !double_flag)
			{
				printf("Enter the char: ");
				scanf(" %c",&ch2);
				*((char *)(vptr + 1)) = ch2;  //Storing ch2 at 1st byte
				printf("[1] -> %c\n",*((char *)(vptr + 1)));
				ch2_flag = 1;
			}
			else
			{
				if( ch1_flag || ch2_flag )
				{
					printf("Char already present\n");
				}
				else if( double_flag )
				{
					printf("double already present\n");
				}
			}
			break;
		case 3:
			if( !float_flag && !int_flag && !double_flag )
			{
				printf("Enter the float: ");
				scanf("%f",&fnum);
				*((float *)(vptr + 4)) = fnum;  //Storing float at 4 th byte of vptr
				printf("[4] -> %f\n",*((float *)(vptr + 4)));
				float_flag = 1;
			}
			else
			{
				if( int_flag )
				{
					printf("int already present\n");
				}
				else if ( float_flag )
				{
					printf("float already present\n");
				}
				else if( double_flag )
				{
					printf("double already present\n");
				}
			}
			break;
		case 4:
			if( !double_flag && !ch1_flag && !ch2_flag )
			{
				printf("Enter double: ");
				scanf("%lf",&dnum);
				*((double *)(vptr)) = dnum; //Storing double from byte 0 to 7
				printf("[0] -> %lf\n",*((double *)(vptr)));
				double_flag = 1;
			}
			else
			{
				if( ch1_flag )
				{
					printf("char already present\n");
				}
				else if ( double_flag )
				{
					printf("double already present\n");
				}
			}
			break;
		case 5:
			if( !short_flag && !double_flag )
			{
				printf("Enter short: ");
				scanf("%hd",&snum);
				*((short *)(vptr + 2)) = snum;  //Storing num at 2 nd byte
				printf("[2] -> %hd\n",*((short *)(vptr + 2)));
				short_flag = 1;
			}
			else
			{
				if ( short_flag )
				{
					printf("short already present\n");
				}

				else if( double_flag )
				{
					printf("double already present\n");
				}
			}
			break;
	}
}

void remove_element(void **vptr)
{
	int index;
	printf("Remove\n");
	display_element(vptr);
	printf("Enter the index value to be deleted : ");
	scanf("%d",&index);

	//Resetting flag value to 0 is the del operation , we will not be deleting anything but just telling compiler that is it free to use

	if ( index == 0 )
	{
		if( double_flag )
		{
			double_flag = 0;  
		}
		else if( ch1_flag )
		{
			ch1_flag = 0;
		}
	}
	else if ( index == 1 )
	{
		ch2_flag = 0;
	}
	else if ( index == 2 )
	{
		short_flag = 0;
	}
	else if ( index == 4 )
	{
		if( int_flag )
		{
			int_flag = 0;
		}
		else if( float_flag )
		{
			float_flag = 0;
		}
	}
	printf("index %d successfully deleted.\n",index);
}

void display_element(void **vptr)
{
	//Display element based on which flags have been set
	printf("--------------------\n");
	if( ch1_flag )
	{
		printf("[0] -> %c\n",*((char *)(vptr)));
	}
	if( ch2_flag )
	{
		printf("[1] -> %c\n",*((char *)(vptr + 1)));
	}
	if( short_flag )
	{
		printf("[2] -> %hd\n",*((short *)(vptr + 2)));
	}
	if( int_flag )
	{
		printf("[4] -> %d\n",*((int *)(vptr + 4)));
	}
	if( float_flag )
	{
		printf("[4] -> %f\n",*((float *)(vptr + 4)));
	}
	if( double_flag )
	{
		printf("[0] -> %lf\n",*((double *)(vptr)));
	}
	printf("--------------------\n");
}

void exit_prog()
{
	printf("Exit\n");
	exit(0);
}

int main()
{
	void *vptr = malloc(8);

	int option;
	do
	{
		printf("Menu:\n");
		printf("1. Add element\n");
		printf("2. Remove element\n");
		printf("3. Display element\n");
		printf("4. Exit from the program\n");

		printf("Choice ---> ");
		scanf("%d",&option);

		switch(option)
		{
			case 1:
				add_element(vptr);
				break;
			case 2:
				remove_element(vptr);
				break;
			case 3:
				display_element(vptr);
				break;
			case 4:
				free(vptr);
				exit_prog();
			default:
				printf("Please enter correct option\n");
				break;
		}
	}while(option != 4);
}


