#include<iostream>
using namespace std;
class Node{

    public:

    int data ;  
    Node* prev;
    Node* next;

    Node(int d ){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }
    ~Node(){
        if(this -> next != NULL){
            delete(next);
            this -> next = NULL;
            delete(prev);
            this -> prev = NULL;
        }
        cout<<this -> data <<" "<<"deleted"<<endl;
    }

};

void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<< " "<<temp -> data ;
        temp = temp -> next;
    }
}
int len(Node* head){
    int len = 0;
      Node* temp = head;

    while(temp != NULL){
        len++;
     
        temp = temp -> next;
    }
    return len;

}
insertAthead(Node* &head , int d){

    Node* temp = new Node(d);
 
    temp -> next = head;
    head -> prev = temp;
head = temp;


}
void insertAttail(Node* &tail , int d){

    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    temp -> next = NULL;
    tail = temp;

}

void insertAtposition(Node* &head ,Node* &tail , int d , int p){
    if(p == 1){
        insertAthead(head , d);
        return ;
    }
   
    Node* temp = new Node(d);
    Node* curr = head;
    Node* phle = NULL;
    int cnt = 1;
    while(cnt <= p- 1){
        phle = curr;
        curr = curr -> next;
        cnt++;
    }
    if(curr -> next == NULL){
        insertAttail(tail , d);
        return ;

    }
    phle -> next = temp;
    temp -> prev = phle -> next;
    temp -> next = curr;
     curr -> prev = temp;
}
 

 void deleteNode(Node* &head, int pos  ){
    if(pos == 1){
        Node* temp = head;
        head =  head -> next;
        temp -> next = NULL;
        head -> prev = NULL;
        delete(temp);

    }
    else{
          int cnt = 1;
            Node* curr = head;
            Node* phle = NULL;
    while(cnt <= pos- 1){
        phle = curr;
        curr = curr -> next;
        cnt++;
    }
    phle -> next = curr -> next;
    curr -> next = NULL;
    curr -> prev = NULL;
    delete(curr);
    }
 }
int main(){
    int d = 12;
    Node* node1 = new Node(d);
    
    Node* head = node1;
     Node* tail = node1;
    print(head);
    cout<<endl<<"length of linked list :"<<len(head);
    insertAthead(head , 20);
     insertAthead(head , 40);
      insertAthead(head , 90);
    cout<<endl;

        
     insertAttail(tail , 50);
      insertAtposition(head , tail, 30, 5);
     
     print(head);
     cout<<endl;
     deleteNode(head , 1);
     print(head);
      cout<<endl;
     deleteNode(head , 2);
     print(head);
     
    return 0;
}