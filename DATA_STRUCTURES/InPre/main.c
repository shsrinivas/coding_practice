#include "main.h"

void strrev(char *string)
{
    int length = strlen(string);
    int i, j;
    char temp;
    for (i = 0, j = length - 1; i < j; ++i, --j)
    {
        temp = string[i];
        string[i] = string[j];
        string[j] = temp;
    }
}

int main()
{
    char Infix_exp[50], Prefix_exp[50];
    int result;
    Stack_t stk;
    stk.top = -1;

    printf("Enter the Infix expression : ");
    scanf("%[^\n]", Infix_exp); // Read the entire line including spaces

    Infix_Prefix_conversion(Prefix_exp, Infix_exp, &stk);
    printf("PreFix expression : %s\n", Prefix_exp);

    stk.top = -1;

    result = Prefix_Eval(Prefix_exp, &stk);
    printf("\nResult : %d\n", result);
    return 0;
}
