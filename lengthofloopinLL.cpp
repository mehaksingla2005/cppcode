
class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        // Code here
        unordered_map<Node*,int> visitedNodes;
        Node* temp=head;
        int timer=0;
        while(temp!=NULL){
            if(visitedNodes.find(temp)!=visitedNodes.end()){
                return timer-visitedNodes[temp];
            }
            visitedNodes[temp]=timer;
            timer++;
            temp=temp->next;
        }
        return 0;
    }
};




//2nd and better approach




class Solution {
  private:
    int findLenght(Node* slow,Node* fast){
        int cnt=1;
        fast=fast->next;
        while(slow!=fast){
            cnt++;
            fast=fast->next;
        }
        return cnt;
    }
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        // Code here
        Node* slow=head;
        Node* fast=head;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                return findLenght(slow,fast);
            }
        }
        return 0;
    }
};


