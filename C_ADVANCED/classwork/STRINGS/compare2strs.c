/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<stdio.h>

int strCmp(char *str1, char *str2){
	int i = 0;
	while (str1[i] == str2[i]){
		if(str1[i] == '\0')
			return 0;
		i++;
	}
	return str1[i] - str2[i];
}

int main()
{
	char *str1="Hello";
	char *str2="Helloworld";
	int ret = strCmp(str1,str2);
	if( ret == 0 )
		printf("Strings are equal\n");
	else
		printf("Strings are not equal\n");
}


