/*
Name: Shreya Srinivas
Date: 30-06-2023
Description: Variance calculation with dynamic arrays
Sample Exe:
Enter the no.of elements : 10

Enter the 10 elements:
[0] -> 9
[1] -> 12
[2] -> 15
[3] -> 18
[4] -> 20
[5] -> 22
[6] -> 23
[7] -> 24
[8] -> 26
[9] -> 31
Variance is 40.000000
*/

#include <stdio.h>
#include <stdlib.h>

float variance(int *arr, int size){
	int sum = 0, mean = 0;
	for ( int i = 0; i < size; i++ ){          //Finding sum of array elements
		sum += arr[i];
	}

	mean = sum / size;                         //Finding mean of arr elements

	for ( int i = 0; i < size; i++ ){
		arr[i] -= mean;                        //for each ele: ele - mean
	}

	for ( int i = 0; i < size; i++ ){
		arr[i] *= arr[i];                      //finding square of elements
	}

	float var;
	sum = 0;
	for ( int i = 0; i < size; i++ ){
		sum += arr[i];						  //finding sum after squaring elements
	}

	free(arr);                                //freeing the array pointer

	var = (float)sum / size;                  //calculating variance val
	return var;                               //return variance
}

int main()
{
	int size;
	printf("Enter the no.of elements : ");          //Reading size of arr
	scanf("%d", &size);
	int *arr = malloc( size * sizeof(int));         //Creating arr dynamically using malloc 

	printf("Enter the %d elements: \n",size);         //Reading array elements
	for ( int i = 0; i < size; i++ ){
	  printf("[%d] - > ",i);
	  scanf("%d",&arr[i]);
	}	  

	float var = variance(arr,size);                //collecting variance value from function
    	
	printf("Variance is : %f\n",var);
    
}

