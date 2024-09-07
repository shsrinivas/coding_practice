/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#if 1
#endif

#include<stdio.h>
#if 0
int main()
{
	int x=20;
	int *p1 = &x;
	int **p2 = &p1;
	int ***p3 = &p2;

	printf("%d\n",*p1);
	printf("%d\n",**p2);
	printf("%d\n",***p3);

}

#endif

#if 0
int main()
{
	int a[5] = {1, 2, 3, 4, 5};
	printf("%ld\n",sizeof(a));  //20

	printf("%p\n",a);        //100
	printf("%p\n",&a);		 //100
	printf("%p\n",a+1);		 //104
	printf("%p\n",&a+1);	 //120
	printf("%p\n",&a[0]+1);  //104
}
#endif
