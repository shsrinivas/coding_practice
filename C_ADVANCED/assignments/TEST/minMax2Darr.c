/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<stdio.h>
#if 0
int main()
{
	//int arr[2][3] = {{10,20,30},{11,22,33}};
	
	//min = arr[0][0];
	//1D array
	int arr[3] = {3,2,1};
	int min = arr[0];

	for( int i = 0 ; i < 3 ; i++)
	{
		if(arr[i] < min)
			min = arr[i];
	}
	printf(" min :%d\n",min);

}

#endif

int main()
{
	int row = 2; 
	int col = 3;
	int arr[2][3] = {{10,20,30},{11,22,33}};
	
	int min = arr[0][0];

	for ( int i = 0 ; i < row ; i++ )
	{
		for ( int j = 0 ; j < col ; j++ )
		{
			if ( arr[i][j] < min )
				min = arr[i][j];
		}
	}
	printf(" min :%d\n",min);
}
