/*
Name: Shreya Srinivas
Date: 17-07-2023
Description: WAP to define a macro swap (t, x, y) that swaps 2 arguments of type t
Sample Exe:
Test Case 1:
user@emertxe] ./swap
1. Int
2. char
3. short
4. float
5. double
6. string
Enter you choice : 1

Enter the num1 : 10
Enter the num2 : 20
After Swapping :
num1 : 20
num2 : 10
 */

#include<stdio.h>
#include<stdlib.h>

#define SWAP(datatype, a, b)	\
{								\
	datatype temp = a;			\
	a = b;						\
	b = temp;					\
}

int main()
{
	int choice;
	printf("1. Int\n2. char\n3. short\n4. float\n5. double\n6. string\n");
	printf("Enter you choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			int n1, n2;
			printf("Enter the num1:");
			scanf("%d",&n1);
			printf("Enter the num2:");
			scanf("%d",&n2);
			//SWAP macro for int
			SWAP(int, n1, n2);
			printf("After Swapping:\n");
			printf("num1: %d\nnum2: %d\n",n1,n2);
			break; 
		case 2:
			char c1, c2;
			printf("Enter the char1:");
			scanf(" %c",&c1);
			printf("Enter the char2:");
			scanf(" %c",&c2);
			//SWAP macro for char
			SWAP(char, c1, c2);
			printf("After Swapping:\n");
			printf("char1: %c\nchar2: %c\n",c1,c2);
			break;
		case 3:
			short s1, s2;
			printf("Enter the short1:");
			scanf("%hd",&s1);
			printf("Enter the short2:");
			scanf("%hd",&s2);
			//SWAP macro for short
			SWAP(short, s1, s2);
			printf("After Swapping:\n");
			printf("short1: %hd\nshort2: %hd\n",s1,s2);
			break;
		case 4:
			float f1, f2;
			printf("Enter the float1:");
			scanf("%f",&f1);
			printf("Enter the float2:");
			scanf("%f",&f2);
			//SWAP macro for float
			SWAP(float, f1, f2);
			printf("After Swapping:\n");
			printf("float1: %f\nfloat2: %f\n",f1,f2);
			break;
		case 5:
			double d1, d2;
			printf("Enter the double1:");
			scanf("%lf",&d1);
			printf("Enter the double2:");
			scanf("%lf",&d2);
			//SWAP macro for double
			SWAP(double, d1, d2);
			printf("After Swapping:\n");
			printf("double1: %lf\ndouble2: %lf\n",d1,d2);
			break;
		case 6:
			char *str1;
			char *str2;
			str1 = (char *)malloc(100 * sizeof(char));
			str2 = (char *)malloc(100 * sizeof(char));
			printf("Enter the string1:");
			scanf("%s",str1);
			printf("Enter the string2:");
			scanf("%s",str2);
			//SWAP macro for string
			SWAP(char *, str1, str2);
			printf("After Swapping:\n");
			printf("string1: %s\nstring2: %s\n",str1,str2);
			break;
	}

}


