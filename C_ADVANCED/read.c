#include<stdio.h>
int main()
{
	char c;
	printf("Enter a char: ");
	scanf("%c",&c);

	if(c>='A' && c<='Z')
	{
		printf("Is a captial alpha");
	}
	else if(c>='a' && c<='z')
	{
		printf("Is a lower alpha");
	}
	else
	{
		printf("digit");
	}
}
