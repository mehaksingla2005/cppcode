class Solution {
private:
    int climbstairsfun(int n,vector<int> &dp){
        if(n==0)return 1;
        if (n==1)return 1;
        if(dp[n]!=-1)return dp[n];
        int left=climbstairsfun(n-1,dp);
        int right=climbstairsfun(n-2,dp);
        return dp[n]=left+right;
            }
public:
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return climbstairsfun(n,dp);
    }
};
