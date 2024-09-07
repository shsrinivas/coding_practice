/*
Name: Shreya Srinivas
Date: 20-06-2023
Description: WAP to implement itoa function
Sample Input: Enter the number : 1234
Sample Output: Integer to string is 1234
 */
#include <stdio.h>
void reverse_str(char str[]);

int itoa(int num, char str[])
{
	int i=0,neg;
	//printf("num : %d\n",num);

	if(num == 0)        //In case of invalid stings like ab12 , %d will read it as 0
	{
		str[0]='0';
		str[1]='\0';
	}
	else
	{
		if(num < 0)       //if num is neg
		{
			num = -(num);
			neg = 1 ;    //setting flag as 1 if num if neg
		}
		while(num)       //collecting num one by one and storing it in string
		{
			int x = (num % 10) + 48 ;	
			str[i++] = x;
			num = num / 10 ;
		}
		if(neg)         //if num is neg append - at the end of str
		{
			str[i++] = '-';
			str[i] = '\0';
		}
		str[i] = '\0';  //adding NULL to terminate string
		reverse_str(str);   //reversing the string and digits are extracted in rev way
	}
}

int main()
{
	int num;
	char str[10];

	printf("Enter the number:");
	scanf("%d", &num);

	itoa(num, str);
	printf("Integer to string is %s\n", str);
}


void reverse_str(char str[])
{
	int i,j,len;

	for ( i = 0 ; str[i] != '\0' ; i++ )
	{      
		len++;
	}
	char rev[ len + 1 ];
	rev[ len + 1 ] = '\0';
	for ( j = 0, i = len-1 ; j <= len ; i -- )
	{
		rev[j++] = str[i];
	}
	for ( i = 0 ; rev[i] != '\0' ; i ++ )
	{
		str[i] = rev[i];
	}
}


