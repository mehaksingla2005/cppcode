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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans=new ListNode(0);
        ListNode* temp=ans;
        int value;
        int carr=0;
        while(l1!=NULL || l2!=NULL){
            value=carr;
            if(l1!=NULL)value+=l1->val ;
            if(l2!=NULL)value+=l2->val;
            
                carr=value/10;
                
            temp->next=new ListNode(value%10);
            temp=temp->next;
            if(l1!=NULL)l1=l1->next;
            if(l2!=NULL)l2=l2->next;

           
        }
        if(carr==1){
           temp->next=new ListNode(carr);
            temp=temp->next; 
        }
        return ans->next;
    }
};
