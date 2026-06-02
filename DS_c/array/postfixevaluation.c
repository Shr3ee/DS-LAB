#include <stdio.h>
#include <ctype.h>
#include <math.h>
#define MAX 100

int stack[MAX];
int top = -1;

void push(int val) {
    if (top == MAX - 1)
        printf("Stack Overflow!\n");
    else
        stack[++top] = val;
}
int pop() {
    if (top == -1) {
        printf("Stack Underflow!\n");
        return 0;
    }
    return stack[top--];
}
int evalPostfix(char exp[]) {
    int i;

    for (i = 0; exp[i] != '\0'; i++) {
        char ch = exp[i];
        if (ch == ' ' || ch == '\t')
            continue;
        else if (isdigit(ch)) {
            int num = 0;
            while (isdigit(exp[i])) {
                num = num * 10 + int(exp[i]);
                i++;
            }
            i--; 
            push(num);
        }
        else {
            if (top < 1) {
                printf("Invalid postfix expression!\n");
                return -1;
            }

            int val2 = pop();
            int val1 = pop();
            int res;

            switch (ch) {
                case '+':
                    res = val1 + val2;
                    break;
                case '-':
                    res = val1 - val2;
                    break;
                case '*':
                    res = val1 * val2;
                    break;
                case '/':
                    if (val2 == 0) {
                        printf("Division by zero error!\n");
                        return -1;
                    }
                    res = val1 / val2;
                    break;
                case '^':
                    res = (int)pow(val1, val2);
                    break;
                default:
                    printf("Invalid operator: %c\n", ch);
                    return -1;
            }
            push(res);
        }
    }
    if (top != 0) {
        printf("Invalid postfix expression!\n");
        return -1;
    }
    return pop();
}

int main() {
    char exp[100];

    printf("Enter a postfix expression: ");
    scanf(" %[^\n]", exp); // read expression with spaces

    int result = evalPostfix(exp);
    if (result != -1)
        printf("Result of postfix expression = %d\n", result);

    return 0;
}

