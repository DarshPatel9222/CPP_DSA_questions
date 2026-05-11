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

Node* detectCycle(Node* head) {

    Node* visited[1000];

    int size = 0;

    Node* temp = head;

    while (temp != NULL) {

        // Check already visited
        for (int i = 0; i < size; i++) {

            if (visited[i] == temp) {
                return temp;
            }
        }

        // Store node
        visited[size++] = temp;

        temp = temp->next;
    }

    return NULL;
}

int main() {

    // 1 -> 2 -> 3 -> 4
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    // Create cycle: 4 -> 2
    head->next->next->next->next = head->next;

    Node* ans = detectCycle(head);

    if (ans != NULL)
        cout << ans->data;
    else
        cout << "No Cycle";
}