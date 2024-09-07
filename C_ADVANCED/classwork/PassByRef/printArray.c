/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<stdio.h>

void scan_array(int *arr)
{
	for (int i = 0 ; i < 5; i++)
	{
		//scanf("%d ",&arr[i]);
		scanf("%d ",(arr + i));
	}
}
void print_array(int *arr)
{
	for (int i = 0 ; i < 5; i ++)
	{
		//printf("%d ",arr[i]);
		//printf("%d ",*(arr + i));
		printf("%d ",*arr);
		arr++;
	}
	printf("\n");
}

int main()
{
	int arr[5]={1,2,3,4,5};
	print_array(arr);
	scan_array(arr);
	print_array(arr);
}


