#include "main.h"

int Prefix_Eval(char *Prefix_exp, Stack_t *stk)
{
    int i, op1, op2, result;
    for (i = strlen(Prefix_exp) - 1; i >= 0; --i)
    {
        if (isdigit(Prefix_exp[i]))
        {
            push(stk, Prefix_exp[i] - '0');
        }
        else
        {
            op1 = peek(stk);
            pop(stk);
            op2 = peek(stk);
            pop(stk);
            switch (Prefix_exp[i])
            {
                case '+':
                    result = op1 + op2;
                    break;
                case '-':
                    result = op1 - op2;
                    break;
                case '*':
                    result = op1 * op2;
                    break;
                case '/':
                    result = op1 / op2;
                    break;
                // Handle other operators as needed
            }
            push(stk, result);
        }
    }
    return peek(stk);
}
