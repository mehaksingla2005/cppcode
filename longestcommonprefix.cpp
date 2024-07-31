//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  private:
    void commonprefix(string str1,string& common){
          int j=0;
            while(j<min(str1.size(),common.size())){
                if(str1[j]!=common[j]){
                    common=common.substr(0,j);
                    break;
                }
                    j++;
            }
            common = common.substr(0, min(str1.size(), common.size()));
            return;
    }
  public:

    string longestCommonPrefix(vector<string> arr) {
        // your code here
        if(arr.empty())return "";
        string common=arr[0];
        for(int i=1;i<arr.size();i++){
            commonprefix(arr[i],common);
            if(common.empty())return "-1";
        }return common;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.longestCommonPrefix(arr) << endl;
    }
}

// } Driver Code Ends
