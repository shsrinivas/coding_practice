/*
Name: Shreya Srinivas
Date: 25-05-2023
Description: WAP to implement your own islower() function
Sample Input: Enter the character: a
Sample Output: Entered character is lower case alphabet
*/

#include <stdio.h>

int my_isalnum(int ch){
	//Range for [a-z] = [97-122]
	//checking if char lies within the above range if so it is an alnum char
	if((ch>=97 && ch<=122))
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
		printf("Entered character is lower case alphabet\n");
	else
		printf("Entered character is not lower case alphabet\n");

}

