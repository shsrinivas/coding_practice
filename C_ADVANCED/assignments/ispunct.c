/*
Name: Shreya Srinivas
Date: 25-05-2023
Sample execution: -
Test Case 1:
user@emertxe] ./c_type_lib
Enter the character: a
Entered character is not punctuation character
Test Case 2:
Enter the character:$
Entered character is punctuation characterDescription: WAP to implement your own ispunct() function
*/

#include <stdio.h>

int my_isalnum(int ch){
	//Range for [a-z] = [33-47] ,[58-63], [91-96], [123-176]
	//checking if char lies within the above range if so it is an alnum char
	if((ch>=33 && ch<=47) || (ch>=58 && ch<=63) || (ch>=91 && ch<=96) || (ch>=123 && ch<=176))
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
		printf("Entered character is punctuation character\n");
	else
		printf("Entered character is not punctuation character\n");

}

