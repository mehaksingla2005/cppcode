// insertion at the end and insertion at position
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
}};
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

void insertAtPosition(Node* &tail,Node* &head,int position,int d){
    //insert at start
    if(position==1){
        insertAtHead(head,d);
    }else{
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
        //insert at end
        if(temp->next==NULL){
            insertAtTail(tail,d);
            return;
        }
    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
}}

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
        insertAtPosition(tail,head,3,8);
        print(head);
        insertAtPosition(tail,head,1,8);
        print(head);
        
        
    return 0;
}
