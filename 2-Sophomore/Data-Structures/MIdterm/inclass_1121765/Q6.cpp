#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void append(Node** head_ref, int new_data) {
    Node* new_node = new Node();
    Node* last = *head_ref;

    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL) {
        last = last->next;
    }

    last->next = new_node;
}

void deleteMiddle(Node** head_ref) {
    if (*head_ref == NULL || (*head_ref)->next == NULL) {
        return;
    }

    Node* slow = *head_ref;
    Node* fast = *head_ref;
    Node* prev = NULL;

    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        prev = slow;
        slow = slow->next;
    }

    prev->next = slow->next;
    delete slow;
}

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;

    append(&head, 1);
    append(&head, 2);
    append(&head, 3);
    append(&head, 4);
    append(&head, 5);

    cout << "Original list: ";
    printList(head);

    deleteMiddle(&head);

    cout << "List after deleting middle element: ";
    printList(head);

    return 0;
}
