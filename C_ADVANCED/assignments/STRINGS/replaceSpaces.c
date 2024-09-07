/*
Name: Shreya Srinivas
Date: 19-06-2023
Description: WAP to replace each string of one or more blanks by a single blank
Sample execution:
Test Case 1:
user@emertxe] ./remove_multi_space
Enter the string with more spaces in between two words
Pointers     are               sharp     knives.
Pointers are sharp knives.
*/

#include <stdio.h>

void replace_blank(char *str)
{
    printf("%s\n", str);

    int i, j;
    for (i = 0, j = 0; str[i] != '\0'; i++)
    {
		printf("%d %d\n",i,j);
        if (str[i] == ' ' && str[i + 1] == ' ')
        {
            continue;  // Skip consecutive spaces
        }
        str[j++] = str[i];  // Build the modified string
		printf("%s\n",str);
    }
    str[j] = '\0';  // Add the null terminator at the end

    printf("%s\n", str);
}

int main()
{
    char str[50];

    printf("Enter the string with more spaces in between two words: ");
    scanf("%[^\n]", str);

    replace_blank(str);

    return 0;
}
