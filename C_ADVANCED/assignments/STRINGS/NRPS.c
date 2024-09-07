/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
 */

#include <stdio.h>

void swap(char *arr);
void nrps(char *arr, int c, int n)
{
	int count=0;

	while( count < n )
	{
		for (int i = 0; i < c ; i++)
		{
			if(count >= n)
				break;
			printf("%c", arr[i]);
			count++;
		}
		swap(arr);
	}
}

int main()
{
	int c,n;
	//read the input from the user
	printf("Enter the number characters C : ");
	scanf(" %d", &c);

	printf("Enter the Length of the string N :");
	scanf(" %d", &n);

	char arr[c];

	printf("Enter 3 distinct characters :");
	for (int i = 0; i < c ; i++){
		scanf(" %c", &arr[i]);
	}
	nrps(arr,c,n);

	//function call to pass input to the function

}


void swap(char *arr)
{
	char temp = arr[0];
	arr[0] = arr[1];
	arr[1] = temp;
}
