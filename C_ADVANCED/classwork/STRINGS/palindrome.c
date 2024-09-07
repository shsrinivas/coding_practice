/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<stdio.h>
#include<string.h>

void palindrome(char *str, int len){
	char rev[len-1];
	rev[len]='\0';

	int j=0;
	for (int i=len-2 ;i>=0 ; i--){
		rev[i] = str[j];
		j++;
	}

	printf("rev = %s\n",rev);

	if(!strcmp(str,rev))
		printf("%s is a palindrome \n",str);
	else
		printf("%s is not a palindrome \n",str);
}


int main()
{
	char *str = "abba";
	int len = sizeof("abba");
	printf("len = %d \n",len);
	palindrome(str,len);
}


