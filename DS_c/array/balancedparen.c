#include <stdio.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char ch) {
    if (top == MAX - 1)
        printf("Stack Overflow\n");
    else
        stack[++top] = ch;
}

char pop() {
    if (top == -1)
        return '\0';  // empty stack
    else
        return stack[top--];
}

int isBalanced(char expr[]) {
    int i;
    char ch, n;

    for (i = 0; expr[i] != '\0'; i++) {
        ch = expr[i];

        if (ch == '(' || ch == '{' || ch == '[')
            push(ch);

        else if (ch == ')' || ch == '}' || ch == ']') {
            if (top == -1)
                return 0;  // closing without opening

            n = pop();

            if ((ch == ')' && n != '(') ||
                (ch == '}' && n != '{') ||
                (ch == ']' && n != '['))
                return 0;  // mismatch
        }
    }
    return (top == -1);
}
int main() {
    char expr[100];

    printf("Enter an expression: ");
    scanf("%s", expr);

    if (isBalanced(expr))
        printf("Balanced\n");
    else
        printf("Not Balanced\n");

    return 0;
}
