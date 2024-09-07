/*
Name: Shreya Srinivas
Date: 23-05-2023
Description: WAP to implement Circular left shift
Sample Input:
Enter num: 12
Enter n : 3
Sample Output:
Result in Binary: 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 0 0 0 0 0
*/

#include <stdio.h>

int circular_left(int, int);
int print_bits(int);

int main()
{
    int num, n, ret;
    
    printf("Enter the num:");
    scanf("%d", &num);
    
    printf("Enter n:");
    scanf("%d", &n);
    
    //printf("Num: ");
    //print_bits(num);
    ret = circular_left(num, n);
    
    //printf("Result: ");
    print_bits(ret);
}


int circular_left(int num, int n)  // Function for circular left shifting
{ // Logic to circular shift
	int residue = ( ((((1<<n) - 1) << (32 - n)) & num) >> (32-n)) & ((1<<n)-1) ; 
    //printf("Residue: ");
    //print_bits(residue);

	num = num << n ;

	return (num | residue) ;
}

//Function to print bits
int print_bits(int num){
	int count=0;
	printf("Result in Binary:");
	for ( int i = 31 ; i >= 0 ; i-- ){
	   if ( num & ( 1 << i ) )
	   {
		   count+=1;
		   printf("1");
	   }
	   else
	   {
		   printf("0");
	   }
	}
	printf("\n");
}







