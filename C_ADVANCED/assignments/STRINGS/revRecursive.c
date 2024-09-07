/*
Name: Shreya Srinivas
Date: 22-06-2023
Description: WAP to reverse the given string using recursive method
Sample Input:
Enter a string : Hello World
Sample Output:
Reverse string is : dlroW olleH
*/

#include<stdio.h>
#include<string.h>

void revRecursive(char *str, int i, int j)
{
	if (i>=j)   //untill it reaches half of string end recursion
	{
		return;
	}

	char temp = str[i];  //swapping chars
	str[i] = str[j];
	str[j] = temp;

	revRecursive(str,++i,--j); //calling revRecursive 
}

int main()
{
	char str[100];

	printf("Enter string: "); 
	scanf("%s",str);            //Reading string from user

	int len=strlen(str);        //Calculating string length

	revRecursive(str, 0, len - 1); //Calling rev function
	printf("Reverse string is : %s\n",str);

}


