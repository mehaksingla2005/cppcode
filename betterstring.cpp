//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  private:
    void generateString(string str,unordered_set<string> &ans,string substr,int ind){
        if(ind==str.size()){
            if(substr.empty())return;
            ans.insert(substr);
            return;
        }
        substr.push_back(str[ind]);
        generateString(str,ans,substr,ind+1);
        substr.pop_back();
        generateString(str,ans,substr,ind+1);
    }
  public:
    string betterString(string str1, string str2) {
        // code here
        string substr;
        unordered_set<string> ans1;
        unordered_set<string> ans2;
        generateString(str1,ans1,substr,0);
        generateString(str2,ans2,substr,0);
        if(ans1.size()>ans2.size())return str1;
        else if(ans1.size()<ans2.size())return str2;
        return str1;
        
        
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
