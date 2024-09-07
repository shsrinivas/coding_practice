/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<stdio.h>
#if 0
void my_print(const char *s)
{
	while(*s)
	{
		putchar(*s++);
	}
}

int main()
{
	char *s = "Hello";
	my_print(s);
}

#endif
#if 0
void printString(char str[])
{
	printf("%s\n",str);
}

int main()
{
	char msg[] = "Hello";
	printString(msg);
	return 0;
}
#endif

int main()
{
	char str[100] = "Hi   H";
	printf("%s\n",str);
	str[2]=str[3];
	str[3]=str[4];
	str[4]=str[5];
	str[5]=str[6];
	printf("%s\n",str);
	str[2]=str[3];
	str[3]=str[4];
	str[4]=str[5];
	printf("%s\n",str);
/*
	for (int i = 0; str[i] != '\0' ; i++)
	{
		if ( str[i] == ' ')
		{
			printf("Space encountered!\n");
*/
}
