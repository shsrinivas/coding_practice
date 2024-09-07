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

int priority(char opr)
{
    if (opr == '+' || opr == '-')
        return 1;
    else if (opr == '*' || opr == '/')
        return 2;
    else if (opr == '^')
        return 3;
    return 0; // for other characters (operands)
}

void push(Stack_t *stk, int data)
{
    ++(stk->top);
    stk->stack[stk->top] = data;
}

void pop(Stack_t *stk)
{
    if (stk->top != -1)
        --(stk->top);
}

int peek(Stack_t *stk)
{
    if (stk->top != -1)
    {
        return stk->stack[stk->top];
    }
    return -1;
}



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
