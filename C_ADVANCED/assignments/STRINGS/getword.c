/*
Name: Shreya Srinivas
Date: 19-06-2023
Description: WAP to implement getword function
Sample Input: Enter the string : Welcome to Emertxe
Sample Output: You entered Welcome and the length is 7
 */

#include<stdio.h>

int getword(char *str)
{
	int count;
	//printf("%s\n",str);
	for ( int i = 0 ; str[i] != '\0' ; i++ )
	{
		if(str[i] == ' ' || str[i] == '\t')   //If space is encountered replace it with '\0' 
		{
			str[i] = '\0';
			break;
		}
		count++;   //to find the length of string
	}
	return count;
}

int main()
{
	char str[100];
	printf("Enter the string : ");
	scanf("%[^\n]",str);
	int len = getword(str);
	printf("You entered %s and the length is %d\n",str,len);
	return 0;
}


