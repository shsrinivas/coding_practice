/*
Name: Shreya Srinivas
Date: 23-05-2023
Description: WAP to put the (b-a+1) lsb’s of num into val[b:a]
Sample Input:
Enter the value of 'num' : 11
Enter the value of 'a' : 3
Enter the value of 'b' : 5
Enter the value of 'val': 174
Sample Output:
Result : 158
*/

#include <stdio.h>

int replace_nbits_from_pos(int, int, int, int);

int main()
{
    int num, a, b, val, res = 0;
    
    printf("Enter num, a, b, and val:");
    scanf("%d%d%d%d", &num, &a, &b, &val);
    
    res = replace_nbits_from_pos(num, a, b, val);
    
    printf("Result = %d\n", res);
}

int replace_nbits_from_pos(int num, int a, int b, int val){
	int n = b - a + 1;     // Calculating n
	num = (num & ((1<<n)-1)) << ((b+1)-n);
	int clearMask = ~( ((1<<n)-1) << ((b+1)-n) ) ;
	return ((val&clearMask)|num); 
}
