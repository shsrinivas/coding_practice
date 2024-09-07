/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/
#include<stdio.h>
int sec_largest(int arr[], int size) {
	int L = arr[0];
	int sL = arr[0];
	int tL = arr[0];

	for (int i=0; i<size ; i ++)
	{
		if(arr[i] > L)
		{
			L = arr[i];
		}
	}
	printf("Lar : %d\n",L);
	for (int i=0; i<size ; i ++)
	{
		if (sL == L)
		{
			sL = arr[i];
		}
		else if(arr[i] > sL && arr[i] < L)
		{
			sL = arr[i];
		}
	}
	printf("Sec Lar : %d\n",sL);
	

	for (int i=1; i<size ; i ++)
	{
		if (tL > sL)
		{
			tL = arr[i];
		}
	}
	for (int i=1; i<size ; i ++)
	{
		if (tL == sL)
		{
			tL = arr[i];
		}
		else
		{	
			if(arr[i] > tL && arr[i] < sL)
			{
				tL = arr[i];
			}
		}
	}	
	return tL;
}


int main() {
    int size, ret;

    // Read size from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Read elements into the array
    printf("Enter the elements into the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Function call to find the second largest element
    ret = sec_largest(arr, size);

    printf("Third largest element of the array is %d\n", ret);

    return 0;
}

