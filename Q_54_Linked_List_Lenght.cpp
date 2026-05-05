#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int getLength(Node* head) {
    int count = 0;
    Node* temp = head;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    return count;
}

int main() {
    Node* head = NULL;

    // manually creating list: 10 -> 20 -> 30
    Node* n1 = new Node{10, NULL};
    Node* n2 = new Node{20, NULL};
    Node* n3 = new Node{30, NULL};

    head = n1;
    n1->next = n2;
    n2->next = n3;

    cout << getLength(head);

    return 0;
}