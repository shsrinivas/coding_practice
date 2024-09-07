#include "main.h"

void swap(int *arr, int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

int partition(int *arr, int low, int high)
{
    int pivot = arr[high]; // Choose the last element as the pivot
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr, i, j);
        }
    }

    swap(arr, i + 1, high); // Move pivot to its correct position
    return i + 1; // Return the index of the pivot
}
