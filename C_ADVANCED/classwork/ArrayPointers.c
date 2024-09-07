/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<stdio.h>
#if 0
//inside main 
int main()
{
	int i,arr[5];//={10,20,30,40,50};

	for( i = 0 ; i < 5 ; i++ ){
	   scanf("%d",&arr[i]);
	}	   
	for( i = 0 ; i < 5 ; i++ ){
	   printf("%d\n",arr[i]);
	}	   
}
#endif

#if 0
//Pssing array as argument

void print_array(int *a);
int main(){
	int a[3]={10,20,30};
	print_array(a);
	return 0;
}

void print_array(int *a){
	for ( int i = 0 ; i < 3 ; i++ ){
		printf("%d\n",*a);
		a++;
	}
}
#endif
#if 0
//Pssing array as argument
//using airthemetic pointers
void print_array(int *a);
int main(){
	int a[3]={10,20,30};
	print_array(a);
	return 0;
}

void print_array(int *a){
	for ( int i = 0 ; i < 3 ; i++ ){
		printf("%d\n",*(a+i));
		//a++;
	}
}
#endif
#if 0
//Pssing array as argument
//
void print_array(int *a);
void scan_array(int *a);
int main(){
	int a[3];//={10,20,30};
	scan_array(a);
	print_array(a);
	return 0;
}

void scan_array(int *a){
	for ( int i = 0 ; i < 3 ; i++){
		scanf("%d",&a[i]);
	}
}

void print_array(int *a){
	for ( int i = 0 ; i < 3 ; i++ ){
		printf("%d\n",a[i]);
	}
}
#endif
#if 0
//Pssing array as argument
// &a[i] ==  (a+i)    in scanf
// a[i]  == *(a+i)    in printf   
void print_array(int *a);
void scan_array(int *a);
int main(){
	int a[3];//={10,20,30};
	scan_array(a);
	print_array(a);
	return 0;
}

void scan_array(int *a){
	for ( int i = 0 ; i < 3 ; i++){
		scanf("%d",(a+i));
	}
}

void print_array(int *a){
	for ( int i = 0 ; i < 3 ; i++ ){
		printf("%d\n",*(a+i));
	}
}
#endif
#if 0
//YOU CANNOT CHNAGE BASE ADDR OF ARRAY DIRECTLY
int main(){
	int a[3]={10,20,30};
	for ( int i = 0; i < 3 ; i ++ ){
		printf("%d\n",a[i]);
		a++;       // Changing base address is not allowed
	}
	return 0;
}
#endif
#if 1
//SOLUTION FOR ABOVE PROBLEM
int main(){
	int a[3]={10,20,30};
	int *ptr = a;
	for ( int i = 0; i < 3 ; i ++ ){
		printf("%d\n",*ptr);
		ptr++;
	}
	return 0;
}
#endif
