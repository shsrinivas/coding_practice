#include<stdio.h>

int main()
{
	double x = 7.2;
	void *vptr = &x;

	printf("%hx\n",*(short *)(vptr+2));
}


