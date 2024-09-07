#include<stdio.h>

int main()
{
	int n;

	printf("Enter the number: ");
	scanf("%d",&n);

	if(n%2==0)
	{
		if(n>0)
		{
			printf("Number is Positive even number");
		}
		else if(n<0)
		{
			printf("Number is Negetive even number");
		}
		else
		{
			printf("Number is either even nor odd");
		}
	}
	else
	{
		if(n>0)
		{
			printf("Number is Positive odd number");
		}
		else if(n<0)
		{
			printf("Number is Negetive odd number");
		}
		else
		{
			printf("Number is either even nor odd");
		}
	}
}
