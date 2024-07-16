#include <stdio.h>

int queue[10];
int front = -1;
int rear = -1;

void enqueue(int value) {
    if (rear == 9) {
        printf("Queue is full\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        queue[++rear] = value;
        printf("Enqueued %d into the array\n", value);
        for(int i =0;i<10;i++){
            printf("%d\n",queue[i]);
        }
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue underflow\n");
    } else {
        printf("Dequeued %d from the queue\n", queue[front++]);
        if (front > rear) {
            front = rear = -1; // Reset the queue when all elements are dequeued
        }
        for(int i =0;i<10;i++){
            printf("%d\n",queue[i]);
        }}
}

void peek() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
    } else {
        printf("Front element is %d\n", queue[front]);
    }
}

int main() {
    int choice, value;
    while (1) {
        printf("\n 1. Enqueue\n 2. Dequeue\n 3. Peek\n 4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
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