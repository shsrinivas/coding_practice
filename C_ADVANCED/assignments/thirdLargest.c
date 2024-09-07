/*
Name: Shreya Srinivas
Date: 28/05/2023
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

int third_largest(int arr[], int size) {
    int maxNum = arr[0];  // Initialize the maximum element to the first element
    int secondLargest = arr[0];  // Initialize the second largest element to the first element
    int thirdLargest = arr[0];  // Initialize the third largest element to the first element

    for (int i = 1; i < size; i++) {
        if (arr[i] > maxNum) {
            // If the current element is greater than the maximum element,
            // update the third largest, second largest, and maximum elements accordingly
            thirdLargest = secondLargest;
            secondLargest = maxNum;
            maxNum = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < maxNum) {
            // If the current element is greater than the second largest element
            // and smaller than the maximum element,
            // update the third largest and second largest elements accordingly
            thirdLargest = secondLargest;
            secondLargest = arr[i];
        } else if (arr[i] > thirdLargest && arr[i] < secondLargest) {
            // If the current element is greater than the third largest element
            // and smaller than the second largest element,
            // update the third largest element accordingly
            thirdLargest = arr[i];
        }
    }

    return thirdLargest;  // Return the third largest element
}

int main() {
    int size, ret;

    // Read size from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Read elements into the array
    printf("Enter the elements into the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Function call to find the third largest element
    ret = third_largest(arr, size);

    printf("Third largest element of the array is %d\n", ret);

    return 0;
}

