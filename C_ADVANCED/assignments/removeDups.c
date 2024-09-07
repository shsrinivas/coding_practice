/*
Name: Shreya Srinivas
Date: 29-05-2023
Description: WAP to remove duplicate elements in a given array
Sample Input:
Enter the size: 5
Enter elements into the array: 5 1 3 1 5
Sample Output:
After removing duplicates: 5 1 3
*/

#include <stdio.h>

int fun(int arr1[], int size, int dup_arr[], int *new_size){
	dup_arr[0]=arr1[0];      //assigning the first element of duplicate array with the first element of array
	*new_size = 1;           //updating new size to 1 

	for ( int i = 1 ; i < size ; i ++ )   //To fetch the array elements
	{
	   int dup = 0;                       //Setting flag to 0 
	   for ( int j = 0 ; j < *new_size ; j ++ )    // loop to compare arr and dup_arr elements
	   {
		   if ( arr1[i] == dup_arr[j] )            //If duplicate is found , set flag to 1 and break out of inner loop
		   {
			   dup  = 1;
			   break;
		   }
	   }
	   if ( !dup )                                //Will update dup_array element with new value and increment size if no duplicate is found else iterste to next loop
	   {
	       dup_arr[*new_size] =arr1[i];
		   *new_size+=1;
	   }
	}
	return *new_size;    // Returning new size 
}

int main()
{
	int size,new_size=0;
	printf("Enter the size: ");    
	scanf("%d",&size);
	int arr1[size],arr2[size];

	printf("Enter elements into the array: ");
	for ( int i = 0 ; i < size ; i ++ ){
		scanf("%d",&arr1[i]);
	}

	new_size = fun(arr1,size,arr2,&new_size);   // collecting the new_size

    printf("After removing duplicates: ");	
	for ( int i = 0 ; i < new_size ; i ++ ){    //printing the elements of duplicate array
		printf("%d ",arr2[i]);
	}
	printf("\n");
}

