#include "main.h"

int Postfix_Eval(char *Postfix_exp, Stack_t *stk) {
    int i = 0;

    while (Postfix_exp[i] != '\0') {
        if (isdigit(Postfix_exp[i])) {
            push(stk, Postfix_exp[i] - '0'); // Convert char to int
        } else {
            int operand2 = peek(stk);
            pop(stk);
            int operand1 = peek(stk);
            pop(stk);

            switch (Postfix_exp[i]) {
                case '+':
                    push(stk, operand1 + operand2);
                    break;
                case '-':
                    push(stk, operand1 - operand2);
                    break;
                case '*':
                    push(stk, operand1 * operand2);
                    break;
                case '/':
                    push(stk, operand1 / operand2);
                    break;
                default:
                    printf("Invalid operator: %c\n", Postfix_exp[i]);
                    return -1; // Invalid operator
            }
        }
        i++;
    }

    return peek(stk);
}

