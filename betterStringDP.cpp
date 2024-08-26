//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  private:
    int countSub(string s){
        int n=s.size();
        vector<int> dp(n+1,0);
        dp[0]=1;
        vector<int> last(26,-1);
        for(int i=1;i<=n;i++){
            dp[i]=2*dp[i-1];
            if(last[s[i-1]-97]!=-1){
                dp[i]=dp[i]-dp[last[s[i-1]-97]];
            }
            last[s[i-1]-97]=i-1;
            }
            return dp[n];
    }
  public:
    string betterString(string str1, string str2) {
        // code here
        int a=countSub(str1);
        int b=countSub(str2);
        if(a>=b)return str1;
        return str2;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str1, str2;
        cin >> str1 >> str2;
        Solution obj;
        string ans = obj.betterString(str1, str2);
        cout << ans << "\n";
    }
}

// } Driver Code Ends
