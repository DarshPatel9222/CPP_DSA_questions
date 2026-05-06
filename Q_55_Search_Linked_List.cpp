#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int search(Node* head, int key) {
    int pos = 1;
    Node* temp = head;

    while (temp != NULL) {
        if (temp->data == key)
            return pos;
        temp = temp->next;
        pos++;
    }
    return -1;
}

int main() {
    // Creating list: 10 -> 20 -> 30
    Node* n1 = new Node{10, NULL};
    Node* n2 = new Node{20, NULL};
    Node* n3 = new Node{30, NULL};

    n1->next = n2;
    n2->next = n3;

    Node* head = n1;

    int key = 20;

    cout << search(head, key);
}