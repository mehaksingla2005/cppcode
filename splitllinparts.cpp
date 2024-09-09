# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->

# Approach
<!-- Describe your approach to solving the problem. -->

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code
```cpp []
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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        // Count the total number of nodes
        ListNode* temp = head;
        int cnt = 0;
        while (temp) {
            cnt++;
            temp = temp->next;
        }

        // Determine the base size of each part and how many parts will have an extra node
        int n = cnt / k;
        int l = cnt % k;
        
        vector<ListNode*> ans(k, nullptr);
        temp = head;

        // Split the list into parts
        for (int i = 0; i < k && temp; i++) {
            ans[i] = temp;
            int currentPartSize = n + (l > 0 ? 1 : 0); // Increase size for first 'l' parts
            l--;

            // Traverse the current part to its end
            for (int j = 1; j < currentPartSize; j++) {
                temp = temp->next;
            }

            // Disconnect the current part from the rest of the list
            ListNode* nextPart = temp->next;
            temp->next = nullptr;
            temp = nextPart;
        }

        return ans;
    }
};

```
