class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        map<int,int>mpp;
        mpp[0]=-1;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int rem=sum%k;
            if(rem<0){
                rem+=k;
            }
            if(mpp.find(rem)!=mpp.end()){
                if((i-mpp[rem])>1){
                    return true;
                }
            }
            else{
                mpp[rem]=i;
            }
        }
        return false;
    }
};
