struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;

  Node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }

};
*/

class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        // Your code here
        if(head==NULL )return NULL;
        
        Node* temp=head;
        int cnt=1;
        while(temp->next!=NULL){
            if(cnt==x)break;
            cnt++;
            temp=temp->next;
        }
        Node* first=temp->prev;
        Node* last=temp->next;
        if(first==NULL && last==NULL){
            return NULL;
        }else if(first==NULL ){
           head=last;
           temp->next=nullptr;
           head->prev=nullptr;
           free(temp);
           return head;
            
        }else if(last==NULL){
            
           first->next=nullptr;
            temp->prev=nullptr;
            free(temp);
            return head;
        }else{
            first->next=last;
            last->prev=first;
            temp->prev=nullptr;
            temp->next=nullptr;
            free(temp);
            return head;
            
        }
        return head;
    }
