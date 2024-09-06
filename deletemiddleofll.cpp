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
    ListNode* deleteMiddle(ListNode* head) {
        // if(head==NULL || head->next==NULL)return NULL;
        // ListNode* slow=head;
        // ListNode* fast=head;
        // fast=head->next->next;        
        // while(fast!=NULL && fast->next!=NULL){
        //     slow=slow->next;
        //     fast=fast->next->next;
        // }
        // slow->next=slow->next->next;
        // return head;

        if(head==NULL || head->next==NULL)return NULL;
        ListNode* temp=head;
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        int res=cnt/2;
        temp=head;
        while(temp!=NULL){
            res--;
            if(res==0){
                ListNode* middle=temp->next;
                temp->next=temp->next->next;
                
                break;
            }
            temp=temp->next;
        }
        return head;
       
    }
};
