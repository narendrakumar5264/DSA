#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    
    // Constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int d) {
    Node* node = new Node(d);
    node->next = head;
    head = node;
}

void insertAtTail(Node* &tail, int d) {
    Node* node = new Node(d);
    tail->next = node;
    tail = node;
}

void insertAtPosition(Node* &tail, Node* &head, int pos, int d) {
    // Inserting at the first position (head)
    if (pos == 1) {
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    // Traversing to the node before the position where the new node should be inserted
    while (cnt < pos - 1) {
        temp = temp->next;
        cnt++;
    }

    // Inserting at tail (if inserting at the end)
    if (temp->next == NULL) {
        insertAtTail(tail, d);
        return;
    }

    // Normal insertion in between
    Node* node = new Node(d);
    node->next = temp->next;
    temp->next = node;
}

void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Initializing the list with a single node
    Node* node1 = new Node(12);
    Node* head = node1;
    Node* tail = node1;

    // Inserting at different positions
    insertAtPosition(tail, head, 1, 10);  // Insert at head
    insertAtPosition(tail, head, 3, 23);  // Insert at tail (position beyond the list length)
    insertAtPosition(tail, head, 2, 15);  // Insert in the middle

    print(head);

    return 0;
}
