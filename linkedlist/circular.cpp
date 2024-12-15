#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this -> data = d;
        this -> next = NULL;

    }
    ~Node(){
        if(this -> next != NULL){
            this -> next =NULL;

            delete(next);
        }
        cout<<this -> data <<" "<<" deleted "<<endl;
    }
};

void insertNode(Node* &tail, int element, int d) {
    

    //empty list
    if(tail == NULL) {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{
        //non-empty list
        //assuming that the element is present in the list

        Node* curr = tail;

        while(curr->data != element) {
            curr = curr -> next;
        }
        
        //element found -> curr is representing element wala node
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;

    }

}    

void print(Node* tail) {

    Node* temp = tail;

    //empty list
    if(tail == NULL) {
        cout << "List is Empty "<< endl;
        return ;
    }

    do {
        cout << tail -> data << " ";
        tail = tail -> next;
    } while(tail != temp);

    cout << endl;
} 

void deleteNode(Node* &tail , int element){
    if(tail == NULL){
        cout<< "abe bhadwe linked list khali hai";
        return ;
    }
    
    else{
        Node* prev = tail ;
        Node* curr = prev -> next  ;
        while(curr-> data != element){
           prev = curr;
            curr = curr -> next;
        }
        prev -> next  = curr -> next;

        // one node 
        if(tail  == curr){
              tail = NULL;
        }
     
        curr -> next = NULL;
        delete  curr;


    }
    



}


int main(){
    Node* tail = NULL;
    insertNode(tail , 1 , 34);
    print(tail);
         cout<<endl;
    insertNode(tail , 34 , 4);
     insertNode(tail , 4 , 3);
  insertNode(tail , 3 , 10);
      print(tail);

     cout<<endl;
       insertNode(tail , 4 , 10);
      print(tail);
       cout<<endl;
           deleteNode(tail , 3);
             print(tail); 
              deleteNode(tail , 10);
             print(tail); 
              deleteNode(tail , 10);
             print(tail); 
     deleteNode(tail ,4);
             print(tail); 
            
              deleteNode(tail , 34);  
             print(tail); 
            

    return 0;
}