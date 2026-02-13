//to create, delete,insert and display using func
#include <stdio.h>
#define MAX 25
void display(int arr[], int n) {
    if (n == 0) {
        printf("Array is empty.\n");
        return;
    }
    printf("Array elements: ");
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
void insertAtPosition(int arr[], int *n, int pos, int value) {
    if (pos < 0 || pos > *n) {
        printf("Invalid position!\n");
        return;
    }
    int i;
    for (i = *n; i > pos; i--)
        arr[i] = arr[i - 1];
    arr[pos] = value;
    (*n)++;
}
void deleteBeginning(int arr[], int *n) {
    if (*n == 0) {
        printf("Array is empty!\n");
        return;
    }
    int i;
    for (i = 0; i < *n - 1; i++)
        arr[i] = arr[i + 1];
    (*n)--;
}
void deleteMiddle(int arr[], int *n) {
    if (*n == 0) {
        printf("Array is empty!\n");
        return;
    }
    int mid = *n / 2;
    int i;
    for (i = mid; i < *n - 1; i++)
        arr[i] = arr[i + 1];
    (*n)--;
}
void deleteEnd(int arr[], int *n) {
    if (*n == 0) {
        printf("Array is empty!\n");
        return;
    }
    (*n)--;
}
int main() {
    int arr[MAX];
    int n = 0, choice, value, pos;
    while (1) {
        printf("\n--- ARRAY OPERATIONS MENU ---\n");
        printf("1. Insert element at position\n");
        printf("2. Delete element at beginning\n");
        printf("3. Delete element at middle\n");
        printf("4. Delete element at end\n");
        printf("5. Display array\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                if (n == MAX) {
                    printf("Array is full!\n");
                    break;
                }
                printf("Enter position (0 to %d): ", n);
                scanf("%d", &pos);
                printf("Enter value: ");
                scanf("%d", &value);
                insertAtPosition(arr, &n, pos, value);
                break;
            case 2:
                deleteBeginning(arr, &n);
                break;
            case 3:
                deleteMiddle(arr, &n);
                break;
            case 4:
                deleteEnd(arr, &n);
                break;
            case 5:
                display(arr, n);
                break;
            case 6:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}


