#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

Node* head = NULL;  

// Function to create a new node
Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Insertion at the beginning
void insertAtBeginning(int value) {
    Node* newNode = createNode(value);
    if (head == NULL) {
        head = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    cout << "Inserted " << value << " at beginning.\n";
}

// Insertion at the end
void insertAtEnd(int value) {
    Node* newNode = createNode(value);
    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
    cout << "Inserted " << value << " at end.\n";
}

// Insertion after a given node
void insertAfter(int key, int value) {
    Node* temp = head;
    while (temp != NULL && temp->data != key) {
        temp = temp->next;
    }
    if (temp == NULL) {
        cout << "Node with value " << key << " not found!\n";
        return;
    }
    Node* newNode = createNode(value);
    newNode->next = temp->next;
    newNode->prev = temp;
    if (temp->next != NULL) {
        temp->next->prev = newNode;
    }
    temp->next = newNode;
    cout << "Inserted " << value << " after " << key << ".\n";
}

// Insertion before a given node
void insertBefore(int key, int value) {
    Node* temp = head;
    while (temp != NULL && temp->data != key) {
        temp = temp->next;
    }
    if (temp == NULL) {
        cout << "Node with value " << key << " not found!\n";
        return;
    }
    Node* newNode = createNode(value);
    newNode->next = temp;
    newNode->prev = temp->prev;
    if (temp->prev != NULL) {
        temp->prev->next = newNode;
    } else {
        head = newNode; 
    }
    temp->prev = newNode;
    cout << "Inserted " << value << " before " << key << ".\n";
}

// Display the list
void display() {
    Node* temp = head;
    if (temp == NULL) {
        cout << "List is empty.\n";
        return;
    }
    cout << "Doubly Linked List: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

int main() {
    int choice, value, key;

    do {
        cout << "\n--- Menu ---\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Insert After a Node\n";
        cout << "4. Insert Before a Node\n";
        cout << "5. Display List\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                insertAtBeginning(value);
                break;

            case 2:
                cout << "Enter value: ";
                cin >> value;
                insertAtEnd(value);
                break;

            case 3:
                cout << "Enter key (after which to insert): ";
                cin >> key;
                cout << "Enter value: ";
                cin >> value;
                insertAfter(key, value);
                break;

            case 4:
                cout << "Enter key (before which to insert): ";
                cin >> key;
                cout << "Enter value: ";
                cin >> value;
                insertBefore(key, value);
                break;

            case 5:
                display();
                break;

            case 6:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 6);

    return 0;
}
