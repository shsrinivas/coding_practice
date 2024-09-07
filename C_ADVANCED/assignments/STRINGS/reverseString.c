/*
Name: Shreya Srinivas
Date: 20-06-2023
Description: WAP to reverse the given string using iterative method
Sample Input: 
Enter a string : Hello World
Sample Output:
Reverse string is : dlroW olleH
*/

#include <stdio.h>
#include <string.h>

void reverse_iterative(char str[])
{
	int i,j,len;

	for ( i = 0 ; str[i] != '\0' ; i++ )    //finding length of string
	{
		len++;
	}

	char rev[ len + 1 ];                   //initializing rev
	rev[ len + 1 ] = '\0';                 //ending rev with NULL

	for ( j = 0, i = len-1 ; j <= len ; i -- )  //Logic to reverse string
	{
		rev[j++] = str[i];
	}	
	for ( i = 0 ; rev[i] != '\0' ; i++ )    //copying rev to str
	{
		str[i] = rev[i];
	}
}

int main()
{
    char str[30];
    
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    
    reverse_iterative(str);
    
    printf("Reverse string is: %s\n", str);
}

