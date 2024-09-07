/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<stdio.h>
void modify(int *n1, int *n2)
{
	*n1+=1;
	*n2+=10;
}	

int main()
{
	int n1 =10, n2 = 20;
	printf("%d %d \n", n1, n2);
	modify(&n1,&n2);
	printf("%d %d \n", n1, n2);
	return 0;
}


