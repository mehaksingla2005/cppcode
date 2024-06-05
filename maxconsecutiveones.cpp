class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curcnt=0;
        int maxcnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                curcnt++;
            }
            else{
                if(curcnt>maxcnt){
                    maxcnt=curcnt;
                
                }
                curcnt=0;
            }
        }  if(curcnt>maxcnt){
                    maxcnt=curcnt;
                
                }
        return maxcnt;
    }
};
