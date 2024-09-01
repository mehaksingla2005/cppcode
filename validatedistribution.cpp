//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    bool wecanget(int sum,vector<int> &sweetness){
        vector<bool> dp(sum+1,false);
        dp[0]=true;
        for(int num:sweetness){
            for(int j=sum;j>=num;j--){
                if(dp[j-num])dp[j]=true;
            }
        }
        return dp[sum];
        
    }
    int isValid(int n, vector<int> &sweetness) {
        // code here
        int sum=0;
        for(int i=0;i<sweetness.size();i++){
            sum+=sweetness[i];
        }
        if(sum%3==0){
            if(wecanget(sum/3,sweetness))return 1;
        }
        return 0;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        vector<int> sweetness(n);
        Array::input(sweetness, n);

        Solution obj;
        int res = obj.isValid(n, sweetness);

        cout << res << endl;
    }
}

// } Driver Code Ends
