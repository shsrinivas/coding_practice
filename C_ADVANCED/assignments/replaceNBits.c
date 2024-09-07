/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<stdio.h>
int replace_nbits(int, int, int);
int main()
{
	int num, n, val, res = 0;
    
    printf("Enter num, n and val:");
    scanf("%d%d%d", &num, &n, &val);
    
    res = replace_nbits(num, n, val);
    
    printf("Result = %d\n", res);
}

int replace_nbits(int num, int n, int val){
	int mask = (1<<n)-1;
	int res = (num & (~(mask))) | (val & mask);
	return res;
}

