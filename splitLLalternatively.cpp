


class Solution {
  public:
    // Function to split a linked list into two lists alternately
    vector<Node*> alternatingSplitList(struct Node* head) {
        // Your code here
        Node *a=head;
        Node *b=head->next;
        Node *curr=head;
        while(curr!=NULL && curr->next!=NULL){
            Node *temp=curr->next;
            curr->next=curr->next->next;
            if(curr->next){
                temp->next=curr->next->next;
            }
            curr=curr->next;
        }
        return {a,b};
    }
};


