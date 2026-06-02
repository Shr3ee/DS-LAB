#include<stdio.h>
// Node structure
struct Node {
    int data;
    struct Node* next;
};
struct Node* head = NULL;
struct Node* createnode(){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    return newNode;
}
// Function to traverse and display list
void display(struct Node* head) {

    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// 1. Insert at Beginning
void insertAtBeginning(struct Node* &head, int data) {
    struct Node* newNode = createnode(data);
    newNode->next = head;
    head = newNode;
}

// 2. Insert at End
void insertAtEnd(struct Node* &head, int data) {
    struct Node* newNode =createnode(data);
    if (head == NULL) {
        head = newNode;
        return;
    }
    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// 3. Insert After a Given Node (by key)
void insertAfter(Node* head, int key, int data) {
    Node* temp = head;
    while (temp != NULL && temp->data != key) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Key not found!\n");
        return;
    }
    Node* newNode = new createnode(data);
    newNode->next = temp->next;
    temp->next = newNode;
}

// 4. Insert Before a Given Node (by key)
void insertBefore(Node* &head, int key, int data) {
    if (head == NULL) return;

    if (head->data == key) {
        insertAtBeginning(head, data);
        return;
    }
    Node* temp = head;
    while (temp->next != NULL && temp->next->data != key) {
        temp = temp->next;
    }

    if (temp->next == NULL) {
        printf("Key not found!\n");
        return;
    }
    Node* newNode = new createnode(data);
    newNode->next = temp->next;
    temp->next = newNode;
}

// 5. Insert at a Specific Position
void insertAtPosition(Node* &head, int pos, int data) {
    if (pos <= 0) {
        printf("INVALID POSITION\n");
        return;
    }

    if (pos == 1) {
        insertAtBeginning(head, data);
        return;
    }
    Node* temp = head;
    for (int i = 1; temp != NULL && i < pos - 1; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Position out of Range\n");
        return;
    }

    Node* newNode = new createnode(data);
    newNode->next = temp->next;
    temp->next = newNode;
}

// Main Program
int main() {
    Node* head = NULL;
    int choice, data, key, pos;

    do {
        printf("\n--- Singly Linked List Insertion Menu ---\n");
        printf( "1. Insert at Beginning\n");
        printf( "2. Insert at End\n");
        printf( "3. Insert After a Given Node\n");
        printf( "4. Insert Before a Given Node\n");
        printf( "5. Insert at a Specific Position\n");
        printf( "6. Display List\n");
        printf( "0. Exit\n");
        printf( "Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value: ";)
                scanf("%d", &data);
                insertAtBeginning(head, data);
                break;
            case 2:
                printf("Enter value: ";)
                scanf("%d", &data);
                insertAtEnd(head, data);
                break;
            case 3:
                printf("Enter key (after which to insert): ");
                scanf("%d", &key);
                printf("Enter value: ";)
                scanf("%d", &data);
                insertAfter(head, key, data);
                break;
            case 4:
                printf("Enter key (after which to insert): ");
                scanf("%d", &key);
                printf("Enter value: ";)
                scanf("%d", &data);
                insertBefore(head, key, data);
                break;
            case 5:
                printf("Enter position: ";)
                scanf("%d", &pos);
                printf("Enter value: ";)
                scanf("%d", &data);
                insertAtPosition(head, pos, data);
                break;
            case 6:
                display(head);
                break;
            case 0:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 0);

    return 0;
}
