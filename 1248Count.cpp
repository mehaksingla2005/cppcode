class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int subarrays=0;
        int start=0;
        int initialGap=0;
        int qsize=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==1)qsize++;
            if(qsize==k){
                initialGap=0;
                while(qsize==k){
                    qsize-=nums[start]%2;
                    start++;
                    initialGap++;
                }
                
            }subarrays+=initialGap;
        }return subarrays;
    }
};
