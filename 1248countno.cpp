class Solution {
public:
int atMost(vector<int>& nums, int k){
     int subarray=0;
        int windowsize=0;
        int start=0;
        for(int i=0;i<nums.size();i++){
            windowsize+=nums[i]%2;
            while(windowsize>k){
                windowsize-=nums[start]%2;
                start++;
            }
            subarray+=(i-start+1);
        }return subarray;
}
    int numberOfSubarrays(vector<int>& nums, int k) {
       return atMost(nums,k)-atMost(nums,k-1);
        
    }
};
