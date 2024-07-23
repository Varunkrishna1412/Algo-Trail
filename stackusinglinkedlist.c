#include <stdio.h>
#include <stdlib.h>

// Node structure
struct node {
    int data;
    struct node *next;
};

// Global variable to store the head of the stack
struct node *head = NULL;

// Function to push an element onto the stack
void push(int val) {
    // Create a new node
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = head;
    head = newNode;
}

// Function to pop an element from the stack
void pop() {
    if (head == NULL) {
        printf("Stack is empty\n");
    } else {
        printf("Popped element = %d\n", head->data);
        struct node *temp = head;
        head = head->next;
        free(temp);
    }
}

// Function to print the stack
void printList() {
    struct node *temp = head;
    printf("Stack elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int choice, val;

    while (1) {
        printf("Stack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print Stack\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to push: ");
                scanf("%d", &val);
                push(val);
                break;
            case 2:
                pop();
                break;
            case 3:
                printList();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}