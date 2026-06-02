#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

// Traversal
void traverse() {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }
    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

// Insert at Beginning
void insertAtBeginning(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    if (head == NULL) {
        newNode->next = newNode;
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != head) 
        temp = temp->next;
    temp->next = newNode;
    newNode->next = head;
    head = newNode;
}

// Insert at End
void insertAtEnd(int value) {
    Node* newNode = new Node();
    newNode->data = value;

    if (head == NULL) {
        newNode->next = newNode;
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != head) temp = temp->next;

    temp->next = newNode;
    newNode->next = head;
}

// Insert After a Given Node
void insertAfter(int key, int value) {
    if (head == NULL) return;

    Node* temp = head;
    do {
        if (temp->data == key) {
            Node* newNode = new Node();
            newNode->data = value;
            newNode->next = temp->next;
            temp->next = newNode;
            return;
        }
        temp = temp->next;
    } while (temp != head);
    cout << "Key not found!\n";
}

// Delete First Node
void deleteFirst() {
    if (head == NULL) return;

    if (head->next == head) {
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;
    while (temp->next != head) temp = temp->next;

    Node* toDelete = head;
    temp->next = head->next;
    head = head->next;
    delete toDelete;
}

// Delete Last Node
void deleteLast() {
    if (head == NULL) return;

    if (head->next == head) {
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;
    while (temp->next->next != head) temp = temp->next;

    Node* toDelete = temp->next;
    temp->next = head;
    delete toDelete;
}

// Delete Node by Key
void deleteNode(int key) {
    if (head == NULL) return;

    if (head->data == key) {
        deleteFirst();
        return;
    }

    Node* temp = head;
    while (temp->next != head && temp->next->data != key) {
        temp = temp->next;
    }

    if (temp->next->data == key) {
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    } else {
        cout << "Key not found!\n";
    }
}

// Search Node
void search(int key) {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    Node* temp = head;
    do {
        if (temp->data == key) {
            cout << "Key " << key << " found in the list\n";
            return;
        }
        temp = temp->next;
    } while (temp != head);

    cout << "Key " << key << " not found in the list\n";
}

int main() {
    int choice, value, key;

    while (true) {
        cout << "\n--- Circular Singly Linked List Menu ---\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Insert After Key\n";
        cout << "4. Delete First Node\n";
        cout << "5. Delete Last Node\n";
        cout << "6. Delete by Key\n";
        cout << "7. Search\n";
        cout << "8. Traverse\n";
        cout << "9. Exit\n";
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
                cout << "Enter key after which to insert: ";
                cin >> key;
                cout << "Enter value: ";
                cin >> value;
                insertAfter(key, value);
                break;
            case 4:
                deleteFirst();
                break;
            case 5:
                deleteLast();
                break;
            case 6:
                cout << "Enter key to delete: ";
                cin >> key;
                deleteNode(key);
                break;
            case 7:
                cout << "Enter key to search: ";
                cin >> key;
                search(key);
                break;
            case 8:
                traverse();
                break;
            case 9:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice!\n";
        }
    }
}
