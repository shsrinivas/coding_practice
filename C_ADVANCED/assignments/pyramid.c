/*
Name: Shreya Srinivas
Date: 26-04-2023
Description: WAP to print pyramid pattern as shown below
Sample Input: If n = 5, then
Sample Output:
5
4 5
3 4 5
2 3 4 5
1 2 3 4 5
2 3 4 5
3 4 5
4 5
5
*/

#include <stdio.h>

int main() {
    int i, j, num;
	printf("Enter the number:");
	scanf("%d",&num);
    for (i = num; i >= 1; i--) {    //starting from num entered by user, if num=5, 5>=1;; num=4 4<=1 untill 1<=1 and comes out of loop
        for (j = i; j <= num; j++) {  //j=5, 5<=5 true, 5++=6 , 6 is not <=5 so comes out of loop ;;j=4 4<=4 5<=5 comes out of loop and soo on
            printf("%d ", j);
        }
        printf("\n");
    }

    for (i = 2; i <= num; i++) {  // this loop will be in inc fashion staring the secong triangle with 2 . 2,3,4,5
        for (j = i; j <= num; j++) {  //2 3 4 5, 3 4 5, 4 5, 5
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}


