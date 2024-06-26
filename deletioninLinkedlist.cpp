// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;}
        
        //destructor
        ~Node(){
            int value=this->data;
            //memory free
            if(this->next != NULL){
                delete next;
                this->next=NULL;
            }
            cout<<"memory is free for node with data"<<value<<endl;
        }
};
//
void insertAtHead(Node* &head,int d){
    //new node create
    Node* temp = new Node(d);
    temp->next=head;
    head=temp;
}
void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next=temp;
    tail=temp;
}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
     cout<<temp->data<<" ";
     temp=temp->next  ; 
    }
    cout<<endl;
    
}

void insertAtPosition(Node* &head,int position,int d){
    if(position==1){
        insertAtHead(head,d);
    }else{
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
}}
void deleteNode(int position,Node* &head){
    //deleting first or start node
    if(position==1){
        Node* temp=head;
        head=head->next;
        //memory release
        temp->next=NULL;
        delete temp;
    }else{
        //deleting any middle or end node
        Node* curr=head;
        Node* prev=NULL;
        
        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

int main() {
    //create a new node
    Node* node1= new Node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;
    
    //head pointed to node1
    Node* head =node1;
    Node* tail=node1;
    print(head);
    insertAtHead(head,15);
        print(head);
        insertAtTail(tail,12);
        print(head);
        insertAtPosition(head,3,8);
        print(head);
        insertAtPosition(head,1,8);
        print(head);
        
        deleteNode(3,head);
        print(head);
        
        
    return 0;
}
