#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

ListNode* middleNode(ListNode* head) {

    int count = 0;
    ListNode* temp = head;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    temp = head;

    for (int i = 0; i < count / 2; i++) {
        temp = temp->next;
    }

    return temp;
}

int main() {

    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    ListNode* ans = middleNode(head);

    cout << ans->val;
}