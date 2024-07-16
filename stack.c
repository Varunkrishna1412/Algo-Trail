#include <stdio.h>

int stack[10];
int top = -1;

void push(int value) {
    if (top == 9) {
        printf("Stack is full\n");
    } else {
        stack[++top] = value;
        printf("Pushed %d into the array\n", value);
        for(int i =0;i<=top;i++){
            printf("%d\n",stack[i]);
        }
    }
}

void pop() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Popped %d from the array\n", stack[top--]);
        for(int i =0;i<=top;i++){
            printf("%d\n",stack[i]);
        }
    }
}

void peek() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Top element is %d\n", stack[top]);
    }
}

int main() {
    int choice, value;
    while (1) {
        printf("\n 1. Push\n 2. Pop\n 3. Peek\n 4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice, please try again.\n");
        }
    }
    return 0;
}