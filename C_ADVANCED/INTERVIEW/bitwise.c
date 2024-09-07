/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<stdio.h>

int main()
{
#if 0
	int num = 10, nBits;
	printf("Enter n bits : ");
	scanf("%d", &nBits);

	printf("num = %d\n",num);
	num = num & ((1 << nBits) - 1);
	printf("num = %d\n",num);
#endif


#if 0
	int num = 10, val = 12, nBits;
	printf("Enter n bits : ");
	scanf("%d", &nBits);

	val = val & ((1 << nBits) - 1);

	int mask = ~((1 << nBits) - 1);	
	num = (num & mask) | val;
	printf("num = %d\n",num);

#endif

	int num = 12;
	printf("Enter n bits : ");
	scanf("%d", &nBits);
	printf("Enter pos : ");
	scanf("%d", &pos);


	mask = (1 << nBits) - 1;
	mask = mask <<



	return 0;
}


