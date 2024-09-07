/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<stdio.h>

void print_array(int *arr, int size);
void square_array(int *arr, int size);
int main()
{
	int sqr;
	int arr[5] = {1,2,3,4,5};
	print_array(arr, 5);
	square_array(arr, 5);
	print_array(arr, 5);
	return 0 ;
}

void print_array(int *arr, int size){
	for (int i = 0 ; i < size ; i ++ ){
		printf("%d\n",arr[i]);
	}
}

void square_array(int *arr, int size){
	for ( int i = 0 ; i < size ; i ++ ){
		//*(arr+i) = *(arr+i) * *(arr+i);
		//arr[i]=arr[i]*arr[i];
		arr[i]*=arr[i];
	}
}


