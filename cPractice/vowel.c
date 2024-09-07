#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
bool isVowel(char c)
{

	c = tolower(c);
	if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
	{
		return true;
	}
}

int main()
{
	char c;
	printf("Enter char : ");
	scanf("%c", &c);
	if(isVowel)
		printf("it is a vowel\n");
	else
		printf("not a vowel\n");
}


