class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
       int i=0;
       int j=i+1;
       int n=nums.size();
        int sum=nums[i];
       while(i<n && j>=i+1 && j<n){
       
        
            sum+=nums[j];
            if(sum%k==0 &&j-i+1>=2){
                return true;
            }else{
                if(j==n-1){
                    i=i+1;
                    j=i+1;
                    sum=nums[i];
                }else{
                    j++;
                }
            }
       
       } return false;
    }
};
