/*
Name: Shreya Srinivas
Date: 26-05-2023
Description: WAP to find 2nd largest element in an array
Sample Execution:
Test Case 1:
Enter the size of the Array : 5
Enter the elements into the array: 5 1 4 2 8
Second largest element of the array is 5
Test Case 2:
Enter the size of the Array : 4
Enter the elements into the array: 66 22 11 3
Second largest element of the array is 22
 */
#include<stdio.h>

int sec_largest(int *arr, int size){
	int largest = arr[0];   // Assuming 1st eleement of array as the largest
	for ( int i = 1 ; i < size ; i ++ ){
		if(arr[i] > largest)  //looping through array to compare  
		{
			largest = arr[i]; // upgrading largest value
		}
	}
	int j ;
	int secondLargest = arr[0]; //assuming second largest 
	if( arr[0] == arr[1] ){
		secondLargest = arr[2];
		j =2;
	}
	/*
	for (int i = 0 ; i < size ; i ++){
		secondLargest = arr[i];
		if(secondLargest == largest){
			continue;
		}
		else
		{
			secondLargest = arr[i];
		}
	}
	printf("secLar : %d\n",secondLargest);
	*/
	for ( int i = j ; i < size ; i ++ ){
		if( (arr[i] > secondLargest) && ( arr[i] < largest )){ // comparing the elements 
				secondLargest = arr[i];  //upgrading the second largest value
		}
	}
	return secondLargest;
}

int main()
{
	int i,size, ret;

	//Read size from the user
	printf("Enter the size of the array :");
	scanf("%d", &size);

	int arr[size];

	//Read elements into the array
	for ( i = 0 ; i < size ; i ++ ){
		scanf("%d",&arr[i]);
	}	   
	//funtion call
	ret = sec_largest(arr, size);

	printf("Second largest element of the array is %d\n", ret);
}

