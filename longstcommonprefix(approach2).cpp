//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
        // your code here
       
       if(arr.empty())return "-1";
       int min = arr[0].length();
        for (int i=1; i<arr.size(); i++){
            if (arr[i].length() < min) min = arr[i].length();
        }
        string common;
        
        for(int i=0;i<min;i++){
            
            for(int j=0;j<arr.size()-1;j++){
                if(arr[j][i]!=arr[j+1][i]){
                    if(common.empty())return "-1";
                    return common;
                }
            }
            common.push_back(arr[0][i]);
        }
        if(common.empty())return "-1";
        return common;
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
