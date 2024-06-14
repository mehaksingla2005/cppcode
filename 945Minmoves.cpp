#include <vector>
#include <algorithm>
#include <map>
using namespace std;

class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        if (nums.empty()) return 0;

        int maxi = *max_element(nums.begin(), nums.end());
        vector<int> nums2(maxi + nums.size(), 0);  // Ensure sufficient size for all increments

        for (int num : nums) {
            nums2[num]++;
        }

        int moves = 0;
        for (int i = 0; i < nums2.size(); ++i) {
            if (nums2[i] > 1) {
                int excess = nums2[i] - 1;
                nums2[i] = 1;
                nums2[i + 1] += excess;
                moves += excess;
            }
        }

        return moves;
    }
};
