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

#if 1
int main()
{
	int a[2][3] = {{10,20,30},{11,22,33}};

	printf("%p\n",*a);       //1st row's elements's addr = 100
	printf("%p\n",a);		 //addr of 1st row = 100
	printf("%p\n",&a);		 //Whole 2D arr addr = 100

	printf("\n");

	printf("%p\n",*a+1);     //100 + 1(4) = 104
	printf("%p\n",a+1);		 //100 + 1(12) = 112
	printf("%p\n",&a+1);     //100 + 1(24) = 124

	printf("\n");

	printf("%d\n",**a);              //*a = 100, *100 = 10
	printf("%d\n",*( *a + 0 ));		 // *(100 + 0(4) ) = 10
	printf("%d\n",*( *a + 1 ));		 // *(100 + 1(4) ) = 20
	printf("%d\n",*( *a + 2 ));		 // *(100 + 2(4) ) = 30

	printf("\n");

	printf("%d\n",*(*(a+0)+0));		 //**100 = 10                   = a[0][0] = 10
	printf("%d\n",*(*(a+0)+1));		 //*(*(100)+1(4)) = *(104) = 20 = a[0][1] = 20
	printf("%d\n",*(*(a+0)+2));		 //*(*(100)+2(4)) = *(108) = 30 = a[0][2] = 30

	printf("\n");

	printf("%d\n",*(*(a+1)+0));		 //*(*(100+1(12=sizeof row)))+0(4) = *(*112+0) = *(112+0)  *112 = a[1][0]
	printf("%d\n",*(*(a+1)+1));		 //*(*(112)+1(4)) = *(112+4) = *116 = 22 = a[1][1]
	printf("%d\n",*(*(a+1)+2));		 //*(*(112)+2(4)) = *(112+8) = *120 = 33 = a[1][2]
	
	printf("\n");

	printf("%d\n",a[0][0]);          //10 
	printf("%d\n",a[0][1]);			 //20
	printf("%d\n",a[0][2]); 		 //30

	printf("\n");

	printf("%p\n",&a[0][0]);          //100 
	printf("%p\n",&a[0][1]);          //104 
	printf("%p\n",&a[0][2]);          //108 

	printf("\n");

	printf("%p\n",&a[1][0]);          //112 
	printf("%p\n",&a[1][1]);          //116 
	printf("%p\n",&a[1][2]);          //120 
}

#endif

