class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxval=0;
        int result=0;
        int streak=0;
        for(int num:nums){
            if(num>maxval){
                maxval=num;
                result=0;
                streak=0;
            }
            if(maxval==num){
                streak++;
            }else{
                streak=0;
            }
            result=max(result,streak);
        }
        return result;
    }
};
