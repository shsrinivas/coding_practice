/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<stdio.h>

void func(void){
	static int a=0;
	a++;
	printf("a=%d\n",a);
}

int main()
{
	func();
	func();
	func();
}


