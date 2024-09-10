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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==NULL || head->next==NULL)return head;
        ListNode* temp=head;
        while(temp!=NULL && temp->next!=NULL){
            ListNode* temp2=temp;
            int a=temp->val;
            int b=temp->next->val;
            int value=__gcd(a,b);
            temp=temp->next;
            temp2->next=new ListNode(value);
            temp2->next->next=temp;

        }
        return head;
    }
};
