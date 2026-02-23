//func to perform operations on doubly linked list
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};
struct Node* head = NULL;
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(0);
    }
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}
void insertAtBeginning(int data) {
    struct Node* newNode = createNode(data);

    if (head != NULL) {
        head->prev = newNode;
        newNode->next = head;
    }

    head = newNode;
}
void insertAtEnd(int data) {
    struct Node* newNode = createNode(data);

    if (head == NULL) {
        head = newNode;
        return;
    }

    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}
void insertAtMiddle(int data, int position) {
    if (position < 1) {
        printf("Invalid position!\n");
        return;
    }
    struct Node* temp = head;
    int i;
    for (i = 1; i < position && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Position out of range!\n");
        return;
    }
    if (temp->next == NULL) { 
        insertAtEnd(data);
        return;
    }
    struct Node* newNode = createNode(data);
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next->prev = newNode;
    temp->next = newNode;
}
void deleteAtBeginning() {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    struct Node* temp = head;
    if (head->next == NULL) {
        head = NULL;
    } else {
        head = head->next;
        head->prev = NULL;
    }
    free(temp);
}
void deleteAtEnd() {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    struct Node* temp = head;

    if (head->next == NULL) {
        head = NULL;
        free(temp);
        return;
    }
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->prev->next = NULL;
    free(temp);
}
void deleteAtMiddle(int position) {
    if (head == NULL || position < 1) {
        printf("Invalid operation!\n");
        return;
    }
    if (position == 1) {
        deleteAtBeginning();
        return;
    }
    struct Node* temp = head;
    int i;
    for (i = 1; i < position && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Position out of range!\n");
        return;
    }
    if (temp->next == NULL) {
        deleteAtEnd();
        return;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    free(temp);
}
void traverse() {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    struct Node* temp = head;
    printf("Doubly Linked List: ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main() {
    int choice, data, position;
    while (1) {
        printf("\n---- Doubly Linked List Operations ----\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at Middle\n");
        printf("3. Insert at End\n");
        printf("4. Delete at Beginning\n");
        printf("5. Delete at Middle\n");
        printf("6. Delete at End\n");
        printf("7. Traverse\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter data: ");
                scanf("%d", &data);
                insertAtBeginning(data);
                break;

            case 2:
                printf("Enter data: ");
                scanf("%d", &data);
                printf("Enter position: ");
                scanf("%d", &position);
                insertAtMiddle(data, position);
                break;

            case 3:
                printf("Enter data: ");
                scanf("%d", &data);
                insertAtEnd(data);
                break;

            case 4:
                deleteAtBeginning();
                break;

            case 5:
                printf("Enter position: ");
                scanf("%d", &position);
                deleteAtMiddle(position);
                break;

            case 6:
                deleteAtEnd();
                break;

            case 7:
                traverse();
                break;

            case 8:
                exit(0);

            default:
                printf("Invalid choice!\n");
        }
}
}
