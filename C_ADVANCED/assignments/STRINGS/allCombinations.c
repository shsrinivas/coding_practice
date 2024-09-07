/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<stdio.h>

// Function to generate combinations
void combination(char [], int, int);

// Function to calculate the length of a string
int my_strlen(char []);

// Function to check if characters in a string are distinct
int isDistinct(char []);

int main() {
    char str[100];
    int n;
    
    printf("Enter a string: ");
    scanf("%100[^\n]", str);

    n = my_strlen(str);

    // Check if characters are distinct
    if (!isDistinct(str)) {
        printf("Error: please enter distinct characters.\n");
        return 0;
    }

    // Generate all combinations
    combination(str, 0, n - 1);

    return 0;
}

// Function to generate combinations using recursion
void combination(char str[], int start, int end) {
    // Base case: if start and end are equal, print the combination
    if (start == end) {
        printf("%s\n", str);
    } else {
        int i;
        for (i = start; i <= end; i++) {
            // Swapping characters
            char temp = str[start];
            str[start] = str[i];
            str[i] = temp;

            // Recursion for the remaining characters
            combination(str, start + 1, end);

            // Undoing the swap
            temp = str[start];
            str[start] = str[i];
            str[i] = temp;
        }
    }
}

// Function to calculate the length of a string
int my_strlen(char str[]) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}

// Function to check if characters in a string are distinct
int isDistinct(char str[]) {
    int i, j;
    int length = my_strlen(str);
    for (i = 0; i < length - 1; i++) {
        for (j = i + 1; j < length; j++) {
            if (str[i] == str[j]) {
                return 0; // Not distinct characters
            }
        }
    }
    return 1; // Distinct characters
}


