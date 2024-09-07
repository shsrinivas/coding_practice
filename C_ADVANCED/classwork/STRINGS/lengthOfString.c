/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<stdio.h>

void lengthOfStr(char *str){
	int count=0;
	while(*str){
		count+=1;
		str++;
	}
	printf("Length of string is : %d\n",count);
}


int main()
{
	char *str = "Hell";
	int count = 0;
	lengthOfStr(str);
}


