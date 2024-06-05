//brute approach
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int num;
        int cnt;
        for(int i=0;i<nums.size();i++){
           num=nums[i];
              cnt=0;
             for(int j=0;j<nums.size();j++){
                if(nums[j]==num){
                    cnt++;
                }
             }
             if(cnt==1){
                break;
             }
        }return num;
    }
};
