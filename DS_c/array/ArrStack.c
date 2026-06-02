#include <stdio.h>
#define MAX 5
int stack[MAX];
int top = -1;

void push() {
    int val;
    if (top == MAX - 1)
        printf("Stack Overflow!\n");
    else {
        printf("Enter value to push: ");
        scanf("%d", &val);
        top++;
        stack[top] = val;
    }
}
void pop() {
    if (top == -1)
        printf("Stack Underflow!\n");
    else {
        printf("Popped element: %d\n", stack[top]);
        top--;
    }
}
void peek(){
    printf("%d",stack[top]);
}
void display() {
    int i;
    if (top == -1)
        printf("Stack is empty!\n");
    else {
        printf("Stack elements: ");
        for (i = top; i >= 0; i--)
            printf("%d ", stack[i]);
        printf("\n");
    }
}

int main() {
    int choice;
    printf("\n*** Stack Implementation using Array ***\n");

    while (1) {
        printf("\n1. Push\n2. Pop\n3. Peek\n4. Display \n5.Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1: push(); break;
        case 2: pop(); break;
        case 3: peek(); break;
        case 4: display(); break;
        case 5: return 0;
        default: printf("Invalid choice!\n");
        }
    }
}






