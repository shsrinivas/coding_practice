/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<stdio.h>

static void f1()
{
	int a=5;
	a++;
	printf("%d",a);
}

int main(){
	int a=20;
	f1();
	f1();
	f1();
	printf("%d",a);
}

