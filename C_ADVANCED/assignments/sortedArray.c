/*
Name: Shreya Srinivas
Date: 13-06-2023
Description: Print the values in sorted order without modifying or copying array 
Sample execution: -
Test Case 1:
user@emertxe] ./sort
Enter the size : 5
Enter 5 elements 
10 1 3  8 -1
After sorting: -1 1 3 8 10
Original array values 10 1 3 8 -1

Test Case 2:
user@emertxe] ./sort
Enter the size : 7
Enter 7 elements 
1 3 2 5 4 7 6
After sorting: 1 2 3 4 5 6 7
Original array values 1 3 2 5 4 7 6

Test Case 3:
user@emertxe] ./sort
Enter the size : 4
Enter 4 elements 
-1 -2  4 3
After sorting: -2 -1 3 4
Original array values -1 -2  4 3
 */
  
#include <stdio.h>

void print_sort(int arr[], int size) {
    // Find the range of values in the array
    int min = arr[0];
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Count the frequency of each value
    int count[201] = {0};  // Assuming the array elements are within the range -100 to 100
    for (int i = 0; i < size; i++) {
        count[arr[i] + 100]++;
    }

    // Print the values in ascending order
    for (int num = min; num <= max; num++) {
        if (count[num + 100] > 0) {
            for (int i = 0; i < count[num + 100]; i++) {
                printf("%d ", num);
            }
        }
    }
	printf("\n");
}
/*
	int smallest = arr[0];
	for ( int i = 1 ; i < size ; i++ ){
		if( arr[i] < smallest ){
			smallest = arr[i];
		}
	}
	printf("After sorting : ");
	printf("%d ", smallest);	


	int nextSmallest=arr[0];

	for( int j = 1 ; j < size ; j++)
	{
		for ( int i = 1 ; i < size ; i++ ){
			
			if( nextSmallest == smallest ){
				nextSmallest = arr[i];
			}
			if( arr[i] == smallest ){
				nextSmallest = arr[i];
			}
			if( arr[i] < nextSmallest && arr[i] > smallest ){
				nextSmallest = arr[i];
			}
		}
		printf("%d ", nextSmallest);
		smallest = nextSmallest;
	    nextSmallest = arr[0];
	}
	printf("\n");
}
*/
int main()
{
	int size, iter;

	printf("Enter the size of the array : ");
	scanf("%d", &size);

	int arr[size];

	printf("Enter the %d elements\n",size);
	for (iter = 0; iter < size; iter++)
	{
		scanf("%d", &arr[iter]);
	}

	print_sort(arr, size);

	printf("Original array values ");
	for (iter = 0; iter < size; iter++)
	{
		printf("%d ", arr[iter]);
	}
	printf("\n");
}

