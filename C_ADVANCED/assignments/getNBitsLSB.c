/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<stdio.h>

int get_nbits(int num, int n);
int main()
{
	int num,n,res=0;
	printf("Enter num and n: ");
	scanf("%d%d",&num, &n);
   	res = get_nbits(num,n);
	printf("Result = %d\n",res);
	return 0;	
}

int get_nbits(int num, int n){
	num = num & ((1<<n)-1);
	return num;
}


