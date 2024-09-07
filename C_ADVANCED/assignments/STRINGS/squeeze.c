/*
Name: Shreya Srinivas
Date: 19-06-2023
*/

#include <stdio.h>

void squeeze(char *str1, char *str2)
{
    int i, j, k;
    int shouldSqueeze;

    for (i = 0, k = 0; str1[i] != '\0'; i++) {
        shouldSqueeze = 0;

        for (j = 0; str2[j] != '\0'; j++) {
            if (str1[i] == str2[j]) {
                shouldSqueeze = 1;
                break;
            }
        }

        if (!shouldSqueeze) {
            str1[k++] = str1[i];
        }
    }
    str1[k] = '\0';
}


int main()
{
	char str1[100] = " Welcome";
	char str2[100] = "Emertxe";

	printf("String1: %s\n",str1);
	printf("String2: %s\n",str2);

	squeeze(str1,str2);

	printf("String after squeezing: %s\n",str1);
	return 0;
}
