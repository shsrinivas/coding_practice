/*
Name: Shreya Srinivas
Date: 07-05-2023
Description: WAP to check N th bit is set or not, If yes, clear the M th bit 
Sample Input: 
Enter the number: 19
Enter 'N': 1
Enter 'M': 4
Sample Output: Updated value of num is 3
*/

#include<stdio.h>

int main()
{
	int n,m,num,flag=0,updated_num;
	printf("Enter the number: ");
	scanf("%d",&num);  //reading num, n, m from user.
	printf("Enter 'N': ");
	scanf("%d",&n);    
	printf("Enter 'M': ");
	scanf("%d",&m);
	
	if( num & ( 1 << n ) )   //to check it nth bit is set or not
	{
		flag=1;    // setting the flag from 0 to 1
	}

	if ( flag )
	{
		//flag = 1 Nth bit is set
		updated_num = (num & (~(1<<m)));  // to clear bit num & ~(mask) 
		printf("Updated value of num is %d\n",updated_num);
	}
	else
	{
		//If nth Nth bit is not set no need to update the number
		printf("Updated value of num is %d\n",num);
	}
}


