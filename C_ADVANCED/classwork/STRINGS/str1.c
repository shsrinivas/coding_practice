/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<stdio.h>
#if 0
int main()
{
	char s1[6]="Hello";
	char s2[6];
	s2[0]="s";	
	char *s3 = "flemingo";
	char *s4;

	s4 = "siddu";

	printf("%s\n",s1);
	printf("%s\n",s2);
	printf("%s\n",s3);
	printf("%s\n",s4);
}

#endif
#if 0
int main()
{
	char *s1="Shreya";
	char *s2="Shreyo";

	if(s1 == s2)
		printf("They share space\n");
	else
		printf("They do not share space\n");
}
#endif

int main()
{
	char str[10];
	scanf("%5[^\n]",str);
	printf("%s\n",str);
}
