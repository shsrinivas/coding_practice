#include "main.h"

int quick_sort(int *arr, int low, int high)
{
    if (low < high)
    {
        int pivotIndex = partition(arr, low, high);
        quick_sort(arr, low, pivotIndex - 1);
        quick_sort(arr, pivotIndex + 1, high);
    }
}
