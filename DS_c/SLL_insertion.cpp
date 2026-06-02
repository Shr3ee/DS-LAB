#include <bits/stdc++.h>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Function to traverse and display list
void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

// 1. Insert at Beginning
void insertAtBeginning(Node* &head, int data) {
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

// 2. Insert at End
void insertAtEnd(Node* &head, int data) {
    Node* newNode = new Node(data);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
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
        cout << "Key not found!\n";
        return;
    }
    Node* newNode = new Node(data);
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
        cout << "Key not found!\n";
        return;
    }
    Node* newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
}

// 5. Insert at a Specific Position
void insertAtPosition(Node* &head, int pos, int data) {
    if (pos <= 0) {
        cout << "Invalid position!\n";
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
        cout << "Position out of range!\n";
        return;
    }

    Node* newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
}

// Main Program
int main() {
    Node* head = NULL;
    int choice, data, key, pos;

    do {
        cout << "\n--- Singly Linked List Insertion Menu ---\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Insert After a Given Node\n";
        cout << "4. Insert Before a Given Node\n";
        cout << "5. Insert at a Specific Position\n";
        cout << "6. Display List\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> data;
                insertAtBeginning(head, data);
                break;
            case 2:
                cout << "Enter value: ";
                cin >> data;
                insertAtEnd(head, data);
                break;
            case 3:
                cout << "Enter key (after which to insert): ";
                cin >> key;
                cout << "Enter value: ";
                cin >> data;
                insertAfter(head, key, data);
                break;
            case 4:
                cout << "Enter key (before which to insert): ";
                cin >> key;
                cout << "Enter value: ";
                cin >> data;
                insertBefore(head, key, data);
                break;
            case 5:
                cout << "Enter position: ";
                cin >> pos;
                cout << "Enter value: ";
                cin >> data;
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
