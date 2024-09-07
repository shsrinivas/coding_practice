#include<stdio.h>

int main()
{
	int marks;
	printf("Enter your marks:\n");
	scanf("%d",&marks);
//marks=80;

	if(marks>80)
	{
		printf("Distinction\n");
	}
	else if(marks>70)
	{
		printf("First class\n");
	}
	else if(marks>60)
	{
		printf("Second class\n");
	}
	else
	{
		printf("Thanks for your participation, do better next time:)");
	}
}

