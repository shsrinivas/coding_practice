/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/
#include <stdio.h>

int main()
{
    static int num;
    static unsigned long long int fact = 1;

    num = 5;

    if (num > 0)
    {
        fact = fact * num;
        num--;
        main();
    }
    else
    {
        printf("Factorial: %lld\n", fact);
    }

    return 0;
}

