

class Solution {
  private:
    Node* reverse(Node* head){
        if(head==NULL || head->next==NULL)return head;
        Node* newHead=reverse(head->next);
        Node* front=head->next;
        front->next=head;
        head->next=NULL;
        return newHead;
    }
  public:
    Node* addOne(Node* head) {
        // Your Code here
        // return head of list after adding one
        head=reverse(head);
        Node* temp=head;
        int carry=1;
        while(temp!=NULL){
            temp->data=temp->data+carry;
            if(temp->data<10){
                carry=0;
                break;
            }
            else{
                temp->data=0;
                carry=1;
            }
            temp=temp->next;
        }
        if(carry==1){
            Node* newNode=new Node(1);
            head=reverse(head);
            newNode->next=head;
            return newNode;
        }
        head=reverse(head);
        return head;
    }
};



//optimal



class Solution {
  private:
    int helper(Node* temp){
        if(temp==NULL)return 1;
        int carry=helper(temp->next);
        temp->data=temp->data+carry;
        if(temp->data<10)return 0;
        temp->data=0;
        return 1;
        
    }
  public:
    Node* addOne(Node* head) {
        // Your Code here
        // return head of list after adding one
        int carry=helper(head);
        if(carry==1){
            Node* newNode=new Node(1);
            newNode->next=head;
            return newNode;
        }
        return head;
    }
};

