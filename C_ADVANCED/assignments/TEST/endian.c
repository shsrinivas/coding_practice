/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<stdio.h>
union Endian
{
	int num;
	short lsb;
	short msb;
};
int main()
{
	union Endian u = {0x12345678};
	printf("%x\n",u.lsb); 
	printf("%x\n",u.msb); 


}


