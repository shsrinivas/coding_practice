/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<stdio.h>

void swap(int *n1, int *n2){
	int size = sizeof(*n1);
	printf("size = %d\n",size);
	int temp = *n1;
	*n1 = *n2;
    *n2 = temp;
}	

int main()
{
	int n1='c',n2='a';

	printf("n1: %c, n2: %c\n",n1,n2);

	swap(&n1,&n2);

	printf("n1: %c, n2: %c\n",n1,n2);

}


