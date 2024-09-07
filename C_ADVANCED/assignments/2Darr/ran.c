/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<stdio.h>

int main()
{
	int *nPtr[3];
	
	int arr1[3] = {1,2,3};
	int arr2[3] = {4,5,6};
	int arr3[3] = {7,8,9};

	nPtr[0] = arr1;
	nPtr[1] = arr2;
	nPtr[2] = arr3;

	printf("%d\n",**nPtr);  //1 
	printf("%d\n",*nPtr[0]); //1
	printf("%d\n",*nPtr[1]); //4
	printf("%d\n",*nPtr[2]); //7
	printf("%d\n",nPtr[0][0]); //1
	printf("%d\n",nPtr[0][1]); //2 
	printf("%d\n",nPtr[0][2]); //3
	printf("%d\n",nPtr[1][0]); //4
	printf("%d\n",nPtr[1][1]);
	printf("%d\n",nPtr[1][2]);
	printf("%d\n",nPtr[2][0]);
	printf("%d\n",nPtr[2][1]);
	printf("%d\n",nPtr[2][2]); //9

}


