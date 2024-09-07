/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<stdio.h>
#if 0
int *func(void){
	static int a=10;
	return &a;
}

int main()
{
	int *p;
	p=func();
	printf("Hello\n");
	printf("*p = %d\n",*p);
	return 0;
}
#endif

#if 1
int *func(void){
	int a=10;
	int *p = &a;
	printf("p : %p  \n", p); 
	printf("&a : %p  \n", &a); 
	printf("*p: %d  \n", *p); 
	return p;
}

int main()
{
	int *p;
	p=func();
	printf("Hello\n");
	printf("p = %p\n",p);
	printf("*p = %d\n",*p);
	return 0;
}
#endif
