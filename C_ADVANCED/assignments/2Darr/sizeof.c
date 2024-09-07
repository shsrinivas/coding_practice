/*
Name: Shreya Srinivas
Date: 17-07-2023
Description: WAP to define a macro SIZEOF(x), without using sizeof operator
Sample Exe :
user@emertxe] ./sizeof
Size of int : 4 bytes
Size of char : 1 byte
Size of float : 4 bytes
Size of double : 8 bytes
Size of unsigned int : 4 bytes
Size of long int : 8 bytes
*/

#include<stdio.h>
//Macro to find sizeof datatype
//Macro is a variable which gets substituted during pre-processing stage
/*
if add of num = 100
1000 + 1 => 1000 + 1(4) 
to get 4,
we need to sub 1000 again
1000 + 1(4:done by compiler) - 1000 = 4
but during sub , compiler will div by sizeof(datatype)
to avpid that we will be type casting it to char *
*/
#define SIZEOF(x) (char*)(&x + 1) - (char *)&x
int main()
{
	int num;
	char ch;
	float f;
	double d;
	unsigned int USint;
	long int lint;
	printf("Size of int : %zu\n",SIZEOF(num));
	printf("Size of char : %zu\n",SIZEOF(ch));
	printf("Size of float : %zu\n",SIZEOF(f));
	printf("Size of double : %zu\n",SIZEOF(d));
	printf("Size of unsigned int : %zu\n",SIZEOF(USint));
	printf("Size of long int : %zu\n",SIZEOF(lint));

}


