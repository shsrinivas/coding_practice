/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<stdio.h>
#if 0
// Pasing size along with array
void print_array(int *arr,int size);
int main()
{
	int arr[3] = {10,20,30};
	print_array(arr,3);
}

void print_array(int *arr,int size){
	for(int i = 0; i < 3 ; i ++ ){
		printf("%d\n",*(arr+i));
		//arr++;
	}
}

#endif
#if 1
int *modify_array(int *array, int size);
void print_array(int *array, int size);

int main(){
	int array[3] = {10,20,30};
	int *new_array_val=modify_array(array,3);
	print_array(new_array_val,3);
	return 0;
}
void print_array(int *array, int size){
	for(int i = 0; i < size ; i ++ ){
		printf("%d\n",array[i]);
	}
}

int *modify_array(int *array, int size){
	int i;
	for ( i = 0; i < size ; i ++ ){
		*(array+i) += 10;
	}
	return array;
}
#endif
