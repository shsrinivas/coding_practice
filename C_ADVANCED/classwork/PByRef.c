/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/
#include<stdio.h>
#if 0
#include<stdio.h>

void modify(int *p1,int *p2);
int main()
{
	int n1=10,n2=20;
	printf("Before modify: %d %d\n",n1,n2);
	modify(&n1,&n2);
	printf("After modify: %d %d\n",n1,n2);
}

void modify(int *p1,int *p2)
{
	*p1=*p1+1;
	*p2=*p2+1;
}
#endif

#if 0
//Square of a number

void square(int *p1);

int main(){
	int n1=10,sqr;
	printf("%d\n",n1);
	square(&n1);

	printf("%d\n",n1);
}

void square(int *p1){
	*p1=*p1 * *p1;
}

#endif

#if 0

//Square and cube of a number
void sqrAndCube(int *n1,int *sqr,int *cube);
int main(){
	int n1=2,sqr,cube;
	
	sqrAndCube(&n1,&sqr,&cube);
	printf("Square: %d, Cube: %d\n",sqr,cube);
}

void sqrAndCube(int *n1,int *sqr,int *cube){
	*sqr=*n1 * *n1;
	*cube=*n1 * *n1 * *n1;
}


#endif


#if 0
//Swap 2 numbers
void swap(int *p1, int *p2);
int main(){
	int n1=10,n2=20;
	printf("Before swapping : n1 = %d, n2 = %d\n",n1,n2);
	swap(&n1,&n2);
	printf("After swapping : n1 = %d, n2 = %d\n",n1,n2);
}

void swap(int *p1, int *p2){
	int temp;
	temp = *p1;	
	*p1 = *p2;
	*p2 = temp;
}

#endif

#if 1
//Sum and product of 2 numbers
void sumAndProd(int *n1,int *n2,int *sum,int *prod);
int main(){
	int n1=10,n2=20,sum,prod;
	printf("N1=%d, N2=%d\n",n1,n2);
	sumAndProd(&n1,&n2,&sum,&prod);
	printf("Sum is %d, Prod is %d\n",sum,prod);
}

void sumAndProd(int *n1,int *n2,int *sum,int *prod){
	*sum = *n1 + *n2;
	*prod = *n1 * *n2;
}
#endif


