#include<iostream>

using namespace std;

class Node{
    public:
    int data ;
    Node* next;
    // constructor for creating nodes 
    Node(int data){
        this -> data = data ;
        this -> next = NULL;
    }
 // distructor for deleting or memory free of Node
    ~Node(){
        // int value = this -> next;
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout <<"deleted"<<this -> data;

    }

};


                    // inserting at HEAD

void insert(Node* &head , int data ){
    Node* temp = new Node(data );
     temp -> next = head;
     head  = temp ;
}


                    // inserting at TAIL

void insertAtTail(Node* & tail , int data ){
      Node* temp = new Node(data );
      tail -> next = temp;
      tail  = temp;
} 



                             // inserting at position
  void insertatposition(Node* &tail  ,Node* &head ,int pos , int d){
    // inserting at first or head
    if(pos == 1){
        insert(head , d);
        return ;
    }
             Node* temp = head ;
          int cnt = 1;
               while(cnt <= pos -1){
                 temp = temp -> next ;
                    cnt++;
                }  

//inserting at tail or last 
                if(temp -> next = NULL){
                    insertAtTail(tail , d);
                    return ;

                }

             Node* node = new Node(d);
                node -> next = temp -> next;
            temp -> next = node;


            }

            // deleting Nodes in Linkedlist 

      void deleteNode(int pos , Node* &head)   {
        if(pos == 1){
            //deleting first node or head 
            Node* temp = head;
            head = head -> next;
            //memory free
            temp -> next = NULL;
            delete temp;


        }
        else{
            //deleting middle or last nodes
            Node* curr = head;
            Node* prev = NULL;
            int cnt = 1;
            while(cnt < pos){
                prev = curr;
                curr = curr ->next;
                cnt++;
            }
            prev -> next = curr -> next;
            curr -> next = NULL;
            delete curr;

        }




      }   
    


                           // printing  the Linked List 

 void print(Node* &head) {
    Node* temp = head ;
    while( temp != NULL){
        cout<< temp -> data << " ";
        temp = temp -> next ;
    }
 }                         


int main(){
    int d , n ;
    cout<< "how many elment :"<<endl;
    cin>>n;

  
    Node* node1 = new Node(120 );
    Node* head = node1;
    Node* tail = node1;
      cout<<"enter data ";
   for(int i =0 ;i<=n;i++){
     cin>> d;
     
    insert(head , d);
     }
      print(head);
     cout<<endl;

//     for(int i =0 ;i<=n;i++){
//      cin>> d;
     
//     insertAtTail(tail , d);
//      }

   
//     print(head);
// int p, data ;
//     cout<<"element to position and insert " <<endl;
//     cin>> p>>data;
//     insertatposition(tail ,head ,p , data );
//      print(head);
int pos ;
cout <<"enter position of deleting node"<<endl;
cin>>pos;
deleteNode(pos , head);
  print(head);

return 0;
}