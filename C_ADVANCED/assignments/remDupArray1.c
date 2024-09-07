/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include <stdio.h>

int fun(int *arr, int size, int *new_arr, int *new_size)
{
	int index=0;
	*new_size=0;
	new_arr[0] = arr[0];
	*new_size+=1;
	//printf("new_size = %d\n",*new_size);
	//printf("new_arr[0] = %d\n",arr[0]);
	for(int i=1; i<size; i++ )
	{
		int dup = 0;
		for( int j = 0 ; j < i ; j ++ )
		{
			if( arr[i] == arr[j] )
			{	
				dup = 1;
				break;
			}
		}
		if(dup == 0)
		{
			index+=1;
			new_arr[index] = arr[i];
			//printf("arr[i] = %d\n",arr[i]);
			//printf("arr[index] = %d\n",arr[index]);
			//printf("new_arr[%d] = %d\n",index,arr[i]);
			//printf("index = %d\n",index);
			//printf("new_arr[index] = %d\n",new_arr[index]);
			//printf("i = %d\n",i);
			//printf("new_arr[i] = %d\n",new_arr[i]);
			*new_size+=1;
			//printf("new_size = %d\n",*new_size);
		}
		printf("\n");
	}

	for(int i=0; i < *new_size; i++ )
	{
		printf("%d ",new_arr[i]);
	}
}

int main()
{
	int size;
	printf("Enter the size: ");
	scanf("%d",&size);
	int arr[size];
	int new_size = size;
	int new_arr[new_size];
	for(int i=0; i<size; i++ )
	{
		scanf("%d",&arr[i]);
	}

	fun(arr,size,new_arr,&new_size);


}
