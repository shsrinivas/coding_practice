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
	while (str1[i] != '\0' && str2[i] != '\0'){
		char ch1 = str1[i];
		char ch2 = str2[i];

		if( ch1 >= 'A' && ch1 <= 'Z')
			ch1+=32;
		if( ch2 >= 'A' && ch2 <= 'Z')
			ch2+=32;
		
		if(ch1 != ch2 )
			return ch1 - ch2;

		i++;
	}
	if(str1[i] == '\0' && str2[i] == '\0')
		return 0;
	return str1[i] - str2[i];
}

int main()
{
	char *str1="Hello";
	char *str2="hello";
	int ret = strCmp(str1,str2);
	if( ret == 0 )
		printf("Strings are equal\n");
	else
		printf("Strings are not equal\n");
}


