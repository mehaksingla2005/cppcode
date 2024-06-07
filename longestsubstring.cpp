//time complexity is O(nlogn)
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen = 0;
        int n = s.size();
        map<char, int> mpp;  // Use char as the key type
        int left = 0;
        int right = 0;

        while (right < n) {
            if (mpp.find(s[right]) == mpp.end() || mpp[s[right]] < left) {
                // Either the character is not in the map or it's not in the current window
                mpp[s[right]] = right;  // Update the character's position
                int len = right - left + 1;
                maxlen = max(len, maxlen);
                right++;
            } else {
                // Character is in the current window, move the left pointer
                left = mpp[s[right]] + 1;  // Move left pointer to the right of the duplicate character
                mpp[s[right]] = right;  // Update the character's position
                right++;
            }
        }

        return maxlen;
    }
};
