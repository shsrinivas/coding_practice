#include<stdio.h>
int main()
{
	int n1,n2,n3;
	printf("Enter a numbers: \n");
	scanf("%d %d %d",&n1,&n2,&n3);

	if(n1>n2)
	{
		if(n1>n3)
		{
			printf("%d is the greatest number",n1);
		}
	}
	else if(n2>n1)
	{
		if(n2>n3)
		{
			printf("%d is the greatest number",n2);
		}
	}
	else
	{
		printf("%d is the greatest",n3);
	}
}


