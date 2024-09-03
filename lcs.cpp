LCS using top-down approach


class Solution {
private:
    // Recursive function to find LCS with memoization
    int lcs(string &s1, string &s2, int i, int j, vector<vector<int>> &dp) {
        // Base case: if any string is exhausted, LCS is 0
        if (i < 0 || j < 0) return 0;
        
        // Check if LCS for this subproblem is already computed
        if (dp[i][j] != -1) return dp[i][j];
        
        // If characters match, increment LCS count and move to the previous characters
        if (s1[i] == s2[j]) 
            return dp[i][j] = 1 + lcs(s1, s2, i - 1, j - 1, dp);
        
        // If characters do not match, find the maximum LCS by excluding one character at a time
        return dp[i][j] = max(lcs(s1, s2, i - 1, j, dp), lcs(s1, s2, i, j - 1, dp));
    }

public:
    // Function to calculate the LCS of two strings
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size();
        int n = text2.size();
        
        // Initialize dp table with -1 indicating uncomputed results
        vector<vector<int>> dp(m, vector<int>(n, -1));
        
        // Call the recursive helper function starting from the last indices of both strings
        return lcs(text1, text2, m - 1, n - 1, dp);
    }
};


LCS using bottom-up approach


class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.length();
        int n=text2.length();
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        for(int i=0;i<=m;i++)dp[i][0]=0;
        for(int i=0;i<=n;i++)dp[0][i]=0;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(text1[i-1]==text2[j-1]){
                    dp[i][j]= 1+dp[i-1][j-1];
                }
                else {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[m][n];
    }
};



LCS using space-optimised approach
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.length();
        int m=text2.length();
        vector<int> prev(m+1,0),cur(m+1,0);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(text1[i-1]==text2[j-1]){
                    cur[j]=1+prev[j-1];
                }
                else {
                    cur[j]=max(prev[j],cur[j-1]);
                }
                
            }
            prev=cur;
        }
        return prev[m];
    }
};
