/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<stdio.h>
#include<string.h>
#if 0
int main()
{
	char *str = "Hi";  // Base address of Hi is stored in str	
	char str_arr[] = "Hello";

	printf("%s\n", str);  // %s will read untill it encounters NULL
	printf("%s\n", str_arr);
}

#endif

#if 1

int main()
{
	//Constant string
	char *str1 = "Hey";
	//str1[0] = 'p';  -> Will throw error you cannot access inside code segment
	char str2[] = "Hello";
	str2[0] = 'F';
	printf("sizeof str1: %zu\n", sizeof(str1));  // 8 (sizeof pointer = 8bytes)
	printf("sizeof str2: %zu\n", sizeof(str2));  // 6  (includes NULL)
	printf("sizeof str1: %d\n", strlen(str1));  // 3 -> correct value (excludes NULL)
	printf("sizeof str2: %d\n", strlen(str2));  // 5 -> correct value (excludes NULL)
	printf("%s\n",str1);
	printf("%s\n",str2);
}
#endif

