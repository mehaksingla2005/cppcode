// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insertAthead(Node* &head,int val){
    Node*temp=new Node(val);
   temp->next=head;
   head=temp;
}
void insertAtback(Node* &tail,int val){
    Node* temp=new Node(val);
    tail->next=temp;
    tail=temp;
}
void insertAtPosition(Node* &head,int position,int val){
    Node* temp=new Node(val);
    int k=1;
    Node* curr=head;
    Node* prev=NULL;
    if(position==1){
        insertAthead(head,val);
    }
    
   else{
        while(k<position){
        prev=curr;
        curr=curr->next;
        k++;
    }prev->next=temp;
    temp->next=curr;
   }
}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void reverse1(Node* &head,Node* curr,Node* prev){
    //base case
    if(curr==NULL){
        head=prev;
        return;
    }
    Node* forward=curr->next;
    reverse1(head,forward,curr);
    curr->next=prev;
}
Node* reverse(Node* head){
    Node* curr=head;
    Node* prev=NULL;
    reverse1(head,curr,prev);
    return head;
   
}


int main() {
    Node* Node1=new Node(10);
    Node* head=Node1;
    Node* tail=Node1;
    insertAthead(head,9);
    insertAthead(head,8);
    insertAthead(head,6);
    insertAthead(head,5);
    print(head);
    insertAtback(tail,11);
    print(head);
    insertAtPosition(head,3,7);
    print(head);

    head=reverse(head);
    print(head);
    return 0;
}
