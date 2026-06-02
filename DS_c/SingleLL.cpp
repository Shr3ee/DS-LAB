#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* next;
   Node(int value) 
   {
        data = value;
        next = NULL;
    }
};
// Singly Linked List class
class LinkedList {
    Node* head;
public:
    LinkedList() {
        head = NULL;
    }
     void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (head == NULL) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }






    void deleteNode(int value) {
        Node* temp = head;
        Node* prev = NULL;
        if (temp != NULL && temp->data == value) 
        {
            head = temp->next;
            delete temp;
            return;
        }

        // Search for the value
        while (temp != NULL && temp->data != value) {
            prev = temp;
            temp = temp->next;
        }

        // If value not found
        if (temp == NULL) {
            cout << "Value not found!" << endl;
            return;
        }

        // Unlink and delete
        prev->next = temp->next;
        delete temp;
    }

    // Display list
    void display() {
        if (head == NULL) {
            cout << "List is empty" << endl;
            return;
        }
        Node* temp = head;
        cout << "Linked List: ";
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList list;
    int choice, value;

    do {
        cout << "\n--- Singly Linked List Menu ---\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Delete a Node\n";
        cout << "4. Display List\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            list.insertAtBeginning(value);
            break;
        case 2:
            cout << "Enter value: ";
            cin >> value;
            list.insertAtEnd(value);
            break;
        case 3:
            cout << "Enter value to delete: ";
            cin >> value;
            list.deleteNode(value);
            break;
        case 4:
            list.display();
            break;
        case 5:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 5);

    return 0;
}
