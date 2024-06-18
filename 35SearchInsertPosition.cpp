class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        int ans = nums.size(); // Default to inserting at the end if target is larger than all elements

        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                l = mid + 1;
            } else {
                ans = mid; // Update ans to current mid position
                r = mid - 1;
            }
        }

        return ans;
    }
};
