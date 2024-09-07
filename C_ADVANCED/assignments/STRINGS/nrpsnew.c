#include <stdio.h>
#include <stdbool.h>

bool isDistinctChars(char distinctChars[], int c)
{
    for (int i = 0; i < c - 1; i++) {
        for (int j = i + 1; j < c; j++) {
            if (distinctChars[i] == distinctChars[j]) {
                return false;
            }
        }
    }
    return true;
}

void swap(char distinctChars[], int i, int j)
{
    char temp = distinctChars[i];
    distinctChars[i] = distinctChars[j];
    distinctChars[j] = temp;
}

void generateNRPS(int n, int k, char distinctChars[])
{
    if (!isDistinctChars(distinctChars, k)) {
        printf("Error: Enter distinct characters.\n");
        return;
    }

    if (k < 2) {
        printf("Error: Enter at least 2 distinct characters.\n");
        return;
    }

    if (n < k) {
        printf("Error: Length of the string is too small for the given number of distinct characters.\n");
        return;
    }

    char nrps[n + 1];
    int i, j;

    // Generate the NRPS by repeating the distinct characters with swapping the first two elements
    for (i = 0, j = 0; i < n; i++) {
        nrps[i] = distinctChars[j];
        j = (j + 1) % k;

        // Check if the previous and current characters are the same
        if (i > 0 && nrps[i] == nrps[i - 1]) {
            // Swap the first two distinct characters
            swap(distinctChars, 0, 1);
            j = 0; // Reset the index j
            nrps[i] = distinctChars[j];
        }
    }

    nrps[n] = '\0';  // Null terminate the NRPS string

    printf("Possible NRPS is %s\n", nrps);
}

int main()
{
    int c, n;
    printf("Enter the number of characters C: ");
    scanf("%d", &c);

    if (c < 2) {
        printf("Error: Enter at least 2 distinct characters.\n");
        return 0;
    }

    printf("Enter the length of the string N: ");
    scanf("%d", &n);

    if (n < c) {
        printf("Error: Length of the string is too small for the given number of distinct characters.\n");
        return 0;
    }

    char distinctChars[c];

    printf("Enter %d distinct characters: ", c);
    for (int i = 0; i < c; i++) {
        scanf(" %c", &distinctChars[i]);
    }

    generateNRPS(n, c, distinctChars);

    return 0;
}

