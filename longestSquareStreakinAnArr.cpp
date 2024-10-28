class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        unordered_map<int,int>mp;
        sort(nums.begin(),nums.end());
        int maxStreak=0;
        for(int &num:nums){
            int root=(int)sqrt(num);
            if(root*root==num && mp.find(root)!=mp.end()){
                mp[num]=mp[root]+1;
            }else{
                mp[num]=1;
            }
            maxStreak=max(maxStreak,mp[num]);
        }
        return maxStreak<2?-1:maxStreak;
    }
};





//APPROACH2

class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        int maxStreak=0;
        for(int &num:nums){
            int streak=0;
            long long curr=num;
            while(st.find(curr)!=st.end()){
                streak++;
                if(curr*curr>1e5)break;
                curr=curr*curr;
            }
            maxStreak=max(maxStreak,streak);
        }
        return maxStreak<2?-1:maxStreak;
    }
};
