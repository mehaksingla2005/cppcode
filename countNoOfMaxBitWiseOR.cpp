class Solution {
public:
    int countSubsets(int idx,int currOR,vector<int>& nums,int maxOR){
        if(idx==nums.size()){
            if(currOR==maxOR)return 1;
            return 0;
        }
        int takecount=countSubsets(idx+1,currOR|nums[idx],nums,maxOR);
        int nottakecount=countSubsets(idx+1,currOR,nums,maxOR);
        return takecount+nottakecount;
    }
    int countMaxOrSubsets(vector<int>& nums) {
        int maxOR=0;
        for(int &num:nums){
            maxOR|=num;
        }
        return countSubsets(0,0,nums,maxOR);
    }
};
