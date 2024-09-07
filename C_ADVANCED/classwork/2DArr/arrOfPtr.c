/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<stdio.h>

#if 0
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;

	int *ptr[3];

	ptr[0] = &a;
	ptr[1] = &b;
	ptr[2] = &c;

	printf("%d\n", *ptr[0]);
	printf("%d\n", *ptr[1]);
	printf("%d\n", *ptr[2]);

	return 0;
}
#endif

#if 0
void print_arr(int **p)
{
	int i;
	for ( i = 0 ; i < 3 ; i ++ )
	{
		printf("%d\n", *p[i]);
		printf("%p\n", p[i]);
	}
}

int main()
{
	int a = 10, b = 20, c = 30;
	int *ptr[3] = {&a, &b, &c};
    
	print_arr(ptr);
}
#endif

#if 1
void print_arr(int **p)
{
	for ( int i = 0 ; i < 3 ; i ++ )
	{
		for ( int j = 0 ; j < 2 ; j ++)
		{
			printf("%d\n", p[i][j]);
		}
	}
}

int main()
{
	int A[2] = {1,2};
	int B[2] = {3,4};
	int C[2] = {5,6};
    
	int *ptr[3] = {A, B, C};
	print_arr(ptr);
}
#endif


#if 0
int main()
{
	int a[2] = {10,20};
	int b[2] = {30,40};
	int c[2] = {50,60};

	int *ptr[3];

	ptr[0] = a;
	ptr[1] = b;
	ptr[2] = c;

	printf("%d\n", ptr[0][0]);
	printf("%d\n", **ptr);
	printf("%d\n", *(*(ptr+1)+1));
	printf("%d\n", ptr[0][1]);
	printf("%d\n", ptr[1][0]);
	printf("%d\n", ptr[1][1]);
	printf("%d\n", ptr[2][0]);
	printf("%d\n", ptr[2][1]);
}
#endif


#if 0
int main()
{
	int a = 10, b = 20, c = 30;
	
	int *ptr[3] = {&a, &b, &c};

	printf("%d\n", *ptr[0]);
	printf("%d\n", *ptr[1]);
	printf("%d\n", *ptr[2]);

	int A[2] = {1,2};
	int B[2] = {3,4};
	int C[2] = {5,6};

	int *ptr[3] = {a, b, c};

	printf("%d\n", ptr[0][1]);
	printf("%d\n", ptr[1][0]);
	printf("%d\n", ptr[1][1]);
	printf("%d\n", ptr[2][0]);
	printf("%d\n", ptr[2][1]);
}
#endif
