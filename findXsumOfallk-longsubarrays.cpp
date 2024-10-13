class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n=nums.size();
        unordered_map<int,int> freq;
        vector<int> ans(n-k+1,0);
        for(int i=0;i<k;i++){
            freq[nums[i]]++;
        }
        auto calXsum=[&](unordered_map<int,int>&freq){
            vector<pair<int,int>> freqmap(freq.begin(),freq.end());
            sort(freqmap.begin(),freqmap.end(),[](const pair<int,int>&a,const pair<int,int>&b){
                if(a.second==b.second){
                    return a.first>b.first;
                }
                return a.second>b.second;
            });
            int sum=0;
            int count=0;
            for(const auto&p:freqmap){
                sum+=p.first*p.second;
                count++;
                if(count==x)break;
            }
            return sum;
        };
        
        ans[0]=calXsum(freq);
        for(int i=1;i<=n-k;i++){
            freq[nums[i-1]]--;
            if(freq[nums[i-1]]==0){
                freq.erase(nums[i-1]);
            }
            freq[nums[i+k-1]]++;
            ans[i]=calXsum(freq);
        }
        return ans;
        
    }
};
