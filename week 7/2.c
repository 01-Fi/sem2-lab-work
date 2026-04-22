// infix to postfix
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

char stack[MAX];
int top = -1;

void push(char x) {
    stack[++top] = x;
}

char pop() {
    if (top == -1)
        return -1;
    else
        return stack[top--];
}

int priority(char x) {
    if (x == '(')
        return 0;
    if (x == '+' || x == '-')
        return 1;
    if (x == '*' || x == '/')
        return 2;
    if (x == '^')
        return 3;
    return 0;
}

int main() {
    char exp[MAX], result[MAX];
    int i, j = 0;

    printf("Enter Infix Expression: ");
    scanf("%s", exp);

    for (i = 0; i < strlen(exp); i++) {

        if (isalnum(exp[i])) {
            result[j++] = exp[i];
        }

        else if (exp[i] == '(') {
            push(exp[i]);
        }

        else if (exp[i] == ')') {
            while (stack[top] != '(') {
                result[j++] = pop();
            }
            pop(); 
        }

        else {
            while (top != -1 && priority(stack[top]) >= priority(exp[i])) {
                result[j++] = pop();
            }
            push(exp[i]);
        }
    }

    while (top != -1) {
        result[j++] = pop();
    }

    result[j] = '\0';

    printf("Postfix Expression: %s\n", result);
}
