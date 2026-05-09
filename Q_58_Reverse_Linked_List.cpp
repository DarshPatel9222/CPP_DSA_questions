#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node* reverse(Node* head) {

    Node* arr[100];

    int top = -1;

    Node* temp = head;


    while (temp != NULL) {
        arr[++top] = temp;
        temp = temp->next;
    }


    head = arr[top--];

    temp = head;

    while (top >= 0) {
        temp->next = arr[top--];
        temp = temp->next;
    }

    temp->next = NULL;

    return head;
}

void print(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {

    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    head = reverse(head);
    print(head);
}