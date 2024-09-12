/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL){
            return NULL;
        }
        int cnt=0;
        ListNode* temp=head;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        if(cnt==n){
            ListNode* newHead=head->next;
           delete (head);
            return newHead;
        }
        int k=cnt-n;
        temp=head;
        while(k){
            k--;
            if(k==0)break;
            temp=temp->next;
        }
        ListNode* delNode=temp->next;
        
        temp->next=temp->next->next;
        delete (delNode);
        return head;
    }
};

//Optimal
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode* fast=head;
       for(int i=0;i<n;i++){
        fast=fast->next;
       } 
       ListNode* slow=head;
       if(fast==NULL)return head->next;
       while(fast->next!=NULL){
        slow=slow->next;
        fast=fast->next;
       }
       ListNode* delNode=slow->next;
       slow->next=slow->next->next;
       delete(delNode);
       return head;
    }
};
