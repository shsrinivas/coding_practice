#include<stdio.h>

int main()
{
#if 0
	//NIBBLE SWAP
	char n1 = 0x32;
	char nibble_swap = ((n1 & 0x0F) << 4) | ((n1 & 0xF0) >> 4);

	printf("%#x\n",n1);	
	printf("%#x\n",nibble_swap);	

#endif

#if 1
	unsigned char n1 = 10;
	unsigned char n2 = 6;

	char OR = n1 | n2;
	char AND = n1 & n2;
	char XOR = n1 ^ n2;
	char NOT = ~n1;
	char LeftShift = n1 >> 4;
	char RightShift = n1 << 4;

	printf("n1 : %#x\n", n1);
	printf("n2 : %#x\n", n2);
	printf("OR : %#x\n",OR);
	printf("AND : %#x\n",AND);
	printf("XOR : %#x\n",XOR);
	printf("NOT : %#x\n",NOT);
	printf("Left shift : %#x\n",LeftShift);
	printf("Right shift : %#x\n",RightShift);
	printf("div 2 : %#x\n",n1/2);
	printf("mul 2 : %#x\n",n1 * 2);


#endif
}


