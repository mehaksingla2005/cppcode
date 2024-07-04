class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       // Your code here
       Node* temp=new Node(x);
       temp->next=head;
       head=temp;
       return head;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       // Your code here
       if(head == NULL)return new Node(x);
       Node* temp=head;
       while(temp){
           if(temp->next==NULL){
               temp->next=new Node(x);
               break;
           }
           temp=temp->next;
           
       }return head;
    }
}
