/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<stdio.h>
void copyStr(char *str1, int len){
	char str2[len];
	for (int i = 0 ; i <= len ; i++ ){
	   str2[i]=str1[i];
	}
	printf("str 1 = %s\n",str1);
	printf("str 2 = %s\n",str2);
	printf("str address = %p\n",str1);
	printf("str address = %p\n",str2);
}

int main()
{
	char *str1 = "Hello";
	int len=sizeof(str1);
	copyStr(str1,len);
}


