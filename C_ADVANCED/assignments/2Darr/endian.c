/*
Name: Shreya Srinivas
Date: 30-06-2023
Description: WAP to convert Little Endian data to Big Endian
Sample execution:
Test Case 1:
user@emertxe] ./endianness
Enter the size: 2
Enter any number in Hexadecimal: ABCD
After conversion CDAB
Test Case 2:
Enter the size: 4
Enter any number in Hexadecimal: 12345678
After conversion 78563412
 */

#include<stdio.h>

int convert ( int num, int size )    //Collecting num and size 
{
	char *ptr = (char *)&num;     //storing addr of num in ptr
	for(int i = 0, j = size-1 ; i < size / 2 ; i ++)
	{   //swapping bits, for 2 bytes swap ptr[0]&ptr[1]
		//4 bytes: swapping ptr[0] & ptr[3] ,ptr[1] & ptr[2]
		char temp = ptr[i]; 
		ptr[i] = ptr[j];
    	ptr[j--] = temp;	
	}
	return num; 
}

int main()
{
	int size;
	printf("Enter the size: ");
	scanf("%d",&size);          //Reading size from user 2/4 bytes

	printf("Enter any number in Hexadecimal: ");
	if( size == 2 )
	{
		unsigned short num;     //If size = 2, declare a short num
		scanf("%hx",&num);      //Reading 2 bytes and storing in num
		num = convert(num,size); //Function to alter data
		printf("After conversion %hx\n",num);

	}
	else if( size == 4 ) 
	{
		unsigned int num;      
		scanf("%x",&num);       //Reading 4 bytes and storing in num
		num = convert(num,size);
		printf("After conversion %x\n",num);
	}
}


