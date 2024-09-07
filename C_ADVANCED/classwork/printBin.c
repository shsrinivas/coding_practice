#include<stdio.h>
int main()
{
	int num=10,count=0;
	for ( int i=7 ; i>=0 ; i--)
	{
		if (num&(1<<i))
		{
			count+=1;
			printf("1");
		}
		else
		{
			printf("0");
		}

		if(i%8==0)
		{
			printf(" ");
		}
	}
	printf("\n");
	//printf("count= %d\n",count);
}

