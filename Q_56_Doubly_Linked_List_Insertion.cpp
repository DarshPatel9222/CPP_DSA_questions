#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

// Insert after position p
void insert(Node*& head, int p, int x) {

    Node* newNode = new Node(x);

    // Case: insert after 0th node
    if (p == 0) {
        newNode->next = head;

        if (head != NULL) {
            head->prev = newNode;
        }

        head = newNode;
        return;
    }

    Node* temp = head;

    // Move to p-th node
    for (int i = 1; i < p && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) return;

    // Insert node
    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next != NULL) {
        temp->next->prev = newNode;
    }

    temp->next = newNode;
}

// Print list
void printList(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data;

        if (temp->next != NULL)
            cout << " <-> ";

        temp = temp->next;
    }
}

int main() {

    // 1 <-> 2 <-> 4 <-> 5
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(4);
    Node* fourth = new Node(5);

    head->next = second;
    second->prev = head;

    second->next = third;
    third->prev = second;

    third->next = fourth;
    fourth->prev = third;

    int p = 2, x = 6;

    insert(head, p, x);

    printList(head);

    return 0;
}