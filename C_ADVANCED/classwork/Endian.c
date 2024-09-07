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
	int num=0x12345678;
	char ch;

	int *iptr=&num;
	char *cptr=&num;

	if(*cptr == 0x78)
		printf("Little Endian\n");
	else
		printf("Big Endian\n");
}
	
#endif
#if 1
int main()
{
	int num=0x12345678;
	int num1=0x12345678;
	char ch;

	int *iptr=&num;
	char *cptr=&num;

	*cptr = 0x12;

	if(num != num1)
		printf("Little Endian\n");
	else
		printf("Big Endian\n");
}
	
#endif

