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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> numset(nums.begin(),nums.end());
        ListNode* temp=head;
        ListNode* prev=NULL;
        while(temp){
            if(numset.find(temp->val)!=numset.end()){
                if(temp==head){
                    head=head->next;
                    temp=head;
                }
                else{
                    prev->next=temp->next;
                    temp=temp->next;
                }
            }
            else{
                prev=temp;
                temp=temp->next;
            }
            
        }
        return head;
    }
};
