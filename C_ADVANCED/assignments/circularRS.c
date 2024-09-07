/*
Name: Shreya Srinivas
Date: 19-05-2023
Description: WAP to implement Circular right shift
Sample Input:
Enter num: 12
Enter n : 3
Sample Output: 
Result : 10000000 00000000 00000000 00000001
*/

#include <stdio.h>

int circular_right(int, int); 
int print_bits(int);

int main()
{
    int num, n, ret;
    
    printf("Enter the num:");
    scanf("%d", &num);
    
    printf("Enter n:");
    scanf("%d", &n);
    
	printf("Number: ");
    print_bits(num);
    ret = circular_right(num, n);
    
	printf("Return: ");
    print_bits(ret);
}

//Function to cicircular right shift
/*
int circular_right(int num, int n)
{
	//Logic to circular right shift
	//here, (1<<n)-1 will help create mask with n ones from LSB
	// num & mask and left shift it to pos = (32-n) times before actually right shifting to collect bits lost which happen due to right shifting
	int residue = (num & ((1<<n)-1)) << (32-n);
	printf("Residue: ");
    print_bits(residue);
	//Right shifting num n times
	num = num >> n ;  
	int clear_bits =~( (((1<<n)-1) << (32-n)) & num);
	return clear_bits | num ;
}
*/

int circular_right(int num, int n)
{
	int sMask = (num & ((1<<n)-1)) << (32 - n);
	return ( (num >> n) & ~(((1<<n)-1) << (32 - n)) ) | sMask ;
}

int print_bits(int num){
	int count=0;
	//printf("Result : ");
	for ( int i = 31 ; i>= 0 ; i-- ){
		if ( num & ( 1 << i ) )
		{
			count += 1;
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
	printf("\n");
}


