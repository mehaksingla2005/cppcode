class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> sumofsubarrays;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                sumofsubarrays.push_back(sum);
            }
        }
        sort(sumofsubarrays.begin(),sumofsubarrays.end());
        int ans=0;
        for(int i=left;i<=right;i++){
            ans+=sumofsubarrays[i-1];
        }
        return ans;
    }
};
