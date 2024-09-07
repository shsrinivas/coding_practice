#include "main.h"

int Infix_Postfix_conversion(char *Infix_exp, char *Postfix_exp, Stack_t *stk)
{
	int i = 0, j = 0;

    while (Infix_exp[i] != '\0') {
        if (isalnum(Infix_exp[i])) {
            Postfix_exp[j++] = Infix_exp[i];
        } else if (Infix_exp[i] == '(') {
            push(stk, '(');
        } else if (Infix_exp[i] == ')') {
            while (stk->top >= 0 && peek(stk) != '(') {
                Postfix_exp[j++] = peek(stk);
                pop(stk);
            }
            pop(stk); // Pop '(' from the stack
        } else {
            while (stk->top >= 0 && priority(Infix_exp[i]) <= priority(peek(stk))) {
                Postfix_exp[j++] = peek(stk);
                pop(stk);
            }
            push(stk, Infix_exp[i]);
        }
        i++;
    }

    while (stk->top >= 0) {
        Postfix_exp[j++] = peek(stk);
        pop(stk);
    }

    Postfix_exp[j] = '\0';
    return 1;
}
