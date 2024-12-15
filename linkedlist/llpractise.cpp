#include<iostream>
using namespace std;


class Node{
    public:
    int data ;
    Node* next;
    //constructor
    Node(int data){
        this -> data =data ;
        this -> next = NULL;
    }

};

 void insertatposition(Node* &tail  ,Node* &head ,int pos , int d){
    // inserting at first or head
    // if(pos == 1){
    //     insert(head , d);
    //     return ;
    // }
             Node* temp = head ;
          int cnt = 1;
               while(cnt <= pos -1){
                 temp = temp -> next ;
                    cnt++;
                }  

//inserting at tail or last 
                // if(temp -> next = NULL){
                //     insertAtTail(tail , d);
                //     return ;

                // }

             Node* node = new Node(d);
                node -> next = temp -> next;
            temp -> next = node;


            }


void print(Node* &head ){
    Node* temp = head;
    

    while(temp != NULL){
        cout<< temp->data <<" ";
        temp = temp-> next;
    }
}

int main(){

    Node* node1 = new Node(12);
   Node* head = node1;
   Node* tail = node1;
insertatposition(tail , head , 2 , 23);
   print(head );
   

    return 0;

}