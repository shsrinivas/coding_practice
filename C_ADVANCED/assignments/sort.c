#include <stdio.h>
#include <limits.h>

void printSortedArray(const int arr[], int size) {
    // Find the range of values in the array
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Count the frequency of each value
    int count[200] = {0};  // Assuming the array elements are within the range -100 to 100
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
}

int main() {
    int arr[] = {5,1,4,3,2,6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Sorted array: ");
    printSortedArray(arr, size);

    return 0;
}

