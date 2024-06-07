//timecomplexity is O(n)
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int hash[256] = {0}; // Hash array to store the last occurrence index of characters
        int n = s.size();
        int l = 0; // Left pointer
        int r = 0; // Right pointer
        int maxlen = 0; // To keep track of the maximum length of substring without repeating characters
        
        while (r < n) {
            if (hash[s[r]] != -1) { // Check if the character has been seen before
                if (hash[s[r]] >= l) { // Ensure that the character's last occurrence is within the current window
                    l = hash[s[r]] + 1; // Move the left pointer to the right of the last occurrence of the current character
                }
            }
            int len = r - l + 1; // Calculate the current length of the substring
            maxlen = max(len, maxlen); // Update the maximum length
            hash[s[r]] = r; // Update the last occurrence index of the current character
            r++; // Move the right pointer to the next character
        }
        
        return maxlen;
    }
};
