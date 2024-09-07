/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<stdio.h>
#if 0
void print_arr(int **ptr)
{
	for( int i = 0; i < 3 ; i++ )
	{
		printf("%d\n",*ptr[i]);
	}
}


int main()
{
	int a = 10;
	int b = 20;
	int c = 30;

	int *ptr[3] = {&a,&b,&c};

	print_arr(ptr); //ptr = baseaddr
}
#endif

void print_arr(int **ptr)
{	
	for( int i = 0; i < 2 ; i++ )
		for( int j = 0; j < 3 ; j++ )
			printf("%d\n",ptr[i][j]);
}

int main()
{
	int a1[2] = {10,20};
	int b1[2] = {30,40};
	int c1[2] = {50,60};

	int *ptr1[3] = {a1,b1,c1};

	print_arr(ptr1);
}


