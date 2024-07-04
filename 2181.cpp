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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp=head->next;
        ListNode* newNode=new ListNode(0);
        ListNode*head1=newNode;
        while(temp!=nullptr){
            
            int sum=0;
             
           while(temp!=nullptr && temp->val!=0){
               
                sum+=temp->val;
                 temp=temp->next;
           }
            newNode->next=new ListNode(sum);
            newNode=newNode->next;
            if(temp!=nullptr){
                temp=temp->next;
            }
        }
        return head1->next;
    }
};
