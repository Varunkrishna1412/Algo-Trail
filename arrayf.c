#include <stdio.h>

#define MAX_SIZE 10

int main() {
    int arr[MAX_SIZE];
    int size;

    printf("Enter the size of the array (max %d): ", MAX_SIZE);
    scanf("%d", &size);

    if (size > MAX_SIZE) {
        printf("Size cannot be greater than %d. Exiting.\n", MAX_SIZE);
        return 1;
    }

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int choice, element, index;

    while (1) {
        printf("1. Insert element\n");
        printf("2. Update element\n");
        printf("3. Delete element\n");
        printf("4. Print array\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (size < MAX_SIZE) {
                    printf("Enter element to insert: ");
                    scanf("%d", &element);
                    printf("Enter index to insert at: ");
                    scanf("%d", &index);
                    if (index < size) {
                        for (int i = size; i > index; i--) {
                            arr[i] = arr[i - 1];
                        }
                        arr[index] = element;
                        size++;
                    } else {
                        printf("Index out of bounds. Cannot insert element.\n");
                    }
                } else {
                    printf("Array is full. Cannot insert element.\n");
                }
                break;
            case 2:
                printf("Enter element to update: ");
                scanf("%d", &element);
                printf("Enter index to update at: ");
                scanf("%d", &index);
                if (index < size) {
                    arr[index] = element;
                } else {
                    printf("Index out of bounds. Cannot update element.\n");
                }
                break;
            case 3:
                printf("Enter index to delete at: ");
                scanf("%d", &index);
                if (index < size) {
                    for (int i = index; i < size - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    size--;
                } else {
                    printf("Index out of bounds. Cannot delete element.\n");
                }
                break;
            case 4:
                for (int i = 0; i < size; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}