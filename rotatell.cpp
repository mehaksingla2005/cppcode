class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        // Edge case: empty list or no rotation needed
        if (head == NULL || k == 0) return head;

        // Find the length of the list and the tail node
        ListNode* tail = head;
        int length = 1;
        while (tail->next != NULL) {
            tail = tail->next;
            length++;
        }

        // Update k to be within the bounds of the list length
        k = k % length;
        if (k == 0) return head;

        // Find the new tail, which is (length - k) positions from the start
        ListNode* newTail = head;
        for (int i = 1; i < length - k; i++) {
            newTail = newTail->next;
        }

        // Determine the new head and break the circular link
        ListNode* newHead = newTail->next;
        tail->next = head;
        newTail->next = NULL;

        return newHead;
    }
};
