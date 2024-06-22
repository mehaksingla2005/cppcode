class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]%2;
        }

        int presum=0;
        int cnt=0;
        unordered_map <int,int> mpp;
        mpp[0]=1;
        for(int i=0;i<nums.size();i++){
            presum+=nums[i];
            int need=presum-k;
            if(mpp.find(need)!=mpp.end()){
                cnt+=mpp[need];
            }
            mpp[presum]++;
        }return cnt;
    }
};
