
/* a Node of the doubly linked list 
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

//Function to insert a new node at given position in doubly linked list.
void addNode(Node *head, int pos, int data)
{
   // Your code here
   if(head==NULL){
       head=new Node(data);
   }
   int cnt=0;
   Node* temp=head;
   while(temp->next!=NULL){
       if(cnt==pos){
           break;
       }
       temp=temp->next;
       cnt++;
   }
    Node* create=new Node(data);
   if(temp->next==NULL){
      
   create->prev=temp;
   temp->next=create;
   }
   else {
       create->next=temp->next;
       create->prev=temp;
       temp->next->prev=create;
       temp->next=create;
   }
   
   
}
