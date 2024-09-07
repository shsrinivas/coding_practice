/*
Name: Shreya Srinivas
Date: 26-06-2023
Description: WAP to check given string is Pangram or not
Sample Input: 
Enter the string: The quick brown fox jumps over the lazy dog
Sample Output:
The Entered String is a Pangram String
*/

#include <stdio.h>
#include <ctype.h>

void convertToLower(char* sentence);
void squeeze(char *str1, char *str2);
int my_strlen(char *str);

int main()
{
	char str1[100] = "abcdefghijklmnopqrstuvwxyz";
	char str2[100];// = "ThE quick brown fox jumps over the lazy dog";

	printf("Enter the string: ");
	scanf(" %[^\n]",str2);

	convertToLower(str2);  //convert the entered string to lower case

	squeeze(str1,str2);   //remove char in str1 if it matches

	int len = my_strlen(str1);  //if len = 0 then string is pangram else not

	if(len == 0)
		printf("The Entered String is a Pangram String\n");
	else
		printf("The Entered String is not a Pangram String\n");

	return 0;
}

void convertToLower(char* sentence)   //function to convert upper case to lower case 
{
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (isupper(sentence[i])) {
            sentence[i] = tolower(sentence[i]);
        }
    }
}

void squeeze(char *str1, char *str2)     //function to remove char if it matches with enterned string
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
    str1[k] = '\0';   //modifying string
}


int my_strlen(char *str)   //func to find the len of string
{
	int count = 0;
	for(int i = 0; str[i] != '\0'; i++ )
	{
		count++;
	}

	return count;
}

