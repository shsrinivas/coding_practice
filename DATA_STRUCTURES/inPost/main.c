#include "main.h"

int priority(char opr) {
    if (opr == '+' || opr == '-')
        return 1;
    if (opr == '*' || opr == '/')
        return 2;
    return 0;
}

void push(Stack_t *stk, int data) {
    if (stk->top < SIZE_STACK - 1) {
        stk->stack[++stk->top] = data;
    } else {
        printf("Stack Overflow!\n");
    }
}

int peek(Stack_t *stk) {
    if (stk->top >= 0) {
        return stk->stack[stk->top];
    } else {
        printf("Stack is empty!\n");
        return -1;
    }
}

void pop(Stack_t *stk) {
    if (stk->top >= 0) {
        stk->top--;
    } else {
        printf("Stack is empty!\n");
    }
}

int Infix_Postfix_conversion(char *Postfix_exp, char *Infix_exp, Stack_t *stk) {
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

int main() {
    Stack_t stk;
    stk.top = -1;

    char Infix_exp[SIZE_STACK];
    printf("Enter an infix expression: ");
    scanf("%s", Infix_exp);

    char Postfix_exp[SIZE_STACK];
    if (Infix_Postfix_conversion(Postfix_exp, Infix_exp, &stk)) {
        printf("Postfix expression: %s\n", Postfix_exp);
    } else {
        printf("Conversion failed!\n");
    }

    return 0;
}

