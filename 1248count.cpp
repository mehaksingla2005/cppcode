class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        queue<int> oddIndices;
        int lastPopped=-1;
        int initialGap=0;
        int subArrays=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==1)oddIndices.push(i);
            if(oddIndices.size()>k){
                lastPopped=oddIndices.front();
                oddIndices.pop();
            }if(oddIndices.size()==k){
                int initialGap=oddIndices.front()-lastPopped;
                subArrays+=initialGap;
            }
        }return subArrays;
    }
};
