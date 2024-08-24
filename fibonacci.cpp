//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  
  private:
    long long int fib(int n,vector<long long int> &dp,long long MOD){
        if(n<=1)return n;
        if(dp[n]!=-1)return dp[n];
        return dp[n]=(fib(n-1,dp,MOD)+fib(n-2,dp,MOD))%MOD;
    }
  public:
 
    long long int topDown(int n) {
        // code here
         long long MOD = 1000000007;
        vector<long long int> dp(n+1,-1);
        return fib(n,dp,MOD);
        
    }
    long long int bottomUp(int n) {
        // code here
        vector<long long int> dp(n+1);
         long long MOD = 1000000007;
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=(dp[i-1]+dp[i-2])%MOD;
        }
       
        return dp[n];
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;
        long long int topDownans = obj.topDown(n);
        long long int bottomUpans = obj.bottomUp(n);
        if (topDownans != bottomUpans) cout << -1 << "\n";
        cout << topDownans << "\n";
    }
}
// } Driver Code Ends
