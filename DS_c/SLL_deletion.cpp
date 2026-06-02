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
    if (head == NULL) {
        cout << "List is empty!\n";
        return;
    }
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

// 1. Delete at Beginning
void deleteAtBeginning(Node* &head) {
    if (head == NULL) {
        cout << "List is empty!\n";
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
}

// 2. Delete at End
void deleteAtEnd(Node* &head) {
    if (head == NULL) {
        cout << "List is empty!\n";
        return;
    }
    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }
    Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}

// 3. Delete by Value (Key)
void deleteByValue(Node* &head, int key) {
    if (head == NULL) return;
    if (head->data == key) {
        deleteAtBeginning(head);
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
    Node* delNode = temp->next;
    temp->next = temp->next->next;
    delete delNode;
}

// 4. Delete at a Specific Position
void deleteAtPosition(Node* &head, int pos) {
    if (head == NULL || pos <= 0) {
        cout << "Invalid position!\n";
        return;
    }

    if (pos == 1) {
        deleteAtBeginning(head);
        return;
    }

    Node* temp = head;
    for (int i = 1; temp != NULL && i < pos - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {
        cout << "Position out of range!\n";
        return;
    }

    Node* delNode = temp->next;
    temp->next = temp->next->next;
    delete delNode;
}

// 5. Delete Entire List
void deleteList(Node* &head) {
    Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        delete temp;
    }
}

// 6. Delete After a Given Key
void deleteAfterKey(Node* head, int key) {
    if (head == NULL) return;

    Node* temp = head;
    while (temp != NULL && temp->data != key) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {
        cout << "No node exists after the given key!\n";
        return;
    }

    Node* delNode = temp->next;
    temp->next = temp->next->next;
    delete delNode;
}

// 7. Delete Before a Given Key
void deleteBeforeKey(Node* &head, int key) {
    if (head == NULL || head->next == NULL) {
        cout << "Not enough nodes!\n";
        return;
    }

    if (head->data == key) {
        cout << "No node exists before the given key!\n";
        return;
    }

    if (head->next->data == key) {
        deleteAtBeginning(head);
        return;
    }

    Node* temp = head;
    while (temp->next->next != NULL && temp->next->next->data != key) {
        temp = temp->next;
    }

    if (temp->next->next == NULL) {
        cout << "Key not found!\n";
        return;
    }

    Node* delNode = temp->next;
    temp->next = temp->next->next;
    delete delNode;
}

// Main Program
int main() {
    Node* head = NULL;

    // Pre-filled list for testing
    head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    int choice, key, pos;

    do {
        cout << "\n--- Singly Linked List Deletion Menu ---\n";
        cout << "1. Delete at Beginning\n";
        cout << "2. Delete at End\n";
        cout << "3. Delete by Value (Key)\n";
        cout << "4. Delete at a Specific Position\n";
        cout << "5. Delete Entire List\n";
        cout << "6. Delete After a Given Key\n";
        cout << "7. Delete Before a Given Key\n";
        cout << "8. Display List\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                deleteAtBeginning(head);
                break;
            case 2:
                deleteAtEnd(head);
                break;
            case 3:
                cout << "Enter key to delete: ";
                cin >> key;
                deleteByValue(head, key);
                break;
            case 4:
                cout << "Enter position: ";
                cin >> pos;
                deleteAtPosition(head, pos);
                break;
            case 5:
                deleteList(head);
                cout << "Entire list deleted!\n";
                break;
            case 6:
                cout << "Enter key (after which node will be deleted): ";
                cin >> key;
                deleteAfterKey(head, key);
                break;
            case 7:
                cout << "Enter key (before which node will be deleted): ";
                cin >> key;
                deleteBeforeKey(head, key);
                break;
            case 8:
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
