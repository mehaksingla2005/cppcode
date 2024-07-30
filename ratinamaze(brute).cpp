//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  private:
   void solve(int i,int j,vector<vector<int>> &mat,vector<vector<int>> &vis,vector<string>& ans,string move){
       if(i==mat.size()-1 && j==mat.size()-1){
           ans.push_back(move);
           return;
       }
       if(i+1<mat.size() && vis[i+1][j]!=1 &&mat[i+1][j]==1){
         vis[i][j]=1;
         solve(i+1,j,mat,vis,ans,move+'D');
         vis[i][j]=0;
       }
        if(j-1>=0 && vis[i][j-1]!=1 &&mat[i][j-1]==1){
         vis[i][j]=1;
         solve(i,j-1,mat,vis,ans,move+'L');
         vis[i][j]=0;
       }
        if(j+1<mat.size() && vis[i][j+1]!=1 &&mat[i][j+1]==1){
         vis[i][j]=1;
         solve(i,j+1,mat,vis,ans,move+'R');
         vis[i][j]=0;
       }
        if(i-1>=0 && vis[i+1][j]!=1 &&mat[i+1][j]==1){
         vis[i][j]=1;
         solve(i+1,j,mat,vis,ans,move+'U');
         vis[i][j]=0;
       }
   }
  public:
    vector<string> findPath(vector<vector<int>> &mat) {
        // Your code goes here
        vector<string> ans;
        vector<vector<int>> vis(mat.size(),vector<int>(mat.size(),0));
        if(mat[0][0]==1)solve(0,0,mat,vis,ans," ");
        return ans;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
