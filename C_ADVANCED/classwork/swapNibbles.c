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
	char num,new_num;
	printf("Enter a hex num (Eg: 0x23): \n");
	scanf("%hhx",&num);

	new_num = ((num & (0x0F)) << 4) | ((num & (0xF0))>>4); 

	printf("Num is %#x\n",num);
	printf("New Num is %#x\n",new_num);
}


