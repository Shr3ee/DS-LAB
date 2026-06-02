#include <bits/stdc++.h>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* prev;
    Node* next;
    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};

// Insert at end
void insertEnd(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
}

// Delete first node
void deleteFirst(Node*& head) {
    if (!head) return;
    Node* temp = head;
    head = head->next;
    if (head) head->prev = nullptr;
    delete temp;
}

// Delete last node
void deleteLast(Node*& head) {
    if (!head) return;
    if (!head->next) {
        delete head;
        head = nullptr;
        return;
    }
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->prev->next = nullptr;
    delete temp;
}

// Delete after a given node
void deleteAfter(Node* prevNode) {
    if (!prevNode || !prevNode->next) return;
    Node* temp = prevNode->next;
    prevNode->next = temp->next;
    if (temp->next) temp->next->prev = prevNode;
    delete temp;
}

// Delete before a given node
void deleteBefore(Node*& head, Node* nextNode) {
    if (!nextNode || !nextNode->prev) return;
    Node* temp = nextNode->prev;
    if (temp->prev)
        temp->prev->next = nextNode;
    else
        head = nextNode;
    nextNode->prev = temp->prev;
    delete temp;
}

// Delete by key/value
void deleteByKey(Node*& head, int key) {
    Node* temp = head;
    while (temp && temp->data != key)
        temp = temp->next;
    if (!temp) return;

    if (temp->prev) temp->prev->next = temp->next;
    else head = temp->next;

    if (temp->next) temp->next->prev = temp->prev;

    delete temp;
}

// Print DLL
void printList(Node* head) {
    Node* temp = head;
    cout << "DLL: ";
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

// Main function
int main() {
    Node* head = nullptr;

    // Sample operations
    insertEnd(head, 10);
    insertEnd(head, 20);
    insertEnd(head, 30);
    insertEnd(head, 40);

    printList(head);

    deleteFirst(head);
    printList(head);

    deleteLast(head);
    printList(head);

    deleteByKey(head, 20);
    printList(head);

    // Insert again to test before/after
    insertEnd(head, 50);
    insertEnd(head, 60);
    printList(head);

    deleteAfter(head); // deletes node after head
    printList(head);

    deleteBefore(head, head->next); // deletes node before head->next
    printList(head);

    return 0;
}
