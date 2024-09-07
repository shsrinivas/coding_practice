/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<stdio.h>
#include<string.h>
#if 0
int main()
{
	char *ret = NULL;       //NULL is used as ref pointer to check succuss or failure of a function.

	char *str1 = "Hello world";
	char *str2 = "world";

	ret = strstr(str1,str2);

	if(ret == NULL)
		printf("Failure\n");
	else
		printf("Success\n");
}
#endif

#if 1
int main()
{
	double x = 7.2;
	void *vptr = &x;

	printf("%#hhx\n",*((char*)vptr));
	printf("%#hhx\n",*(char*)(vptr+7));
	printf("%hu\n",*(short*)(vptr+3));
	printf("%#x\n",*(int*)(vptr+0));
	printf("%#x\n",*(int*)(vptr+4));
}
#endif

