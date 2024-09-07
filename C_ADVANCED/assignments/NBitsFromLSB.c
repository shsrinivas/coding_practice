/*
Name: Shreya Srinivas
Date: 18-05-2023
Description: WAP to print 'n' bits from LSB of a number
Sample Input:
Enter the number: 15
Enter number of bits: 4
Sample Output:
Binary form of 15: 1 1 1 1
*/

#include <stdio.h>

int print_bits(int, int);   // Function declaration

int main()
{
    int num, n;
    
    printf("Enter num, n :\n");
    scanf("%d%d", &num, &n);  // Reading num and num of bits to display from user
    
    printf("Binary form of %d:", num);
    print_bits(num, n);       // calling function to print n bits from LSB of a number
 }


int print_bits(int num, int n){
	for( int i = n-1 ; i >= 0 ; i-- ){   //Looping from n to 0bits
		if( num & (1 << i ))     //If num AND mask == 1 print 1 else 0 , left shifting the mask in every iter  
			printf("1 ");
		else
			printf("0 ");
	}
	printf("\n");
}
