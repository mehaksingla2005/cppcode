class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while(k--){
            auto min_it=min_element(nums.begin(),nums.end());
            int mini=distance(nums.begin(),min_it);
            nums[mini]=nums[mini]*multiplier;
            
        }
        return nums;
    }
};
