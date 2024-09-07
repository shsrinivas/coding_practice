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

	int a = 10, b = 20, c = 30;

	int *ptr[3];

	ptr[0] = &a;
	ptr[1] = &b;
	ptr[2] = &c;

	printf("ptr[0]: %p\n",ptr[0]);
	printf("ptr[1]: %p\n",ptr[1]);
	printf("ptr[2]: %p\n",ptr[2]);

	printf("\n");

	printf("*ptr[0]: %d\n",*ptr[0]);
	printf("*ptr[1]: %d\n",*ptr[1]);
	printf("*ptr[2]: %d\n",*ptr[2]);
}

#endif
#if 1
int main()
{
	int a[2] = {1,2};
	int b[2] = {3,4};
	int c[2] = {5,6};

	int *ptr[3];

	ptr[0] = a;  //base addr of a
	ptr[1] = b;
	ptr[2] = c;

	printf("ptr[0] : %p \n",ptr[0]);
	printf("ptr[1] : %p \n",ptr[1]);
	printf("ptr[2] : %p \n",ptr[2]);

	printf("*ptr[0] : %d \n",*ptr[0]);
	printf("*ptr[1] : %d \n",*ptr[1]);
	printf("*ptr[2] : %d \n",*ptr[2]);

	printf("*(ptr[0]+1) : %d \n",*(ptr[0]+1));
	printf("*(ptr[1]+1) : %d \n",*(ptr[1]+1));
	printf("*(ptr[2]+1) : %d \n",*(ptr[2]+1));

	printf("ptr[0][0] : %d \n",ptr[0][0]);
	printf("ptr[0][1] : %d \n",ptr[0][1]);
	printf("ptr[1][0] : %d \n",ptr[1][0]);
	printf("ptr[1][1] : %d \n",ptr[1][1]);
	printf("ptr[2][0] : %d \n",ptr[2][0]);
	printf("ptr[2][1] : %d \n",ptr[2][1]);
}

#endif
