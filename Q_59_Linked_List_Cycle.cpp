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

bool hasCycle(Node* head) {

    Node* visited[1000];

    int size = 0;

    Node* temp = head;

    while (temp != NULL) {

        for (int i = 0; i < size; i++) {

            if (visited[i] == temp) {
                return true;
            }
        }

        visited[size++] = temp;

        temp = temp->next;
    }

    return false;
}

int main() {

    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    head->next->next->next->next = head->next;

    if (hasCycle(head))
        cout << "Cycle Found";
    else
        cout << "No Cycle";
}