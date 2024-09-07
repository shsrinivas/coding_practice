/*
Name: Shreya Srinivas
Date: 25-05-2023
Description: WAP to implement your own isalnum() function
Sample Input: Enter the character: a
Sample Output: The character 'a' is an alnum character.
*/

#include <stdio.h>

int my_isalnum(int ch){
	//Range for [a-z] = [97-122] , [A-Z] = [65-90] , [0-9]= [48-57]
	//checking if char lies within the above range if so it is an alnum char
	if((ch>=65 && ch<=90) || (ch>=97 && ch<=122) || (ch>=48 && ch<=57))
	   return 1;  //return 1 if char lies in the above range else 0
	else
		return 0;	
	printf("%d",ch);
}

int main()
{
    char ch;
    int ret;
    
    printf("Enter the character:");
    scanf("%c", &ch);
    
    ret = my_isalnum(ch);
	if(ret)
		printf("The character '%c' is an alnum character.\n",ch);
	else
		printf("The character '%c' is not an alnum character.\n",ch);

}

