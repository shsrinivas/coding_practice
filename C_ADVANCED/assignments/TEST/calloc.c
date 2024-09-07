/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<stdio.h>
#include<stdlib.h>
#if 0
int main()
{
	int size,i;
	printf("Enter size: ");
	scanf("%d",&size);

	int *ptr;
	ptr = calloc(size,sizeof(int));

	for ( i = 0 ; i < size ; i++ )
		scanf("%d",&ptr[i]);

    for ( i = 0 ; i < size ; i++ )
        printf("%d ",ptr[i]);
    printf("\n");
}
#endif

#if 0
int main()
{
	char *ptr;
	ptr = malloc(10);
	free(ptr);
	ptr = malloc(15);
	ptr = realloc(ptr,5);
	ptr = realloc(ptr,2);


	if(ptr != NULL)
		printf("Sucess\n");
}
#endif

int main()
{
	int *n_arr,sum=0,size,i;

	while(1)
	{
		printf("Enter size: ");
		scanf("%d",&size);

		n_arr = malloc(size * sizeof(int));

		for( i = 0; i < size; i++ )
		{
			scanf("%d", &n_arr[i]);
			sum += n_arr[i];
		}
		printf("Sum is %d\n",sum);
		free(n_arr);
	}
	return 0;	
}
