/* SUMMARY
1. 
	for (i=0;i<10;i++)  // 0 to 9
2.
	for (;i<10;) //var is initialised outside , and inc is done inside for loop
3.
	for (;;)   //condition by default is considered as TRUE  
4.
	for (i=0;i<10;i++);  //for loop is running from 0 to 9 times and terminating 

*/

#include<stdio.h>
#if 1
int main()  //normal for loop
{
	int i = 0;

	for (i=0;i<10;i++)  // 0 to 9
	{
		printf("i=%d\n",i);
	}
}
#endif

#if 0
int main()
{
	int i = 0;  //works fine : 0 to 9

	for (;i<10;) //var is initialised outside , and inc is done inside for loop
	{
		printf("i=%d\n",i++);  
	}
}
#endif


#if 0
int main()
{
	int i = 0;

	for (;;)   //condition by default is considered as TRUE  
    //condition is not given but initialisation and inc is there ouside for loop
	{
		printf("i=%d\n",i++);   // prints 0 to infinity
	}
}

#endif

#if 0
int main()
{
	int i;
    //semicolon after for loop
	for (i=0;i<10;i++);  //for loop is running from 0 to 9 times and terminating 
	//after for loop i = 10
	{
		printf("i=%d\n",i);   // prints i=10 only
	}
}
#endif

