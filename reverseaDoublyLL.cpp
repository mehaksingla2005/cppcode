class Solution
{
    public:
    Node* reverseDLL(Node * head)
    {
        //Your code here
        if(head==NULL || head->next==NULL)return head;
        Node* temp=head;
        Node*last=NULL;
        while(temp!=NULL){
            last=temp->prev;
            temp->prev=temp->next;
            temp->next=last;
            head=temp;
            temp=temp->prev;
        }return head;
    }
};
