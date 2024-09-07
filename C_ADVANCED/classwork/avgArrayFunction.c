/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<stdio.h>

int avgOfArray(int *arr, int size);
int main()
{
	int avg;
	int arr[5]={10,20,30,20,20};
	avg=avgOfArray(arr,5);
	printf("Average is %d\n",avg);
	return 0;
}

int avgOfArray(int *arr, int size){
	int avg,sum=0;
	for ( int i = 0 ; i < size ; i++ ){
		sum += arr[i];
	}
	avg=sum/size;
	return avg;
}



