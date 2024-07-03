class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int l=0;
        int prefixZeros=0;
        int sum=0;
        int totalCount=0;
        for(int r=0;r<nums.size();r++){
            sum+=nums[r];
            while(l<r &&(sum>goal || nums[l]==0)){
                if(nums[l]==1){
                    prefixZeros=0;
                }else{
                    prefixZeros+=1;
                }
                sum-=nums[l++];
            }
            if(sum==goal){
                totalCount+= 1+prefixZeros;
            }
        }
        return totalCount;
    }
};
