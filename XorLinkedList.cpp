



/*
Structure of linked list is as
struct Node
{
    int data;
    struct Node* npx;

    Node(int x){
        data = x;
        npx = NULL;
    }
};




struct Node *insert(struct Node *head, int data) {
    // Code here
    Node* newNode=new Node(data);
    newNode->npx=XOR(nullptr,head);
    if(head!=nullptr){
       head->npx=XOR(newNode,head->npx);
       head=newNode;
       return head;
    }
}

vector<int> getList(struct Node *head) {
    // Code here
    Node* curr=head;
    Node* prev=nullptr;
    Node* next;
    vector<int> ans;
    while(curr){
        ans.push_back(curr->data);
        next=XOR(prev,curr->npx);
        prev=curr;
        curr=next;
    }
    return ans;
}
