/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr;
	int size,i;
	
	printf("Enter size of array: ");
	scanf("%d",&size);

	ptr = malloc(size*sizeof(int));

	printf("size of malloc : %d\n",sizeof(ptr));

	for ( i = 0 ; i < size ; i++ )
		scanf("%d",&ptr[i]);

	for ( i = 0 ; i < size ; i++ )
		printf("%d ",ptr[i]); 
	printf("\n");


}


