#include "main.h"

int Infix_Prefix_conversion(char *Prefix_exp, char *Infix_exp, Stack_t *stk)
{
    int i, j = 0;
    for (i = strlen(Infix_exp) - 1; i >= 0; --i)
    {
        if (isalnum(Infix_exp[i]))
        {
            Prefix_exp[j++] = Infix_exp[i];
        }
        else if (Infix_exp[i] == ')')
        {
            push(stk, Infix_exp[i]);
        }
        else if (Infix_exp[i] == '(')
        {
            while (peek(stk) != ')' && peek(stk) != -1)
            {
                Prefix_exp[j++] = peek(stk);
                pop(stk);
            }
            pop(stk); // Remove the ')' from the stack
        }
        else
        {
            while (priority(Infix_exp[i]) < priority(peek(stk)) && peek(stk) != -1 && peek(stk) != ')')
            {
                Prefix_exp[j++] = peek(stk);
                pop(stk);
            }
            push(stk, Infix_exp[i]);
        }
    }
    while (peek(stk) != -1)
    {
        Prefix_exp[j++] = peek(stk);
        pop(stk);
    }
    Prefix_exp[j] = '\0';
    strrev(Prefix_exp);
    return 0;
}
