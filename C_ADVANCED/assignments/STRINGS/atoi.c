/*
Name: Shreya Srinivas
Date: 19-06-2023
Description: WAP to implement atoi function
Sample Input: Enter a numeric string: 12345
Sample Output: String to integer is 12345
 */

#include<stdio.h>

int my_atoi(char *str)
{
	int num,neg=0;
	for ( int i = 0 ; str[i] !='\0' ; i ++ )
	{
		if ( i == 0 )                    //Checking the first char
		{	
			if( str[i] == '+')           //checking if first char is + and skipping to the next iteration
			{
				continue;
			}
			else if ( str[i] == '-' )    //checking if first char is -, if so setting the flag=1
			{
				neg = 1;
				continue;
			}
			else if( str[i] < 48 || str[i] > 57 )  //if it is other than +/-/num return 0 in that case
			{ 
				return 0;                           
			}
		}
		if( str[i] >= 48 && str[i] <= 57 )          // Calculating num , converting each char to int
			num = (num * 10) + (str[i] - 48) ;      // logic to find num , n*10+n   
		else
			if( str[i] < 48 || str[i] > 57 )        //if char is not num break   
				break;
			else
				continue;                          
	}
	if (neg)                       //if neg is set to 1 , return neg value of num else num as it is
		return -(num);
	else
		return num;
}
int main()
{
	char str[100];

	printf("Enter a numeric string: ");
	scanf("%s",str);

	int num = my_atoi(str);   //calling my_atoi function and collecting it in num
	printf("String to integer is %d\n",num);
	return 0;
}


