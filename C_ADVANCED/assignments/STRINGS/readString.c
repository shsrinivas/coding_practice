/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];           //Coorect way
	//char *str;             //Cannot do like this
	//scanf("%s",str);
	//printf("%s\n",str);

	//scanf("%[^\n]",str);
	scanf("%5[^\n]",str);    //will only read 5 bytes
	//printf("%s\n",str);

	//gets(str);            //Dangerous cuz it will try to read all bytes even if you have only 10 bytes , and string is 11 bytes, it will lead to seg fault if you read illegal addr 
	//puts(str);

	//fgets(str,10,stdin);   // will only read till 10 bytes from stdin
	puts(str);

}


