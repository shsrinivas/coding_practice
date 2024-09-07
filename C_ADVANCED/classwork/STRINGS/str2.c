/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<stdio.h>

int main()
{
	char s1[]="Hello";
	char s2[6];

	//s2 = "Hey";  //Error:Array name is the base address, Hey also has an addr , you cannot change the base address
	s2[0]='H';

	char *s3="Hey";
	char *s4;
	
	//s3[0]='Z'; //Segmentation fault : you cannot directly change in code segment, since s3 is pointing to CS  

	printf("s1 = %s\n",s1);
	printf("s2 = %s\n",s2);
	printf("s3 = %s\n",s3);
	printf("s4 = %s\n",s4);
}


