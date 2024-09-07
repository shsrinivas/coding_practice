/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include <stdio.h>

void fun(int arr1[], int size, int dup_arr[], int *new_size) {
    dup_arr[0] = arr1[0];
    *new_size = 1;

    for (int i = 1; i < size; i++) {
        int duplicate = 0;
        
        for (int j = 0; j < *new_size; j++) {
            if (arr1[i] == dup_arr[j]) {
                duplicate = 1;
				printf("Breaking\n");
                break;
            }
        }
        
        if (!duplicate) {
            dup_arr[*new_size] = arr1[i];
            (*new_size)++;
        }
    }

    for (int i = 0; i < *new_size; i++) {
        printf("%d ", dup_arr[i]);
    }
}

int main() {
    int size, new_size = 0;
    printf("Enter the size: ");
    scanf("%d", &size);
    int arr1[size], arr2[size];

    printf("Enter elements into the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }

    fun(arr1, size, arr2, &new_size);

    return 0;
}

