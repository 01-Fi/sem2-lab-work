#include <stdio.h>
#include <ctype.h>

#define MAX 100

int stack[MAX];
int top = -1;

// Push
void push(int x) {
    stack[++top] = x;
}

// Pop
int pop() {
    return stack[top--];
}

// Evaluate postfix
int evaluatePostfix(char exp[]) {
    int i = 0;
    int op1, op2;

    while (exp[i] != '\0') {

        // If operand (digit)
        if (isdigit(exp[i])) {
            push(exp[i] - '0');  // convert char to int
        }

        // If operator
        else {
            op2 = pop();
            op1 = pop();

            switch (exp[i]) {
                case '+': push(op1 + op2); break;
                case '-': push(op1 - op2); break;
                case '*': push(op1 * op2); break;
                case '/': push(op1 / op2); break;
            }
        }
        i++;
    }
    return pop();
}

int main() {
    char exp[MAX];

    printf("Enter Postfix Expression: ");
    scanf("%s", exp);

    int result = evaluatePostfix(exp);
    printf("Result = %d\n", result);

    return 0;
}
