#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* insertAtBeginning(Node* head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
    return head;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";
}

int main() {
    Node* head = NULL;

    head = insertAtBeginning(head, 10);
    head = insertAtBeginning(head, 20);
    head = insertAtBeginning(head, 30);

    printList(head);
}