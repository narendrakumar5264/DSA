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
                                                //Reversing 
                                                // Method -1

void Reverse(Node* &head ){
    Node* curr = head;
    Node* prev = NULL;
    Node* forward = NULL;
    while(curr != NULL){
          forward = curr -> next;
        curr ->next = prev;
      
        prev = curr;
        curr = forward;
    }
    head = prev;


}

                                                // Method - 2(Using Recursion)

  void Reverse2(Node* &head , Node* &curr , Node* &prev){
    if(curr == NULL){
        head = prev;
        return ;
    }
    Reverse2(head,curr ->next , curr );
    curr -> next = prev;

  }                                              

void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
                                                //    Length Of Linked List                             
int Length(Node* head){
    Node* temp = head;
    int cnt = 0;
    while(temp != NULL){
        temp = temp -> next;
        cnt++;
    }
    return cnt;
}

                                                    //    Middle Of Linked List
  int Middle(Node* head , int n ){
    int mid = n/2;
    Node* temp = head;
    int cnt =0;
    while(cnt != mid ){
        temp = temp -> next;
        cnt++;
    }
    return temp ->data;

  }                                                  


int main(){
 Node* node1 = new Node(12);
    Node* head = node1;
    Node* tail = node1;
    insertAtPosition(tail, head, 1, 10); 
    insertAtPosition(tail, head, 2, 23);
    insertAtPosition(tail, head, 3, 15); 
    print(head);
      cout<<"After reverse "<<endl;
    Reverse(head);
      print(head);
       Node* curr = head;
    Node* prev = NULL;
    Reverse2(head, curr, prev);
     cout<<"After reverse using recursion"<<endl;
      print(head);
      cout<<"length Of Linked List" <<endl;
     cout<< Length(head)<<endl;
     int l = Length(head);
           cout<<"Middle  Of Linked List" <<endl;
           cout<<Middle(head ,l )<<endl;

    cout<<"All Fine ";
    return 0;
}