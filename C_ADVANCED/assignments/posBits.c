/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include <stdio.h>

int get_nbits_from_pos(int, int, int);
int get_nbits_from_pos1(int num, int n, int pos);
int getCount(int);

int main()
{
    int count,num, n, pos, res = 0;
    
    printf("Enter num, n and val:");
    scanf("%d%d%d", &num, &n, &pos);
    res = get_nbits_from_pos1(num, n, pos);
	printf("Result=%d\n",res);
    
}

int get_nbits_from_pos(int num, int n, int pos){
	int mask = (1<<n)-1;
	int count=getCount(mask);
	int N_Shift = (pos+1)-count;
	int Number=num&(mask<<N_Shift);
	//printf("Number1=%d\n",Number);
	Number=Number>>((pos+1)-n);
	//printf("Number2=%d\n",Number);
	return Number;
}

int get_nbits_from_pos1(int num, int n, int pos){
	int mask = (1<<n)-1;
	int count=getCount(mask);
	return ((num&(mask<<((pos+1)-count)))>>((pos+1)-n));
}
int getCount(int num){
	int count = 0;
	for (int i=0;i<32;i++){
		if(num&1){
			count+=1;
		}
		num>>=1;
	}
	return count;
}
