/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/
#include <stdio.h>

// Function to swap two elements in an array
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to find the smallest positive number missing from the unsorted array
int findSmallestMissingNumber(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        while (arr[i] > 0 && arr[i] <= size && arr[i] != arr[arr[i] - 1]) {
            // Place the element at its correct position in the array
            swap(&arr[i], &arr[arr[i] - 1]);
        }
    }

    // Find the first position where the element is not in its correct position
    for (int i = 0; i < size; i++) {
        if (arr[i] != i + 1) {
            return i + 1; // Smallest positive missing number found
        }
    }

    // If all elements are in their correct position, return the next positive number
    return size + 1;
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the findSmallestMissingNumber function to find the smallest missing positive number
    int result = findSmallestMissingNumber(arr, size);

    printf("The smallest positive number missed is: %d\n", result);

    return 0;
}

